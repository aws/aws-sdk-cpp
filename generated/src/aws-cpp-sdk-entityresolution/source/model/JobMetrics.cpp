/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/JobMetrics.h>
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

JobMetrics::JobMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

JobMetrics& JobMetrics::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("matchIDs"))
  {
    m_matchIDs = jsonValue.GetInteger("matchIDs");
    m_matchIDsHasBeenSet = true;
  }
  return *this;
}

JsonValue JobMetrics::Jsonize() const
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

  if(m_matchIDsHasBeenSet)
  {
   payload.WithInteger("matchIDs", m_matchIDs);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
