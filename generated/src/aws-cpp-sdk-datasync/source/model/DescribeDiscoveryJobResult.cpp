/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeDiscoveryJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDiscoveryJobResult::DescribeDiscoveryJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDiscoveryJobResult& DescribeDiscoveryJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StorageSystemArn"))
  {
    m_storageSystemArn = jsonValue.GetString("StorageSystemArn");
    m_storageSystemArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiscoveryJobArn"))
  {
    m_discoveryJobArn = jsonValue.GetString("DiscoveryJobArn");
    m_discoveryJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CollectionDurationMinutes"))
  {
    m_collectionDurationMinutes = jsonValue.GetInteger("CollectionDurationMinutes");
    m_collectionDurationMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = DiscoveryJobStatusMapper::GetDiscoveryJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobStartTime"))
  {
    m_jobStartTime = jsonValue.GetDouble("JobStartTime");
    m_jobStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobEndTime"))
  {
    m_jobEndTime = jsonValue.GetDouble("JobEndTime");
    m_jobEndTimeHasBeenSet = true;
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
