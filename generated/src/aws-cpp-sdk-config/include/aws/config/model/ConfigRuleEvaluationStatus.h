/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Status information for your Config Managed rules and Config Custom Policy
   * rules. The status includes information such as the last time the rule ran, the
   * last time it failed, and the related error for the last failure.</p> <p>This
   * operation does not return status information about Config Custom Lambda
   * rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigRuleEvaluationStatus">AWS
   * API Reference</a></p>
   */
  class ConfigRuleEvaluationStatus
  {
  public:
    AWS_CONFIGSERVICE_API ConfigRuleEvaluationStatus() = default;
    AWS_CONFIGSERVICE_API ConfigRuleEvaluationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigRuleEvaluationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const { return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    template<typename ConfigRuleNameT = Aws::String>
    void SetConfigRuleName(ConfigRuleNameT&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::forward<ConfigRuleNameT>(value); }
    template<typename ConfigRuleNameT = Aws::String>
    ConfigRuleEvaluationStatus& WithConfigRuleName(ConfigRuleNameT&& value) { SetConfigRuleName(std::forward<ConfigRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleArn() const { return m_configRuleArn; }
    inline bool ConfigRuleArnHasBeenSet() const { return m_configRuleArnHasBeenSet; }
    template<typename ConfigRuleArnT = Aws::String>
    void SetConfigRuleArn(ConfigRuleArnT&& value) { m_configRuleArnHasBeenSet = true; m_configRuleArn = std::forward<ConfigRuleArnT>(value); }
    template<typename ConfigRuleArnT = Aws::String>
    ConfigRuleEvaluationStatus& WithConfigRuleArn(ConfigRuleArnT&& value) { SetConfigRuleArn(std::forward<ConfigRuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleId() const { return m_configRuleId; }
    inline bool ConfigRuleIdHasBeenSet() const { return m_configRuleIdHasBeenSet; }
    template<typename ConfigRuleIdT = Aws::String>
    void SetConfigRuleId(ConfigRuleIdT&& value) { m_configRuleIdHasBeenSet = true; m_configRuleId = std::forward<ConfigRuleIdT>(value); }
    template<typename ConfigRuleIdT = Aws::String>
    ConfigRuleEvaluationStatus& WithConfigRuleId(ConfigRuleIdT&& value) { SetConfigRuleId(std::forward<ConfigRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that Config last successfully invoked the Config rule to evaluate
     * your Amazon Web Services resources.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulInvocationTime() const { return m_lastSuccessfulInvocationTime; }
    inline bool LastSuccessfulInvocationTimeHasBeenSet() const { return m_lastSuccessfulInvocationTimeHasBeenSet; }
    template<typename LastSuccessfulInvocationTimeT = Aws::Utils::DateTime>
    void SetLastSuccessfulInvocationTime(LastSuccessfulInvocationTimeT&& value) { m_lastSuccessfulInvocationTimeHasBeenSet = true; m_lastSuccessfulInvocationTime = std::forward<LastSuccessfulInvocationTimeT>(value); }
    template<typename LastSuccessfulInvocationTimeT = Aws::Utils::DateTime>
    ConfigRuleEvaluationStatus& WithLastSuccessfulInvocationTime(LastSuccessfulInvocationTimeT&& value) { SetLastSuccessfulInvocationTime(std::forward<LastSuccessfulInvocationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that Config last failed to invoke the Config rule to evaluate your
     * Amazon Web Services resources.</p>
     */
    inline const Aws::Utils::DateTime& GetLastFailedInvocationTime() const { return m_lastFailedInvocationTime; }
    inline bool LastFailedInvocationTimeHasBeenSet() const { return m_lastFailedInvocationTimeHasBeenSet; }
    template<typename LastFailedInvocationTimeT = Aws::Utils::DateTime>
    void SetLastFailedInvocationTime(LastFailedInvocationTimeT&& value) { m_lastFailedInvocationTimeHasBeenSet = true; m_lastFailedInvocationTime = std::forward<LastFailedInvocationTimeT>(value); }
    template<typename LastFailedInvocationTimeT = Aws::Utils::DateTime>
    ConfigRuleEvaluationStatus& WithLastFailedInvocationTime(LastFailedInvocationTimeT&& value) { SetLastFailedInvocationTime(std::forward<LastFailedInvocationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that Config last successfully evaluated your Amazon Web Services
     * resources against the rule.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulEvaluationTime() const { return m_lastSuccessfulEvaluationTime; }
    inline bool LastSuccessfulEvaluationTimeHasBeenSet() const { return m_lastSuccessfulEvaluationTimeHasBeenSet; }
    template<typename LastSuccessfulEvaluationTimeT = Aws::Utils::DateTime>
    void SetLastSuccessfulEvaluationTime(LastSuccessfulEvaluationTimeT&& value) { m_lastSuccessfulEvaluationTimeHasBeenSet = true; m_lastSuccessfulEvaluationTime = std::forward<LastSuccessfulEvaluationTimeT>(value); }
    template<typename LastSuccessfulEvaluationTimeT = Aws::Utils::DateTime>
    ConfigRuleEvaluationStatus& WithLastSuccessfulEvaluationTime(LastSuccessfulEvaluationTimeT&& value) { SetLastSuccessfulEvaluationTime(std::forward<LastSuccessfulEvaluationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that Config last failed to evaluate your Amazon Web Services
     * resources against the rule.</p>
     */
    inline const Aws::Utils::DateTime& GetLastFailedEvaluationTime() const { return m_lastFailedEvaluationTime; }
    inline bool LastFailedEvaluationTimeHasBeenSet() const { return m_lastFailedEvaluationTimeHasBeenSet; }
    template<typename LastFailedEvaluationTimeT = Aws::Utils::DateTime>
    void SetLastFailedEvaluationTime(LastFailedEvaluationTimeT&& value) { m_lastFailedEvaluationTimeHasBeenSet = true; m_lastFailedEvaluationTime = std::forward<LastFailedEvaluationTimeT>(value); }
    template<typename LastFailedEvaluationTimeT = Aws::Utils::DateTime>
    ConfigRuleEvaluationStatus& WithLastFailedEvaluationTime(LastFailedEvaluationTimeT&& value) { SetLastFailedEvaluationTime(std::forward<LastFailedEvaluationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that you first activated the Config rule.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstActivatedTime() const { return m_firstActivatedTime; }
    inline bool FirstActivatedTimeHasBeenSet() const { return m_firstActivatedTimeHasBeenSet; }
    template<typename FirstActivatedTimeT = Aws::Utils::DateTime>
    void SetFirstActivatedTime(FirstActivatedTimeT&& value) { m_firstActivatedTimeHasBeenSet = true; m_firstActivatedTime = std::forward<FirstActivatedTimeT>(value); }
    template<typename FirstActivatedTimeT = Aws::Utils::DateTime>
    ConfigRuleEvaluationStatus& WithFirstActivatedTime(FirstActivatedTimeT&& value) { SetFirstActivatedTime(std::forward<FirstActivatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that you last turned off the Config rule.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeactivatedTime() const { return m_lastDeactivatedTime; }
    inline bool LastDeactivatedTimeHasBeenSet() const { return m_lastDeactivatedTimeHasBeenSet; }
    template<typename LastDeactivatedTimeT = Aws::Utils::DateTime>
    void SetLastDeactivatedTime(LastDeactivatedTimeT&& value) { m_lastDeactivatedTimeHasBeenSet = true; m_lastDeactivatedTime = std::forward<LastDeactivatedTimeT>(value); }
    template<typename LastDeactivatedTimeT = Aws::Utils::DateTime>
    ConfigRuleEvaluationStatus& WithLastDeactivatedTime(LastDeactivatedTimeT&& value) { SetLastDeactivatedTime(std::forward<LastDeactivatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that Config returned when the rule last failed.</p>
     */
    inline const Aws::String& GetLastErrorCode() const { return m_lastErrorCode; }
    inline bool LastErrorCodeHasBeenSet() const { return m_lastErrorCodeHasBeenSet; }
    template<typename LastErrorCodeT = Aws::String>
    void SetLastErrorCode(LastErrorCodeT&& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = std::forward<LastErrorCodeT>(value); }
    template<typename LastErrorCodeT = Aws::String>
    ConfigRuleEvaluationStatus& WithLastErrorCode(LastErrorCodeT&& value) { SetLastErrorCode(std::forward<LastErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message that Config returned when the rule last failed.</p>
     */
    inline const Aws::String& GetLastErrorMessage() const { return m_lastErrorMessage; }
    inline bool LastErrorMessageHasBeenSet() const { return m_lastErrorMessageHasBeenSet; }
    template<typename LastErrorMessageT = Aws::String>
    void SetLastErrorMessage(LastErrorMessageT&& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = std::forward<LastErrorMessageT>(value); }
    template<typename LastErrorMessageT = Aws::String>
    ConfigRuleEvaluationStatus& WithLastErrorMessage(LastErrorMessageT&& value) { SetLastErrorMessage(std::forward<LastErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Config has evaluated your resources against the rule at
     * least once.</p> <ul> <li> <p> <code>true</code> - Config has evaluated your
     * Amazon Web Services resources against the rule at least once.</p> </li> <li> <p>
     * <code>false</code> - Config has not finished evaluating your Amazon Web Services
     * resources against the rule at least once.</p> </li> </ul>
     */
    inline bool GetFirstEvaluationStarted() const { return m_firstEvaluationStarted; }
    inline bool FirstEvaluationStartedHasBeenSet() const { return m_firstEvaluationStartedHasBeenSet; }
    inline void SetFirstEvaluationStarted(bool value) { m_firstEvaluationStartedHasBeenSet = true; m_firstEvaluationStarted = value; }
    inline ConfigRuleEvaluationStatus& WithFirstEvaluationStarted(bool value) { SetFirstEvaluationStarted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last attempted delivery of a debug log for your Config
     * Custom Policy rules. Either <code>Successful</code> or <code>Failed</code>.</p>
     */
    inline const Aws::String& GetLastDebugLogDeliveryStatus() const { return m_lastDebugLogDeliveryStatus; }
    inline bool LastDebugLogDeliveryStatusHasBeenSet() const { return m_lastDebugLogDeliveryStatusHasBeenSet; }
    template<typename LastDebugLogDeliveryStatusT = Aws::String>
    void SetLastDebugLogDeliveryStatus(LastDebugLogDeliveryStatusT&& value) { m_lastDebugLogDeliveryStatusHasBeenSet = true; m_lastDebugLogDeliveryStatus = std::forward<LastDebugLogDeliveryStatusT>(value); }
    template<typename LastDebugLogDeliveryStatusT = Aws::String>
    ConfigRuleEvaluationStatus& WithLastDebugLogDeliveryStatus(LastDebugLogDeliveryStatusT&& value) { SetLastDebugLogDeliveryStatus(std::forward<LastDebugLogDeliveryStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason Config was not able to deliver a debug log. This is for the last
     * failed attempt to retrieve a debug log for your Config Custom Policy rules.</p>
     */
    inline const Aws::String& GetLastDebugLogDeliveryStatusReason() const { return m_lastDebugLogDeliveryStatusReason; }
    inline bool LastDebugLogDeliveryStatusReasonHasBeenSet() const { return m_lastDebugLogDeliveryStatusReasonHasBeenSet; }
    template<typename LastDebugLogDeliveryStatusReasonT = Aws::String>
    void SetLastDebugLogDeliveryStatusReason(LastDebugLogDeliveryStatusReasonT&& value) { m_lastDebugLogDeliveryStatusReasonHasBeenSet = true; m_lastDebugLogDeliveryStatusReason = std::forward<LastDebugLogDeliveryStatusReasonT>(value); }
    template<typename LastDebugLogDeliveryStatusReasonT = Aws::String>
    ConfigRuleEvaluationStatus& WithLastDebugLogDeliveryStatusReason(LastDebugLogDeliveryStatusReasonT&& value) { SetLastDebugLogDeliveryStatusReason(std::forward<LastDebugLogDeliveryStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time Config last attempted to deliver a debug log for your Config Custom
     * Policy rules.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDebugLogDeliveryTime() const { return m_lastDebugLogDeliveryTime; }
    inline bool LastDebugLogDeliveryTimeHasBeenSet() const { return m_lastDebugLogDeliveryTimeHasBeenSet; }
    template<typename LastDebugLogDeliveryTimeT = Aws::Utils::DateTime>
    void SetLastDebugLogDeliveryTime(LastDebugLogDeliveryTimeT&& value) { m_lastDebugLogDeliveryTimeHasBeenSet = true; m_lastDebugLogDeliveryTime = std::forward<LastDebugLogDeliveryTimeT>(value); }
    template<typename LastDebugLogDeliveryTimeT = Aws::Utils::DateTime>
    ConfigRuleEvaluationStatus& WithLastDebugLogDeliveryTime(LastDebugLogDeliveryTimeT&& value) { SetLastDebugLogDeliveryTime(std::forward<LastDebugLogDeliveryTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Aws::String m_configRuleArn;
    bool m_configRuleArnHasBeenSet = false;

    Aws::String m_configRuleId;
    bool m_configRuleIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulInvocationTime{};
    bool m_lastSuccessfulInvocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastFailedInvocationTime{};
    bool m_lastFailedInvocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulEvaluationTime{};
    bool m_lastSuccessfulEvaluationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastFailedEvaluationTime{};
    bool m_lastFailedEvaluationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_firstActivatedTime{};
    bool m_firstActivatedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeactivatedTime{};
    bool m_lastDeactivatedTimeHasBeenSet = false;

    Aws::String m_lastErrorCode;
    bool m_lastErrorCodeHasBeenSet = false;

    Aws::String m_lastErrorMessage;
    bool m_lastErrorMessageHasBeenSet = false;

    bool m_firstEvaluationStarted{false};
    bool m_firstEvaluationStartedHasBeenSet = false;

    Aws::String m_lastDebugLogDeliveryStatus;
    bool m_lastDebugLogDeliveryStatusHasBeenSet = false;

    Aws::String m_lastDebugLogDeliveryStatusReason;
    bool m_lastDebugLogDeliveryStatusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastDebugLogDeliveryTime{};
    bool m_lastDebugLogDeliveryTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
