/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetMLTransformResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMLTransformResult::GetMLTransformResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMLTransformResult& GetMLTransformResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransformId"))
  {
    m_transformId = jsonValue.GetString("TransformId");
    m_transformIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = TransformStatusTypeMapper::GetTransformStatusTypeForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedOn"))
  {
    m_createdOn = jsonValue.GetDouble("CreatedOn");
    m_createdOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");
    m_lastModifiedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputRecordTables"))
  {
    Aws::Utils::Array<JsonView> inputRecordTablesJsonList = jsonValue.GetArray("InputRecordTables");
    for(unsigned inputRecordTablesIndex = 0; inputRecordTablesIndex < inputRecordTablesJsonList.GetLength(); ++inputRecordTablesIndex)
    {
      m_inputRecordTables.push_back(inputRecordTablesJsonList[inputRecordTablesIndex].AsObject());
    }
    m_inputRecordTablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Parameters"))
  {
    m_parameters = jsonValue.GetObject("Parameters");
    m_parametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationMetrics"))
  {
    m_evaluationMetrics = jsonValue.GetObject("EvaluationMetrics");
    m_evaluationMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelCount"))
  {
    m_labelCount = jsonValue.GetInteger("LabelCount");
    m_labelCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Schema"))
  {
    Aws::Utils::Array<JsonView> schemaJsonList = jsonValue.GetArray("Schema");
    for(unsigned schemaIndex = 0; schemaIndex < schemaJsonList.GetLength(); ++schemaIndex)
    {
      m_schema.push_back(schemaJsonList[schemaIndex].AsObject());
    }
    m_schemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");
    m_roleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GlueVersion"))
  {
    m_glueVersion = jsonValue.GetString("GlueVersion");
    m_glueVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxCapacity"))
  {
    m_maxCapacity = jsonValue.GetDouble("MaxCapacity");
    m_maxCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WorkerType"))
  {
    m_workerType = WorkerTypeMapper::GetWorkerTypeForName(jsonValue.GetString("WorkerType"));
    m_workerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfWorkers"))
  {
    m_numberOfWorkers = jsonValue.GetInteger("NumberOfWorkers");
    m_numberOfWorkersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");
    m_timeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxRetries"))
  {
    m_maxRetries = jsonValue.GetInteger("MaxRetries");
    m_maxRetriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransformEncryption"))
  {
    m_transformEncryption = jsonValue.GetObject("TransformEncryption");
    m_transformEncryptionHasBeenSet = true;
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
