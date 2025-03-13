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
    AWS_APPFLOW_API SAPODataConnectorProfileProperties() = default;
    AWS_APPFLOW_API SAPODataConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SAPODataConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The location of the SAPOData resource. </p>
     */
    inline const Aws::String& GetApplicationHostUrl() const { return m_applicationHostUrl; }
    inline bool ApplicationHostUrlHasBeenSet() const { return m_applicationHostUrlHasBeenSet; }
    template<typename ApplicationHostUrlT = Aws::String>
    void SetApplicationHostUrl(ApplicationHostUrlT&& value) { m_applicationHostUrlHasBeenSet = true; m_applicationHostUrl = std::forward<ApplicationHostUrlT>(value); }
    template<typename ApplicationHostUrlT = Aws::String>
    SAPODataConnectorProfileProperties& WithApplicationHostUrl(ApplicationHostUrlT&& value) { SetApplicationHostUrl(std::forward<ApplicationHostUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The application path to catalog service. </p>
     */
    inline const Aws::String& GetApplicationServicePath() const { return m_applicationServicePath; }
    inline bool ApplicationServicePathHasBeenSet() const { return m_applicationServicePathHasBeenSet; }
    template<typename ApplicationServicePathT = Aws::String>
    void SetApplicationServicePath(ApplicationServicePathT&& value) { m_applicationServicePathHasBeenSet = true; m_applicationServicePath = std::forward<ApplicationServicePathT>(value); }
    template<typename ApplicationServicePathT = Aws::String>
    SAPODataConnectorProfileProperties& WithApplicationServicePath(ApplicationServicePathT&& value) { SetApplicationServicePath(std::forward<ApplicationServicePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port number of the SAPOData instance. </p>
     */
    inline int GetPortNumber() const { return m_portNumber; }
    inline bool PortNumberHasBeenSet() const { return m_portNumberHasBeenSet; }
    inline void SetPortNumber(int value) { m_portNumberHasBeenSet = true; m_portNumber = value; }
    inline SAPODataConnectorProfileProperties& WithPortNumber(int value) { SetPortNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The client number for the client creating the connection. </p>
     */
    inline const Aws::String& GetClientNumber() const { return m_clientNumber; }
    inline bool ClientNumberHasBeenSet() const { return m_clientNumberHasBeenSet; }
    template<typename ClientNumberT = Aws::String>
    void SetClientNumber(ClientNumberT&& value) { m_clientNumberHasBeenSet = true; m_clientNumber = std::forward<ClientNumberT>(value); }
    template<typename ClientNumberT = Aws::String>
    SAPODataConnectorProfileProperties& WithClientNumber(ClientNumberT&& value) { SetClientNumber(std::forward<ClientNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The logon language of SAPOData instance. </p>
     */
    inline const Aws::String& GetLogonLanguage() const { return m_logonLanguage; }
    inline bool LogonLanguageHasBeenSet() const { return m_logonLanguageHasBeenSet; }
    template<typename LogonLanguageT = Aws::String>
    void SetLogonLanguage(LogonLanguageT&& value) { m_logonLanguageHasBeenSet = true; m_logonLanguage = std::forward<LogonLanguageT>(value); }
    template<typename LogonLanguageT = Aws::String>
    SAPODataConnectorProfileProperties& WithLogonLanguage(LogonLanguageT&& value) { SetLogonLanguage(std::forward<LogonLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SAPOData Private Link service name to be used for private data
     * transfers. </p>
     */
    inline const Aws::String& GetPrivateLinkServiceName() const { return m_privateLinkServiceName; }
    inline bool PrivateLinkServiceNameHasBeenSet() const { return m_privateLinkServiceNameHasBeenSet; }
    template<typename PrivateLinkServiceNameT = Aws::String>
    void SetPrivateLinkServiceName(PrivateLinkServiceNameT&& value) { m_privateLinkServiceNameHasBeenSet = true; m_privateLinkServiceName = std::forward<PrivateLinkServiceNameT>(value); }
    template<typename PrivateLinkServiceNameT = Aws::String>
    SAPODataConnectorProfileProperties& WithPrivateLinkServiceName(PrivateLinkServiceNameT&& value) { SetPrivateLinkServiceName(std::forward<PrivateLinkServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SAPOData OAuth properties required for OAuth type authentication. </p>
     */
    inline const OAuthProperties& GetOAuthProperties() const { return m_oAuthProperties; }
    inline bool OAuthPropertiesHasBeenSet() const { return m_oAuthPropertiesHasBeenSet; }
    template<typename OAuthPropertiesT = OAuthProperties>
    void SetOAuthProperties(OAuthPropertiesT&& value) { m_oAuthPropertiesHasBeenSet = true; m_oAuthProperties = std::forward<OAuthPropertiesT>(value); }
    template<typename OAuthPropertiesT = OAuthProperties>
    SAPODataConnectorProfileProperties& WithOAuthProperties(OAuthPropertiesT&& value) { SetOAuthProperties(std::forward<OAuthPropertiesT>(value)); return *this;}
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
    inline bool GetDisableSSO() const { return m_disableSSO; }
    inline bool DisableSSOHasBeenSet() const { return m_disableSSOHasBeenSet; }
    inline void SetDisableSSO(bool value) { m_disableSSOHasBeenSet = true; m_disableSSO = value; }
    inline SAPODataConnectorProfileProperties& WithDisableSSO(bool value) { SetDisableSSO(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationHostUrl;
    bool m_applicationHostUrlHasBeenSet = false;

    Aws::String m_applicationServicePath;
    bool m_applicationServicePathHasBeenSet = false;

    int m_portNumber{0};
    bool m_portNumberHasBeenSet = false;

    Aws::String m_clientNumber;
    bool m_clientNumberHasBeenSet = false;

    Aws::String m_logonLanguage;
    bool m_logonLanguageHasBeenSet = false;

    Aws::String m_privateLinkServiceName;
    bool m_privateLinkServiceNameHasBeenSet = false;

    OAuthProperties m_oAuthProperties;
    bool m_oAuthPropertiesHasBeenSet = false;

    bool m_disableSSO{false};
    bool m_disableSSOHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
