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


    /**
     * <p> The location of the SAPOData resource. </p>
     */
    inline const Aws::String& GetApplicationHostUrl() const{ return m_applicationHostUrl; }

    /**
     * <p> The location of the SAPOData resource. </p>
     */
    inline bool ApplicationHostUrlHasBeenSet() const { return m_applicationHostUrlHasBeenSet; }

    /**
     * <p> The location of the SAPOData resource. </p>
     */
    inline void SetApplicationHostUrl(const Aws::String& value) { m_applicationHostUrlHasBeenSet = true; m_applicationHostUrl = value; }

    /**
     * <p> The location of the SAPOData resource. </p>
     */
    inline void SetApplicationHostUrl(Aws::String&& value) { m_applicationHostUrlHasBeenSet = true; m_applicationHostUrl = std::move(value); }

    /**
     * <p> The location of the SAPOData resource. </p>
     */
    inline void SetApplicationHostUrl(const char* value) { m_applicationHostUrlHasBeenSet = true; m_applicationHostUrl.assign(value); }

    /**
     * <p> The location of the SAPOData resource. </p>
     */
    inline SAPODataConnectorProfileProperties& WithApplicationHostUrl(const Aws::String& value) { SetApplicationHostUrl(value); return *this;}

    /**
     * <p> The location of the SAPOData resource. </p>
     */
    inline SAPODataConnectorProfileProperties& WithApplicationHostUrl(Aws::String&& value) { SetApplicationHostUrl(std::move(value)); return *this;}

    /**
     * <p> The location of the SAPOData resource. </p>
     */
    inline SAPODataConnectorProfileProperties& WithApplicationHostUrl(const char* value) { SetApplicationHostUrl(value); return *this;}


    /**
     * <p> The application path to catalog service. </p>
     */
    inline const Aws::String& GetApplicationServicePath() const{ return m_applicationServicePath; }

    /**
     * <p> The application path to catalog service. </p>
     */
    inline bool ApplicationServicePathHasBeenSet() const { return m_applicationServicePathHasBeenSet; }

    /**
     * <p> The application path to catalog service. </p>
     */
    inline void SetApplicationServicePath(const Aws::String& value) { m_applicationServicePathHasBeenSet = true; m_applicationServicePath = value; }

    /**
     * <p> The application path to catalog service. </p>
     */
    inline void SetApplicationServicePath(Aws::String&& value) { m_applicationServicePathHasBeenSet = true; m_applicationServicePath = std::move(value); }

    /**
     * <p> The application path to catalog service. </p>
     */
    inline void SetApplicationServicePath(const char* value) { m_applicationServicePathHasBeenSet = true; m_applicationServicePath.assign(value); }

    /**
     * <p> The application path to catalog service. </p>
     */
    inline SAPODataConnectorProfileProperties& WithApplicationServicePath(const Aws::String& value) { SetApplicationServicePath(value); return *this;}

    /**
     * <p> The application path to catalog service. </p>
     */
    inline SAPODataConnectorProfileProperties& WithApplicationServicePath(Aws::String&& value) { SetApplicationServicePath(std::move(value)); return *this;}

    /**
     * <p> The application path to catalog service. </p>
     */
    inline SAPODataConnectorProfileProperties& WithApplicationServicePath(const char* value) { SetApplicationServicePath(value); return *this;}


    /**
     * <p> The port number of the SAPOData instance. </p>
     */
    inline int GetPortNumber() const{ return m_portNumber; }

    /**
     * <p> The port number of the SAPOData instance. </p>
     */
    inline bool PortNumberHasBeenSet() const { return m_portNumberHasBeenSet; }

    /**
     * <p> The port number of the SAPOData instance. </p>
     */
    inline void SetPortNumber(int value) { m_portNumberHasBeenSet = true; m_portNumber = value; }

    /**
     * <p> The port number of the SAPOData instance. </p>
     */
    inline SAPODataConnectorProfileProperties& WithPortNumber(int value) { SetPortNumber(value); return *this;}


    /**
     * <p> The client number for the client creating the connection. </p>
     */
    inline const Aws::String& GetClientNumber() const{ return m_clientNumber; }

    /**
     * <p> The client number for the client creating the connection. </p>
     */
    inline bool ClientNumberHasBeenSet() const { return m_clientNumberHasBeenSet; }

    /**
     * <p> The client number for the client creating the connection. </p>
     */
    inline void SetClientNumber(const Aws::String& value) { m_clientNumberHasBeenSet = true; m_clientNumber = value; }

    /**
     * <p> The client number for the client creating the connection. </p>
     */
    inline void SetClientNumber(Aws::String&& value) { m_clientNumberHasBeenSet = true; m_clientNumber = std::move(value); }

    /**
     * <p> The client number for the client creating the connection. </p>
     */
    inline void SetClientNumber(const char* value) { m_clientNumberHasBeenSet = true; m_clientNumber.assign(value); }

    /**
     * <p> The client number for the client creating the connection. </p>
     */
    inline SAPODataConnectorProfileProperties& WithClientNumber(const Aws::String& value) { SetClientNumber(value); return *this;}

    /**
     * <p> The client number for the client creating the connection. </p>
     */
    inline SAPODataConnectorProfileProperties& WithClientNumber(Aws::String&& value) { SetClientNumber(std::move(value)); return *this;}

    /**
     * <p> The client number for the client creating the connection. </p>
     */
    inline SAPODataConnectorProfileProperties& WithClientNumber(const char* value) { SetClientNumber(value); return *this;}


    /**
     * <p> The logon language of SAPOData instance. </p>
     */
    inline const Aws::String& GetLogonLanguage() const{ return m_logonLanguage; }

    /**
     * <p> The logon language of SAPOData instance. </p>
     */
    inline bool LogonLanguageHasBeenSet() const { return m_logonLanguageHasBeenSet; }

    /**
     * <p> The logon language of SAPOData instance. </p>
     */
    inline void SetLogonLanguage(const Aws::String& value) { m_logonLanguageHasBeenSet = true; m_logonLanguage = value; }

    /**
     * <p> The logon language of SAPOData instance. </p>
     */
    inline void SetLogonLanguage(Aws::String&& value) { m_logonLanguageHasBeenSet = true; m_logonLanguage = std::move(value); }

    /**
     * <p> The logon language of SAPOData instance. </p>
     */
    inline void SetLogonLanguage(const char* value) { m_logonLanguageHasBeenSet = true; m_logonLanguage.assign(value); }

    /**
     * <p> The logon language of SAPOData instance. </p>
     */
    inline SAPODataConnectorProfileProperties& WithLogonLanguage(const Aws::String& value) { SetLogonLanguage(value); return *this;}

    /**
     * <p> The logon language of SAPOData instance. </p>
     */
    inline SAPODataConnectorProfileProperties& WithLogonLanguage(Aws::String&& value) { SetLogonLanguage(std::move(value)); return *this;}

    /**
     * <p> The logon language of SAPOData instance. </p>
     */
    inline SAPODataConnectorProfileProperties& WithLogonLanguage(const char* value) { SetLogonLanguage(value); return *this;}


    /**
     * <p> The SAPOData Private Link service name to be used for private data
     * transfers. </p>
     */
    inline const Aws::String& GetPrivateLinkServiceName() const{ return m_privateLinkServiceName; }

    /**
     * <p> The SAPOData Private Link service name to be used for private data
     * transfers. </p>
     */
    inline bool PrivateLinkServiceNameHasBeenSet() const { return m_privateLinkServiceNameHasBeenSet; }

    /**
     * <p> The SAPOData Private Link service name to be used for private data
     * transfers. </p>
     */
    inline void SetPrivateLinkServiceName(const Aws::String& value) { m_privateLinkServiceNameHasBeenSet = true; m_privateLinkServiceName = value; }

    /**
     * <p> The SAPOData Private Link service name to be used for private data
     * transfers. </p>
     */
    inline void SetPrivateLinkServiceName(Aws::String&& value) { m_privateLinkServiceNameHasBeenSet = true; m_privateLinkServiceName = std::move(value); }

    /**
     * <p> The SAPOData Private Link service name to be used for private data
     * transfers. </p>
     */
    inline void SetPrivateLinkServiceName(const char* value) { m_privateLinkServiceNameHasBeenSet = true; m_privateLinkServiceName.assign(value); }

    /**
     * <p> The SAPOData Private Link service name to be used for private data
     * transfers. </p>
     */
    inline SAPODataConnectorProfileProperties& WithPrivateLinkServiceName(const Aws::String& value) { SetPrivateLinkServiceName(value); return *this;}

    /**
     * <p> The SAPOData Private Link service name to be used for private data
     * transfers. </p>
     */
    inline SAPODataConnectorProfileProperties& WithPrivateLinkServiceName(Aws::String&& value) { SetPrivateLinkServiceName(std::move(value)); return *this;}

    /**
     * <p> The SAPOData Private Link service name to be used for private data
     * transfers. </p>
     */
    inline SAPODataConnectorProfileProperties& WithPrivateLinkServiceName(const char* value) { SetPrivateLinkServiceName(value); return *this;}


    /**
     * <p> The SAPOData OAuth properties required for OAuth type authentication. </p>
     */
    inline const OAuthProperties& GetOAuthProperties() const{ return m_oAuthProperties; }

    /**
     * <p> The SAPOData OAuth properties required for OAuth type authentication. </p>
     */
    inline bool OAuthPropertiesHasBeenSet() const { return m_oAuthPropertiesHasBeenSet; }

    /**
     * <p> The SAPOData OAuth properties required for OAuth type authentication. </p>
     */
    inline void SetOAuthProperties(const OAuthProperties& value) { m_oAuthPropertiesHasBeenSet = true; m_oAuthProperties = value; }

    /**
     * <p> The SAPOData OAuth properties required for OAuth type authentication. </p>
     */
    inline void SetOAuthProperties(OAuthProperties&& value) { m_oAuthPropertiesHasBeenSet = true; m_oAuthProperties = std::move(value); }

    /**
     * <p> The SAPOData OAuth properties required for OAuth type authentication. </p>
     */
    inline SAPODataConnectorProfileProperties& WithOAuthProperties(const OAuthProperties& value) { SetOAuthProperties(value); return *this;}

    /**
     * <p> The SAPOData OAuth properties required for OAuth type authentication. </p>
     */
    inline SAPODataConnectorProfileProperties& WithOAuthProperties(OAuthProperties&& value) { SetOAuthProperties(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
