/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cognito-idp/model/AttributeType.h>
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
   * <p>Information about a user's device that they've registered for device SRP
   * authentication in your application. For more information, see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
   * with user devices in your user pool</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeviceType">AWS
   * API Reference</a></p>
   */
  class DeviceType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DeviceType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API DeviceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API DeviceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device key, for example
     * <code>us-west-2_EXAMPLE-a1b2c3d4-5678-90ab-cdef-EXAMPLE22222</code>.</p>
     */
    inline const Aws::String& GetDeviceKey() const { return m_deviceKey; }
    inline bool DeviceKeyHasBeenSet() const { return m_deviceKeyHasBeenSet; }
    template<typename DeviceKeyT = Aws::String>
    void SetDeviceKey(DeviceKeyT&& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = std::forward<DeviceKeyT>(value); }
    template<typename DeviceKeyT = Aws::String>
    DeviceType& WithDeviceKey(DeviceKeyT&& value) { SetDeviceKey(std::forward<DeviceKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata about a user's device, like name and last-access source IP.</p>
     */
    inline const Aws::Vector<AttributeType>& GetDeviceAttributes() const { return m_deviceAttributes; }
    inline bool DeviceAttributesHasBeenSet() const { return m_deviceAttributesHasBeenSet; }
    template<typename DeviceAttributesT = Aws::Vector<AttributeType>>
    void SetDeviceAttributes(DeviceAttributesT&& value) { m_deviceAttributesHasBeenSet = true; m_deviceAttributes = std::forward<DeviceAttributesT>(value); }
    template<typename DeviceAttributesT = Aws::Vector<AttributeType>>
    DeviceType& WithDeviceAttributes(DeviceAttributesT&& value) { SetDeviceAttributes(std::forward<DeviceAttributesT>(value)); return *this;}
    template<typename DeviceAttributesT = AttributeType>
    DeviceType& AddDeviceAttributes(DeviceAttributesT&& value) { m_deviceAttributesHasBeenSet = true; m_deviceAttributes.emplace_back(std::forward<DeviceAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetDeviceCreateDate() const { return m_deviceCreateDate; }
    inline bool DeviceCreateDateHasBeenSet() const { return m_deviceCreateDateHasBeenSet; }
    template<typename DeviceCreateDateT = Aws::Utils::DateTime>
    void SetDeviceCreateDate(DeviceCreateDateT&& value) { m_deviceCreateDateHasBeenSet = true; m_deviceCreateDate = std::forward<DeviceCreateDateT>(value); }
    template<typename DeviceCreateDateT = Aws::Utils::DateTime>
    DeviceType& WithDeviceCreateDate(DeviceCreateDateT&& value) { SetDeviceCreateDate(std::forward<DeviceCreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetDeviceLastModifiedDate() const { return m_deviceLastModifiedDate; }
    inline bool DeviceLastModifiedDateHasBeenSet() const { return m_deviceLastModifiedDateHasBeenSet; }
    template<typename DeviceLastModifiedDateT = Aws::Utils::DateTime>
    void SetDeviceLastModifiedDate(DeviceLastModifiedDateT&& value) { m_deviceLastModifiedDateHasBeenSet = true; m_deviceLastModifiedDate = std::forward<DeviceLastModifiedDateT>(value); }
    template<typename DeviceLastModifiedDateT = Aws::Utils::DateTime>
    DeviceType& WithDeviceLastModifiedDate(DeviceLastModifiedDateT&& value) { SetDeviceLastModifiedDate(std::forward<DeviceLastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the user last signed in with the device.</p>
     */
    inline const Aws::Utils::DateTime& GetDeviceLastAuthenticatedDate() const { return m_deviceLastAuthenticatedDate; }
    inline bool DeviceLastAuthenticatedDateHasBeenSet() const { return m_deviceLastAuthenticatedDateHasBeenSet; }
    template<typename DeviceLastAuthenticatedDateT = Aws::Utils::DateTime>
    void SetDeviceLastAuthenticatedDate(DeviceLastAuthenticatedDateT&& value) { m_deviceLastAuthenticatedDateHasBeenSet = true; m_deviceLastAuthenticatedDate = std::forward<DeviceLastAuthenticatedDateT>(value); }
    template<typename DeviceLastAuthenticatedDateT = Aws::Utils::DateTime>
    DeviceType& WithDeviceLastAuthenticatedDate(DeviceLastAuthenticatedDateT&& value) { SetDeviceLastAuthenticatedDate(std::forward<DeviceLastAuthenticatedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceKey;
    bool m_deviceKeyHasBeenSet = false;

    Aws::Vector<AttributeType> m_deviceAttributes;
    bool m_deviceAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_deviceCreateDate{};
    bool m_deviceCreateDateHasBeenSet = false;

    Aws::Utils::DateTime m_deviceLastModifiedDate{};
    bool m_deviceLastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_deviceLastAuthenticatedDate{};
    bool m_deviceLastAuthenticatedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
