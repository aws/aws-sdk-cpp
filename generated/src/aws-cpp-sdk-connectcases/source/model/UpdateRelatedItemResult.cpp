/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/UpdateRelatedItemResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateRelatedItemResult::UpdateRelatedItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateRelatedItemResult& UpdateRelatedItemResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("relatedItemId")) {
    m_relatedItemId = jsonValue.GetString("relatedItemId");
    m_relatedItemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("relatedItemArn")) {
    m_relatedItemArn = jsonValue.GetString("relatedItemArn");
    m_relatedItemArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = RelatedItemTypeMapper::GetRelatedItemTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associationTime")) {
    m_associationTime = jsonValue.GetString("associationTime");
    m_associationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedUser")) {
    m_lastUpdatedUser = jsonValue.GetObject("lastUpdatedUser");
    m_lastUpdatedUserHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetObject("createdBy");
    m_createdByHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
