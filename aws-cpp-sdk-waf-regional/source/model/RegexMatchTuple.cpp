/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/RegexMatchTuple.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

RegexMatchTuple::RegexMatchTuple() : 
    m_fieldToMatchHasBeenSet(false),
    m_textTransformation(TextTransformation::NOT_SET),
    m_textTransformationHasBeenSet(false),
    m_regexPatternSetIdHasBeenSet(false)
{
}

RegexMatchTuple::RegexMatchTuple(JsonView jsonValue) : 
    m_fieldToMatchHasBeenSet(false),
    m_textTransformation(TextTransformation::NOT_SET),
    m_textTransformationHasBeenSet(false),
    m_regexPatternSetIdHasBeenSet(false)
{
  *this = jsonValue;
}

RegexMatchTuple& RegexMatchTuple::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldToMatch"))
  {
    m_fieldToMatch = jsonValue.GetObject("FieldToMatch");

    m_fieldToMatchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextTransformation"))
  {
    m_textTransformation = TextTransformationMapper::GetTextTransformationForName(jsonValue.GetString("TextTransformation"));

    m_textTransformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegexPatternSetId"))
  {
    m_regexPatternSetId = jsonValue.GetString("RegexPatternSetId");

    m_regexPatternSetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RegexMatchTuple::Jsonize() const
{
  JsonValue payload;

  if(m_fieldToMatchHasBeenSet)
  {
   payload.WithObject("FieldToMatch", m_fieldToMatch.Jsonize());

  }

  if(m_textTransformationHasBeenSet)
  {
   payload.WithString("TextTransformation", TextTransformationMapper::GetNameForTextTransformation(m_textTransformation));
  }

  if(m_regexPatternSetIdHasBeenSet)
  {
   payload.WithString("RegexPatternSetId", m_regexPatternSetId);

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
