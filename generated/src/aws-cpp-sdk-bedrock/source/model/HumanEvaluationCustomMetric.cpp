/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/HumanEvaluationCustomMetric.h>
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

HumanEvaluationCustomMetric::HumanEvaluationCustomMetric(JsonView jsonValue)
{
  *this = jsonValue;
}

HumanEvaluationCustomMetric& HumanEvaluationCustomMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ratingMethod"))
  {
    m_ratingMethod = jsonValue.GetString("ratingMethod");
    m_ratingMethodHasBeenSet = true;
  }
  return *this;
}

JsonValue HumanEvaluationCustomMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_ratingMethodHasBeenSet)
  {
   payload.WithString("ratingMethod", m_ratingMethod);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
