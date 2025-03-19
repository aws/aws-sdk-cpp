/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/UpdatePackageGroupOriginConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePackageGroupOriginConfigurationResult::UpdatePackageGroupOriginConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdatePackageGroupOriginConfigurationResult& UpdatePackageGroupOriginConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("packageGroup"))
  {
    m_packageGroup = jsonValue.GetObject("packageGroup");
    m_packageGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedRepositoryUpdates"))
  {
    Aws::Map<Aws::String, JsonView> allowedRepositoryUpdatesJsonMap = jsonValue.GetObject("allowedRepositoryUpdates").GetAllObjects();
    for(auto& allowedRepositoryUpdatesItem : allowedRepositoryUpdatesJsonMap)
    {
      Aws::Map<Aws::String, JsonView> packageGroupAllowedRepositoryUpdateJsonMap = allowedRepositoryUpdatesItem.second.GetAllObjects();
      Aws::Map<PackageGroupAllowedRepositoryUpdateType, Aws::Vector<Aws::String>> packageGroupAllowedRepositoryUpdateMap;
      for(auto& packageGroupAllowedRepositoryUpdateItem : packageGroupAllowedRepositoryUpdateJsonMap)
      {
        Aws::Utils::Array<JsonView> repositoryNameListJsonList = packageGroupAllowedRepositoryUpdateItem.second.AsArray();
        Aws::Vector<Aws::String> repositoryNameListList;
        repositoryNameListList.reserve((size_t)repositoryNameListJsonList.GetLength());
        for(unsigned repositoryNameListIndex = 0; repositoryNameListIndex < repositoryNameListJsonList.GetLength(); ++repositoryNameListIndex)
        {
          repositoryNameListList.push_back(repositoryNameListJsonList[repositoryNameListIndex].AsString());
        }
        packageGroupAllowedRepositoryUpdateMap[PackageGroupAllowedRepositoryUpdateTypeMapper::GetPackageGroupAllowedRepositoryUpdateTypeForName(packageGroupAllowedRepositoryUpdateItem.first)] = std::move(repositoryNameListList);
      }
      m_allowedRepositoryUpdates[PackageGroupOriginRestrictionTypeMapper::GetPackageGroupOriginRestrictionTypeForName(allowedRepositoryUpdatesItem.first)] = std::move(packageGroupAllowedRepositoryUpdateMap);
    }
    m_allowedRepositoryUpdatesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
