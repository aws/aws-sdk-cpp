/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DetectorFeature.h>
#include <aws/guardduty/model/FeatureStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/DetectorAdditionalConfiguration.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DetectorFeatureConfiguration">AWS
   * API Reference</a></p>
   */
  class DetectorFeatureConfiguration
  {
  public:
    AWS_GUARDDUTY_API DetectorFeatureConfiguration() = default;
    AWS_GUARDDUTY_API DetectorFeatureConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DetectorFeatureConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the feature.</p>
     */
    inline DetectorFeature GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(DetectorFeature value) { m_nameHasBeenSet = true; m_name = value; }
    inline DetectorFeatureConfiguration& WithName(DetectorFeature value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the feature.</p>
     */
    inline FeatureStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeatureStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DetectorFeatureConfiguration& WithStatus(FeatureStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline const Aws::Vector<DetectorAdditionalConfiguration>& GetAdditionalConfiguration() const { return m_additionalConfiguration; }
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }
    template<typename AdditionalConfigurationT = Aws::Vector<DetectorAdditionalConfiguration>>
    void SetAdditionalConfiguration(AdditionalConfigurationT&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::forward<AdditionalConfigurationT>(value); }
    template<typename AdditionalConfigurationT = Aws::Vector<DetectorAdditionalConfiguration>>
    DetectorFeatureConfiguration& WithAdditionalConfiguration(AdditionalConfigurationT&& value) { SetAdditionalConfiguration(std::forward<AdditionalConfigurationT>(value)); return *this;}
    template<typename AdditionalConfigurationT = DetectorAdditionalConfiguration>
    DetectorFeatureConfiguration& AddAdditionalConfiguration(AdditionalConfigurationT&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.emplace_back(std::forward<AdditionalConfigurationT>(value)); return *this; }
    ///@}
  private:

    DetectorFeature m_name{DetectorFeature::NOT_SET};
    bool m_nameHasBeenSet = false;

    FeatureStatus m_status{FeatureStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<DetectorAdditionalConfiguration> m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
