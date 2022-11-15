/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/BrowserSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

BrowserSettings::BrowserSettings() : 
    m_associatedPortalArnsHasBeenSet(false),
    m_browserPolicyHasBeenSet(false),
    m_browserSettingsArnHasBeenSet(false)
{
}

BrowserSettings::BrowserSettings(JsonView jsonValue) : 
    m_associatedPortalArnsHasBeenSet(false),
    m_browserPolicyHasBeenSet(false),
    m_browserSettingsArnHasBeenSet(false)
{
  *this = jsonValue;
}

BrowserSettings& BrowserSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associatedPortalArns"))
  {
    Aws::Utils::Array<JsonView> associatedPortalArnsJsonList = jsonValue.GetArray("associatedPortalArns");
    for(unsigned associatedPortalArnsIndex = 0; associatedPortalArnsIndex < associatedPortalArnsJsonList.GetLength(); ++associatedPortalArnsIndex)
    {
      m_associatedPortalArns.push_back(associatedPortalArnsJsonList[associatedPortalArnsIndex].AsString());
    }
    m_associatedPortalArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("browserPolicy"))
  {
    m_browserPolicy = jsonValue.GetString("browserPolicy");

    m_browserPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("browserSettingsArn"))
  {
    m_browserSettingsArn = jsonValue.GetString("browserSettingsArn");

    m_browserSettingsArnHasBeenSet = true;
  }

  return *this;
}

JsonValue BrowserSettings::Jsonize() const
{
  JsonValue payload;

  if(m_associatedPortalArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedPortalArnsJsonList(m_associatedPortalArns.size());
   for(unsigned associatedPortalArnsIndex = 0; associatedPortalArnsIndex < associatedPortalArnsJsonList.GetLength(); ++associatedPortalArnsIndex)
   {
     associatedPortalArnsJsonList[associatedPortalArnsIndex].AsString(m_associatedPortalArns[associatedPortalArnsIndex]);
   }
   payload.WithArray("associatedPortalArns", std::move(associatedPortalArnsJsonList));

  }

  if(m_browserPolicyHasBeenSet)
  {
   payload.WithString("browserPolicy", m_browserPolicy);

  }

  if(m_browserSettingsArnHasBeenSet)
  {
   payload.WithString("browserSettingsArn", m_browserSettingsArn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
