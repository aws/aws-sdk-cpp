/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/license-manager/model/ListLicenseAssetGroupsResult.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLicenseAssetGroupsResult::ListLicenseAssetGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListLicenseAssetGroupsResult& ListLicenseAssetGroupsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("LicenseAssetGroups")) {
    Aws::Utils::Array<JsonView> licenseAssetGroupsJsonList = jsonValue.GetArray("LicenseAssetGroups");
    for (unsigned licenseAssetGroupsIndex = 0; licenseAssetGroupsIndex < licenseAssetGroupsJsonList.GetLength();
         ++licenseAssetGroupsIndex) {
      m_licenseAssetGroups.push_back(licenseAssetGroupsJsonList[licenseAssetGroupsIndex].AsObject());
    }
    m_licenseAssetGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
