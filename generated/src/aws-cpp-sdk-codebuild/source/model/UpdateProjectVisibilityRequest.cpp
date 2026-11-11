/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/UpdateProjectVisibilityRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateProjectVisibilityRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_projectArnHasBeenSet) {
    mapSize++;
  }
  if (m_projectVisibilityHasBeenSet) {
    mapSize++;
  }
  if (m_resourceAccessRoleHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_projectArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("projectArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_projectArn.c_str()));
  }

  if (m_projectVisibilityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("projectVisibility"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ProjectVisibilityTypeMapper::GetNameForProjectVisibilityType(m_projectVisibility).c_str()));
  }

  if (m_resourceAccessRoleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("resourceAccessRole"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceAccessRole.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateProjectVisibilityRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
