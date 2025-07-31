/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/AutoDataQuality.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

AutoDataQuality::AutoDataQuality(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoDataQuality& AutoDataQuality::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsEnabled"))
  {
    m_isEnabled = jsonValue.GetBool("IsEnabled");
    m_isEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationContext"))
  {
    m_evaluationContext = jsonValue.GetString("EvaluationContext");
    m_evaluationContextHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoDataQuality::Jsonize() const
{
  JsonValue payload;

  if(m_isEnabledHasBeenSet)
  {
   payload.WithBool("IsEnabled", m_isEnabled);

  }

  if(m_evaluationContextHasBeenSet)
  {
   payload.WithString("EvaluationContext", m_evaluationContext);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
