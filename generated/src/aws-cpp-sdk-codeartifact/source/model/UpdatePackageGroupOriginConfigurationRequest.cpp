/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/UpdatePackageGroupOriginConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String UpdatePackageGroupOriginConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_restrictionsHasBeenSet)
  {
   JsonValue restrictionsJsonMap;
   for(auto& restrictionsItem : m_restrictions)
   {
     restrictionsJsonMap.WithString(PackageGroupOriginRestrictionTypeMapper::GetNameForPackageGroupOriginRestrictionType(restrictionsItem.first), PackageGroupOriginRestrictionModeMapper::GetNameForPackageGroupOriginRestrictionMode(restrictionsItem.second));
   }
   payload.WithObject("restrictions", std::move(restrictionsJsonMap));

  }

  if(m_addAllowedRepositoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addAllowedRepositoriesJsonList(m_addAllowedRepositories.size());
   for(unsigned addAllowedRepositoriesIndex = 0; addAllowedRepositoriesIndex < addAllowedRepositoriesJsonList.GetLength(); ++addAllowedRepositoriesIndex)
   {
     addAllowedRepositoriesJsonList[addAllowedRepositoriesIndex].AsObject(m_addAllowedRepositories[addAllowedRepositoriesIndex].Jsonize());
   }
   payload.WithArray("addAllowedRepositories", std::move(addAllowedRepositoriesJsonList));

  }

  if(m_removeAllowedRepositoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeAllowedRepositoriesJsonList(m_removeAllowedRepositories.size());
   for(unsigned removeAllowedRepositoriesIndex = 0; removeAllowedRepositoriesIndex < removeAllowedRepositoriesJsonList.GetLength(); ++removeAllowedRepositoriesIndex)
   {
     removeAllowedRepositoriesJsonList[removeAllowedRepositoriesIndex].AsObject(m_removeAllowedRepositories[removeAllowedRepositoriesIndex].Jsonize());
   }
   payload.WithArray("removeAllowedRepositories", std::move(removeAllowedRepositoriesJsonList));

  }

  return payload.View().WriteReadable();
}

void UpdatePackageGroupOriginConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_domainHasBeenSet)
    {
      ss << m_domain;
      uri.AddQueryStringParameter("domain", ss.str());
      ss.str("");
    }

    if(m_domainOwnerHasBeenSet)
    {
      ss << m_domainOwner;
      uri.AddQueryStringParameter("domain-owner", ss.str());
      ss.str("");
    }

    if(m_packageGroupHasBeenSet)
    {
      ss << m_packageGroup;
      uri.AddQueryStringParameter("package-group", ss.str());
      ss.str("");
    }

}



