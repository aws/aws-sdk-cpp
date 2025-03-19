/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A container for account-level settings in AWS Device Farm.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/AccountSettings">AWS
   * API Reference</a></p>
   */
  class AccountSettings
  {
  public:
    AWS_DEVICEFARM_API AccountSettings() = default;
    AWS_DEVICEFARM_API AccountSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API AccountSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS account number specified in the <code>AccountSettings</code>
     * container.</p>
     */
    inline const Aws::String& GetAwsAccountNumber() const { return m_awsAccountNumber; }
    inline bool AwsAccountNumberHasBeenSet() const { return m_awsAccountNumberHasBeenSet; }
    template<typename AwsAccountNumberT = Aws::String>
    void SetAwsAccountNumber(AwsAccountNumberT&& value) { m_awsAccountNumberHasBeenSet = true; m_awsAccountNumber = std::forward<AwsAccountNumberT>(value); }
    template<typename AwsAccountNumberT = Aws::String>
    AccountSettings& WithAwsAccountNumber(AwsAccountNumberT&& value) { SetAwsAccountNumber(std::forward<AwsAccountNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the unmetered devices you have purchased or want to purchase.</p>
     */
    inline const Aws::Map<DevicePlatform, int>& GetUnmeteredDevices() const { return m_unmeteredDevices; }
    inline bool UnmeteredDevicesHasBeenSet() const { return m_unmeteredDevicesHasBeenSet; }
    template<typename UnmeteredDevicesT = Aws::Map<DevicePlatform, int>>
    void SetUnmeteredDevices(UnmeteredDevicesT&& value) { m_unmeteredDevicesHasBeenSet = true; m_unmeteredDevices = std::forward<UnmeteredDevicesT>(value); }
    template<typename UnmeteredDevicesT = Aws::Map<DevicePlatform, int>>
    AccountSettings& WithUnmeteredDevices(UnmeteredDevicesT&& value) { SetUnmeteredDevices(std::forward<UnmeteredDevicesT>(value)); return *this;}
    inline AccountSettings& AddUnmeteredDevices(DevicePlatform key, int value) {
      m_unmeteredDevicesHasBeenSet = true; m_unmeteredDevices.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Returns the unmetered remote access devices you have purchased or want to
     * purchase.</p>
     */
    inline const Aws::Map<DevicePlatform, int>& GetUnmeteredRemoteAccessDevices() const { return m_unmeteredRemoteAccessDevices; }
    inline bool UnmeteredRemoteAccessDevicesHasBeenSet() const { return m_unmeteredRemoteAccessDevicesHasBeenSet; }
    template<typename UnmeteredRemoteAccessDevicesT = Aws::Map<DevicePlatform, int>>
    void SetUnmeteredRemoteAccessDevices(UnmeteredRemoteAccessDevicesT&& value) { m_unmeteredRemoteAccessDevicesHasBeenSet = true; m_unmeteredRemoteAccessDevices = std::forward<UnmeteredRemoteAccessDevicesT>(value); }
    template<typename UnmeteredRemoteAccessDevicesT = Aws::Map<DevicePlatform, int>>
    AccountSettings& WithUnmeteredRemoteAccessDevices(UnmeteredRemoteAccessDevicesT&& value) { SetUnmeteredRemoteAccessDevices(std::forward<UnmeteredRemoteAccessDevicesT>(value)); return *this;}
    inline AccountSettings& AddUnmeteredRemoteAccessDevices(DevicePlatform key, int value) {
      m_unmeteredRemoteAccessDevicesHasBeenSet = true; m_unmeteredRemoteAccessDevices.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The maximum number of minutes a test run executes before it times out.</p>
     */
    inline int GetMaxJobTimeoutMinutes() const { return m_maxJobTimeoutMinutes; }
    inline bool MaxJobTimeoutMinutesHasBeenSet() const { return m_maxJobTimeoutMinutesHasBeenSet; }
    inline void SetMaxJobTimeoutMinutes(int value) { m_maxJobTimeoutMinutesHasBeenSet = true; m_maxJobTimeoutMinutes = value; }
    inline AccountSettings& WithMaxJobTimeoutMinutes(int value) { SetMaxJobTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about an AWS account's usage of free trial device minutes.</p>
     */
    inline const TrialMinutes& GetTrialMinutes() const { return m_trialMinutes; }
    inline bool TrialMinutesHasBeenSet() const { return m_trialMinutesHasBeenSet; }
    template<typename TrialMinutesT = TrialMinutes>
    void SetTrialMinutes(TrialMinutesT&& value) { m_trialMinutesHasBeenSet = true; m_trialMinutes = std::forward<TrialMinutesT>(value); }
    template<typename TrialMinutesT = TrialMinutes>
    AccountSettings& WithTrialMinutes(TrialMinutesT&& value) { SetTrialMinutes(std::forward<TrialMinutesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of device slots that the AWS account can purchase. Each
     * maximum is expressed as an <code>offering-id:number</code> pair, where the
     * <code>offering-id</code> represents one of the IDs returned by the
     * <code>ListOfferings</code> command.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetMaxSlots() const { return m_maxSlots; }
    inline bool MaxSlotsHasBeenSet() const { return m_maxSlotsHasBeenSet; }
    template<typename MaxSlotsT = Aws::Map<Aws::String, int>>
    void SetMaxSlots(MaxSlotsT&& value) { m_maxSlotsHasBeenSet = true; m_maxSlots = std::forward<MaxSlotsT>(value); }
    template<typename MaxSlotsT = Aws::Map<Aws::String, int>>
    AccountSettings& WithMaxSlots(MaxSlotsT&& value) { SetMaxSlots(std::forward<MaxSlotsT>(value)); return *this;}
    inline AccountSettings& AddMaxSlots(Aws::String key, int value) {
      m_maxSlotsHasBeenSet = true; m_maxSlots.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The default number of minutes (at the account level) a test run executes
     * before it times out. The default value is 150 minutes.</p>
     */
    inline int GetDefaultJobTimeoutMinutes() const { return m_defaultJobTimeoutMinutes; }
    inline bool DefaultJobTimeoutMinutesHasBeenSet() const { return m_defaultJobTimeoutMinutesHasBeenSet; }
    inline void SetDefaultJobTimeoutMinutes(int value) { m_defaultJobTimeoutMinutesHasBeenSet = true; m_defaultJobTimeoutMinutes = value; }
    inline AccountSettings& WithDefaultJobTimeoutMinutes(int value) { SetDefaultJobTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm does not sign
     * your app again. For public devices, Device Farm always signs your apps
     * again.</p> <p>For more information about how Device Farm re-signs your apps, see
     * <a href="http://aws.amazon.com/device-farm/faqs/">Do you modify my app?</a> in
     * the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool GetSkipAppResign() const { return m_skipAppResign; }
    inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }
    inline void SetSkipAppResign(bool value) { m_skipAppResignHasBeenSet = true; m_skipAppResign = value; }
    inline AccountSettings& WithSkipAppResign(bool value) { SetSkipAppResign(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountNumber;
    bool m_awsAccountNumberHasBeenSet = false;

    Aws::Map<DevicePlatform, int> m_unmeteredDevices;
    bool m_unmeteredDevicesHasBeenSet = false;

    Aws::Map<DevicePlatform, int> m_unmeteredRemoteAccessDevices;
    bool m_unmeteredRemoteAccessDevicesHasBeenSet = false;

    int m_maxJobTimeoutMinutes{0};
    bool m_maxJobTimeoutMinutesHasBeenSet = false;

    TrialMinutes m_trialMinutes;
    bool m_trialMinutesHasBeenSet = false;

    Aws::Map<Aws::String, int> m_maxSlots;
    bool m_maxSlotsHasBeenSet = false;

    int m_defaultJobTimeoutMinutes{0};
    bool m_defaultJobTimeoutMinutesHasBeenSet = false;

    bool m_skipAppResign{false};
    bool m_skipAppResignHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
