/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ListModelPackagingJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutforVision::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelPackagingJobsResult::ListModelPackagingJobsResult()
{
}

ListModelPackagingJobsResult::ListModelPackagingJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListModelPackagingJobsResult& ListModelPackagingJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelPackagingJobs"))
  {
    Aws::Utils::Array<JsonView> modelPackagingJobsJsonList = jsonValue.GetArray("ModelPackagingJobs");
    for(unsigned modelPackagingJobsIndex = 0; modelPackagingJobsIndex < modelPackagingJobsJsonList.GetLength(); ++modelPackagingJobsIndex)
    {
      m_modelPackagingJobs.push_back(modelPackagingJobsJsonList[modelPackagingJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
