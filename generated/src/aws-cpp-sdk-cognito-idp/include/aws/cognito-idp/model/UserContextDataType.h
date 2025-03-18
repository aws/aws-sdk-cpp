/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contextual data, such as the user's device fingerprint, IP address, or
   * location, used for evaluating the risk of an unexpected event by Amazon Cognito
   * threat protection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserContextDataType">AWS
   * API Reference</a></p>
   */
  class UserContextDataType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserContextDataType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API UserContextDataType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserContextDataType& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    UserContextDataType& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
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
    UserContextDataType& WithEncodedData(EncodedDataT&& value) { SetEncodedData(std::forward<EncodedDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_encodedData;
    bool m_encodedDataHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
