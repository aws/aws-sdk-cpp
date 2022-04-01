/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExportEC2InstanceRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExportEC2InstanceRecommendationsResult::ExportEC2InstanceRecommendationsResult()
{
}

ExportEC2InstanceRecommendationsResult::ExportEC2InstanceRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ExportEC2InstanceRecommendationsResult& ExportEC2InstanceRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

  }

  if(jsonValue.ValueExists("s3Destination"))
  {
    m_s3Destination = jsonValue.GetObject("s3Destination");

  }



  return *this;
}
