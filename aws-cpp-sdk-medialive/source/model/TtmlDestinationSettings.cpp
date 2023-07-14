/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TtmlDestinationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

TtmlDestinationSettings::TtmlDestinationSettings() : 
    m_styleControl(TtmlDestinationStyleControl::NOT_SET),
    m_styleControlHasBeenSet(false)
{
}

TtmlDestinationSettings::TtmlDestinationSettings(JsonView jsonValue) : 
    m_styleControl(TtmlDestinationStyleControl::NOT_SET),
    m_styleControlHasBeenSet(false)
{
  *this = jsonValue;
}

TtmlDestinationSettings& TtmlDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("styleControl"))
  {
    m_styleControl = TtmlDestinationStyleControlMapper::GetTtmlDestinationStyleControlForName(jsonValue.GetString("styleControl"));

    m_styleControlHasBeenSet = true;
  }

  return *this;
}

JsonValue TtmlDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_styleControlHasBeenSet)
  {
   payload.WithString("styleControl", TtmlDestinationStyleControlMapper::GetNameForTtmlDestinationStyleControl(m_styleControl));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
