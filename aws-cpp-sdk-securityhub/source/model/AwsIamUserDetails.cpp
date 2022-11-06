/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamUserDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsIamUserDetails::AwsIamUserDetails() : 
    m_attachedManagedPoliciesHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_groupListHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_permissionsBoundaryHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userPolicyListHasBeenSet(false)
{
}

AwsIamUserDetails::AwsIamUserDetails(JsonView jsonValue) : 
    m_attachedManagedPoliciesHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_groupListHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_permissionsBoundaryHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userPolicyListHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamUserDetails& AwsIamUserDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttachedManagedPolicies"))
  {
    Aws::Utils::Array<JsonView> attachedManagedPoliciesJsonList = jsonValue.GetArray("AttachedManagedPolicies");
    for(unsigned attachedManagedPoliciesIndex = 0; attachedManagedPoliciesIndex < attachedManagedPoliciesJsonList.GetLength(); ++attachedManagedPoliciesIndex)
    {
      m_attachedManagedPolicies.push_back(attachedManagedPoliciesJsonList[attachedManagedPoliciesIndex].AsObject());
    }
    m_attachedManagedPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetString("CreateDate");

    m_createDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupList"))
  {
    Aws::Utils::Array<JsonView> groupListJsonList = jsonValue.GetArray("GroupList");
    for(unsigned groupListIndex = 0; groupListIndex < groupListJsonList.GetLength(); ++groupListIndex)
    {
      m_groupList.push_back(groupListJsonList[groupListIndex].AsString());
    }
    m_groupListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermissionsBoundary"))
  {
    m_permissionsBoundary = jsonValue.GetObject("PermissionsBoundary");

    m_permissionsBoundaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserPolicyList"))
  {
    Aws::Utils::Array<JsonView> userPolicyListJsonList = jsonValue.GetArray("UserPolicyList");
    for(unsigned userPolicyListIndex = 0; userPolicyListIndex < userPolicyListJsonList.GetLength(); ++userPolicyListIndex)
    {
      m_userPolicyList.push_back(userPolicyListJsonList[userPolicyListIndex].AsObject());
    }
    m_userPolicyListHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamUserDetails::Jsonize() const
{
  JsonValue payload;

  if(m_attachedManagedPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachedManagedPoliciesJsonList(m_attachedManagedPolicies.size());
   for(unsigned attachedManagedPoliciesIndex = 0; attachedManagedPoliciesIndex < attachedManagedPoliciesJsonList.GetLength(); ++attachedManagedPoliciesIndex)
   {
     attachedManagedPoliciesJsonList[attachedManagedPoliciesIndex].AsObject(m_attachedManagedPolicies[attachedManagedPoliciesIndex].Jsonize());
   }
   payload.WithArray("AttachedManagedPolicies", std::move(attachedManagedPoliciesJsonList));

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithString("CreateDate", m_createDate);

  }

  if(m_groupListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupListJsonList(m_groupList.size());
   for(unsigned groupListIndex = 0; groupListIndex < groupListJsonList.GetLength(); ++groupListIndex)
   {
     groupListJsonList[groupListIndex].AsString(m_groupList[groupListIndex]);
   }
   payload.WithArray("GroupList", std::move(groupListJsonList));

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_permissionsBoundaryHasBeenSet)
  {
   payload.WithObject("PermissionsBoundary", m_permissionsBoundary.Jsonize());

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_userPolicyListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userPolicyListJsonList(m_userPolicyList.size());
   for(unsigned userPolicyListIndex = 0; userPolicyListIndex < userPolicyListJsonList.GetLength(); ++userPolicyListIndex)
   {
     userPolicyListJsonList[userPolicyListIndex].AsObject(m_userPolicyList[userPolicyListIndex].Jsonize());
   }
   payload.WithArray("UserPolicyList", std::move(userPolicyListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
