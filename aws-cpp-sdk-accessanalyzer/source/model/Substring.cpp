/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/Substring.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

Substring::Substring() : 
    m_length(0),
    m_lengthHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false)
{
}

Substring::Substring(JsonView jsonValue) : 
    m_length(0),
    m_lengthHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false)
{
  *this = jsonValue;
}

Substring& Substring::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("length"))
  {
    m_length = jsonValue.GetInteger("length");

    m_lengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetInteger("start");

    m_startHasBeenSet = true;
  }

  return *this;
}

JsonValue Substring::Jsonize() const
{
  JsonValue payload;

  if(m_lengthHasBeenSet)
  {
   payload.WithInteger("length", m_length);

  }

  if(m_startHasBeenSet)
  {
   payload.WithInteger("start", m_start);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
