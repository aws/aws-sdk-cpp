/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ListApplicationRevisionsRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListApplicationRevisionsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_applicationNameHasBeenSet) {
    mapSize++;
  }
  if (m_sortByHasBeenSet) {
    mapSize++;
  }
  if (m_sortOrderHasBeenSet) {
    mapSize++;
  }
  if (m_s3BucketHasBeenSet) {
    mapSize++;
  }
  if (m_s3KeyPrefixHasBeenSet) {
    mapSize++;
  }
  if (m_deployedHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_applicationNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("applicationName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_applicationName.c_str()));
  }

  if (m_sortByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sortBy"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ApplicationRevisionSortByMapper::GetNameForApplicationRevisionSortBy(m_sortBy).c_str()));
  }

  if (m_sortOrderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sortOrder"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SortOrderMapper::GetNameForSortOrder(m_sortOrder).c_str()));
  }

  if (m_s3BucketHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("s3Bucket"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_s3Bucket.c_str()));
  }

  if (m_s3KeyPrefixHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("s3KeyPrefix"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_s3KeyPrefix.c_str()));
  }

  if (m_deployedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deployed"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ListStateFilterActionMapper::GetNameForListStateFilterAction(m_deployed).c_str()));
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("nextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListApplicationRevisionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
