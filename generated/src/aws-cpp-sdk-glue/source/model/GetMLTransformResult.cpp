/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetMLTransformResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMLTransformResult::GetMLTransformResult() : 
    m_status(TransformStatusType::NOT_SET),
    m_labelCount(0),
    m_maxCapacity(0.0),
    m_workerType(WorkerType::NOT_SET),
    m_numberOfWorkers(0),
    m_timeout(0),
    m_maxRetries(0)
{
}

GetMLTransformResult::GetMLTransformResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TransformStatusType::NOT_SET),
    m_labelCount(0),
    m_maxCapacity(0.0),
    m_workerType(WorkerType::NOT_SET),
    m_numberOfWorkers(0),
    m_timeout(0),
    m_maxRetries(0)
{
  *this = result;
}

GetMLTransformResult& GetMLTransformResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransformId"))
  {
    m_transformId = jsonValue.GetString("TransformId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TransformStatusTypeMapper::GetTransformStatusTypeForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("CreatedOn"))
  {
    m_createdOn = jsonValue.GetDouble("CreatedOn");

  }

  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");

  }

  if(jsonValue.ValueExists("InputRecordTables"))
  {
    Aws::Utils::Array<JsonView> inputRecordTablesJsonList = jsonValue.GetArray("InputRecordTables");
    for(unsigned inputRecordTablesIndex = 0; inputRecordTablesIndex < inputRecordTablesJsonList.GetLength(); ++inputRecordTablesIndex)
    {
      m_inputRecordTables.push_back(inputRecordTablesJsonList[inputRecordTablesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    m_parameters = jsonValue.GetObject("Parameters");

  }

  if(jsonValue.ValueExists("EvaluationMetrics"))
  {
    m_evaluationMetrics = jsonValue.GetObject("EvaluationMetrics");

  }

  if(jsonValue.ValueExists("LabelCount"))
  {
    m_labelCount = jsonValue.GetInteger("LabelCount");

  }

  if(jsonValue.ValueExists("Schema"))
  {
    Aws::Utils::Array<JsonView> schemaJsonList = jsonValue.GetArray("Schema");
    for(unsigned schemaIndex = 0; schemaIndex < schemaJsonList.GetLength(); ++schemaIndex)
    {
      m_schema.push_back(schemaJsonList[schemaIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

  }

  if(jsonValue.ValueExists("GlueVersion"))
  {
    m_glueVersion = jsonValue.GetString("GlueVersion");

  }

  if(jsonValue.ValueExists("MaxCapacity"))
  {
    m_maxCapacity = jsonValue.GetDouble("MaxCapacity");

  }

  if(jsonValue.ValueExists("WorkerType"))
  {
    m_workerType = WorkerTypeMapper::GetWorkerTypeForName(jsonValue.GetString("WorkerType"));

  }

  if(jsonValue.ValueExists("NumberOfWorkers"))
  {
    m_numberOfWorkers = jsonValue.GetInteger("NumberOfWorkers");

  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

  }

  if(jsonValue.ValueExists("MaxRetries"))
  {
    m_maxRetries = jsonValue.GetInteger("MaxRetries");

  }

  if(jsonValue.ValueExists("TransformEncryption"))
  {
    m_transformEncryption = jsonValue.GetObject("TransformEncryption");

  }



  return *this;
}
