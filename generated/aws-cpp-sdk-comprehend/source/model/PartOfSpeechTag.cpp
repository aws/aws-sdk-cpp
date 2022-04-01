/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/PartOfSpeechTag.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

PartOfSpeechTag::PartOfSpeechTag() : 
    m_tag(PartOfSpeechTagType::NOT_SET),
    m_tagHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
}

PartOfSpeechTag::PartOfSpeechTag(JsonView jsonValue) : 
    m_tag(PartOfSpeechTagType::NOT_SET),
    m_tagHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

PartOfSpeechTag& PartOfSpeechTag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Tag"))
  {
    m_tag = PartOfSpeechTagTypeMapper::GetPartOfSpeechTagTypeForName(jsonValue.GetString("Tag"));

    m_tagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue PartOfSpeechTag::Jsonize() const
{
  JsonValue payload;

  if(m_tagHasBeenSet)
  {
   payload.WithString("Tag", PartOfSpeechTagTypeMapper::GetNameForPartOfSpeechTagType(m_tag));
  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
