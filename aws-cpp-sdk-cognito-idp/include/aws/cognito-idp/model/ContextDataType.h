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
   * <p>Contextual user data type used for evaluating the risk of an unexpected event
   * by Amazon Cognito advanced security.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ContextDataType">AWS
   * API Reference</a></p>
   */
  class ContextDataType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ContextDataType();
    AWS_COGNITOIDENTITYPROVIDER_API ContextDataType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API ContextDataType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source IP address of your user's device.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The source IP address of your user's device.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The source IP address of your user's device.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The source IP address of your user's device.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The source IP address of your user's device.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The source IP address of your user's device.</p>
     */
    inline ContextDataType& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The source IP address of your user's device.</p>
     */
    inline ContextDataType& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The source IP address of your user's device.</p>
     */
    inline ContextDataType& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>Your server endpoint where this API is invoked.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>Your server endpoint where this API is invoked.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>Your server endpoint where this API is invoked.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>Your server endpoint where this API is invoked.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>Your server endpoint where this API is invoked.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>Your server endpoint where this API is invoked.</p>
     */
    inline ContextDataType& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>Your server endpoint where this API is invoked.</p>
     */
    inline ContextDataType& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>Your server endpoint where this API is invoked.</p>
     */
    inline ContextDataType& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>Your server path where this API is invoked.</p>
     */
    inline const Aws::String& GetServerPath() const{ return m_serverPath; }

    /**
     * <p>Your server path where this API is invoked.</p>
     */
    inline bool ServerPathHasBeenSet() const { return m_serverPathHasBeenSet; }

    /**
     * <p>Your server path where this API is invoked.</p>
     */
    inline void SetServerPath(const Aws::String& value) { m_serverPathHasBeenSet = true; m_serverPath = value; }

    /**
     * <p>Your server path where this API is invoked.</p>
     */
    inline void SetServerPath(Aws::String&& value) { m_serverPathHasBeenSet = true; m_serverPath = std::move(value); }

    /**
     * <p>Your server path where this API is invoked.</p>
     */
    inline void SetServerPath(const char* value) { m_serverPathHasBeenSet = true; m_serverPath.assign(value); }

    /**
     * <p>Your server path where this API is invoked.</p>
     */
    inline ContextDataType& WithServerPath(const Aws::String& value) { SetServerPath(value); return *this;}

    /**
     * <p>Your server path where this API is invoked.</p>
     */
    inline ContextDataType& WithServerPath(Aws::String&& value) { SetServerPath(std::move(value)); return *this;}

    /**
     * <p>Your server path where this API is invoked.</p>
     */
    inline ContextDataType& WithServerPath(const char* value) { SetServerPath(value); return *this;}


    /**
     * <p>HttpHeaders received on your server in same order.</p>
     */
    inline const Aws::Vector<HttpHeader>& GetHttpHeaders() const{ return m_httpHeaders; }

    /**
     * <p>HttpHeaders received on your server in same order.</p>
     */
    inline bool HttpHeadersHasBeenSet() const { return m_httpHeadersHasBeenSet; }

    /**
     * <p>HttpHeaders received on your server in same order.</p>
     */
    inline void SetHttpHeaders(const Aws::Vector<HttpHeader>& value) { m_httpHeadersHasBeenSet = true; m_httpHeaders = value; }

    /**
     * <p>HttpHeaders received on your server in same order.</p>
     */
    inline void SetHttpHeaders(Aws::Vector<HttpHeader>&& value) { m_httpHeadersHasBeenSet = true; m_httpHeaders = std::move(value); }

    /**
     * <p>HttpHeaders received on your server in same order.</p>
     */
    inline ContextDataType& WithHttpHeaders(const Aws::Vector<HttpHeader>& value) { SetHttpHeaders(value); return *this;}

    /**
     * <p>HttpHeaders received on your server in same order.</p>
     */
    inline ContextDataType& WithHttpHeaders(Aws::Vector<HttpHeader>&& value) { SetHttpHeaders(std::move(value)); return *this;}

    /**
     * <p>HttpHeaders received on your server in same order.</p>
     */
    inline ContextDataType& AddHttpHeaders(const HttpHeader& value) { m_httpHeadersHasBeenSet = true; m_httpHeaders.push_back(value); return *this; }

    /**
     * <p>HttpHeaders received on your server in same order.</p>
     */
    inline ContextDataType& AddHttpHeaders(HttpHeader&& value) { m_httpHeadersHasBeenSet = true; m_httpHeaders.push_back(std::move(value)); return *this; }


    /**
     * <p>Encoded device-fingerprint details that your app collected with the Amazon
     * Cognito context data collection library. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-adaptive-authentication.html#user-pool-settings-adaptive-authentication-device-fingerprint">Adding
     * user device and session data to API requests</a>.</p>
     */
    inline const Aws::String& GetEncodedData() const{ return m_encodedData; }

    /**
     * <p>Encoded device-fingerprint details that your app collected with the Amazon
     * Cognito context data collection library. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-adaptive-authentication.html#user-pool-settings-adaptive-authentication-device-fingerprint">Adding
     * user device and session data to API requests</a>.</p>
     */
    inline bool EncodedDataHasBeenSet() const { return m_encodedDataHasBeenSet; }

    /**
     * <p>Encoded device-fingerprint details that your app collected with the Amazon
     * Cognito context data collection library. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-adaptive-authentication.html#user-pool-settings-adaptive-authentication-device-fingerprint">Adding
     * user device and session data to API requests</a>.</p>
     */
    inline void SetEncodedData(const Aws::String& value) { m_encodedDataHasBeenSet = true; m_encodedData = value; }

    /**
     * <p>Encoded device-fingerprint details that your app collected with the Amazon
     * Cognito context data collection library. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-adaptive-authentication.html#user-pool-settings-adaptive-authentication-device-fingerprint">Adding
     * user device and session data to API requests</a>.</p>
     */
    inline void SetEncodedData(Aws::String&& value) { m_encodedDataHasBeenSet = true; m_encodedData = std::move(value); }

    /**
     * <p>Encoded device-fingerprint details that your app collected with the Amazon
     * Cognito context data collection library. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-adaptive-authentication.html#user-pool-settings-adaptive-authentication-device-fingerprint">Adding
     * user device and session data to API requests</a>.</p>
     */
    inline void SetEncodedData(const char* value) { m_encodedDataHasBeenSet = true; m_encodedData.assign(value); }

    /**
     * <p>Encoded device-fingerprint details that your app collected with the Amazon
     * Cognito context data collection library. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-adaptive-authentication.html#user-pool-settings-adaptive-authentication-device-fingerprint">Adding
     * user device and session data to API requests</a>.</p>
     */
    inline ContextDataType& WithEncodedData(const Aws::String& value) { SetEncodedData(value); return *this;}

    /**
     * <p>Encoded device-fingerprint details that your app collected with the Amazon
     * Cognito context data collection library. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-adaptive-authentication.html#user-pool-settings-adaptive-authentication-device-fingerprint">Adding
     * user device and session data to API requests</a>.</p>
     */
    inline ContextDataType& WithEncodedData(Aws::String&& value) { SetEncodedData(std::move(value)); return *this;}

    /**
     * <p>Encoded device-fingerprint details that your app collected with the Amazon
     * Cognito context data collection library. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-adaptive-authentication.html#user-pool-settings-adaptive-authentication-device-fingerprint">Adding
     * user device and session data to API requests</a>.</p>
     */
    inline ContextDataType& WithEncodedData(const char* value) { SetEncodedData(value); return *this;}

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
