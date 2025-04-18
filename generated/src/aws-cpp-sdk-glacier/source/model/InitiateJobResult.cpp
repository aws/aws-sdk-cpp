﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/InitiateJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InitiateJobResult::InitiateJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

InitiateJobResult& InitiateJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& locationIter = headers.find("location");
  if(locationIter != headers.end())
  {
    m_location = locationIter->second;
    m_locationHasBeenSet = true;
  }

  const auto& jobIdIter = headers.find("x-amz-job-id");
  if(jobIdIter != headers.end())
  {
    m_jobId = jobIdIter->second;
    m_jobIdHasBeenSet = true;
  }

  const auto& jobOutputPathIter = headers.find("x-amz-job-output-path");
  if(jobOutputPathIter != headers.end())
  {
    m_jobOutputPath = jobOutputPathIter->second;
    m_jobOutputPathHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
