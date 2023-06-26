/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Correction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

Correction::Correction() : 
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_termHasBeenSet(false),
    m_correctedTermHasBeenSet(false)
{
}

Correction::Correction(JsonView jsonValue) : 
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_termHasBeenSet(false),
    m_correctedTermHasBeenSet(false)
{
  *this = jsonValue;
}

Correction& Correction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BeginOffset"))
  {
    m_beginOffset = jsonValue.GetInteger("BeginOffset");

    m_beginOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndOffset"))
  {
    m_endOffset = jsonValue.GetInteger("EndOffset");

    m_endOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Term"))
  {
    m_term = jsonValue.GetString("Term");

    m_termHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CorrectedTerm"))
  {
    m_correctedTerm = jsonValue.GetString("CorrectedTerm");

    m_correctedTermHasBeenSet = true;
  }

  return *this;
}

JsonValue Correction::Jsonize() const
{
  JsonValue payload;

  if(m_beginOffsetHasBeenSet)
  {
   payload.WithInteger("BeginOffset", m_beginOffset);

  }

  if(m_endOffsetHasBeenSet)
  {
   payload.WithInteger("EndOffset", m_endOffset);

  }

  if(m_termHasBeenSet)
  {
   payload.WithString("Term", m_term);

  }

  if(m_correctedTermHasBeenSet)
  {
   payload.WithString("CorrectedTerm", m_correctedTerm);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
