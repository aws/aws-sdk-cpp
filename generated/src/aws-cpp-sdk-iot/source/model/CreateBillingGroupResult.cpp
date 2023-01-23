/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateBillingGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateBillingGroupResult::CreateBillingGroupResult()
{
}

CreateBillingGroupResult::CreateBillingGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateBillingGroupResult& CreateBillingGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("billingGroupName"))
  {
    m_billingGroupName = jsonValue.GetString("billingGroupName");

  }

  if(jsonValue.ValueExists("billingGroupArn"))
  {
    m_billingGroupArn = jsonValue.GetString("billingGroupArn");

  }

  if(jsonValue.ValueExists("billingGroupId"))
  {
    m_billingGroupId = jsonValue.GetString("billingGroupId");

  }



  return *this;
}
