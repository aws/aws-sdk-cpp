/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetModelVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetModelVersionResult::GetModelVersionResult() : 
    m_modelType(ModelTypeEnum::NOT_SET),
    m_trainingDataSource(TrainingDataSourceEnum::NOT_SET)
{
}

GetModelVersionResult::GetModelVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_modelType(ModelTypeEnum::NOT_SET),
    m_trainingDataSource(TrainingDataSourceEnum::NOT_SET)
{
  *this = result;
}

GetModelVersionResult& GetModelVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");

  }

  if(jsonValue.ValueExists("modelType"))
  {
    m_modelType = ModelTypeEnumMapper::GetModelTypeEnumForName(jsonValue.GetString("modelType"));

  }

  if(jsonValue.ValueExists("modelVersionNumber"))
  {
    m_modelVersionNumber = jsonValue.GetString("modelVersionNumber");

  }

  if(jsonValue.ValueExists("trainingDataSource"))
  {
    m_trainingDataSource = TrainingDataSourceEnumMapper::GetTrainingDataSourceEnumForName(jsonValue.GetString("trainingDataSource"));

  }

  if(jsonValue.ValueExists("trainingDataSchema"))
  {
    m_trainingDataSchema = jsonValue.GetObject("trainingDataSchema");

  }

  if(jsonValue.ValueExists("externalEventsDetail"))
  {
    m_externalEventsDetail = jsonValue.GetObject("externalEventsDetail");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }



  return *this;
}
