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

DescribeDiscoveryJobResult::DescribeDiscoveryJobResult() : 
    m_collectionDurationMinutes(0),
    m_status(DiscoveryJobStatus::NOT_SET)
{
}

DescribeDiscoveryJobResult::DescribeDiscoveryJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_collectionDurationMinutes(0),
    m_status(DiscoveryJobStatus::NOT_SET)
{
  *this = result;
}

DescribeDiscoveryJobResult& DescribeDiscoveryJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StorageSystemArn"))
  {
    m_storageSystemArn = jsonValue.GetString("StorageSystemArn");

  }

  if(jsonValue.ValueExists("DiscoveryJobArn"))
  {
    m_discoveryJobArn = jsonValue.GetString("DiscoveryJobArn");

  }

  if(jsonValue.ValueExists("CollectionDurationMinutes"))
  {
    m_collectionDurationMinutes = jsonValue.GetInteger("CollectionDurationMinutes");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DiscoveryJobStatusMapper::GetDiscoveryJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("JobStartTime"))
  {
    m_jobStartTime = jsonValue.GetDouble("JobStartTime");

  }

  if(jsonValue.ValueExists("JobEndTime"))
  {
    m_jobEndTime = jsonValue.GetDouble("JobEndTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
