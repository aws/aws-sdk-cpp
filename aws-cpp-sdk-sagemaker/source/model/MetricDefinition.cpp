/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MetricDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

MetricDefinition::MetricDefinition() : 
    m_nameHasBeenSet(false),
    m_regexHasBeenSet(false)
{
}

MetricDefinition::MetricDefinition(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_regexHasBeenSet(false)
{
  *this = jsonValue;
}

MetricDefinition& MetricDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Regex"))
  {
    m_regex = jsonValue.GetString("Regex");

    m_regexHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_regexHasBeenSet)
  {
   payload.WithString("Regex", m_regex);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
