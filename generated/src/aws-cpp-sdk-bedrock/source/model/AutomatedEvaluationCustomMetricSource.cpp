/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedEvaluationCustomMetricSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedEvaluationCustomMetricSource::AutomatedEvaluationCustomMetricSource(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedEvaluationCustomMetricSource& AutomatedEvaluationCustomMetricSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customMetricDefinition"))
  {
    m_customMetricDefinition = jsonValue.GetObject("customMetricDefinition");
    m_customMetricDefinitionHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedEvaluationCustomMetricSource::Jsonize() const
{
  JsonValue payload;

  if(m_customMetricDefinitionHasBeenSet)
  {
   payload.WithObject("customMetricDefinition", m_customMetricDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
