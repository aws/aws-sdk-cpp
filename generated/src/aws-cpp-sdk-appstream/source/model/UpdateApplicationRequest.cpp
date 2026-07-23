/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UpdateApplicationRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateApplicationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_displayNameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_iconS3LocationHasBeenSet) {
    mapSize++;
  }
  if (m_launchPathHasBeenSet) {
    mapSize++;
  }
  if (m_workingDirectoryHasBeenSet) {
    mapSize++;
  }
  if (m_launchParametersHasBeenSet) {
    mapSize++;
  }
  if (m_appBlockArnHasBeenSet) {
    mapSize++;
  }
  if (m_attributesToDeleteHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_displayNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DisplayName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_displayName.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_iconS3LocationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IconS3Location"));
    m_iconS3Location.CborEncode(encoder);
  }

  if (m_launchPathHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LaunchPath"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_launchPath.c_str()));
  }

  if (m_workingDirectoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkingDirectory"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workingDirectory.c_str()));
  }

  if (m_launchParametersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LaunchParameters"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_launchParameters.c_str()));
  }

  if (m_appBlockArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AppBlockArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_appBlockArn.c_str()));
  }

  if (m_attributesToDeleteHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AttributesToDelete"));
    encoder.WriteArrayStart(m_attributesToDelete.size());
    for (const auto& item_0 : m_attributesToDelete) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(ApplicationAttributeMapper::GetNameForApplicationAttribute(item_0).c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateApplicationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
