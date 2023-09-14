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

DescribeRetrainingSchedulerResult::DescribeRetrainingSchedulerResult() : 
    m_status(RetrainingSchedulerStatus::NOT_SET),
    m_promoteMode(ModelPromoteMode::NOT_SET)
{
}

DescribeRetrainingSchedulerResult::DescribeRetrainingSchedulerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(RetrainingSchedulerStatus::NOT_SET),
    m_promoteMode(ModelPromoteMode::NOT_SET)
{
  *this = result;
}

DescribeRetrainingSchedulerResult& DescribeRetrainingSchedulerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

  }

  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");

  }

  if(jsonValue.ValueExists("RetrainingStartDate"))
  {
    m_retrainingStartDate = jsonValue.GetDouble("RetrainingStartDate");

  }

  if(jsonValue.ValueExists("RetrainingFrequency"))
  {
    m_retrainingFrequency = jsonValue.GetString("RetrainingFrequency");

  }

  if(jsonValue.ValueExists("LookbackWindow"))
  {
    m_lookbackWindow = jsonValue.GetString("LookbackWindow");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RetrainingSchedulerStatusMapper::GetRetrainingSchedulerStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("PromoteMode"))
  {
    m_promoteMode = ModelPromoteModeMapper::GetModelPromoteModeForName(jsonValue.GetString("PromoteMode"));

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
