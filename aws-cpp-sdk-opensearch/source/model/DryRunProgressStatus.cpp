/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DryRunProgressStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

DryRunProgressStatus::DryRunProgressStatus() : 
    m_dryRunIdHasBeenSet(false),
    m_dryRunStatusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_updateDateHasBeenSet(false),
    m_validationFailuresHasBeenSet(false)
{
}

DryRunProgressStatus::DryRunProgressStatus(JsonView jsonValue) : 
    m_dryRunIdHasBeenSet(false),
    m_dryRunStatusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_updateDateHasBeenSet(false),
    m_validationFailuresHasBeenSet(false)
{
  *this = jsonValue;
}

DryRunProgressStatus& DryRunProgressStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DryRunId"))
  {
    m_dryRunId = jsonValue.GetString("DryRunId");

    m_dryRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DryRunStatus"))
  {
    m_dryRunStatus = jsonValue.GetString("DryRunStatus");

    m_dryRunStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateDate"))
  {
    m_updateDate = jsonValue.GetString("UpdateDate");

    m_updateDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationFailures"))
  {
    Aws::Utils::Array<JsonView> validationFailuresJsonList = jsonValue.GetArray("ValidationFailures");
    for(unsigned validationFailuresIndex = 0; validationFailuresIndex < validationFailuresJsonList.GetLength(); ++validationFailuresIndex)
    {
      m_validationFailures.push_back(validationFailuresJsonList[validationFailuresIndex].AsObject());
    }
    m_validationFailuresHasBeenSet = true;
  }

  return *this;
}

JsonValue DryRunProgressStatus::Jsonize() const
{
  JsonValue payload;

  if(m_dryRunIdHasBeenSet)
  {
   payload.WithString("DryRunId", m_dryRunId);

  }

  if(m_dryRunStatusHasBeenSet)
  {
   payload.WithString("DryRunStatus", m_dryRunStatus);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_updateDateHasBeenSet)
  {
   payload.WithString("UpdateDate", m_updateDate);

  }

  if(m_validationFailuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationFailuresJsonList(m_validationFailures.size());
   for(unsigned validationFailuresIndex = 0; validationFailuresIndex < validationFailuresJsonList.GetLength(); ++validationFailuresIndex)
   {
     validationFailuresJsonList[validationFailuresIndex].AsObject(m_validationFailures[validationFailuresIndex].Jsonize());
   }
   payload.WithArray("ValidationFailures", std::move(validationFailuresJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
