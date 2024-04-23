/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

EvaluationConfig::EvaluationConfig() : 
    m_automatedHasBeenSet(false),
    m_humanHasBeenSet(false)
{
}

EvaluationConfig::EvaluationConfig(JsonView jsonValue) : 
    m_automatedHasBeenSet(false),
    m_humanHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationConfig& EvaluationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("automated"))
  {
    m_automated = jsonValue.GetObject("automated");

    m_automatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("human"))
  {
    m_human = jsonValue.GetObject("human");

    m_humanHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_automatedHasBeenSet)
  {
   payload.WithObject("automated", m_automated.Jsonize());

  }

  if(m_humanHasBeenSet)
  {
   payload.WithObject("human", m_human.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
