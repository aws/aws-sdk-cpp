/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/Policy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

Policy::Policy() : 
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyUpdateTokenHasBeenSet(false),
    m_securityServicePolicyDataHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceTypeListHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_excludeResourceTags(false),
    m_excludeResourceTagsHasBeenSet(false),
    m_remediationEnabled(false),
    m_remediationEnabledHasBeenSet(false),
    m_deleteUnusedFMManagedResources(false),
    m_deleteUnusedFMManagedResourcesHasBeenSet(false),
    m_includeMapHasBeenSet(false),
    m_excludeMapHasBeenSet(false),
    m_resourceSetIdsHasBeenSet(false),
    m_policyDescriptionHasBeenSet(false)
{
}

Policy::Policy(JsonView jsonValue) : 
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyUpdateTokenHasBeenSet(false),
    m_securityServicePolicyDataHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceTypeListHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_excludeResourceTags(false),
    m_excludeResourceTagsHasBeenSet(false),
    m_remediationEnabled(false),
    m_remediationEnabledHasBeenSet(false),
    m_deleteUnusedFMManagedResources(false),
    m_deleteUnusedFMManagedResourcesHasBeenSet(false),
    m_includeMapHasBeenSet(false),
    m_excludeMapHasBeenSet(false),
    m_resourceSetIdsHasBeenSet(false),
    m_policyDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

Policy& Policy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyId"))
  {
    m_policyId = jsonValue.GetString("PolicyId");

    m_policyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyName"))
  {
    m_policyName = jsonValue.GetString("PolicyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyUpdateToken"))
  {
    m_policyUpdateToken = jsonValue.GetString("PolicyUpdateToken");

    m_policyUpdateTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityServicePolicyData"))
  {
    m_securityServicePolicyData = jsonValue.GetObject("SecurityServicePolicyData");

    m_securityServicePolicyDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTypeList"))
  {
    Aws::Utils::Array<JsonView> resourceTypeListJsonList = jsonValue.GetArray("ResourceTypeList");
    for(unsigned resourceTypeListIndex = 0; resourceTypeListIndex < resourceTypeListJsonList.GetLength(); ++resourceTypeListIndex)
    {
      m_resourceTypeList.push_back(resourceTypeListJsonList[resourceTypeListIndex].AsString());
    }
    m_resourceTypeListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTags"))
  {
    Aws::Utils::Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("ResourceTags");
    for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
    {
      m_resourceTags.push_back(resourceTagsJsonList[resourceTagsIndex].AsObject());
    }
    m_resourceTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeResourceTags"))
  {
    m_excludeResourceTags = jsonValue.GetBool("ExcludeResourceTags");

    m_excludeResourceTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemediationEnabled"))
  {
    m_remediationEnabled = jsonValue.GetBool("RemediationEnabled");

    m_remediationEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteUnusedFMManagedResources"))
  {
    m_deleteUnusedFMManagedResources = jsonValue.GetBool("DeleteUnusedFMManagedResources");

    m_deleteUnusedFMManagedResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeMap"))
  {
    Aws::Map<Aws::String, JsonView> includeMapJsonMap = jsonValue.GetObject("IncludeMap").GetAllObjects();
    for(auto& includeMapItem : includeMapJsonMap)
    {
      Aws::Utils::Array<JsonView> customerPolicyScopeIdListJsonList = includeMapItem.second.AsArray();
      Aws::Vector<Aws::String> customerPolicyScopeIdListList;
      customerPolicyScopeIdListList.reserve((size_t)customerPolicyScopeIdListJsonList.GetLength());
      for(unsigned customerPolicyScopeIdListIndex = 0; customerPolicyScopeIdListIndex < customerPolicyScopeIdListJsonList.GetLength(); ++customerPolicyScopeIdListIndex)
      {
        customerPolicyScopeIdListList.push_back(customerPolicyScopeIdListJsonList[customerPolicyScopeIdListIndex].AsString());
      }
      m_includeMap[CustomerPolicyScopeIdTypeMapper::GetCustomerPolicyScopeIdTypeForName(includeMapItem.first)] = std::move(customerPolicyScopeIdListList);
    }
    m_includeMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeMap"))
  {
    Aws::Map<Aws::String, JsonView> excludeMapJsonMap = jsonValue.GetObject("ExcludeMap").GetAllObjects();
    for(auto& excludeMapItem : excludeMapJsonMap)
    {
      Aws::Utils::Array<JsonView> customerPolicyScopeIdListJsonList = excludeMapItem.second.AsArray();
      Aws::Vector<Aws::String> customerPolicyScopeIdListList;
      customerPolicyScopeIdListList.reserve((size_t)customerPolicyScopeIdListJsonList.GetLength());
      for(unsigned customerPolicyScopeIdListIndex = 0; customerPolicyScopeIdListIndex < customerPolicyScopeIdListJsonList.GetLength(); ++customerPolicyScopeIdListIndex)
      {
        customerPolicyScopeIdListList.push_back(customerPolicyScopeIdListJsonList[customerPolicyScopeIdListIndex].AsString());
      }
      m_excludeMap[CustomerPolicyScopeIdTypeMapper::GetCustomerPolicyScopeIdTypeForName(excludeMapItem.first)] = std::move(customerPolicyScopeIdListList);
    }
    m_excludeMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceSetIds"))
  {
    Aws::Utils::Array<JsonView> resourceSetIdsJsonList = jsonValue.GetArray("ResourceSetIds");
    for(unsigned resourceSetIdsIndex = 0; resourceSetIdsIndex < resourceSetIdsJsonList.GetLength(); ++resourceSetIdsIndex)
    {
      m_resourceSetIds.push_back(resourceSetIdsJsonList[resourceSetIdsIndex].AsString());
    }
    m_resourceSetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyDescription"))
  {
    m_policyDescription = jsonValue.GetString("PolicyDescription");

    m_policyDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue Policy::Jsonize() const
{
  JsonValue payload;

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  if(m_policyUpdateTokenHasBeenSet)
  {
   payload.WithString("PolicyUpdateToken", m_policyUpdateToken);

  }

  if(m_securityServicePolicyDataHasBeenSet)
  {
   payload.WithObject("SecurityServicePolicyData", m_securityServicePolicyData.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceTypeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypeListJsonList(m_resourceTypeList.size());
   for(unsigned resourceTypeListIndex = 0; resourceTypeListIndex < resourceTypeListJsonList.GetLength(); ++resourceTypeListIndex)
   {
     resourceTypeListJsonList[resourceTypeListIndex].AsString(m_resourceTypeList[resourceTypeListIndex]);
   }
   payload.WithArray("ResourceTypeList", std::move(resourceTypeListJsonList));

  }

  if(m_resourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
   }
   payload.WithArray("ResourceTags", std::move(resourceTagsJsonList));

  }

  if(m_excludeResourceTagsHasBeenSet)
  {
   payload.WithBool("ExcludeResourceTags", m_excludeResourceTags);

  }

  if(m_remediationEnabledHasBeenSet)
  {
   payload.WithBool("RemediationEnabled", m_remediationEnabled);

  }

  if(m_deleteUnusedFMManagedResourcesHasBeenSet)
  {
   payload.WithBool("DeleteUnusedFMManagedResources", m_deleteUnusedFMManagedResources);

  }

  if(m_includeMapHasBeenSet)
  {
   JsonValue includeMapJsonMap;
   for(auto& includeMapItem : m_includeMap)
   {
     Aws::Utils::Array<JsonValue> customerPolicyScopeIdListJsonList(includeMapItem.second.size());
     for(unsigned customerPolicyScopeIdListIndex = 0; customerPolicyScopeIdListIndex < customerPolicyScopeIdListJsonList.GetLength(); ++customerPolicyScopeIdListIndex)
     {
       customerPolicyScopeIdListJsonList[customerPolicyScopeIdListIndex].AsString(includeMapItem.second[customerPolicyScopeIdListIndex]);
     }
     includeMapJsonMap.WithArray(CustomerPolicyScopeIdTypeMapper::GetNameForCustomerPolicyScopeIdType(includeMapItem.first), std::move(customerPolicyScopeIdListJsonList));
   }
   payload.WithObject("IncludeMap", std::move(includeMapJsonMap));

  }

  if(m_excludeMapHasBeenSet)
  {
   JsonValue excludeMapJsonMap;
   for(auto& excludeMapItem : m_excludeMap)
   {
     Aws::Utils::Array<JsonValue> customerPolicyScopeIdListJsonList(excludeMapItem.second.size());
     for(unsigned customerPolicyScopeIdListIndex = 0; customerPolicyScopeIdListIndex < customerPolicyScopeIdListJsonList.GetLength(); ++customerPolicyScopeIdListIndex)
     {
       customerPolicyScopeIdListJsonList[customerPolicyScopeIdListIndex].AsString(excludeMapItem.second[customerPolicyScopeIdListIndex]);
     }
     excludeMapJsonMap.WithArray(CustomerPolicyScopeIdTypeMapper::GetNameForCustomerPolicyScopeIdType(excludeMapItem.first), std::move(customerPolicyScopeIdListJsonList));
   }
   payload.WithObject("ExcludeMap", std::move(excludeMapJsonMap));

  }

  if(m_resourceSetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceSetIdsJsonList(m_resourceSetIds.size());
   for(unsigned resourceSetIdsIndex = 0; resourceSetIdsIndex < resourceSetIdsJsonList.GetLength(); ++resourceSetIdsIndex)
   {
     resourceSetIdsJsonList[resourceSetIdsIndex].AsString(m_resourceSetIds[resourceSetIdsIndex]);
   }
   payload.WithArray("ResourceSetIds", std::move(resourceSetIdsJsonList));

  }

  if(m_policyDescriptionHasBeenSet)
  {
   payload.WithString("PolicyDescription", m_policyDescription);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
