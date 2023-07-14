/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ArchiveOutputSettings.h>
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

ArchiveOutputSettings::ArchiveOutputSettings() : 
    m_containerSettingsHasBeenSet(false),
    m_extensionHasBeenSet(false),
    m_nameModifierHasBeenSet(false)
{
}

ArchiveOutputSettings::ArchiveOutputSettings(JsonView jsonValue) : 
    m_containerSettingsHasBeenSet(false),
    m_extensionHasBeenSet(false),
    m_nameModifierHasBeenSet(false)
{
  *this = jsonValue;
}

ArchiveOutputSettings& ArchiveOutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerSettings"))
  {
    m_containerSettings = jsonValue.GetObject("containerSettings");

    m_containerSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("extension"))
  {
    m_extension = jsonValue.GetString("extension");

    m_extensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nameModifier"))
  {
    m_nameModifier = jsonValue.GetString("nameModifier");

    m_nameModifierHasBeenSet = true;
  }

  return *this;
}

JsonValue ArchiveOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_containerSettingsHasBeenSet)
  {
   payload.WithObject("containerSettings", m_containerSettings.Jsonize());

  }

  if(m_extensionHasBeenSet)
  {
   payload.WithString("extension", m_extension);

  }

  if(m_nameModifierHasBeenSet)
  {
   payload.WithString("nameModifier", m_nameModifier);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
