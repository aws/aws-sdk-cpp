/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationScore.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

EvaluationScore::EvaluationScore() : 
    m_percentage(0.0),
    m_percentageHasBeenSet(false),
    m_notApplicable(false),
    m_notApplicableHasBeenSet(false),
    m_automaticFail(false),
    m_automaticFailHasBeenSet(false)
{
}

EvaluationScore::EvaluationScore(JsonView jsonValue) : 
    m_percentage(0.0),
    m_percentageHasBeenSet(false),
    m_notApplicable(false),
    m_notApplicableHasBeenSet(false),
    m_automaticFail(false),
    m_automaticFailHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationScore& EvaluationScore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Percentage"))
  {
    m_percentage = jsonValue.GetDouble("Percentage");

    m_percentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotApplicable"))
  {
    m_notApplicable = jsonValue.GetBool("NotApplicable");

    m_notApplicableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutomaticFail"))
  {
    m_automaticFail = jsonValue.GetBool("AutomaticFail");

    m_automaticFailHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationScore::Jsonize() const
{
  JsonValue payload;

  if(m_percentageHasBeenSet)
  {
   payload.WithDouble("Percentage", m_percentage);

  }

  if(m_notApplicableHasBeenSet)
  {
   payload.WithBool("NotApplicable", m_notApplicable);

  }

  if(m_automaticFailHasBeenSet)
  {
   payload.WithBool("AutomaticFail", m_automaticFail);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
