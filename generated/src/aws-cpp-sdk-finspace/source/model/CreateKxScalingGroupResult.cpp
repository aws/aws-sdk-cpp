/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/CreateKxScalingGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateKxScalingGroupResult::CreateKxScalingGroupResult() : 
    m_status(KxScalingGroupStatus::NOT_SET)
{
}

CreateKxScalingGroupResult::CreateKxScalingGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(KxScalingGroupStatus::NOT_SET)
{
  *this = result;
}

CreateKxScalingGroupResult& CreateKxScalingGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

  }

  if(jsonValue.ValueExists("scalingGroupName"))
  {
    m_scalingGroupName = jsonValue.GetString("scalingGroupName");

  }

  if(jsonValue.ValueExists("hostType"))
  {
    m_hostType = jsonValue.GetString("hostType");

  }

  if(jsonValue.ValueExists("availabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = KxScalingGroupStatusMapper::GetKxScalingGroupStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");

  }

  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
