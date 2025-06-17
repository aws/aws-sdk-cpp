/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AnalyzerConfiguration.h>
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

AnalyzerConfiguration::AnalyzerConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AnalyzerConfiguration& AnalyzerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unusedAccess"))
  {
    m_unusedAccess = jsonValue.GetObject("unusedAccess");
    m_unusedAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("internalAccess"))
  {
    m_internalAccess = jsonValue.GetObject("internalAccess");
    m_internalAccessHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalyzerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_unusedAccessHasBeenSet)
  {
   payload.WithObject("unusedAccess", m_unusedAccess.Jsonize());

  }

  if(m_internalAccessHasBeenSet)
  {
   payload.WithObject("internalAccess", m_internalAccess.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
