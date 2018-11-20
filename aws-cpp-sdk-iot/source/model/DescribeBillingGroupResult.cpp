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
