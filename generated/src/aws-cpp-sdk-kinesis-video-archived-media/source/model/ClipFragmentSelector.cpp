/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/ClipFragmentSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{

ClipFragmentSelector::ClipFragmentSelector() : 
    m_fragmentSelectorType(ClipFragmentSelectorType::NOT_SET),
    m_fragmentSelectorTypeHasBeenSet(false),
    m_timestampRangeHasBeenSet(false)
{
}

ClipFragmentSelector::ClipFragmentSelector(JsonView jsonValue) : 
    m_fragmentSelectorType(ClipFragmentSelectorType::NOT_SET),
    m_fragmentSelectorTypeHasBeenSet(false),
    m_timestampRangeHasBeenSet(false)
{
  *this = jsonValue;
}

ClipFragmentSelector& ClipFragmentSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FragmentSelectorType"))
  {
    m_fragmentSelectorType = ClipFragmentSelectorTypeMapper::GetClipFragmentSelectorTypeForName(jsonValue.GetString("FragmentSelectorType"));

    m_fragmentSelectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimestampRange"))
  {
    m_timestampRange = jsonValue.GetObject("TimestampRange");

    m_timestampRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue ClipFragmentSelector::Jsonize() const
{
  JsonValue payload;

  if(m_fragmentSelectorTypeHasBeenSet)
  {
   payload.WithString("FragmentSelectorType", ClipFragmentSelectorTypeMapper::GetNameForClipFragmentSelectorType(m_fragmentSelectorType));
  }

  if(m_timestampRangeHasBeenSet)
  {
   payload.WithObject("TimestampRange", m_timestampRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
