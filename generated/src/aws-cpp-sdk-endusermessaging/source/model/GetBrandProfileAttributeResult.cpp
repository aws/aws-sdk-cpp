/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/endusermessaging/model/GetBrandProfileAttributeResult.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBrandProfileAttributeResult::GetBrandProfileAttributeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetBrandProfileAttributeResult& GetBrandProfileAttributeResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("attributeName")) {
    m_attributeName = jsonValue.GetString("attributeName");
    m_attributeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributeType")) {
    m_attributeType = BrandProfileAttributeTypeMapper::GetBrandProfileAttributeTypeForName(jsonValue.GetString("attributeType"));
    m_attributeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributeValue")) {
    m_attributeValue = jsonValue.GetString("attributeValue");
    m_attributeValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("category")) {
    m_category = jsonValue.GetString("category");
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaContentType")) {
    m_mediaContentType = jsonValue.GetString("mediaContentType");
    m_mediaContentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaSizeBytes")) {
    m_mediaSizeBytes = jsonValue.GetInt64("mediaSizeBytes");
    m_mediaSizeBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaDownloadUrl")) {
    m_mediaDownloadUrl = jsonValue.GetString("mediaDownloadUrl");
    m_mediaDownloadUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
