/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/HttpPayloadTraitsResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

HttpPayloadTraitsResult::HttpPayloadTraitsResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) { *this = std::move(result); }

HttpPayloadTraitsResult& HttpPayloadTraitsResult::operator=(Aws::AmazonWebServiceResult<ResponseStream>&& result) {
  m_HttpResponseCode = result.GetResponseCode();
  m_blob = result.TakeOwnershipOfPayload();
  m_blobHasBeenSet = true;
  // TODO: header-bound member deserialization
  return *this;
}
