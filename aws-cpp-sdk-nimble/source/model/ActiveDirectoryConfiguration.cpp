/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ActiveDirectoryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

ActiveDirectoryConfiguration::ActiveDirectoryConfiguration() : 
    m_computerAttributesHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_organizationalUnitDistinguishedNameHasBeenSet(false)
{
}

ActiveDirectoryConfiguration::ActiveDirectoryConfiguration(JsonView jsonValue) : 
    m_computerAttributesHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_organizationalUnitDistinguishedNameHasBeenSet(false)
{
  *this = jsonValue;
}

ActiveDirectoryConfiguration& ActiveDirectoryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("computerAttributes"))
  {
    Aws::Utils::Array<JsonView> computerAttributesJsonList = jsonValue.GetArray("computerAttributes");
    for(unsigned computerAttributesIndex = 0; computerAttributesIndex < computerAttributesJsonList.GetLength(); ++computerAttributesIndex)
    {
      m_computerAttributes.push_back(computerAttributesJsonList[computerAttributesIndex].AsObject());
    }
    m_computerAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("directoryId"))
  {
    m_directoryId = jsonValue.GetString("directoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("organizationalUnitDistinguishedName"))
  {
    m_organizationalUnitDistinguishedName = jsonValue.GetString("organizationalUnitDistinguishedName");

    m_organizationalUnitDistinguishedNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ActiveDirectoryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_computerAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computerAttributesJsonList(m_computerAttributes.size());
   for(unsigned computerAttributesIndex = 0; computerAttributesIndex < computerAttributesJsonList.GetLength(); ++computerAttributesIndex)
   {
     computerAttributesJsonList[computerAttributesIndex].AsObject(m_computerAttributes[computerAttributesIndex].Jsonize());
   }
   payload.WithArray("computerAttributes", std::move(computerAttributesJsonList));

  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("directoryId", m_directoryId);

  }

  if(m_organizationalUnitDistinguishedNameHasBeenSet)
  {
   payload.WithString("organizationalUnitDistinguishedName", m_organizationalUnitDistinguishedName);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
