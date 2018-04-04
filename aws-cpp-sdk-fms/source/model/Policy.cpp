/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_resourceTagsHasBeenSet(false),
    m_excludeResourceTags(false),
    m_excludeResourceTagsHasBeenSet(false),
    m_remediationEnabled(false),
    m_remediationEnabledHasBeenSet(false)
{
}

Policy::Policy(const JsonValue& jsonValue) : 
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyUpdateTokenHasBeenSet(false),
    m_securityServicePolicyDataHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_excludeResourceTags(false),
    m_excludeResourceTagsHasBeenSet(false),
    m_remediationEnabled(false),
    m_remediationEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

Policy& Policy::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("ResourceTags"))
  {
    Array<JsonValue> resourceTagsJsonList = jsonValue.GetArray("ResourceTags");
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

  if(m_resourceTagsHasBeenSet)
  {
   Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
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

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
