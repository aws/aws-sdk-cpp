/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpStringPayloadResult.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

HttpStringPayloadResult::HttpStringPayloadResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) { *this = std::move(result); }

HttpStringPayloadResult& HttpStringPayloadResult::operator=(Aws::AmazonWebServiceResult<ResponseStream>&& result) {
  m_HttpResponseCode = result.GetResponseCode();
  m_payload = result.TakeOwnershipOfPayload();
  m_payloadHasBeenSet = true;
  // TODO: header-bound member deserialization
  return *this;
}
