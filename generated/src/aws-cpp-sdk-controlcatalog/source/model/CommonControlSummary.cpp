/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/CommonControlSummary.h>
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

CommonControlSummary::CommonControlSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CommonControlSummary& CommonControlSummary::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetObject("Domain");
    m_domainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Objective"))
  {
    m_objective = jsonValue.GetObject("Objective");
    m_objectiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");
    m_lastUpdateTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue CommonControlSummary::Jsonize() const
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

  if(m_domainHasBeenSet)
  {
   payload.WithObject("Domain", m_domain.Jsonize());

  }

  if(m_objectiveHasBeenSet)
  {
   payload.WithObject("Objective", m_objective.Jsonize());

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
