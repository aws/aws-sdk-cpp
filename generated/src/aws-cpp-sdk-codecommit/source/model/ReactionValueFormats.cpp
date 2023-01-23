/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
