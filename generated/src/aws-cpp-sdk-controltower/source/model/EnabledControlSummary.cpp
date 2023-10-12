/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledControlSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

EnabledControlSummary::EnabledControlSummary() : 
    m_arnHasBeenSet(false),
    m_controlIdentifierHasBeenSet(false),
    m_driftStatusSummaryHasBeenSet(false),
    m_statusSummaryHasBeenSet(false),
    m_targetIdentifierHasBeenSet(false)
{
}

EnabledControlSummary::EnabledControlSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_controlIdentifierHasBeenSet(false),
    m_driftStatusSummaryHasBeenSet(false),
    m_statusSummaryHasBeenSet(false),
    m_targetIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

EnabledControlSummary& EnabledControlSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlIdentifier"))
  {
    m_controlIdentifier = jsonValue.GetString("controlIdentifier");

    m_controlIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("driftStatusSummary"))
  {
    m_driftStatusSummary = jsonValue.GetObject("driftStatusSummary");

    m_driftStatusSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusSummary"))
  {
    m_statusSummary = jsonValue.GetObject("statusSummary");

    m_statusSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetIdentifier"))
  {
    m_targetIdentifier = jsonValue.GetString("targetIdentifier");

    m_targetIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue EnabledControlSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_controlIdentifierHasBeenSet)
  {
   payload.WithString("controlIdentifier", m_controlIdentifier);

  }

  if(m_driftStatusSummaryHasBeenSet)
  {
   payload.WithObject("driftStatusSummary", m_driftStatusSummary.Jsonize());

  }

  if(m_statusSummaryHasBeenSet)
  {
   payload.WithObject("statusSummary", m_statusSummary.Jsonize());

  }

  if(m_targetIdentifierHasBeenSet)
  {
   payload.WithString("targetIdentifier", m_targetIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
