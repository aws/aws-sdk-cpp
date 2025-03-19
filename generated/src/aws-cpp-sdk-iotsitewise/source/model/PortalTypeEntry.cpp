/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PortalTypeEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

PortalTypeEntry::PortalTypeEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

PortalTypeEntry& PortalTypeEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("portalTools"))
  {
    Aws::Utils::Array<JsonView> portalToolsJsonList = jsonValue.GetArray("portalTools");
    for(unsigned portalToolsIndex = 0; portalToolsIndex < portalToolsJsonList.GetLength(); ++portalToolsIndex)
    {
      m_portalTools.push_back(portalToolsJsonList[portalToolsIndex].AsString());
    }
    m_portalToolsHasBeenSet = true;
  }
  return *this;
}

JsonValue PortalTypeEntry::Jsonize() const
{
  JsonValue payload;

  if(m_portalToolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portalToolsJsonList(m_portalTools.size());
   for(unsigned portalToolsIndex = 0; portalToolsIndex < portalToolsJsonList.GetLength(); ++portalToolsIndex)
   {
     portalToolsJsonList[portalToolsIndex].AsString(m_portalTools[portalToolsIndex]);
   }
   payload.WithArray("portalTools", std::move(portalToolsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
