/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/MLTransform.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

MLTransform::MLTransform() : 
    m_transformIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(TransformStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_inputRecordTablesHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_evaluationMetricsHasBeenSet(false),
    m_labelCount(0),
    m_labelCountHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_glueVersionHasBeenSet(false),
    m_maxCapacity(0.0),
    m_maxCapacityHasBeenSet(false),
    m_workerType(WorkerType::NOT_SET),
    m_workerTypeHasBeenSet(false),
    m_numberOfWorkers(0),
    m_numberOfWorkersHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_transformEncryptionHasBeenSet(false)
{
}

MLTransform::MLTransform(JsonView jsonValue) : 
    m_transformIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(TransformStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_inputRecordTablesHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_evaluationMetricsHasBeenSet(false),
    m_labelCount(0),
    m_labelCountHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_glueVersionHasBeenSet(false),
    m_maxCapacity(0.0),
    m_maxCapacityHasBeenSet(false),
    m_workerType(WorkerType::NOT_SET),
    m_workerTypeHasBeenSet(false),
    m_numberOfWorkers(0),
    m_numberOfWorkersHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_transformEncryptionHasBeenSet(false)
{
  *this = jsonValue;
}

MLTransform& MLTransform::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue MLTransform::Jsonize() const
{
  JsonValue payload;

  if(m_transformIdHasBeenSet)
  {
   payload.WithString("TransformId", m_transformId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TransformStatusTypeMapper::GetNameForTransformStatusType(m_status));
  }

  if(m_createdOnHasBeenSet)
  {
   payload.WithDouble("CreatedOn", m_createdOn.SecondsWithMSPrecision());
  }

  if(m_lastModifiedOnHasBeenSet)
  {
   payload.WithDouble("LastModifiedOn", m_lastModifiedOn.SecondsWithMSPrecision());
  }

  if(m_inputRecordTablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputRecordTablesJsonList(m_inputRecordTables.size());
   for(unsigned inputRecordTablesIndex = 0; inputRecordTablesIndex < inputRecordTablesJsonList.GetLength(); ++inputRecordTablesIndex)
   {
     inputRecordTablesJsonList[inputRecordTablesIndex].AsObject(m_inputRecordTables[inputRecordTablesIndex].Jsonize());
   }
   payload.WithArray("InputRecordTables", std::move(inputRecordTablesJsonList));

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithObject("Parameters", m_parameters.Jsonize());

  }

  if(m_evaluationMetricsHasBeenSet)
  {
   payload.WithObject("EvaluationMetrics", m_evaluationMetrics.Jsonize());

  }

  if(m_labelCountHasBeenSet)
  {
   payload.WithInteger("LabelCount", m_labelCount);

  }

  if(m_schemaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemaJsonList(m_schema.size());
   for(unsigned schemaIndex = 0; schemaIndex < schemaJsonList.GetLength(); ++schemaIndex)
   {
     schemaJsonList[schemaIndex].AsObject(m_schema[schemaIndex].Jsonize());
   }
   payload.WithArray("Schema", std::move(schemaJsonList));

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_glueVersionHasBeenSet)
  {
   payload.WithString("GlueVersion", m_glueVersion);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithDouble("MaxCapacity", m_maxCapacity);

  }

  if(m_workerTypeHasBeenSet)
  {
   payload.WithString("WorkerType", WorkerTypeMapper::GetNameForWorkerType(m_workerType));
  }

  if(m_numberOfWorkersHasBeenSet)
  {
   payload.WithInteger("NumberOfWorkers", m_numberOfWorkers);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_maxRetriesHasBeenSet)
  {
   payload.WithInteger("MaxRetries", m_maxRetries);

  }

  if(m_transformEncryptionHasBeenSet)
  {
   payload.WithObject("TransformEncryption", m_transformEncryption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
