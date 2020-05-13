/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

Severity::Severity() : 
    m_description(SeverityDescription::NOT_SET),
    m_descriptionHasBeenSet(false),
    m_score(0),
    m_scoreHasBeenSet(false)
{
}

Severity::Severity(JsonView jsonValue) : 
    m_description(SeverityDescription::NOT_SET),
    m_descriptionHasBeenSet(false),
    m_score(0),
    m_scoreHasBeenSet(false)
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
