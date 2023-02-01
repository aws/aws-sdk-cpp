/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/Rule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

Rule::Rule() : 
    m_detectorIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleVersionHasBeenSet(false)
{
}

Rule::Rule(JsonView jsonValue) : 
    m_detectorIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Rule& Rule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");

    m_detectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleId"))
  {
    m_ruleId = jsonValue.GetString("ruleId");

    m_ruleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleVersion"))
  {
    m_ruleVersion = jsonValue.GetString("ruleVersion");

    m_ruleVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Rule::Jsonize() const
{
  JsonValue payload;

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("ruleId", m_ruleId);

  }

  if(m_ruleVersionHasBeenSet)
  {
   payload.WithString("ruleVersion", m_ruleVersion);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
