/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledBaselineDetails.h>
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

EnabledBaselineDetails::EnabledBaselineDetails() : 
    m_arnHasBeenSet(false),
    m_baselineIdentifierHasBeenSet(false),
    m_baselineVersionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_statusSummaryHasBeenSet(false),
    m_targetIdentifierHasBeenSet(false)
{
}

EnabledBaselineDetails::EnabledBaselineDetails(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_baselineIdentifierHasBeenSet(false),
    m_baselineVersionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_statusSummaryHasBeenSet(false),
    m_targetIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

EnabledBaselineDetails& EnabledBaselineDetails::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue EnabledBaselineDetails::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
