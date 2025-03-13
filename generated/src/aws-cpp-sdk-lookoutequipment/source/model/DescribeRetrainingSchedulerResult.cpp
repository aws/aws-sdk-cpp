/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeRetrainingSchedulerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRetrainingSchedulerResult::DescribeRetrainingSchedulerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRetrainingSchedulerResult& DescribeRetrainingSchedulerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");
    m_modelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");
    m_modelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetrainingStartDate"))
  {
    m_retrainingStartDate = jsonValue.GetDouble("RetrainingStartDate");
    m_retrainingStartDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetrainingFrequency"))
  {
    m_retrainingFrequency = jsonValue.GetString("RetrainingFrequency");
    m_retrainingFrequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LookbackWindow"))
  {
    m_lookbackWindow = jsonValue.GetString("LookbackWindow");
    m_lookbackWindowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = RetrainingSchedulerStatusMapper::GetRetrainingSchedulerStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PromoteMode"))
  {
    m_promoteMode = ModelPromoteModeMapper::GetModelPromoteModeForName(jsonValue.GetString("PromoteMode"));
    m_promoteModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
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
