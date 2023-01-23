/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateBillingGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateBillingGroupResult::UpdateBillingGroupResult() : 
    m_version(0)
{
}

UpdateBillingGroupResult::UpdateBillingGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_version(0)
{
  *this = result;
}

UpdateBillingGroupResult& UpdateBillingGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInt64("version");

  }



  return *this;
}
