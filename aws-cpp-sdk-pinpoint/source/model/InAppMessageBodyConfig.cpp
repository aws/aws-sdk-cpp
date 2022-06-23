/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/InAppMessageBodyConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

InAppMessageBodyConfig::InAppMessageBodyConfig() : 
    m_alignment(Alignment::NOT_SET),
    m_alignmentHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_textColorHasBeenSet(false)
{
}

InAppMessageBodyConfig::InAppMessageBodyConfig(JsonView jsonValue) : 
    m_alignment(Alignment::NOT_SET),
    m_alignmentHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_textColorHasBeenSet(false)
{
  *this = jsonValue;
}

InAppMessageBodyConfig& InAppMessageBodyConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Alignment"))
  {
    m_alignment = AlignmentMapper::GetAlignmentForName(jsonValue.GetString("Alignment"));

    m_alignmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextColor"))
  {
    m_textColor = jsonValue.GetString("TextColor");

    m_textColorHasBeenSet = true;
  }

  return *this;
}

JsonValue InAppMessageBodyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_alignmentHasBeenSet)
  {
   payload.WithString("Alignment", AlignmentMapper::GetNameForAlignment(m_alignment));
  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_textColorHasBeenSet)
  {
   payload.WithString("TextColor", m_textColor);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
