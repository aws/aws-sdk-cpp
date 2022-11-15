/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListManagedPoliciesInPermissionSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListManagedPoliciesInPermissionSetResult::ListManagedPoliciesInPermissionSetResult()
{
}

ListManagedPoliciesInPermissionSetResult::ListManagedPoliciesInPermissionSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListManagedPoliciesInPermissionSetResult& ListManagedPoliciesInPermissionSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AttachedManagedPolicies"))
  {
    Aws::Utils::Array<JsonView> attachedManagedPoliciesJsonList = jsonValue.GetArray("AttachedManagedPolicies");
    for(unsigned attachedManagedPoliciesIndex = 0; attachedManagedPoliciesIndex < attachedManagedPoliciesJsonList.GetLength(); ++attachedManagedPoliciesIndex)
    {
      m_attachedManagedPolicies.push_back(attachedManagedPoliciesJsonList[attachedManagedPoliciesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
