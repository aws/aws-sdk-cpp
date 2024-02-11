/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/RenditionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

RenditionConfiguration::RenditionConfiguration() : 
    m_renditionSelection(RenditionConfigurationRenditionSelection::NOT_SET),
    m_renditionSelectionHasBeenSet(false),
    m_renditionsHasBeenSet(false)
{
}

RenditionConfiguration::RenditionConfiguration(JsonView jsonValue) : 
    m_renditionSelection(RenditionConfigurationRenditionSelection::NOT_SET),
    m_renditionSelectionHasBeenSet(false),
    m_renditionsHasBeenSet(false)
{
  *this = jsonValue;
}

RenditionConfiguration& RenditionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("renditionSelection"))
  {
    m_renditionSelection = RenditionConfigurationRenditionSelectionMapper::GetRenditionConfigurationRenditionSelectionForName(jsonValue.GetString("renditionSelection"));

    m_renditionSelectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("renditions"))
  {
    Aws::Utils::Array<JsonView> renditionsJsonList = jsonValue.GetArray("renditions");
    for(unsigned renditionsIndex = 0; renditionsIndex < renditionsJsonList.GetLength(); ++renditionsIndex)
    {
      m_renditions.push_back(RenditionConfigurationRenditionMapper::GetRenditionConfigurationRenditionForName(renditionsJsonList[renditionsIndex].AsString()));
    }
    m_renditionsHasBeenSet = true;
  }

  return *this;
}

JsonValue RenditionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_renditionSelectionHasBeenSet)
  {
   payload.WithString("renditionSelection", RenditionConfigurationRenditionSelectionMapper::GetNameForRenditionConfigurationRenditionSelection(m_renditionSelection));
  }

  if(m_renditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> renditionsJsonList(m_renditions.size());
   for(unsigned renditionsIndex = 0; renditionsIndex < renditionsJsonList.GetLength(); ++renditionsIndex)
   {
     renditionsJsonList[renditionsIndex].AsString(RenditionConfigurationRenditionMapper::GetNameForRenditionConfigurationRendition(m_renditions[renditionsIndex]));
   }
   payload.WithArray("renditions", std::move(renditionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
