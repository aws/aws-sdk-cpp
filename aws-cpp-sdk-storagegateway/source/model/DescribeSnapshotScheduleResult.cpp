/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/model/DescribeSnapshotScheduleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSnapshotScheduleResult::DescribeSnapshotScheduleResult() : 
    m_startAt(0),
    m_recurrenceInHours(0)
{
}

DescribeSnapshotScheduleResult::DescribeSnapshotScheduleResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_startAt(0),
    m_recurrenceInHours(0)
{
  *this = result;
}

DescribeSnapshotScheduleResult& DescribeSnapshotScheduleResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("VolumeARN"))
  {
    m_volumeARN = jsonValue.GetString("VolumeARN");

  }

  if(jsonValue.ValueExists("StartAt"))
  {
    m_startAt = jsonValue.GetInteger("StartAt");

  }

  if(jsonValue.ValueExists("RecurrenceInHours"))
  {
    m_recurrenceInHours = jsonValue.GetInteger("RecurrenceInHours");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

  }



  return *this;
}
