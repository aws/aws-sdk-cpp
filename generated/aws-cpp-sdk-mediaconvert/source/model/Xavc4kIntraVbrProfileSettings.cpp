/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Xavc4kIntraVbrProfileSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Xavc4kIntraVbrProfileSettings::Xavc4kIntraVbrProfileSettings() : 
    m_xavcClass(Xavc4kIntraVbrProfileClass::NOT_SET),
    m_xavcClassHasBeenSet(false)
{
}

Xavc4kIntraVbrProfileSettings::Xavc4kIntraVbrProfileSettings(JsonView jsonValue) : 
    m_xavcClass(Xavc4kIntraVbrProfileClass::NOT_SET),
    m_xavcClassHasBeenSet(false)
{
  *this = jsonValue;
}

Xavc4kIntraVbrProfileSettings& Xavc4kIntraVbrProfileSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("xavcClass"))
  {
    m_xavcClass = Xavc4kIntraVbrProfileClassMapper::GetXavc4kIntraVbrProfileClassForName(jsonValue.GetString("xavcClass"));

    m_xavcClassHasBeenSet = true;
  }

  return *this;
}

JsonValue Xavc4kIntraVbrProfileSettings::Jsonize() const
{
  JsonValue payload;

  if(m_xavcClassHasBeenSet)
  {
   payload.WithString("xavcClass", Xavc4kIntraVbrProfileClassMapper::GetNameForXavc4kIntraVbrProfileClass(m_xavcClass));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
