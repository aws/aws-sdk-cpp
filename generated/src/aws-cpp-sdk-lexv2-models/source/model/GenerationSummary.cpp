/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/GenerationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

GenerationSummary::GenerationSummary() : 
    m_generationIdHasBeenSet(false),
    m_generationStatus(GenerationStatus::NOT_SET),
    m_generationStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

GenerationSummary::GenerationSummary(JsonView jsonValue) : 
    m_generationIdHasBeenSet(false),
    m_generationStatus(GenerationStatus::NOT_SET),
    m_generationStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

GenerationSummary& GenerationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("generationId"))
  {
    m_generationId = jsonValue.GetString("generationId");

    m_generationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("generationStatus"))
  {
    m_generationStatus = GenerationStatusMapper::GetGenerationStatusForName(jsonValue.GetString("generationStatus"));

    m_generationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue GenerationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_generationIdHasBeenSet)
  {
   payload.WithString("generationId", m_generationId);

  }

  if(m_generationStatusHasBeenSet)
  {
   payload.WithString("generationStatus", GenerationStatusMapper::GetNameForGenerationStatus(m_generationStatus));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
