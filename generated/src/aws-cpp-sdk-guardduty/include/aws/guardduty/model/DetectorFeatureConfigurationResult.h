/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DetectorFeatureResult.h>
#include <aws/guardduty/model/FeatureStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/DetectorAdditionalConfigurationResult.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about a GuardDuty feature.</p> <p>Specifying both EKS
   * Runtime Monitoring (<code>EKS_RUNTIME_MONITORING</code>) and Runtime Monitoring
   * (<code>RUNTIME_MONITORING</code>) will cause an error. You can add only one of
   * these two features because Runtime Monitoring already includes the threat
   * detection for Amazon EKS resources. For more information, see <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/runtime-monitoring.html">Runtime
   * Monitoring</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DetectorFeatureConfigurationResult">AWS
   * API Reference</a></p>
   */
  class DetectorFeatureConfigurationResult
  {
  public:
    AWS_GUARDDUTY_API DetectorFeatureConfigurationResult() = default;
    AWS_GUARDDUTY_API DetectorFeatureConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DetectorFeatureConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the name of the feature that can be enabled for the detector.</p>
     */
    inline DetectorFeatureResult GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(DetectorFeatureResult value) { m_nameHasBeenSet = true; m_name = value; }
    inline DetectorFeatureConfigurationResult& WithName(DetectorFeatureResult value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the feature that is enabled for the detector.</p>
     */
    inline FeatureStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeatureStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DetectorFeatureConfigurationResult& WithStatus(FeatureStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the feature object was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DetectorFeatureConfigurationResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline const Aws::Vector<DetectorAdditionalConfigurationResult>& GetAdditionalConfiguration() const { return m_additionalConfiguration; }
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }
    template<typename AdditionalConfigurationT = Aws::Vector<DetectorAdditionalConfigurationResult>>
    void SetAdditionalConfiguration(AdditionalConfigurationT&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::forward<AdditionalConfigurationT>(value); }
    template<typename AdditionalConfigurationT = Aws::Vector<DetectorAdditionalConfigurationResult>>
    DetectorFeatureConfigurationResult& WithAdditionalConfiguration(AdditionalConfigurationT&& value) { SetAdditionalConfiguration(std::forward<AdditionalConfigurationT>(value)); return *this;}
    template<typename AdditionalConfigurationT = DetectorAdditionalConfigurationResult>
    DetectorFeatureConfigurationResult& AddAdditionalConfiguration(AdditionalConfigurationT&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.emplace_back(std::forward<AdditionalConfigurationT>(value)); return *this; }
    ///@}
  private:

    DetectorFeatureResult m_name{DetectorFeatureResult::NOT_SET};
    bool m_nameHasBeenSet = false;

    FeatureStatus m_status{FeatureStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<DetectorAdditionalConfigurationResult> m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
