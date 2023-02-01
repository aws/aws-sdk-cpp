/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ViolationDetail.h>
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

ViolationDetail::ViolationDetail() : 
    m_policyIdHasBeenSet(false),
    m_memberAccountHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceViolationsHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_resourceDescriptionHasBeenSet(false)
{
}

ViolationDetail::ViolationDetail(JsonView jsonValue) : 
    m_policyIdHasBeenSet(false),
    m_memberAccountHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceViolationsHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_resourceDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ViolationDetail& ViolationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyId"))
  {
    m_policyId = jsonValue.GetString("PolicyId");

    m_policyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberAccount"))
  {
    m_memberAccount = jsonValue.GetString("MemberAccount");

    m_memberAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceViolations"))
  {
    Aws::Utils::Array<JsonView> resourceViolationsJsonList = jsonValue.GetArray("ResourceViolations");
    for(unsigned resourceViolationsIndex = 0; resourceViolationsIndex < resourceViolationsJsonList.GetLength(); ++resourceViolationsIndex)
    {
      m_resourceViolations.push_back(resourceViolationsJsonList[resourceViolationsIndex].AsObject());
    }
    m_resourceViolationsHasBeenSet = true;
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

  if(jsonValue.ValueExists("ResourceDescription"))
  {
    m_resourceDescription = jsonValue.GetString("ResourceDescription");

    m_resourceDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ViolationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_memberAccountHasBeenSet)
  {
   payload.WithString("MemberAccount", m_memberAccount);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceViolationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceViolationsJsonList(m_resourceViolations.size());
   for(unsigned resourceViolationsIndex = 0; resourceViolationsIndex < resourceViolationsJsonList.GetLength(); ++resourceViolationsIndex)
   {
     resourceViolationsJsonList[resourceViolationsIndex].AsObject(m_resourceViolations[resourceViolationsIndex].Jsonize());
   }
   payload.WithArray("ResourceViolations", std::move(resourceViolationsJsonList));

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

  if(m_resourceDescriptionHasBeenSet)
  {
   payload.WithString("ResourceDescription", m_resourceDescription);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
