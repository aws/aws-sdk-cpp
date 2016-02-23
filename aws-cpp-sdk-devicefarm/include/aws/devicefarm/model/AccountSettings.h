/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/devicefarm/model/DevicePlatform.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>A container for account-level settings within AWS Device Farm.</p>
   */
  class AWS_DEVICEFARM_API AccountSettings
  {
  public:
    AccountSettings();
    AccountSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    AccountSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The AWS account number specified in the <code>AccountSettings</code>
     * container.</p>
     */
    inline const Aws::String& GetAwsAccountNumber() const{ return m_awsAccountNumber; }

    /**
     * <p>The AWS account number specified in the <code>AccountSettings</code>
     * container.</p>
     */
    inline void SetAwsAccountNumber(const Aws::String& value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber = value; }

    /**
     * <p>The AWS account number specified in the <code>AccountSettings</code>
     * container.</p>
     */
    inline void SetAwsAccountNumber(Aws::String&& value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber = value; }

    /**
     * <p>The AWS account number specified in the <code>AccountSettings</code>
     * container.</p>
     */
    inline void SetAwsAccountNumber(const char* value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber.assign(value); }

    /**
     * <p>The AWS account number specified in the <code>AccountSettings</code>
     * container.</p>
     */
    inline AccountSettings& WithAwsAccountNumber(const Aws::String& value) { SetAwsAccountNumber(value); return *this;}

    /**
     * <p>The AWS account number specified in the <code>AccountSettings</code>
     * container.</p>
     */
    inline AccountSettings& WithAwsAccountNumber(Aws::String&& value) { SetAwsAccountNumber(value); return *this;}

    /**
     * <p>The AWS account number specified in the <code>AccountSettings</code>
     * container.</p>
     */
    inline AccountSettings& WithAwsAccountNumber(const char* value) { SetAwsAccountNumber(value); return *this;}

    /**
     * <p>Returns the unmetered devices you have purchased.</p>
     */
    inline const Aws::Map<DevicePlatform, long>& GetUnmeteredDevices() const{ return m_unmeteredDevices; }

    /**
     * <p>Returns the unmetered devices you have purchased.</p>
     */
    inline void SetUnmeteredDevices(const Aws::Map<DevicePlatform, long>& value) { m_unmeteredDevicesHasBeenSet = true; m_unmeteredDevices = value; }

    /**
     * <p>Returns the unmetered devices you have purchased.</p>
     */
    inline void SetUnmeteredDevices(Aws::Map<DevicePlatform, long>&& value) { m_unmeteredDevicesHasBeenSet = true; m_unmeteredDevices = value; }

    /**
     * <p>Returns the unmetered devices you have purchased.</p>
     */
    inline AccountSettings& WithUnmeteredDevices(const Aws::Map<DevicePlatform, long>& value) { SetUnmeteredDevices(value); return *this;}

    /**
     * <p>Returns the unmetered devices you have purchased.</p>
     */
    inline AccountSettings& WithUnmeteredDevices(Aws::Map<DevicePlatform, long>&& value) { SetUnmeteredDevices(value); return *this;}

    /**
     * <p>Returns the unmetered devices you have purchased.</p>
     */
    inline AccountSettings& AddUnmeteredDevices(const DevicePlatform& key, long value) { m_unmeteredDevicesHasBeenSet = true; m_unmeteredDevices[key] = value; return *this; }

    /**
     * <p>Returns the unmetered devices you have purchased.</p>
     */
    inline AccountSettings& AddUnmeteredDevices(DevicePlatform&& key, long value) { m_unmeteredDevicesHasBeenSet = true; m_unmeteredDevices[key] = value; return *this; }

  private:
    Aws::String m_awsAccountNumber;
    bool m_awsAccountNumberHasBeenSet;
    Aws::Map<DevicePlatform, long> m_unmeteredDevices;
    bool m_unmeteredDevicesHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
