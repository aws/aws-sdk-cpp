/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TextInputSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

TextInputSpecification::TextInputSpecification() : 
    m_startTimeoutMs(0),
    m_startTimeoutMsHasBeenSet(false)
{
}

TextInputSpecification::TextInputSpecification(JsonView jsonValue) : 
    m_startTimeoutMs(0),
    m_startTimeoutMsHasBeenSet(false)
{
  *this = jsonValue;
}

TextInputSpecification& TextInputSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTimeoutMs"))
  {
    m_startTimeoutMs = jsonValue.GetInteger("startTimeoutMs");

    m_startTimeoutMsHasBeenSet = true;
  }

  return *this;
}

JsonValue TextInputSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeoutMsHasBeenSet)
  {
   payload.WithInteger("startTimeoutMs", m_startTimeoutMs);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
