/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/CreateJobQueueResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateJobQueueResult::CreateJobQueueResult()
{
}

CreateJobQueueResult::CreateJobQueueResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateJobQueueResult& CreateJobQueueResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobQueueName"))
  {
    m_jobQueueName = jsonValue.GetString("jobQueueName");

  }

  if(jsonValue.ValueExists("jobQueueArn"))
  {
    m_jobQueueArn = jsonValue.GetString("jobQueueArn");

  }



  return *this;
}
