/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/MetricsExportConfig.h>
#include <aws/iot/model/Behavior.h>
#include <aws/iot/model/AlertTargetType.h>
#include <aws/iot/model/AlertTarget.h>
#include <aws/iot/model/MetricToRetain.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class UpdateSecurityProfileResult
  {
  public:
    AWS_IOT_API UpdateSecurityProfileResult() = default;
    AWS_IOT_API UpdateSecurityProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateSecurityProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the security profile that was updated.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const { return m_securityProfileName; }
    template<typename SecurityProfileNameT = Aws::String>
    void SetSecurityProfileName(SecurityProfileNameT&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::forward<SecurityProfileNameT>(value); }
    template<typename SecurityProfileNameT = Aws::String>
    UpdateSecurityProfileResult& WithSecurityProfileName(SecurityProfileNameT&& value) { SetSecurityProfileName(std::forward<SecurityProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the security profile that was updated.</p>
     */
    inline const Aws::String& GetSecurityProfileArn() const { return m_securityProfileArn; }
    template<typename SecurityProfileArnT = Aws::String>
    void SetSecurityProfileArn(SecurityProfileArnT&& value) { m_securityProfileArnHasBeenSet = true; m_securityProfileArn = std::forward<SecurityProfileArnT>(value); }
    template<typename SecurityProfileArnT = Aws::String>
    UpdateSecurityProfileResult& WithSecurityProfileArn(SecurityProfileArnT&& value) { SetSecurityProfileArn(std::forward<SecurityProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileDescription() const { return m_securityProfileDescription; }
    template<typename SecurityProfileDescriptionT = Aws::String>
    void SetSecurityProfileDescription(SecurityProfileDescriptionT&& value) { m_securityProfileDescriptionHasBeenSet = true; m_securityProfileDescription = std::forward<SecurityProfileDescriptionT>(value); }
    template<typename SecurityProfileDescriptionT = Aws::String>
    UpdateSecurityProfileResult& WithSecurityProfileDescription(SecurityProfileDescriptionT&& value) { SetSecurityProfileDescription(std::forward<SecurityProfileDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline const Aws::Vector<Behavior>& GetBehaviors() const { return m_behaviors; }
    template<typename BehaviorsT = Aws::Vector<Behavior>>
    void SetBehaviors(BehaviorsT&& value) { m_behaviorsHasBeenSet = true; m_behaviors = std::forward<BehaviorsT>(value); }
    template<typename BehaviorsT = Aws::Vector<Behavior>>
    UpdateSecurityProfileResult& WithBehaviors(BehaviorsT&& value) { SetBehaviors(std::forward<BehaviorsT>(value)); return *this;}
    template<typename BehaviorsT = Behavior>
    UpdateSecurityProfileResult& AddBehaviors(BehaviorsT&& value) { m_behaviorsHasBeenSet = true; m_behaviors.emplace_back(std::forward<BehaviorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline const Aws::Map<AlertTargetType, AlertTarget>& GetAlertTargets() const { return m_alertTargets; }
    template<typename AlertTargetsT = Aws::Map<AlertTargetType, AlertTarget>>
    void SetAlertTargets(AlertTargetsT&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets = std::forward<AlertTargetsT>(value); }
    template<typename AlertTargetsT = Aws::Map<AlertTargetType, AlertTarget>>
    UpdateSecurityProfileResult& WithAlertTargets(AlertTargetsT&& value) { SetAlertTargets(std::forward<AlertTargetsT>(value)); return *this;}
    inline UpdateSecurityProfileResult& AddAlertTargets(AlertTargetType key, AlertTarget value) {
      m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's behaviors, but it is also retained
     * for any metric specified here. Can be used with custom metrics; cannot be used
     * with dimensions.</p>
     */
    inline const Aws::Vector<MetricToRetain>& GetAdditionalMetricsToRetainV2() const { return m_additionalMetricsToRetainV2; }
    template<typename AdditionalMetricsToRetainV2T = Aws::Vector<MetricToRetain>>
    void SetAdditionalMetricsToRetainV2(AdditionalMetricsToRetainV2T&& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2 = std::forward<AdditionalMetricsToRetainV2T>(value); }
    template<typename AdditionalMetricsToRetainV2T = Aws::Vector<MetricToRetain>>
    UpdateSecurityProfileResult& WithAdditionalMetricsToRetainV2(AdditionalMetricsToRetainV2T&& value) { SetAdditionalMetricsToRetainV2(std::forward<AdditionalMetricsToRetainV2T>(value)); return *this;}
    template<typename AdditionalMetricsToRetainV2T = MetricToRetain>
    UpdateSecurityProfileResult& AddAdditionalMetricsToRetainV2(AdditionalMetricsToRetainV2T&& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2.emplace_back(std::forward<AdditionalMetricsToRetainV2T>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated version of the security profile.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline UpdateSecurityProfileResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the security profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    UpdateSecurityProfileResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the security profile was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    UpdateSecurityProfileResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the MQTT topic and role ARN required for metric export.</p>
     */
    inline const MetricsExportConfig& GetMetricsExportConfig() const { return m_metricsExportConfig; }
    template<typename MetricsExportConfigT = MetricsExportConfig>
    void SetMetricsExportConfig(MetricsExportConfigT&& value) { m_metricsExportConfigHasBeenSet = true; m_metricsExportConfig = std::forward<MetricsExportConfigT>(value); }
    template<typename MetricsExportConfigT = MetricsExportConfig>
    UpdateSecurityProfileResult& WithMetricsExportConfig(MetricsExportConfigT&& value) { SetMetricsExportConfig(std::forward<MetricsExportConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSecurityProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    Aws::String m_securityProfileArn;
    bool m_securityProfileArnHasBeenSet = false;

    Aws::String m_securityProfileDescription;
    bool m_securityProfileDescriptionHasBeenSet = false;

    Aws::Vector<Behavior> m_behaviors;
    bool m_behaviorsHasBeenSet = false;

    Aws::Map<AlertTargetType, AlertTarget> m_alertTargets;
    bool m_alertTargetsHasBeenSet = false;

    Aws::Vector<MetricToRetain> m_additionalMetricsToRetainV2;
    bool m_additionalMetricsToRetainV2HasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    MetricsExportConfig m_metricsExportConfig;
    bool m_metricsExportConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
