/**
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
   * <p>The summary of the portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/PortalSummary">AWS
   * API Reference</a></p>
   */
  class PortalSummary
  {
  public:
    AWS_WORKSPACESWEB_API PortalSummary();
    AWS_WORKSPACESWEB_API PortalSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API PortalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the browser settings that is associated with the web portal.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const{ return m_browserSettingsArn; }

    /**
     * <p>The ARN of the browser settings that is associated with the web portal.</p>
     */
    inline bool BrowserSettingsArnHasBeenSet() const { return m_browserSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the browser settings that is associated with the web portal.</p>
     */
    inline void SetBrowserSettingsArn(const Aws::String& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = value; }

    /**
     * <p>The ARN of the browser settings that is associated with the web portal.</p>
     */
    inline void SetBrowserSettingsArn(Aws::String&& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the browser settings that is associated with the web portal.</p>
     */
    inline void SetBrowserSettingsArn(const char* value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn.assign(value); }

    /**
     * <p>The ARN of the browser settings that is associated with the web portal.</p>
     */
    inline PortalSummary& WithBrowserSettingsArn(const Aws::String& value) { SetBrowserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the browser settings that is associated with the web portal.</p>
     */
    inline PortalSummary& WithBrowserSettingsArn(Aws::String&& value) { SetBrowserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the browser settings that is associated with the web portal.</p>
     */
    inline PortalSummary& WithBrowserSettingsArn(const char* value) { SetBrowserSettingsArn(value); return *this;}


    /**
     * <p>The browser type of the web portal.</p>
     */
    inline const BrowserType& GetBrowserType() const{ return m_browserType; }

    /**
     * <p>The browser type of the web portal.</p>
     */
    inline bool BrowserTypeHasBeenSet() const { return m_browserTypeHasBeenSet; }

    /**
     * <p>The browser type of the web portal.</p>
     */
    inline void SetBrowserType(const BrowserType& value) { m_browserTypeHasBeenSet = true; m_browserType = value; }

    /**
     * <p>The browser type of the web portal.</p>
     */
    inline void SetBrowserType(BrowserType&& value) { m_browserTypeHasBeenSet = true; m_browserType = std::move(value); }

    /**
     * <p>The browser type of the web portal.</p>
     */
    inline PortalSummary& WithBrowserType(const BrowserType& value) { SetBrowserType(value); return *this;}

    /**
     * <p>The browser type of the web portal.</p>
     */
    inline PortalSummary& WithBrowserType(BrowserType&& value) { SetBrowserType(std::move(value)); return *this;}


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
    inline PortalSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date of the web portal.</p>
     */
    inline PortalSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


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
    inline PortalSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the web portal.</p>
     */
    inline PortalSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the web portal.</p>
     */
    inline PortalSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


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
    inline PortalSummary& WithNetworkSettingsArn(const Aws::String& value) { SetNetworkSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline PortalSummary& WithNetworkSettingsArn(Aws::String&& value) { SetNetworkSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network settings that is associated with the web portal.</p>
     */
    inline PortalSummary& WithNetworkSettingsArn(const char* value) { SetNetworkSettingsArn(value); return *this;}


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
    inline PortalSummary& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline PortalSummary& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline PortalSummary& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}


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
    inline PortalSummary& WithPortalEndpoint(const Aws::String& value) { SetPortalEndpoint(value); return *this;}

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline PortalSummary& WithPortalEndpoint(Aws::String&& value) { SetPortalEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline PortalSummary& WithPortalEndpoint(const char* value) { SetPortalEndpoint(value); return *this;}


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
    inline PortalSummary& WithPortalStatus(const PortalStatus& value) { SetPortalStatus(value); return *this;}

    /**
     * <p>The status of the web portal.</p>
     */
    inline PortalSummary& WithPortalStatus(PortalStatus&& value) { SetPortalStatus(std::move(value)); return *this;}


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
    inline PortalSummary& WithRendererType(const RendererType& value) { SetRendererType(value); return *this;}

    /**
     * <p>The renderer that is used in streaming sessions.</p>
     */
    inline PortalSummary& WithRendererType(RendererType&& value) { SetRendererType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the trust that is associated with this web portal.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }

    /**
     * <p>The ARN of the trust that is associated with this web portal.</p>
     */
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }

    /**
     * <p>The ARN of the trust that is associated with this web portal.</p>
     */
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }

    /**
     * <p>The ARN of the trust that is associated with this web portal.</p>
     */
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }

    /**
     * <p>The ARN of the trust that is associated with this web portal.</p>
     */
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }

    /**
     * <p>The ARN of the trust that is associated with this web portal.</p>
     */
    inline PortalSummary& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The ARN of the trust that is associated with this web portal.</p>
     */
    inline PortalSummary& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trust that is associated with this web portal.</p>
     */
    inline PortalSummary& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}


    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline const Aws::String& GetUserAccessLoggingSettingsArn() const{ return m_userAccessLoggingSettingsArn; }

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline bool UserAccessLoggingSettingsArnHasBeenSet() const { return m_userAccessLoggingSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(const Aws::String& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = value; }

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(Aws::String&& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(const char* value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn.assign(value); }

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline PortalSummary& WithUserAccessLoggingSettingsArn(const Aws::String& value) { SetUserAccessLoggingSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline PortalSummary& WithUserAccessLoggingSettingsArn(Aws::String&& value) { SetUserAccessLoggingSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user access logging settings that is associated with the web
     * portal.</p>
     */
    inline PortalSummary& WithUserAccessLoggingSettingsArn(const char* value) { SetUserAccessLoggingSettingsArn(value); return *this;}


    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline const Aws::String& GetUserSettingsArn() const{ return m_userSettingsArn; }

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline bool UserSettingsArnHasBeenSet() const { return m_userSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline void SetUserSettingsArn(const Aws::String& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = value; }

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline void SetUserSettingsArn(Aws::String&& value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline void SetUserSettingsArn(const char* value) { m_userSettingsArnHasBeenSet = true; m_userSettingsArn.assign(value); }

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline PortalSummary& WithUserSettingsArn(const Aws::String& value) { SetUserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline PortalSummary& WithUserSettingsArn(Aws::String&& value) { SetUserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user settings that is associated with the web portal.</p>
     */
    inline PortalSummary& WithUserSettingsArn(const char* value) { SetUserSettingsArn(value); return *this;}

  private:

    Aws::String m_browserSettingsArn;
    bool m_browserSettingsArnHasBeenSet = false;

    BrowserType m_browserType;
    bool m_browserTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_networkSettingsArn;
    bool m_networkSettingsArnHasBeenSet = false;

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet = false;

    Aws::String m_portalEndpoint;
    bool m_portalEndpointHasBeenSet = false;

    PortalStatus m_portalStatus;
    bool m_portalStatusHasBeenSet = false;

    RendererType m_rendererType;
    bool m_rendererTypeHasBeenSet = false;

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    Aws::String m_userAccessLoggingSettingsArn;
    bool m_userAccessLoggingSettingsArnHasBeenSet = false;

    Aws::String m_userSettingsArn;
    bool m_userSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
