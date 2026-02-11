/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/UpdatePackageGroupOriginConfigurationResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePackageGroupOriginConfigurationResult::UpdatePackageGroupOriginConfigurationResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdatePackageGroupOriginConfigurationResult& UpdatePackageGroupOriginConfigurationResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_responseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("packageGroup")) {
    m_packageGroup = jsonValue.GetObject("packageGroup");
    m_packageGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedRepositoryUpdates")) {
    Aws::Map<Aws::String, JsonView> allowedRepositoryUpdatesJsonMap = jsonValue.GetObject("allowedRepositoryUpdates").GetAllObjects();
    for (auto& allowedRepositoryUpdatesItem : allowedRepositoryUpdatesJsonMap) {
      Aws::Map<Aws::String, JsonView> packageGroupAllowedRepositoryUpdate2JsonMap = allowedRepositoryUpdatesItem.second.GetAllObjects();
      Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>> packageGroupAllowedRepositoryUpdate2Map;
      for (auto& packageGroupAllowedRepositoryUpdate2Item : packageGroupAllowedRepositoryUpdate2JsonMap) {
        Aws::Utils::Array<JsonView> repositoryNameList3JsonList = packageGroupAllowedRepositoryUpdate2Item.second.AsArray();
        Aws::Vector<Aws::String> repositoryNameList3List;
        repositoryNameList3List.reserve((size_t)repositoryNameList3JsonList.GetLength());
        for (unsigned repositoryNameList3Index = 0; repositoryNameList3Index < repositoryNameList3JsonList.GetLength();
             ++repositoryNameList3Index) {
          repositoryNameList3List.push_back(repositoryNameList3JsonList[repositoryNameList3Index].AsString());
        }
        packageGroupAllowedRepositoryUpdate2Map
            [PackageGroupAllowedRepositoryUpdateTypeMapper::GetPackageGroupAllowedRepositoryUpdateTypeForName(
                packageGroupAllowedRepositoryUpdate2Item.first)] = std::move(repositoryNameList3List);
      }
      m_allowedRepositoryUpdates[PackageGroupOriginRestrictionTypeMapper::GetPackageGroupOriginRestrictionTypeForName(
          allowedRepositoryUpdatesItem.first)] = std::move(packageGroupAllowedRepositoryUpdate2Map);
    }
    m_allowedRepositoryUpdatesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
