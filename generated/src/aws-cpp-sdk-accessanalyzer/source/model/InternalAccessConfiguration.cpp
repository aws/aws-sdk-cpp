/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/InternalAccessConfiguration.h>
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

InternalAccessConfiguration::InternalAccessConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

InternalAccessConfiguration& InternalAccessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("analysisRule"))
  {
    m_analysisRule = jsonValue.GetObject("analysisRule");
    m_analysisRuleHasBeenSet = true;
  }
  return *this;
}

JsonValue InternalAccessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_analysisRuleHasBeenSet)
  {
   payload.WithObject("analysisRule", m_analysisRule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
