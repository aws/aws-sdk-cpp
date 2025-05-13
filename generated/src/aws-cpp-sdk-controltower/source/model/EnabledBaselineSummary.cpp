/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledBaselineSummary.h>
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

EnabledBaselineSummary::EnabledBaselineSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

EnabledBaselineSummary& EnabledBaselineSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("baselineIdentifier"))
  {
    m_baselineIdentifier = jsonValue.GetString("baselineIdentifier");
    m_baselineIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("baselineVersion"))
  {
    m_baselineVersion = jsonValue.GetString("baselineVersion");
    m_baselineVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("driftStatusSummary"))
  {
    m_driftStatusSummary = jsonValue.GetObject("driftStatusSummary");
    m_driftStatusSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentIdentifier"))
  {
    m_parentIdentifier = jsonValue.GetString("parentIdentifier");
    m_parentIdentifierHasBeenSet = true;
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

JsonValue EnabledBaselineSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_baselineIdentifierHasBeenSet)
  {
   payload.WithString("baselineIdentifier", m_baselineIdentifier);

  }

  if(m_baselineVersionHasBeenSet)
  {
   payload.WithString("baselineVersion", m_baselineVersion);

  }

  if(m_driftStatusSummaryHasBeenSet)
  {
   payload.WithObject("driftStatusSummary", m_driftStatusSummary.Jsonize());

  }

  if(m_parentIdentifierHasBeenSet)
  {
   payload.WithString("parentIdentifier", m_parentIdentifier);

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
