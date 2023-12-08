/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/GetKxScalingGroupResult.h>
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

GetKxScalingGroupResult::GetKxScalingGroupResult() : 
    m_status(KxScalingGroupStatus::NOT_SET)
{
}

GetKxScalingGroupResult::GetKxScalingGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(KxScalingGroupStatus::NOT_SET)
{
  *this = result;
}

GetKxScalingGroupResult& GetKxScalingGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("scalingGroupName"))
  {
    m_scalingGroupName = jsonValue.GetString("scalingGroupName");

  }

  if(jsonValue.ValueExists("scalingGroupArn"))
  {
    m_scalingGroupArn = jsonValue.GetString("scalingGroupArn");

  }

  if(jsonValue.ValueExists("hostType"))
  {
    m_hostType = jsonValue.GetString("hostType");

  }

  if(jsonValue.ValueExists("clusters"))
  {
    Aws::Utils::Array<JsonView> clustersJsonList = jsonValue.GetArray("clusters");
    for(unsigned clustersIndex = 0; clustersIndex < clustersJsonList.GetLength(); ++clustersIndex)
    {
      m_clusters.push_back(clustersJsonList[clustersIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("availabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = KxScalingGroupStatusMapper::GetKxScalingGroupStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

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
