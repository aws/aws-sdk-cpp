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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/devicefarm/model/TrialMinutes.h>
#include <aws/devicefarm/model/DevicePlatform.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>A container for account-level settings within AWS Device Farm.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/AccountSettings">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API AccountSettings
  {
  public:
    AccountSettings();
    AccountSettings(Aws::Utils::Json::JsonView jsonValue);
    AccountSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline bool AwsAccountNumberHasBeenSet() const { return m_awsAccountNumberHasBeenSet; }

    /**
     * <p>The AWS account number specified in the <code>AccountSettings</code>
     * container.</p>
     */
    inline void SetAwsAccountNumber(const Aws::String& value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber = value; }

    /**
     * <p>The AWS account number specified in the <code>AccountSettings</code>
     * container.</p>
     */
    inline void SetAwsAccountNumber(Aws::String&& value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber = std::move(value); }

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
    inline AccountSettings& WithAwsAccountNumber(Aws::String&& value) { SetAwsAccountNumber(std::move(value)); return *this;}

    /**
     * <p>The AWS account number specified in the <code>AccountSettings</code>
     * container.</p>
     */
    inline AccountSettings& WithAwsAccountNumber(const char* value) { SetAwsAccountNumber(value); return *this;}


    /**
     * <p>Returns the unmetered devices you have purchased or want to purchase.</p>
     */
    inline const Aws::Map<DevicePlatform, int>& GetUnmeteredDevices() const{ return m_unmeteredDevices; }

    /**
     * <p>Returns the unmetered devices you have purchased or want to purchase.</p>
     */
    inline bool UnmeteredDevicesHasBeenSet() const { return m_unmeteredDevicesHasBeenSet; }

    /**
     * <p>Returns the unmetered devices you have purchased or want to purchase.</p>
     */
    inline void SetUnmeteredDevices(const Aws::Map<DevicePlatform, int>& value) { m_unmeteredDevicesHasBeenSet = true; m_unmeteredDevices = value; }

    /**
     * <p>Returns the unmetered devices you have purchased or want to purchase.</p>
     */
    inline void SetUnmeteredDevices(Aws::Map<DevicePlatform, int>&& value) { m_unmeteredDevicesHasBeenSet = true; m_unmeteredDevices = std::move(value); }

    /**
     * <p>Returns the unmetered devices you have purchased or want to purchase.</p>
     */
    inline AccountSettings& WithUnmeteredDevices(const Aws::Map<DevicePlatform, int>& value) { SetUnmeteredDevices(value); return *this;}

    /**
     * <p>Returns the unmetered devices you have purchased or want to purchase.</p>
     */
    inline AccountSettings& WithUnmeteredDevices(Aws::Map<DevicePlatform, int>&& value) { SetUnmeteredDevices(std::move(value)); return *this;}

    /**
     * <p>Returns the unmetered devices you have purchased or want to purchase.</p>
     */
    inline AccountSettings& AddUnmeteredDevices(const DevicePlatform& key, int value) { m_unmeteredDevicesHasBeenSet = true; m_unmeteredDevices.emplace(key, value); return *this; }

    /**
     * <p>Returns the unmetered devices you have purchased or want to purchase.</p>
     */
    inline AccountSettings& AddUnmeteredDevices(DevicePlatform&& key, int value) { m_unmeteredDevicesHasBeenSet = true; m_unmeteredDevices.emplace(std::move(key), value); return *this; }


    /**
     * <p>Returns the unmetered remote access devices you have purchased or want to
     * purchase.</p>
     */
    inline const Aws::Map<DevicePlatform, int>& GetUnmeteredRemoteAccessDevices() const{ return m_unmeteredRemoteAccessDevices; }

    /**
     * <p>Returns the unmetered remote access devices you have purchased or want to
     * purchase.</p>
     */
    inline bool UnmeteredRemoteAccessDevicesHasBeenSet() const { return m_unmeteredRemoteAccessDevicesHasBeenSet; }

    /**
     * <p>Returns the unmetered remote access devices you have purchased or want to
     * purchase.</p>
     */
    inline void SetUnmeteredRemoteAccessDevices(const Aws::Map<DevicePlatform, int>& value) { m_unmeteredRemoteAccessDevicesHasBeenSet = true; m_unmeteredRemoteAccessDevices = value; }

    /**
     * <p>Returns the unmetered remote access devices you have purchased or want to
     * purchase.</p>
     */
    inline void SetUnmeteredRemoteAccessDevices(Aws::Map<DevicePlatform, int>&& value) { m_unmeteredRemoteAccessDevicesHasBeenSet = true; m_unmeteredRemoteAccessDevices = std::move(value); }

    /**
     * <p>Returns the unmetered remote access devices you have purchased or want to
     * purchase.</p>
     */
    inline AccountSettings& WithUnmeteredRemoteAccessDevices(const Aws::Map<DevicePlatform, int>& value) { SetUnmeteredRemoteAccessDevices(value); return *this;}

    /**
     * <p>Returns the unmetered remote access devices you have purchased or want to
     * purchase.</p>
     */
    inline AccountSettings& WithUnmeteredRemoteAccessDevices(Aws::Map<DevicePlatform, int>&& value) { SetUnmeteredRemoteAccessDevices(std::move(value)); return *this;}

    /**
     * <p>Returns the unmetered remote access devices you have purchased or want to
     * purchase.</p>
     */
    inline AccountSettings& AddUnmeteredRemoteAccessDevices(const DevicePlatform& key, int value) { m_unmeteredRemoteAccessDevicesHasBeenSet = true; m_unmeteredRemoteAccessDevices.emplace(key, value); return *this; }

    /**
     * <p>Returns the unmetered remote access devices you have purchased or want to
     * purchase.</p>
     */
    inline AccountSettings& AddUnmeteredRemoteAccessDevices(DevicePlatform&& key, int value) { m_unmeteredRemoteAccessDevicesHasBeenSet = true; m_unmeteredRemoteAccessDevices.emplace(std::move(key), value); return *this; }


    /**
     * <p>The maximum number of minutes a test run will execute before it times
     * out.</p>
     */
    inline int GetMaxJobTimeoutMinutes() const{ return m_maxJobTimeoutMinutes; }

    /**
     * <p>The maximum number of minutes a test run will execute before it times
     * out.</p>
     */
    inline bool MaxJobTimeoutMinutesHasBeenSet() const { return m_maxJobTimeoutMinutesHasBeenSet; }

    /**
     * <p>The maximum number of minutes a test run will execute before it times
     * out.</p>
     */
    inline void SetMaxJobTimeoutMinutes(int value) { m_maxJobTimeoutMinutesHasBeenSet = true; m_maxJobTimeoutMinutes = value; }

    /**
     * <p>The maximum number of minutes a test run will execute before it times
     * out.</p>
     */
    inline AccountSettings& WithMaxJobTimeoutMinutes(int value) { SetMaxJobTimeoutMinutes(value); return *this;}


    /**
     * <p>Information about an AWS account's usage of free trial device minutes.</p>
     */
    inline const TrialMinutes& GetTrialMinutes() const{ return m_trialMinutes; }

    /**
     * <p>Information about an AWS account's usage of free trial device minutes.</p>
     */
    inline bool TrialMinutesHasBeenSet() const { return m_trialMinutesHasBeenSet; }

    /**
     * <p>Information about an AWS account's usage of free trial device minutes.</p>
     */
    inline void SetTrialMinutes(const TrialMinutes& value) { m_trialMinutesHasBeenSet = true; m_trialMinutes = value; }

    /**
     * <p>Information about an AWS account's usage of free trial device minutes.</p>
     */
    inline void SetTrialMinutes(TrialMinutes&& value) { m_trialMinutesHasBeenSet = true; m_trialMinutes = std::move(value); }

    /**
     * <p>Information about an AWS account's usage of free trial device minutes.</p>
     */
    inline AccountSettings& WithTrialMinutes(const TrialMinutes& value) { SetTrialMinutes(value); return *this;}

    /**
     * <p>Information about an AWS account's usage of free trial device minutes.</p>
     */
    inline AccountSettings& WithTrialMinutes(TrialMinutes&& value) { SetTrialMinutes(std::move(value)); return *this;}


    /**
     * <p>The maximum number of device slots that the AWS account can purchase. Each
     * maximum is expressed as an <code>offering-id:number</code> pair, where the
     * <code>offering-id</code> represents one of the IDs returned by the
     * <code>ListOfferings</code> command.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetMaxSlots() const{ return m_maxSlots; }

    /**
     * <p>The maximum number of device slots that the AWS account can purchase. Each
     * maximum is expressed as an <code>offering-id:number</code> pair, where the
     * <code>offering-id</code> represents one of the IDs returned by the
     * <code>ListOfferings</code> command.</p>
     */
    inline bool MaxSlotsHasBeenSet() const { return m_maxSlotsHasBeenSet; }

    /**
     * <p>The maximum number of device slots that the AWS account can purchase. Each
     * maximum is expressed as an <code>offering-id:number</code> pair, where the
     * <code>offering-id</code> represents one of the IDs returned by the
     * <code>ListOfferings</code> command.</p>
     */
    inline void SetMaxSlots(const Aws::Map<Aws::String, int>& value) { m_maxSlotsHasBeenSet = true; m_maxSlots = value; }

    /**
     * <p>The maximum number of device slots that the AWS account can purchase. Each
     * maximum is expressed as an <code>offering-id:number</code> pair, where the
     * <code>offering-id</code> represents one of the IDs returned by the
     * <code>ListOfferings</code> command.</p>
     */
    inline void SetMaxSlots(Aws::Map<Aws::String, int>&& value) { m_maxSlotsHasBeenSet = true; m_maxSlots = std::move(value); }

    /**
     * <p>The maximum number of device slots that the AWS account can purchase. Each
     * maximum is expressed as an <code>offering-id:number</code> pair, where the
     * <code>offering-id</code> represents one of the IDs returned by the
     * <code>ListOfferings</code> command.</p>
     */
    inline AccountSettings& WithMaxSlots(const Aws::Map<Aws::String, int>& value) { SetMaxSlots(value); return *this;}

    /**
     * <p>The maximum number of device slots that the AWS account can purchase. Each
     * maximum is expressed as an <code>offering-id:number</code> pair, where the
     * <code>offering-id</code> represents one of the IDs returned by the
     * <code>ListOfferings</code> command.</p>
     */
    inline AccountSettings& WithMaxSlots(Aws::Map<Aws::String, int>&& value) { SetMaxSlots(std::move(value)); return *this;}

    /**
     * <p>The maximum number of device slots that the AWS account can purchase. Each
     * maximum is expressed as an <code>offering-id:number</code> pair, where the
     * <code>offering-id</code> represents one of the IDs returned by the
     * <code>ListOfferings</code> command.</p>
     */
    inline AccountSettings& AddMaxSlots(const Aws::String& key, int value) { m_maxSlotsHasBeenSet = true; m_maxSlots.emplace(key, value); return *this; }

    /**
     * <p>The maximum number of device slots that the AWS account can purchase. Each
     * maximum is expressed as an <code>offering-id:number</code> pair, where the
     * <code>offering-id</code> represents one of the IDs returned by the
     * <code>ListOfferings</code> command.</p>
     */
    inline AccountSettings& AddMaxSlots(Aws::String&& key, int value) { m_maxSlotsHasBeenSet = true; m_maxSlots.emplace(std::move(key), value); return *this; }

    /**
     * <p>The maximum number of device slots that the AWS account can purchase. Each
     * maximum is expressed as an <code>offering-id:number</code> pair, where the
     * <code>offering-id</code> represents one of the IDs returned by the
     * <code>ListOfferings</code> command.</p>
     */
    inline AccountSettings& AddMaxSlots(const char* key, int value) { m_maxSlotsHasBeenSet = true; m_maxSlots.emplace(key, value); return *this; }


    /**
     * <p>The default number of minutes (at the account level) a test run will execute
     * before it times out. The default value is 150 minutes.</p>
     */
    inline int GetDefaultJobTimeoutMinutes() const{ return m_defaultJobTimeoutMinutes; }

    /**
     * <p>The default number of minutes (at the account level) a test run will execute
     * before it times out. The default value is 150 minutes.</p>
     */
    inline bool DefaultJobTimeoutMinutesHasBeenSet() const { return m_defaultJobTimeoutMinutesHasBeenSet; }

    /**
     * <p>The default number of minutes (at the account level) a test run will execute
     * before it times out. The default value is 150 minutes.</p>
     */
    inline void SetDefaultJobTimeoutMinutes(int value) { m_defaultJobTimeoutMinutesHasBeenSet = true; m_defaultJobTimeoutMinutes = value; }

    /**
     * <p>The default number of minutes (at the account level) a test run will execute
     * before it times out. The default value is 150 minutes.</p>
     */
    inline AccountSettings& WithDefaultJobTimeoutMinutes(int value) { SetDefaultJobTimeoutMinutes(value); return *this;}


    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool GetSkipAppResign() const{ return m_skipAppResign; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline void SetSkipAppResign(bool value) { m_skipAppResignHasBeenSet = true; m_skipAppResign = value; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline AccountSettings& WithSkipAppResign(bool value) { SetSkipAppResign(value); return *this;}

  private:

    Aws::String m_awsAccountNumber;
    bool m_awsAccountNumberHasBeenSet;

    Aws::Map<DevicePlatform, int> m_unmeteredDevices;
    bool m_unmeteredDevicesHasBeenSet;

    Aws::Map<DevicePlatform, int> m_unmeteredRemoteAccessDevices;
    bool m_unmeteredRemoteAccessDevicesHasBeenSet;

    int m_maxJobTimeoutMinutes;
    bool m_maxJobTimeoutMinutesHasBeenSet;

    TrialMinutes m_trialMinutes;
    bool m_trialMinutesHasBeenSet;

    Aws::Map<Aws::String, int> m_maxSlots;
    bool m_maxSlotsHasBeenSet;

    int m_defaultJobTimeoutMinutes;
    bool m_defaultJobTimeoutMinutesHasBeenSet;

    bool m_skipAppResign;
    bool m_skipAppResignHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
