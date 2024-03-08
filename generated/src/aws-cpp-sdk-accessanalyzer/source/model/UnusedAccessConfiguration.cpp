/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/UnusedAccessConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

UnusedAccessConfiguration::UnusedAccessConfiguration() : 
    m_unusedAccessAge(0),
    m_unusedAccessAgeHasBeenSet(false)
{
}

UnusedAccessConfiguration::UnusedAccessConfiguration(JsonView jsonValue) : 
    m_unusedAccessAge(0),
    m_unusedAccessAgeHasBeenSet(false)
{
  *this = jsonValue;
}

UnusedAccessConfiguration& UnusedAccessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unusedAccessAge"))
  {
    m_unusedAccessAge = jsonValue.GetInteger("unusedAccessAge");

    m_unusedAccessAgeHasBeenSet = true;
  }

  return *this;
}

JsonValue UnusedAccessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_unusedAccessAgeHasBeenSet)
  {
   payload.WithInteger("unusedAccessAge", m_unusedAccessAge);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
