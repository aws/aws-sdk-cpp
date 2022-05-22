/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SeverityLevel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

SeverityLevel::SeverityLevel() : 
    m_occurrencesThreshold(0),
    m_occurrencesThresholdHasBeenSet(false),
    m_severity(DataIdentifierSeverity::NOT_SET),
    m_severityHasBeenSet(false)
{
}

SeverityLevel::SeverityLevel(JsonView jsonValue) : 
    m_occurrencesThreshold(0),
    m_occurrencesThresholdHasBeenSet(false),
    m_severity(DataIdentifierSeverity::NOT_SET),
    m_severityHasBeenSet(false)
{
  *this = jsonValue;
}

SeverityLevel& SeverityLevel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("occurrencesThreshold"))
  {
    m_occurrencesThreshold = jsonValue.GetInt64("occurrencesThreshold");

    m_occurrencesThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = DataIdentifierSeverityMapper::GetDataIdentifierSeverityForName(jsonValue.GetString("severity"));

    m_severityHasBeenSet = true;
  }

  return *this;
}

JsonValue SeverityLevel::Jsonize() const
{
  JsonValue payload;

  if(m_occurrencesThresholdHasBeenSet)
  {
   payload.WithInt64("occurrencesThreshold", m_occurrencesThreshold);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", DataIdentifierSeverityMapper::GetNameForDataIdentifierSeverity(m_severity));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
