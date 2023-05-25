/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/Remediation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

Remediation::Remediation() : 
    m_recommendationHasBeenSet(false)
{
}

Remediation::Remediation(JsonView jsonValue) : 
    m_recommendationHasBeenSet(false)
{
  *this = jsonValue;
}

Remediation& Remediation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recommendation"))
  {
    m_recommendation = jsonValue.GetObject("recommendation");

    m_recommendationHasBeenSet = true;
  }

  return *this;
}

JsonValue Remediation::Jsonize() const
{
  JsonValue payload;

  if(m_recommendationHasBeenSet)
  {
   payload.WithObject("recommendation", m_recommendation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
