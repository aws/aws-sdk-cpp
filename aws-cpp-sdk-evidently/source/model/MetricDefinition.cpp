/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/MetricDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

MetricDefinition::MetricDefinition() : 
    m_entityIdKeyHasBeenSet(false),
    m_eventPatternHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_unitLabelHasBeenSet(false),
    m_valueKeyHasBeenSet(false)
{
}

MetricDefinition::MetricDefinition(JsonView jsonValue) : 
    m_entityIdKeyHasBeenSet(false),
    m_eventPatternHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_unitLabelHasBeenSet(false),
    m_valueKeyHasBeenSet(false)
{
  *this = jsonValue;
}

MetricDefinition& MetricDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entityIdKey"))
  {
    m_entityIdKey = jsonValue.GetString("entityIdKey");

    m_entityIdKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventPattern"))
  {
    m_eventPattern = jsonValue.GetString("eventPattern");

    m_eventPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unitLabel"))
  {
    m_unitLabel = jsonValue.GetString("unitLabel");

    m_unitLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("valueKey"))
  {
    m_valueKey = jsonValue.GetString("valueKey");

    m_valueKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_entityIdKeyHasBeenSet)
  {
   payload.WithString("entityIdKey", m_entityIdKey);

  }

  if(m_eventPatternHasBeenSet)
  {
   payload.WithString("eventPattern", m_eventPattern);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_unitLabelHasBeenSet)
  {
   payload.WithString("unitLabel", m_unitLabel);

  }

  if(m_valueKeyHasBeenSet)
  {
   payload.WithString("valueKey", m_valueKey);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
