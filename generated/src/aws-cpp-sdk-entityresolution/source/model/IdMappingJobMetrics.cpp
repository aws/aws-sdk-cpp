/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IdMappingJobMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

IdMappingJobMetrics::IdMappingJobMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

IdMappingJobMetrics& IdMappingJobMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputRecords"))
  {
    m_inputRecords = jsonValue.GetInteger("inputRecords");
    m_inputRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalRecordsProcessed"))
  {
    m_totalRecordsProcessed = jsonValue.GetInteger("totalRecordsProcessed");
    m_totalRecordsProcessedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordsNotProcessed"))
  {
    m_recordsNotProcessed = jsonValue.GetInteger("recordsNotProcessed");
    m_recordsNotProcessedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalMappedRecords"))
  {
    m_totalMappedRecords = jsonValue.GetInteger("totalMappedRecords");
    m_totalMappedRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalMappedSourceRecords"))
  {
    m_totalMappedSourceRecords = jsonValue.GetInteger("totalMappedSourceRecords");
    m_totalMappedSourceRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalMappedTargetRecords"))
  {
    m_totalMappedTargetRecords = jsonValue.GetInteger("totalMappedTargetRecords");
    m_totalMappedTargetRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uniqueRecordsLoaded"))
  {
    m_uniqueRecordsLoaded = jsonValue.GetInteger("uniqueRecordsLoaded");
    m_uniqueRecordsLoadedHasBeenSet = true;
  }
  return *this;
}

JsonValue IdMappingJobMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_inputRecordsHasBeenSet)
  {
   payload.WithInteger("inputRecords", m_inputRecords);

  }

  if(m_totalRecordsProcessedHasBeenSet)
  {
   payload.WithInteger("totalRecordsProcessed", m_totalRecordsProcessed);

  }

  if(m_recordsNotProcessedHasBeenSet)
  {
   payload.WithInteger("recordsNotProcessed", m_recordsNotProcessed);

  }

  if(m_totalMappedRecordsHasBeenSet)
  {
   payload.WithInteger("totalMappedRecords", m_totalMappedRecords);

  }

  if(m_totalMappedSourceRecordsHasBeenSet)
  {
   payload.WithInteger("totalMappedSourceRecords", m_totalMappedSourceRecords);

  }

  if(m_totalMappedTargetRecordsHasBeenSet)
  {
   payload.WithInteger("totalMappedTargetRecords", m_totalMappedTargetRecords);

  }

  if(m_uniqueRecordsLoadedHasBeenSet)
  {
   payload.WithInteger("uniqueRecordsLoaded", m_uniqueRecordsLoaded);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
