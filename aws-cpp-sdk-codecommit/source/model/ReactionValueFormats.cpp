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

#include <aws/codecommit/model/ReactionValueFormats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

ReactionValueFormats::ReactionValueFormats() : 
    m_emojiHasBeenSet(false),
    m_shortCodeHasBeenSet(false),
    m_unicodeHasBeenSet(false)
{
}

ReactionValueFormats::ReactionValueFormats(JsonView jsonValue) : 
    m_emojiHasBeenSet(false),
    m_shortCodeHasBeenSet(false),
    m_unicodeHasBeenSet(false)
{
  *this = jsonValue;
}

ReactionValueFormats& ReactionValueFormats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("emoji"))
  {
    m_emoji = jsonValue.GetString("emoji");

    m_emojiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shortCode"))
  {
    m_shortCode = jsonValue.GetString("shortCode");

    m_shortCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unicode"))
  {
    m_unicode = jsonValue.GetString("unicode");

    m_unicodeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReactionValueFormats::Jsonize() const
{
  JsonValue payload;

  if(m_emojiHasBeenSet)
  {
   payload.WithString("emoji", m_emoji);

  }

  if(m_shortCodeHasBeenSet)
  {
   payload.WithString("shortCode", m_shortCode);

  }

  if(m_unicodeHasBeenSet)
  {
   payload.WithString("unicode", m_unicode);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
