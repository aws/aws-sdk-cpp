﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/BrowserType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workspaces-web/model/PortalStatus.h>
#include <aws/workspaces-web/model/RendererType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The web portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/Portal">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACESWEB_API Portal
  {
  public:
    Portal();
    Portal(Aws::Utils::Json::JsonView jsonValue);
    Portal& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const{ return m_browserSettingsArn; }

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline bool BrowserSettingsArnHasBeenSet() const { return m_browserSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline void SetBrowserSettingsArn(const Aws::String& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = value; }

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline void SetBrowserSettingsArn(Aws::String&& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline void SetBrowserSettingsArn(const char* value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn.assign(value); }

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline Portal& WithBrowserSettingsArn(const Aws::String& value) { SetBrowserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline Portal& WithBrowserSettingsArn(Aws::String&& value) { SetBrowserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the browser settings that is associated with this web portal.</p>
     */
    inline Portal& WithBrowserSettingsArn(const char* value) { SetBrowserSettingsArn(value); return *this;}


    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline const BrowserType& GetBrowserType() const{ return m_browserType; }

    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline bool BrowserTypeHasBeenSet() const { return m_browserTypeHasBeenSet; }

    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline void SetBrowserType(const BrowserType& value) { m_browserTypeHasBeenSet = true; m_browserType = value; }

    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline void SetBrowserType(BrowserType&& value) { m_browserTypeHasBeenSet = true; m_browserType = std::move(value); }

    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline Portal& WithBrowserType(const BrowserType& value) { SetBrowserType(value); return *this;}

    /**
     * <p>The browser that users see when using a streaming session.</p>
     */
    inline Portal& WithBrowserType(BrowserType&& value) { SetBrowserType(std::move(value)); return *this;}


    /**
     * <p>The creation date of the web portal.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date of the web portal.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The creation date of the web portal.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date of the web portal.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date of the web portal.</p>
     */
    inline Portal& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date of the web portal.</p>
     */
    inline Portal& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The name of the web portal.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the web portal.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the web portal.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the web portal.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the web portal.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the web portal.</p>
     */
    inline Portal& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the web portal.</p>
     */
    inline Portal& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the web portal.</p>
     */
    inline Portal& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline const Aws::String& GetNetworkSettingsArn() const{ return m_networkSettingsArn; }

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline bool NetworkSettingsArnHasBeenSet() const { return m_networkSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline void SetNetworkSettingsArn(const Aws::String& value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn = value; }

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline void SetNetworkSettingsArn(Aws::String&& value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline void SetNetworkSettingsArn(const char* value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn.assign(value); }

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline Portal& WithNetworkSettingsArn(const Aws::String& value) { SetNetworkSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline Portal& WithNetworkSettingsArn(Aws::String&& value) { SetNetworkSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline Portal& WithNetworkSettingsArn(const char* value) { SetNetworkSettingsArn(value); return *this;}


    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline bool PortalArnHasBeenSet() const { return m_portalArnHasBeenSet; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const Aws::String& value) { m_portalArnHasBeenSet = true; m_portalArn = value; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(Aws::String&& value) { m_portalArnHasBeenSet = true; m_portalArn = std::move(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const char* value) { m_portalArnHasBeenSet = true; m_portalArn.assign(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline Portal& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline Portal& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline Portal& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}


    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline const Aws::String& GetPortalEndpoint() const{ return m_portalEndpoint; }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline bool PortalEndpointHasBeenSet() const { return m_portalEndpointHasBeenSet; }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline void SetPortalEndpoint(const Aws::String& value) { m_portalEndpointHasBeenSet = true; m_portalEndpoint = value; }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline void SetPortalEndpoint(Aws::String&& value) { m_portalEndpointHasBeenSet = true; m_portalEndpoint = std::move(value); }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline void SetPortalEndpoint(const char* value) { m_portalEndpointHasBeenSet = true; m_portalEndpoint.assign(value); }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline Portal& WithPortalEndpoint(const Aws::String& value) { SetPortalEndpoint(value); return *this;}

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline Portal& WithPortalEndpoint(Aws::String&& value) { SetPortalEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline Portal& WithPortalEndpoint(const char* value) { SetPortalEndpoint(value); return *this;}


    /**
     * <p>The status of the web portal.</p>
     */
    inline const PortalStatus& GetPortalStatus() const{ return m_portalStatus; }

    /**
     * <p>The status of the web portal.</p>
     */
    inline bool PortalStatusHasBeenSet() const { return m_portalStatusHasBeenSet; }

    /**
     * <p>The status of the web portal.</p>
     */
    inline void SetPortalStatus(const PortalStatus& value) { m_portalStatusHasBeenSet = true; m_portalStatus = value; }

    /**
     * <p>The status of the web portal.</p>
     */
    inline void SetPortalStatus(PortalStatus&& value) { m_portalStatusHasBeenSet = true; m_portalStatus = std::move(value); }

    /**
     * <p>The status of the web portal.</p>
     */
    inline Portal& WithPortalStatus(const PortalStatus& value) { SetPortalStatus(value); return *this;}

    /**
     * <p>The status of the web portal.</p>
     */
    inline Portal& WithPortalStatus(PortalStatus&& value) { SetPortalStatus(std::move(value)); return *this;}


    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline const RendererType& GetRendererType() const{ return m_rendererType; }

    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline bool RendererTypeHasBeenSet() const { return m_rendererTypeHasBeenSet; }

    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline void SetRendererType(const RendererType& value) { m_rendererTypeHasBeenSet = true; m_rendererType = value; }

    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline void SetRendererType(RendererType&& value) { m_rendererTypeHasBeenSet = true; m_rendererType = std::move(value); }

    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline Portal& WithRendererType(const RendererType& value) { SetRendererType(value); return *this;}

    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline Portal& WithRendererType(RendererType&& value) { SetRendererType(std::move(value)); return *this;}


    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline Portal& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline Portal& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>A message that explains why the web portal is in its current status.</p>
     */
    inline Portal& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline Portal& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline Portal& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline Portal& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}


    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline const Aws::String& GetUserSettingsArn() const{ return m_userSettingsArn; }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline bool UserSettingsArnHasBeenSet() const { return m_userSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline void SetUserSettingsArn(const Aws::String& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = value; }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline void SetUserSettingsArn(Aws::String&& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline void SetUserSettingsArn(const char* value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn.assign(value); }

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline Portal& WithUserSettingsArn(const Aws::String& value) { SetUserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline Portal& WithUserSettingsArn(Aws::String&& value) { SetUserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trust store that is associated with the web portal.</p>
     */
    inline Portal& WithUserSettingsArn(const char* value) { SetUserSettingsArn(value); return *this;}

  private:

    Aws::String m_browserSettingsArn;
    bool m_browserSettingsArnHasBeenSet;

    BrowserType m_browserType;
    bool m_browserTypeHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::String m_networkSettingsArn;
    bool m_networkSettingsArnHasBeenSet;

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet;

    Aws::String m_portalEndpoint;
    bool m_portalEndpointHasBeenSet;

    PortalStatus m_portalStatus;
    bool m_portalStatusHasBeenSet;

    RendererType m_rendererType;
    bool m_rendererTypeHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet;

    Aws::String m_userSettingsArn;
    bool m_userSettingsArnHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
