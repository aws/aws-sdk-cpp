/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/PutLifecycleConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutLifecycleConfigurationResult::PutLifecycleConfigurationResult()
{
}

PutLifecycleConfigurationResult::PutLifecycleConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutLifecycleConfigurationResult& PutLifecycleConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LifecyclePolicies"))
  {
    Aws::Utils::Array<JsonView> lifecyclePoliciesJsonList = jsonValue.GetArray("LifecyclePolicies");
    for(unsigned lifecyclePoliciesIndex = 0; lifecyclePoliciesIndex < lifecyclePoliciesJsonList.GetLength(); ++lifecyclePoliciesIndex)
    {
      m_lifecyclePolicies.push_back(lifecyclePoliciesJsonList[lifecyclePoliciesIndex].AsObject());
    }
  }



  return *this;
}
