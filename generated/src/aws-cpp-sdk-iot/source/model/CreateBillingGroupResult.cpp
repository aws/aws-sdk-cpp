/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateBillingGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

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
    m_billingGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingGroupArn"))
  {
    m_billingGroupArn = jsonValue.GetString("billingGroupArn");
    m_billingGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingGroupId"))
  {
    m_billingGroupId = jsonValue.GetString("billingGroupId");
    m_billingGroupIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
