/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeBillingGroupResult.h>
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

DescribeBillingGroupResult::DescribeBillingGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeBillingGroupResult& DescribeBillingGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("billingGroupName"))
  {
    m_billingGroupName = jsonValue.GetString("billingGroupName");
    m_billingGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingGroupId"))
  {
    m_billingGroupId = jsonValue.GetString("billingGroupId");
    m_billingGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingGroupArn"))
  {
    m_billingGroupArn = jsonValue.GetString("billingGroupArn");
    m_billingGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInt64("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingGroupProperties"))
  {
    m_billingGroupProperties = jsonValue.GetObject("billingGroupProperties");
    m_billingGroupPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingGroupMetadata"))
  {
    m_billingGroupMetadata = jsonValue.GetObject("billingGroupMetadata");
    m_billingGroupMetadataHasBeenSet = true;
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
