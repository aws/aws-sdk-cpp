/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ItemValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

ItemValue::ItemValue() : 
    m_arnHasBeenSet(false),
    m_metricDefinitionHasBeenSet(false),
    m_pagerDutyIncidentDetailHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

ItemValue::ItemValue(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_metricDefinitionHasBeenSet(false),
    m_pagerDutyIncidentDetailHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

ItemValue& ItemValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricDefinition"))
  {
    m_metricDefinition = jsonValue.GetString("metricDefinition");

    m_metricDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pagerDutyIncidentDetail"))
  {
    m_pagerDutyIncidentDetail = jsonValue.GetObject("pagerDutyIncidentDetail");

    m_pagerDutyIncidentDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue ItemValue::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_metricDefinitionHasBeenSet)
  {
   payload.WithString("metricDefinition", m_metricDefinition);

  }

  if(m_pagerDutyIncidentDetailHasBeenSet)
  {
   payload.WithObject("pagerDutyIncidentDetail", m_pagerDutyIncidentDetail.Jsonize());

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
