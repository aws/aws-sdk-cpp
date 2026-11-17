/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/elementalinference/model/CreateQuestionSetVersionResult.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateQuestionSetVersionResult::CreateQuestionSetVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateQuestionSetVersionResult& CreateQuestionSetVersionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("yesNo")) {
    Aws::Utils::Array<JsonView> yesNoJsonList = jsonValue.GetArray("yesNo");
    for (unsigned yesNoIndex = 0; yesNoIndex < yesNoJsonList.GetLength(); ++yesNoIndex) {
      m_yesNo.push_back(yesNoJsonList[yesNoIndex].AsObject());
    }
    m_yesNoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("yesNoPerOption")) {
    Aws::Utils::Array<JsonView> yesNoPerOptionJsonList = jsonValue.GetArray("yesNoPerOption");
    for (unsigned yesNoPerOptionIndex = 0; yesNoPerOptionIndex < yesNoPerOptionJsonList.GetLength(); ++yesNoPerOptionIndex) {
      m_yesNoPerOption.push_back(yesNoPerOptionJsonList[yesNoPerOptionIndex].AsObject());
    }
    m_yesNoPerOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chooseOne")) {
    Aws::Utils::Array<JsonView> chooseOneJsonList = jsonValue.GetArray("chooseOne");
    for (unsigned chooseOneIndex = 0; chooseOneIndex < chooseOneJsonList.GetLength(); ++chooseOneIndex) {
      m_chooseOne.push_back(chooseOneJsonList[chooseOneIndex].AsObject());
    }
    m_chooseOneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("latestVersion")) {
    m_latestVersion = jsonValue.GetString("latestVersion");
    m_latestVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sha256")) {
    m_sha256 = jsonValue.GetString("sha256");
    m_sha256HasBeenSet = true;
  }
  if (jsonValue.ValueExists("references")) {
    Aws::Utils::Array<JsonView> referencesJsonList = jsonValue.GetArray("references");
    for (unsigned referencesIndex = 0; referencesIndex < referencesJsonList.GetLength(); ++referencesIndex) {
      m_references.push_back(referencesJsonList[referencesIndex].AsString());
    }
    m_referencesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
