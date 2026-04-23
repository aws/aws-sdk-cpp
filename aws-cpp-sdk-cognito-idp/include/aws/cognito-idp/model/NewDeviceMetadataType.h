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
   * <p>The new device metadata type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/NewDeviceMetadataType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API NewDeviceMetadataType
  {
  public:
    NewDeviceMetadataType();
    NewDeviceMetadataType(Aws::Utils::Json::JsonView jsonValue);
    NewDeviceMetadataType& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline NewDeviceMetadataType& WithDeviceKey(const Aws::String& value) { SetDeviceKey(value); return *this;}

    /**
     * <p>The device key.</p>
     */
    inline NewDeviceMetadataType& WithDeviceKey(Aws::String&& value) { SetDeviceKey(std::move(value)); return *this;}

    /**
     * <p>The device key.</p>
     */
    inline NewDeviceMetadataType& WithDeviceKey(const char* value) { SetDeviceKey(value); return *this;}


    /**
     * <p>The device group key.</p>
     */
    inline const Aws::String& GetDeviceGroupKey() const{ return m_deviceGroupKey; }

    /**
     * <p>The device group key.</p>
     */
    inline bool DeviceGroupKeyHasBeenSet() const { return m_deviceGroupKeyHasBeenSet; }

    /**
     * <p>The device group key.</p>
     */
    inline void SetDeviceGroupKey(const Aws::String& value) { m_deviceGroupKeyHasBeenSet = true; m_deviceGroupKey = value; }

    /**
     * <p>The device group key.</p>
     */
    inline void SetDeviceGroupKey(Aws::String&& value) { m_deviceGroupKeyHasBeenSet = true; m_deviceGroupKey = std::move(value); }

    /**
     * <p>The device group key.</p>
     */
    inline void SetDeviceGroupKey(const char* value) { m_deviceGroupKeyHasBeenSet = true; m_deviceGroupKey.assign(value); }

    /**
     * <p>The device group key.</p>
     */
    inline NewDeviceMetadataType& WithDeviceGroupKey(const Aws::String& value) { SetDeviceGroupKey(value); return *this;}

    /**
     * <p>The device group key.</p>
     */
    inline NewDeviceMetadataType& WithDeviceGroupKey(Aws::String&& value) { SetDeviceGroupKey(std::move(value)); return *this;}

    /**
     * <p>The device group key.</p>
     */
    inline NewDeviceMetadataType& WithDeviceGroupKey(const char* value) { SetDeviceGroupKey(value); return *this;}

  private:

    Aws::String m_deviceKey;
    bool m_deviceKeyHasBeenSet;

    Aws::String m_deviceGroupKey;
    bool m_deviceGroupKeyHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
