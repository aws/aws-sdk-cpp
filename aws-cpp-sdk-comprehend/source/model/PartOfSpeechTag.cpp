/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
