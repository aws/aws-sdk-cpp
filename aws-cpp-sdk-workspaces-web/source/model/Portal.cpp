/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/Portal.h>
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

Portal::Portal() : 
    m_browserSettingsArnHasBeenSet(false),
    m_browserType(BrowserType::NOT_SET),
    m_browserTypeHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_networkSettingsArnHasBeenSet(false),
    m_portalArnHasBeenSet(false),
    m_portalEndpointHasBeenSet(false),
    m_portalStatus(PortalStatus::NOT_SET),
    m_portalStatusHasBeenSet(false),
    m_rendererType(RendererType::NOT_SET),
    m_rendererTypeHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_trustStoreArnHasBeenSet(false),
    m_userAccessLoggingSettingsArnHasBeenSet(false),
    m_userSettingsArnHasBeenSet(false)
{
}

Portal::Portal(JsonView jsonValue) : 
    m_browserSettingsArnHasBeenSet(false),
    m_browserType(BrowserType::NOT_SET),
    m_browserTypeHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_networkSettingsArnHasBeenSet(false),
    m_portalArnHasBeenSet(false),
    m_portalEndpointHasBeenSet(false),
    m_portalStatus(PortalStatus::NOT_SET),
    m_portalStatusHasBeenSet(false),
    m_rendererType(RendererType::NOT_SET),
    m_rendererTypeHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_trustStoreArnHasBeenSet(false),
    m_userAccessLoggingSettingsArnHasBeenSet(false),
    m_userSettingsArnHasBeenSet(false)
{
  *this = jsonValue;
}

Portal& Portal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("browserSettingsArn"))
  {
    m_browserSettingsArn = jsonValue.GetString("browserSettingsArn");

    m_browserSettingsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("browserType"))
  {
    m_browserType = BrowserTypeMapper::GetBrowserTypeForName(jsonValue.GetString("browserType"));

    m_browserTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkSettingsArn"))
  {
    m_networkSettingsArn = jsonValue.GetString("networkSettingsArn");

    m_networkSettingsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portalArn"))
  {
    m_portalArn = jsonValue.GetString("portalArn");

    m_portalArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portalEndpoint"))
  {
    m_portalEndpoint = jsonValue.GetString("portalEndpoint");

    m_portalEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portalStatus"))
  {
    m_portalStatus = PortalStatusMapper::GetPortalStatusForName(jsonValue.GetString("portalStatus"));

    m_portalStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rendererType"))
  {
    m_rendererType = RendererTypeMapper::GetRendererTypeForName(jsonValue.GetString("rendererType"));

    m_rendererTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trustStoreArn"))
  {
    m_trustStoreArn = jsonValue.GetString("trustStoreArn");

    m_trustStoreArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAccessLoggingSettingsArn"))
  {
    m_userAccessLoggingSettingsArn = jsonValue.GetString("userAccessLoggingSettingsArn");

    m_userAccessLoggingSettingsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userSettingsArn"))
  {
    m_userSettingsArn = jsonValue.GetString("userSettingsArn");

    m_userSettingsArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Portal::Jsonize() const
{
  JsonValue payload;

  if(m_browserSettingsArnHasBeenSet)
  {
   payload.WithString("browserSettingsArn", m_browserSettingsArn);

  }

  if(m_browserTypeHasBeenSet)
  {
   payload.WithString("browserType", BrowserTypeMapper::GetNameForBrowserType(m_browserType));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_networkSettingsArnHasBeenSet)
  {
   payload.WithString("networkSettingsArn", m_networkSettingsArn);

  }

  if(m_portalArnHasBeenSet)
  {
   payload.WithString("portalArn", m_portalArn);

  }

  if(m_portalEndpointHasBeenSet)
  {
   payload.WithString("portalEndpoint", m_portalEndpoint);

  }

  if(m_portalStatusHasBeenSet)
  {
   payload.WithString("portalStatus", PortalStatusMapper::GetNameForPortalStatus(m_portalStatus));
  }

  if(m_rendererTypeHasBeenSet)
  {
   payload.WithString("rendererType", RendererTypeMapper::GetNameForRendererType(m_rendererType));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_trustStoreArnHasBeenSet)
  {
   payload.WithString("trustStoreArn", m_trustStoreArn);

  }

  if(m_userAccessLoggingSettingsArnHasBeenSet)
  {
   payload.WithString("userAccessLoggingSettingsArn", m_userAccessLoggingSettingsArn);

  }

  if(m_userSettingsArnHasBeenSet)
  {
   payload.WithString("userSettingsArn", m_userSettingsArn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
