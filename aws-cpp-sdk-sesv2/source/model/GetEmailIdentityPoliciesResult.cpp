/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetEmailIdentityPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEmailIdentityPoliciesResult::GetEmailIdentityPoliciesResult()
{
}

GetEmailIdentityPoliciesResult::GetEmailIdentityPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEmailIdentityPoliciesResult& GetEmailIdentityPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Policies"))
  {
    Aws::Map<Aws::String, JsonView> policiesJsonMap = jsonValue.GetObject("Policies").GetAllObjects();
    for(auto& policiesItem : policiesJsonMap)
    {
      m_policies[policiesItem.first] = policiesItem.second.AsString();
    }
  }



  return *this;
}
