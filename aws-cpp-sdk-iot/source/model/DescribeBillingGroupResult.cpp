/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeBillingGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBillingGroupResult::DescribeBillingGroupResult() : 
    m_version(0)
{
}

DescribeBillingGroupResult::DescribeBillingGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_version(0)
{
  *this = result;
}

DescribeBillingGroupResult& DescribeBillingGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("billingGroupName"))
  {
    m_billingGroupName = jsonValue.GetString("billingGroupName");

  }

  if(jsonValue.ValueExists("billingGroupId"))
  {
    m_billingGroupId = jsonValue.GetString("billingGroupId");

  }

  if(jsonValue.ValueExists("billingGroupArn"))
  {
    m_billingGroupArn = jsonValue.GetString("billingGroupArn");

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInt64("version");

  }

  if(jsonValue.ValueExists("billingGroupProperties"))
  {
    m_billingGroupProperties = jsonValue.GetObject("billingGroupProperties");

  }

  if(jsonValue.ValueExists("billingGroupMetadata"))
  {
    m_billingGroupMetadata = jsonValue.GetObject("billingGroupMetadata");

  }



  return *this;
}
