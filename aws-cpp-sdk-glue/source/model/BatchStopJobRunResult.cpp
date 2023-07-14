﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchStopJobRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchStopJobRunResult::BatchStopJobRunResult()
{
}

BatchStopJobRunResult::BatchStopJobRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchStopJobRunResult& BatchStopJobRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SuccessfulSubmissions"))
  {
    Array<JsonView> successfulSubmissionsJsonList = jsonValue.GetArray("SuccessfulSubmissions");
    for(unsigned successfulSubmissionsIndex = 0; successfulSubmissionsIndex < successfulSubmissionsJsonList.GetLength(); ++successfulSubmissionsIndex)
    {
      m_successfulSubmissions.push_back(successfulSubmissionsJsonList[successfulSubmissionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Errors"))
  {
    Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }



  return *this;
}
