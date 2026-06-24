/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/glue/model/GetAssetResult.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAssetResult::GetAssetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetAssetResult& GetAssetResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssetTypeId")) {
    m_assetTypeId = jsonValue.GetString("AssetTypeId");
    m_assetTypeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GlossaryTerms")) {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("GlossaryTerms");
    for (unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex) {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsString());
    }
    m_glossaryTermsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Forms")) {
    Aws::Map<Aws::String, JsonView> formsJsonMap = jsonValue.GetObject("Forms").GetAllObjects();
    for (auto& formsItem : formsJsonMap) {
      m_forms[formsItem.first] = formsItem.second.AsObject();
    }
    m_formsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Attachments")) {
    Aws::Map<Aws::String, JsonView> attachmentsJsonMap = jsonValue.GetObject("Attachments").GetAllObjects();
    for (auto& attachmentsItem : attachmentsJsonMap) {
      m_attachments[attachmentsItem.first] = attachmentsItem.second.AsObject();
    }
    m_attachmentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IterableForms")) {
    Aws::Map<Aws::String, JsonView> iterableFormsJsonMap = jsonValue.GetObject("IterableForms").GetAllObjects();
    for (auto& iterableFormsItem : iterableFormsJsonMap) {
      m_iterableForms[iterableFormsItem.first] = iterableFormsItem.second.AsObject();
    }
    m_iterableFormsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
