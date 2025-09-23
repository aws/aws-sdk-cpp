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
  if(jsonValue.ValueExists("deleteRecordsProcessed"))
  {
    m_deleteRecordsProcessed = jsonValue.GetInteger("deleteRecordsProcessed");
    m_deleteRecordsProcessedHasBeenSet = true;
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
  if(jsonValue.ValueExists("newMappedRecords"))
  {
    m_newMappedRecords = jsonValue.GetInteger("newMappedRecords");
    m_newMappedRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("newMappedSourceRecords"))
  {
    m_newMappedSourceRecords = jsonValue.GetInteger("newMappedSourceRecords");
    m_newMappedSourceRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("newMappedTargetRecords"))
  {
    m_newMappedTargetRecords = jsonValue.GetInteger("newMappedTargetRecords");
    m_newMappedTargetRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("newUniqueRecordsLoaded"))
  {
    m_newUniqueRecordsLoaded = jsonValue.GetInteger("newUniqueRecordsLoaded");
    m_newUniqueRecordsLoadedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mappedRecordsRemoved"))
  {
    m_mappedRecordsRemoved = jsonValue.GetInteger("mappedRecordsRemoved");
    m_mappedRecordsRemovedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mappedSourceRecordsRemoved"))
  {
    m_mappedSourceRecordsRemoved = jsonValue.GetInteger("mappedSourceRecordsRemoved");
    m_mappedSourceRecordsRemovedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mappedTargetRecordsRemoved"))
  {
    m_mappedTargetRecordsRemoved = jsonValue.GetInteger("mappedTargetRecordsRemoved");
    m_mappedTargetRecordsRemovedHasBeenSet = true;
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

  if(m_deleteRecordsProcessedHasBeenSet)
  {
   payload.WithInteger("deleteRecordsProcessed", m_deleteRecordsProcessed);

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

  if(m_newMappedRecordsHasBeenSet)
  {
   payload.WithInteger("newMappedRecords", m_newMappedRecords);

  }

  if(m_newMappedSourceRecordsHasBeenSet)
  {
   payload.WithInteger("newMappedSourceRecords", m_newMappedSourceRecords);

  }

  if(m_newMappedTargetRecordsHasBeenSet)
  {
   payload.WithInteger("newMappedTargetRecords", m_newMappedTargetRecords);

  }

  if(m_newUniqueRecordsLoadedHasBeenSet)
  {
   payload.WithInteger("newUniqueRecordsLoaded", m_newUniqueRecordsLoaded);

  }

  if(m_mappedRecordsRemovedHasBeenSet)
  {
   payload.WithInteger("mappedRecordsRemoved", m_mappedRecordsRemoved);

  }

  if(m_mappedSourceRecordsRemovedHasBeenSet)
  {
   payload.WithInteger("mappedSourceRecordsRemoved", m_mappedSourceRecordsRemoved);

  }

  if(m_mappedTargetRecordsRemovedHasBeenSet)
  {
   payload.WithInteger("mappedTargetRecordsRemoved", m_mappedTargetRecordsRemoved);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
