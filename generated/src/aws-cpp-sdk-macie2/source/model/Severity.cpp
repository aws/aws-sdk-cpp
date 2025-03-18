/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Severity.h>
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

Severity::Severity(JsonView jsonValue)
{
  *this = jsonValue;
}

Severity& Severity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = SeverityDescriptionMapper::GetSeverityDescriptionForName(jsonValue.GetString("description"));
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetInt64("score");
    m_scoreHasBeenSet = true;
  }
  return *this;
}

JsonValue Severity::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", SeverityDescriptionMapper::GetNameForSeverityDescription(m_description));
  }

  if(m_scoreHasBeenSet)
  {
   payload.WithInt64("score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
