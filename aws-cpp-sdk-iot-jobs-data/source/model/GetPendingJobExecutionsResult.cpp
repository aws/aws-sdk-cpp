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

#include <aws/iot-jobs-data/model/GetPendingJobExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTJobsDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPendingJobExecutionsResult::GetPendingJobExecutionsResult()
{
}

GetPendingJobExecutionsResult::GetPendingJobExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPendingJobExecutionsResult& GetPendingJobExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("inProgressJobs"))
  {
    Array<JsonValue> inProgressJobsJsonList = jsonValue.GetArray("inProgressJobs");
    for(unsigned inProgressJobsIndex = 0; inProgressJobsIndex < inProgressJobsJsonList.GetLength(); ++inProgressJobsIndex)
    {
      m_inProgressJobs.push_back(inProgressJobsJsonList[inProgressJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("queuedJobs"))
  {
    Array<JsonValue> queuedJobsJsonList = jsonValue.GetArray("queuedJobs");
    for(unsigned queuedJobsIndex = 0; queuedJobsIndex < queuedJobsJsonList.GetLength(); ++queuedJobsIndex)
    {
      m_queuedJobs.push_back(queuedJobsJsonList[queuedJobsIndex].AsObject());
    }
  }



  return *this;
}
