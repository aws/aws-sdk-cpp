/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ControlSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

ControlSummary::ControlSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ControlSummary& ControlSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Behavior"))
  {
    m_behavior = ControlBehaviorMapper::GetControlBehaviorForName(jsonValue.GetString("Behavior"));
    m_behaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = ControlSeverityMapper::GetControlSeverityForName(jsonValue.GetString("Severity"));
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Implementation"))
  {
    m_implementation = jsonValue.GetObject("Implementation");
    m_implementationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");
    m_createTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_behaviorHasBeenSet)
  {
   payload.WithString("Behavior", ControlBehaviorMapper::GetNameForControlBehavior(m_behavior));
  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", ControlSeverityMapper::GetNameForControlSeverity(m_severity));
  }

  if(m_implementationHasBeenSet)
  {
   payload.WithObject("Implementation", m_implementation.Jsonize());

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
