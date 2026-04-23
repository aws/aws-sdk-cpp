/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COGNITOIDENTITYPROVIDER_API DeviceType
  {
  public:
    DeviceType();
    DeviceType(Aws::Utils::Json::JsonView jsonValue);
    DeviceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The device key.</p>
     */
    inline const Aws::String& GetDeviceKey() const{ return m_deviceKey; }

    /**
     * <p>The device key.</p>
     */
    inline bool DeviceKeyHasBeenSet() const { return m_deviceKeyHasBeenSet; }

    /**
     * <p>The device key.</p>
     */
    inline void SetDeviceKey(const Aws::String& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = value; }

    /**
     * <p>The device key.</p>
     */
    inline void SetDeviceKey(Aws::String&& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = std::move(value); }

    /**
     * <p>The device key.</p>
     */
    inline void SetDeviceKey(const char* value) { m_deviceKeyHasBeenSet = true; m_deviceKey.assign(value); }

    /**
     * <p>The device key.</p>
     */
    inline DeviceType& WithDeviceKey(const Aws::String& value) { SetDeviceKey(value); return *this;}

    /**
     * <p>The device key.</p>
     */
    inline DeviceType& WithDeviceKey(Aws::String&& value) { SetDeviceKey(std::move(value)); return *this;}

    /**
     * <p>The device key.</p>
     */
    inline DeviceType& WithDeviceKey(const char* value) { SetDeviceKey(value); return *this;}


    /**
     * <p>The device attributes.</p>
     */
    inline const Aws::Vector<AttributeType>& GetDeviceAttributes() const{ return m_deviceAttributes; }

    /**
     * <p>The device attributes.</p>
     */
    inline bool DeviceAttributesHasBeenSet() const { return m_deviceAttributesHasBeenSet; }

    /**
     * <p>The device attributes.</p>
     */
    inline void SetDeviceAttributes(const Aws::Vector<AttributeType>& value) { m_deviceAttributesHasBeenSet = true; m_deviceAttributes = value; }

    /**
     * <p>The device attributes.</p>
     */
    inline void SetDeviceAttributes(Aws::Vector<AttributeType>&& value) { m_deviceAttributesHasBeenSet = true; m_deviceAttributes = std::move(value); }

    /**
     * <p>The device attributes.</p>
     */
    inline DeviceType& WithDeviceAttributes(const Aws::Vector<AttributeType>& value) { SetDeviceAttributes(value); return *this;}

    /**
     * <p>The device attributes.</p>
     */
    inline DeviceType& WithDeviceAttributes(Aws::Vector<AttributeType>&& value) { SetDeviceAttributes(std::move(value)); return *this;}

    /**
     * <p>The device attributes.</p>
     */
    inline DeviceType& AddDeviceAttributes(const AttributeType& value) { m_deviceAttributesHasBeenSet = true; m_deviceAttributes.push_back(value); return *this; }

    /**
     * <p>The device attributes.</p>
     */
    inline DeviceType& AddDeviceAttributes(AttributeType&& value) { m_deviceAttributesHasBeenSet = true; m_deviceAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The creation date of the device.</p>
     */
    inline const Aws::Utils::DateTime& GetDeviceCreateDate() const{ return m_deviceCreateDate; }

    /**
     * <p>The creation date of the device.</p>
     */
    inline bool DeviceCreateDateHasBeenSet() const { return m_deviceCreateDateHasBeenSet; }

    /**
     * <p>The creation date of the device.</p>
     */
    inline void SetDeviceCreateDate(const Aws::Utils::DateTime& value) { m_deviceCreateDateHasBeenSet = true; m_deviceCreateDate = value; }

    /**
     * <p>The creation date of the device.</p>
     */
    inline void SetDeviceCreateDate(Aws::Utils::DateTime&& value) { m_deviceCreateDateHasBeenSet = true; m_deviceCreateDate = std::move(value); }

    /**
     * <p>The creation date of the device.</p>
     */
    inline DeviceType& WithDeviceCreateDate(const Aws::Utils::DateTime& value) { SetDeviceCreateDate(value); return *this;}

    /**
     * <p>The creation date of the device.</p>
     */
    inline DeviceType& WithDeviceCreateDate(Aws::Utils::DateTime&& value) { SetDeviceCreateDate(std::move(value)); return *this;}


    /**
     * <p>The last modified date of the device.</p>
     */
    inline const Aws::Utils::DateTime& GetDeviceLastModifiedDate() const{ return m_deviceLastModifiedDate; }

    /**
     * <p>The last modified date of the device.</p>
     */
    inline bool DeviceLastModifiedDateHasBeenSet() const { return m_deviceLastModifiedDateHasBeenSet; }

    /**
     * <p>The last modified date of the device.</p>
     */
    inline void SetDeviceLastModifiedDate(const Aws::Utils::DateTime& value) { m_deviceLastModifiedDateHasBeenSet = true; m_deviceLastModifiedDate = value; }

    /**
     * <p>The last modified date of the device.</p>
     */
    inline void SetDeviceLastModifiedDate(Aws::Utils::DateTime&& value) { m_deviceLastModifiedDateHasBeenSet = true; m_deviceLastModifiedDate = std::move(value); }

    /**
     * <p>The last modified date of the device.</p>
     */
    inline DeviceType& WithDeviceLastModifiedDate(const Aws::Utils::DateTime& value) { SetDeviceLastModifiedDate(value); return *this;}

    /**
     * <p>The last modified date of the device.</p>
     */
    inline DeviceType& WithDeviceLastModifiedDate(Aws::Utils::DateTime&& value) { SetDeviceLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The date in which the device was last authenticated.</p>
     */
    inline const Aws::Utils::DateTime& GetDeviceLastAuthenticatedDate() const{ return m_deviceLastAuthenticatedDate; }

    /**
     * <p>The date in which the device was last authenticated.</p>
     */
    inline bool DeviceLastAuthenticatedDateHasBeenSet() const { return m_deviceLastAuthenticatedDateHasBeenSet; }

    /**
     * <p>The date in which the device was last authenticated.</p>
     */
    inline void SetDeviceLastAuthenticatedDate(const Aws::Utils::DateTime& value) { m_deviceLastAuthenticatedDateHasBeenSet = true; m_deviceLastAuthenticatedDate = value; }

    /**
     * <p>The date in which the device was last authenticated.</p>
     */
    inline void SetDeviceLastAuthenticatedDate(Aws::Utils::DateTime&& value) { m_deviceLastAuthenticatedDateHasBeenSet = true; m_deviceLastAuthenticatedDate = std::move(value); }

    /**
     * <p>The date in which the device was last authenticated.</p>
     */
    inline DeviceType& WithDeviceLastAuthenticatedDate(const Aws::Utils::DateTime& value) { SetDeviceLastAuthenticatedDate(value); return *this;}

    /**
     * <p>The date in which the device was last authenticated.</p>
     */
    inline DeviceType& WithDeviceLastAuthenticatedDate(Aws::Utils::DateTime&& value) { SetDeviceLastAuthenticatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_deviceKey;
    bool m_deviceKeyHasBeenSet;

    Aws::Vector<AttributeType> m_deviceAttributes;
    bool m_deviceAttributesHasBeenSet;

    Aws::Utils::DateTime m_deviceCreateDate;
    bool m_deviceCreateDateHasBeenSet;

    Aws::Utils::DateTime m_deviceLastModifiedDate;
    bool m_deviceLastModifiedDateHasBeenSet;

    Aws::Utils::DateTime m_deviceLastAuthenticatedDate;
    bool m_deviceLastAuthenticatedDateHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
