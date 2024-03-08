/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ManifestConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

ManifestConfig::ManifestConfig() : 
    m_action(ManifestAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_format(ManifestFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

ManifestConfig::ManifestConfig(JsonView jsonValue) : 
    m_action(ManifestAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_format(ManifestFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

ManifestConfig& ManifestConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ManifestActionMapper::GetManifestActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = ManifestFormatMapper::GetManifestFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue ManifestConfig::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ManifestActionMapper::GetNameForManifestAction(m_action));
  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", ManifestFormatMapper::GetNameForManifestFormat(m_format));
  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
