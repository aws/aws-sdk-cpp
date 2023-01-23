/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Highlight.h>
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

Highlight::Highlight() : 
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_topAnswer(false),
    m_topAnswerHasBeenSet(false),
    m_type(HighlightType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Highlight::Highlight(JsonView jsonValue) : 
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_topAnswer(false),
    m_topAnswerHasBeenSet(false),
    m_type(HighlightType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Highlight& Highlight::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("TopAnswer"))
  {
    m_topAnswer = jsonValue.GetBool("TopAnswer");

    m_topAnswerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = HighlightTypeMapper::GetHighlightTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Highlight::Jsonize() const
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

  if(m_topAnswerHasBeenSet)
  {
   payload.WithBool("TopAnswer", m_topAnswer);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", HighlightTypeMapper::GetNameForHighlightType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
