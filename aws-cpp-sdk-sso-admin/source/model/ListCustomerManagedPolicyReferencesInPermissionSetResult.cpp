/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListCustomerManagedPolicyReferencesInPermissionSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCustomerManagedPolicyReferencesInPermissionSetResult::ListCustomerManagedPolicyReferencesInPermissionSetResult()
{
}

ListCustomerManagedPolicyReferencesInPermissionSetResult::ListCustomerManagedPolicyReferencesInPermissionSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCustomerManagedPolicyReferencesInPermissionSetResult& ListCustomerManagedPolicyReferencesInPermissionSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CustomerManagedPolicyReferences"))
  {
    Aws::Utils::Array<JsonView> customerManagedPolicyReferencesJsonList = jsonValue.GetArray("CustomerManagedPolicyReferences");
    for(unsigned customerManagedPolicyReferencesIndex = 0; customerManagedPolicyReferencesIndex < customerManagedPolicyReferencesJsonList.GetLength(); ++customerManagedPolicyReferencesIndex)
    {
      m_customerManagedPolicyReferences.push_back(customerManagedPolicyReferencesJsonList[customerManagedPolicyReferencesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
