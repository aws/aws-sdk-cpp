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
   * <p>The device type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeviceType">AWS
   * API Reference</a></p>
   */
  class DeviceType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DeviceType();
    AWS_COGNITOIDENTITYPROVIDER_API DeviceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API DeviceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device key.</p>
     */
    inline const Aws::String& GetDeviceKey() const{ return m_deviceKey; }
    inline bool DeviceKeyHasBeenSet() const { return m_deviceKeyHasBeenSet; }
    inline void SetDeviceKey(const Aws::String& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = value; }
    inline void SetDeviceKey(Aws::String&& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = std::move(value); }
    inline void SetDeviceKey(const char* value) { m_deviceKeyHasBeenSet = true; m_deviceKey.assign(value); }
    inline DeviceType& WithDeviceKey(const Aws::String& value) { SetDeviceKey(value); return *this;}
    inline DeviceType& WithDeviceKey(Aws::String&& value) { SetDeviceKey(std::move(value)); return *this;}
    inline DeviceType& WithDeviceKey(const char* value) { SetDeviceKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device attributes.</p>
     */
    inline const Aws::Vector<AttributeType>& GetDeviceAttributes() const{ return m_deviceAttributes; }
    inline bool DeviceAttributesHasBeenSet() const { return m_deviceAttributesHasBeenSet; }
    inline void SetDeviceAttributes(const Aws::Vector<AttributeType>& value) { m_deviceAttributesHasBeenSet = true; m_deviceAttributes = value; }
    inline void SetDeviceAttributes(Aws::Vector<AttributeType>&& value) { m_deviceAttributesHasBeenSet = true; m_deviceAttributes = std::move(value); }
    inline DeviceType& WithDeviceAttributes(const Aws::Vector<AttributeType>& value) { SetDeviceAttributes(value); return *this;}
    inline DeviceType& WithDeviceAttributes(Aws::Vector<AttributeType>&& value) { SetDeviceAttributes(std::move(value)); return *this;}
    inline DeviceType& AddDeviceAttributes(const AttributeType& value) { m_deviceAttributesHasBeenSet = true; m_deviceAttributes.push_back(value); return *this; }
    inline DeviceType& AddDeviceAttributes(AttributeType&& value) { m_deviceAttributesHasBeenSet = true; m_deviceAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation date of the device.</p>
     */
    inline const Aws::Utils::DateTime& GetDeviceCreateDate() const{ return m_deviceCreateDate; }
    inline bool DeviceCreateDateHasBeenSet() const { return m_deviceCreateDateHasBeenSet; }
    inline void SetDeviceCreateDate(const Aws::Utils::DateTime& value) { m_deviceCreateDateHasBeenSet = true; m_deviceCreateDate = value; }
    inline void SetDeviceCreateDate(Aws::Utils::DateTime&& value) { m_deviceCreateDateHasBeenSet = true; m_deviceCreateDate = std::move(value); }
    inline DeviceType& WithDeviceCreateDate(const Aws::Utils::DateTime& value) { SetDeviceCreateDate(value); return *this;}
    inline DeviceType& WithDeviceCreateDate(Aws::Utils::DateTime&& value) { SetDeviceCreateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetDeviceLastModifiedDate() const{ return m_deviceLastModifiedDate; }
    inline bool DeviceLastModifiedDateHasBeenSet() const { return m_deviceLastModifiedDateHasBeenSet; }
    inline void SetDeviceLastModifiedDate(const Aws::Utils::DateTime& value) { m_deviceLastModifiedDateHasBeenSet = true; m_deviceLastModifiedDate = value; }
    inline void SetDeviceLastModifiedDate(Aws::Utils::DateTime&& value) { m_deviceLastModifiedDateHasBeenSet = true; m_deviceLastModifiedDate = std::move(value); }
    inline DeviceType& WithDeviceLastModifiedDate(const Aws::Utils::DateTime& value) { SetDeviceLastModifiedDate(value); return *this;}
    inline DeviceType& WithDeviceLastModifiedDate(Aws::Utils::DateTime&& value) { SetDeviceLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the device was last authenticated.</p>
     */
    inline const Aws::Utils::DateTime& GetDeviceLastAuthenticatedDate() const{ return m_deviceLastAuthenticatedDate; }
    inline bool DeviceLastAuthenticatedDateHasBeenSet() const { return m_deviceLastAuthenticatedDateHasBeenSet; }
    inline void SetDeviceLastAuthenticatedDate(const Aws::Utils::DateTime& value) { m_deviceLastAuthenticatedDateHasBeenSet = true; m_deviceLastAuthenticatedDate = value; }
    inline void SetDeviceLastAuthenticatedDate(Aws::Utils::DateTime&& value) { m_deviceLastAuthenticatedDateHasBeenSet = true; m_deviceLastAuthenticatedDate = std::move(value); }
    inline DeviceType& WithDeviceLastAuthenticatedDate(const Aws::Utils::DateTime& value) { SetDeviceLastAuthenticatedDate(value); return *this;}
    inline DeviceType& WithDeviceLastAuthenticatedDate(Aws::Utils::DateTime&& value) { SetDeviceLastAuthenticatedDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceKey;
    bool m_deviceKeyHasBeenSet = false;

    Aws::Vector<AttributeType> m_deviceAttributes;
    bool m_deviceAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_deviceCreateDate;
    bool m_deviceCreateDateHasBeenSet = false;

    Aws::Utils::DateTime m_deviceLastModifiedDate;
    bool m_deviceLastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_deviceLastAuthenticatedDate;
    bool m_deviceLastAuthenticatedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
