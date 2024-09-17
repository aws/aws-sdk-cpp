/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/OAuthProperties.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific profile properties required when using SAPOData.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SAPODataConnectorProfileProperties">AWS
   * API Reference</a></p>
   */
  class SAPODataConnectorProfileProperties
  {
  public:
    AWS_APPFLOW_API SAPODataConnectorProfileProperties();
    AWS_APPFLOW_API SAPODataConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SAPODataConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The location of the SAPOData resource. </p>
     */
    inline const Aws::String& GetApplicationHostUrl() const{ return m_applicationHostUrl; }
    inline bool ApplicationHostUrlHasBeenSet() const { return m_applicationHostUrlHasBeenSet; }
    inline void SetApplicationHostUrl(const Aws::String& value) { m_applicationHostUrlHasBeenSet = true; m_applicationHostUrl = value; }
    inline void SetApplicationHostUrl(Aws::String&& value) { m_applicationHostUrlHasBeenSet = true; m_applicationHostUrl = std::move(value); }
    inline void SetApplicationHostUrl(const char* value) { m_applicationHostUrlHasBeenSet = true; m_applicationHostUrl.assign(value); }
    inline SAPODataConnectorProfileProperties& WithApplicationHostUrl(const Aws::String& value) { SetApplicationHostUrl(value); return *this;}
    inline SAPODataConnectorProfileProperties& WithApplicationHostUrl(Aws::String&& value) { SetApplicationHostUrl(std::move(value)); return *this;}
    inline SAPODataConnectorProfileProperties& WithApplicationHostUrl(const char* value) { SetApplicationHostUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The application path to catalog service. </p>
     */
    inline const Aws::String& GetApplicationServicePath() const{ return m_applicationServicePath; }
    inline bool ApplicationServicePathHasBeenSet() const { return m_applicationServicePathHasBeenSet; }
    inline void SetApplicationServicePath(const Aws::String& value) { m_applicationServicePathHasBeenSet = true; m_applicationServicePath = value; }
    inline void SetApplicationServicePath(Aws::String&& value) { m_applicationServicePathHasBeenSet = true; m_applicationServicePath = std::move(value); }
    inline void SetApplicationServicePath(const char* value) { m_applicationServicePathHasBeenSet = true; m_applicationServicePath.assign(value); }
    inline SAPODataConnectorProfileProperties& WithApplicationServicePath(const Aws::String& value) { SetApplicationServicePath(value); return *this;}
    inline SAPODataConnectorProfileProperties& WithApplicationServicePath(Aws::String&& value) { SetApplicationServicePath(std::move(value)); return *this;}
    inline SAPODataConnectorProfileProperties& WithApplicationServicePath(const char* value) { SetApplicationServicePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port number of the SAPOData instance. </p>
     */
    inline int GetPortNumber() const{ return m_portNumber; }
    inline bool PortNumberHasBeenSet() const { return m_portNumberHasBeenSet; }
    inline void SetPortNumber(int value) { m_portNumberHasBeenSet = true; m_portNumber = value; }
    inline SAPODataConnectorProfileProperties& WithPortNumber(int value) { SetPortNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The client number for the client creating the connection. </p>
     */
    inline const Aws::String& GetClientNumber() const{ return m_clientNumber; }
    inline bool ClientNumberHasBeenSet() const { return m_clientNumberHasBeenSet; }
    inline void SetClientNumber(const Aws::String& value) { m_clientNumberHasBeenSet = true; m_clientNumber = value; }
    inline void SetClientNumber(Aws::String&& value) { m_clientNumberHasBeenSet = true; m_clientNumber = std::move(value); }
    inline void SetClientNumber(const char* value) { m_clientNumberHasBeenSet = true; m_clientNumber.assign(value); }
    inline SAPODataConnectorProfileProperties& WithClientNumber(const Aws::String& value) { SetClientNumber(value); return *this;}
    inline SAPODataConnectorProfileProperties& WithClientNumber(Aws::String&& value) { SetClientNumber(std::move(value)); return *this;}
    inline SAPODataConnectorProfileProperties& WithClientNumber(const char* value) { SetClientNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The logon language of SAPOData instance. </p>
     */
    inline const Aws::String& GetLogonLanguage() const{ return m_logonLanguage; }
    inline bool LogonLanguageHasBeenSet() const { return m_logonLanguageHasBeenSet; }
    inline void SetLogonLanguage(const Aws::String& value) { m_logonLanguageHasBeenSet = true; m_logonLanguage = value; }
    inline void SetLogonLanguage(Aws::String&& value) { m_logonLanguageHasBeenSet = true; m_logonLanguage = std::move(value); }
    inline void SetLogonLanguage(const char* value) { m_logonLanguageHasBeenSet = true; m_logonLanguage.assign(value); }
    inline SAPODataConnectorProfileProperties& WithLogonLanguage(const Aws::String& value) { SetLogonLanguage(value); return *this;}
    inline SAPODataConnectorProfileProperties& WithLogonLanguage(Aws::String&& value) { SetLogonLanguage(std::move(value)); return *this;}
    inline SAPODataConnectorProfileProperties& WithLogonLanguage(const char* value) { SetLogonLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SAPOData Private Link service name to be used for private data
     * transfers. </p>
     */
    inline const Aws::String& GetPrivateLinkServiceName() const{ return m_privateLinkServiceName; }
    inline bool PrivateLinkServiceNameHasBeenSet() const { return m_privateLinkServiceNameHasBeenSet; }
    inline void SetPrivateLinkServiceName(const Aws::String& value) { m_privateLinkServiceNameHasBeenSet = true; m_privateLinkServiceName = value; }
    inline void SetPrivateLinkServiceName(Aws::String&& value) { m_privateLinkServiceNameHasBeenSet = true; m_privateLinkServiceName = std::move(value); }
    inline void SetPrivateLinkServiceName(const char* value) { m_privateLinkServiceNameHasBeenSet = true; m_privateLinkServiceName.assign(value); }
    inline SAPODataConnectorProfileProperties& WithPrivateLinkServiceName(const Aws::String& value) { SetPrivateLinkServiceName(value); return *this;}
    inline SAPODataConnectorProfileProperties& WithPrivateLinkServiceName(Aws::String&& value) { SetPrivateLinkServiceName(std::move(value)); return *this;}
    inline SAPODataConnectorProfileProperties& WithPrivateLinkServiceName(const char* value) { SetPrivateLinkServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SAPOData OAuth properties required for OAuth type authentication. </p>
     */
    inline const OAuthProperties& GetOAuthProperties() const{ return m_oAuthProperties; }
    inline bool OAuthPropertiesHasBeenSet() const { return m_oAuthPropertiesHasBeenSet; }
    inline void SetOAuthProperties(const OAuthProperties& value) { m_oAuthPropertiesHasBeenSet = true; m_oAuthProperties = value; }
    inline void SetOAuthProperties(OAuthProperties&& value) { m_oAuthPropertiesHasBeenSet = true; m_oAuthProperties = std::move(value); }
    inline SAPODataConnectorProfileProperties& WithOAuthProperties(const OAuthProperties& value) { SetOAuthProperties(value); return *this;}
    inline SAPODataConnectorProfileProperties& WithOAuthProperties(OAuthProperties&& value) { SetOAuthProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you set this parameter to <code>true</code>, Amazon AppFlow bypasses the
     * single sign-on (SSO) settings in your SAP account when it accesses your SAP
     * OData instance.</p> <p>Whether you need this option depends on the types of
     * credentials that you applied to your SAP OData connection profile. If your
     * profile uses basic authentication credentials, SAP SSO can prevent Amazon
     * AppFlow from connecting to your account with your username and password. In this
     * case, bypassing SSO makes it possible for Amazon AppFlow to connect
     * successfully. However, if your profile uses OAuth credentials, this parameter
     * has no affect.</p>
     */
    inline bool GetDisableSSO() const{ return m_disableSSO; }
    inline bool DisableSSOHasBeenSet() const { return m_disableSSOHasBeenSet; }
    inline void SetDisableSSO(bool value) { m_disableSSOHasBeenSet = true; m_disableSSO = value; }
    inline SAPODataConnectorProfileProperties& WithDisableSSO(bool value) { SetDisableSSO(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationHostUrl;
    bool m_applicationHostUrlHasBeenSet = false;

    Aws::String m_applicationServicePath;
    bool m_applicationServicePathHasBeenSet = false;

    int m_portNumber;
    bool m_portNumberHasBeenSet = false;

    Aws::String m_clientNumber;
    bool m_clientNumberHasBeenSet = false;

    Aws::String m_logonLanguage;
    bool m_logonLanguageHasBeenSet = false;

    Aws::String m_privateLinkServiceName;
    bool m_privateLinkServiceNameHasBeenSet = false;

    OAuthProperties m_oAuthProperties;
    bool m_oAuthPropertiesHasBeenSet = false;

    bool m_disableSSO;
    bool m_disableSSOHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
