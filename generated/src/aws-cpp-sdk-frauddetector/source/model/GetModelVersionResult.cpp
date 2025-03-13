/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetModelVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetModelVersionResult::GetModelVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetModelVersionResult& GetModelVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelType"))
  {
    m_modelType = ModelTypeEnumMapper::GetModelTypeEnumForName(jsonValue.GetString("modelType"));
    m_modelTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelVersionNumber"))
  {
    m_modelVersionNumber = jsonValue.GetString("modelVersionNumber");
    m_modelVersionNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainingDataSource"))
  {
    m_trainingDataSource = TrainingDataSourceEnumMapper::GetTrainingDataSourceEnumForName(jsonValue.GetString("trainingDataSource"));
    m_trainingDataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainingDataSchema"))
  {
    m_trainingDataSchema = jsonValue.GetObject("trainingDataSchema");
    m_trainingDataSchemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalEventsDetail"))
  {
    m_externalEventsDetail = jsonValue.GetObject("externalEventsDetail");
    m_externalEventsDetailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ingestedEventsDetail"))
  {
    m_ingestedEventsDetail = jsonValue.GetObject("ingestedEventsDetail");
    m_ingestedEventsDetailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
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
