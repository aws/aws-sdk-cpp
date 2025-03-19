/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/HttpHeader.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Contextual user data used for evaluating the risk of an authentication event
   * by user pool threat protection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ContextDataType">AWS
   * API Reference</a></p>
   */
  class ContextDataType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ContextDataType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API ContextDataType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API ContextDataType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source IP address of your user's device.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    ContextDataType& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your application's service endpoint.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    ContextDataType& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of your application's service endpoint.</p>
     */
    inline const Aws::String& GetServerPath() const { return m_serverPath; }
    inline bool ServerPathHasBeenSet() const { return m_serverPathHasBeenSet; }
    template<typename ServerPathT = Aws::String>
    void SetServerPath(ServerPathT&& value) { m_serverPathHasBeenSet = true; m_serverPath = std::forward<ServerPathT>(value); }
    template<typename ServerPathT = Aws::String>
    ContextDataType& WithServerPath(ServerPathT&& value) { SetServerPath(std::forward<ServerPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP headers from your user's authentication request.</p>
     */
    inline const Aws::Vector<HttpHeader>& GetHttpHeaders() const { return m_httpHeaders; }
    inline bool HttpHeadersHasBeenSet() const { return m_httpHeadersHasBeenSet; }
    template<typename HttpHeadersT = Aws::Vector<HttpHeader>>
    void SetHttpHeaders(HttpHeadersT&& value) { m_httpHeadersHasBeenSet = true; m_httpHeaders = std::forward<HttpHeadersT>(value); }
    template<typename HttpHeadersT = Aws::Vector<HttpHeader>>
    ContextDataType& WithHttpHeaders(HttpHeadersT&& value) { SetHttpHeaders(std::forward<HttpHeadersT>(value)); return *this;}
    template<typename HttpHeadersT = HttpHeader>
    ContextDataType& AddHttpHeaders(HttpHeadersT&& value) { m_httpHeadersHasBeenSet = true; m_httpHeaders.emplace_back(std::forward<HttpHeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Encoded device-fingerprint details that your app collected with the Amazon
     * Cognito context data collection library. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-adaptive-authentication.html#user-pool-settings-adaptive-authentication-device-fingerprint">Adding
     * user device and session data to API requests</a>.</p>
     */
    inline const Aws::String& GetEncodedData() const { return m_encodedData; }
    inline bool EncodedDataHasBeenSet() const { return m_encodedDataHasBeenSet; }
    template<typename EncodedDataT = Aws::String>
    void SetEncodedData(EncodedDataT&& value) { m_encodedDataHasBeenSet = true; m_encodedData = std::forward<EncodedDataT>(value); }
    template<typename EncodedDataT = Aws::String>
    ContextDataType& WithEncodedData(EncodedDataT&& value) { SetEncodedData(std::forward<EncodedDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_serverPath;
    bool m_serverPathHasBeenSet = false;

    Aws::Vector<HttpHeader> m_httpHeaders;
    bool m_httpHeadersHasBeenSet = false;

    Aws::String m_encodedData;
    bool m_encodedDataHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
