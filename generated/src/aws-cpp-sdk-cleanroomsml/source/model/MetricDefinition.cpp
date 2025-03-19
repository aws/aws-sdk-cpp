/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/MetricDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

MetricDefinition::MetricDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

MetricDefinition& MetricDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regex"))
  {
    m_regex = jsonValue.GetString("regex");
    m_regexHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_regexHasBeenSet)
  {
   payload.WithString("regex", m_regex);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
