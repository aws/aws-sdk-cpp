/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeThingRegistrationTaskResult.h>
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

DescribeThingRegistrationTaskResult::DescribeThingRegistrationTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeThingRegistrationTaskResult& DescribeThingRegistrationTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateBody"))
  {
    m_templateBody = jsonValue.GetString("templateBody");
    m_templateBodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputFileBucket"))
  {
    m_inputFileBucket = jsonValue.GetString("inputFileBucket");
    m_inputFileBucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputFileKey"))
  {
    m_inputFileKey = jsonValue.GetString("inputFileKey");
    m_inputFileKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("successCount"))
  {
    m_successCount = jsonValue.GetInteger("successCount");
    m_successCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureCount"))
  {
    m_failureCount = jsonValue.GetInteger("failureCount");
    m_failureCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("percentageProgress"))
  {
    m_percentageProgress = jsonValue.GetInteger("percentageProgress");
    m_percentageProgressHasBeenSet = true;
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
