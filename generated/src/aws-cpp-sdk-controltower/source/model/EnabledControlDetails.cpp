/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledControlDetails.h>
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

EnabledControlDetails::EnabledControlDetails() : 
    m_arnHasBeenSet(false),
    m_controlIdentifierHasBeenSet(false),
    m_driftStatusSummaryHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_statusSummaryHasBeenSet(false),
    m_targetIdentifierHasBeenSet(false),
    m_targetRegionsHasBeenSet(false)
{
}

EnabledControlDetails::EnabledControlDetails(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_controlIdentifierHasBeenSet(false),
    m_driftStatusSummaryHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_statusSummaryHasBeenSet(false),
    m_targetIdentifierHasBeenSet(false),
    m_targetRegionsHasBeenSet(false)
{
  *this = jsonValue;
}

EnabledControlDetails& EnabledControlDetails::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
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

  if(jsonValue.ValueExists("targetRegions"))
  {
    Aws::Utils::Array<JsonView> targetRegionsJsonList = jsonValue.GetArray("targetRegions");
    for(unsigned targetRegionsIndex = 0; targetRegionsIndex < targetRegionsJsonList.GetLength(); ++targetRegionsIndex)
    {
      m_targetRegions.push_back(targetRegionsJsonList[targetRegionsIndex].AsObject());
    }
    m_targetRegionsHasBeenSet = true;
  }

  return *this;
}

JsonValue EnabledControlDetails::Jsonize() const
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

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("parameters", std::move(parametersJsonList));

  }

  if(m_statusSummaryHasBeenSet)
  {
   payload.WithObject("statusSummary", m_statusSummary.Jsonize());

  }

  if(m_targetIdentifierHasBeenSet)
  {
   payload.WithString("targetIdentifier", m_targetIdentifier);

  }

  if(m_targetRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetRegionsJsonList(m_targetRegions.size());
   for(unsigned targetRegionsIndex = 0; targetRegionsIndex < targetRegionsJsonList.GetLength(); ++targetRegionsIndex)
   {
     targetRegionsJsonList[targetRegionsIndex].AsObject(m_targetRegions[targetRegionsIndex].Jsonize());
   }
   payload.WithArray("targetRegions", std::move(targetRegionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
