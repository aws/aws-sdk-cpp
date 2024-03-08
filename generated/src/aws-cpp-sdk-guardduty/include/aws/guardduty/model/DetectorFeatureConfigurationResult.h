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
    AWS_GUARDDUTY_API DetectorFeatureConfigurationResult();
    AWS_GUARDDUTY_API DetectorFeatureConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DetectorFeatureConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates the name of the feature that can be enabled for the detector.</p>
     */
    inline const DetectorFeatureResult& GetName() const{ return m_name; }

    /**
     * <p>Indicates the name of the feature that can be enabled for the detector.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Indicates the name of the feature that can be enabled for the detector.</p>
     */
    inline void SetName(const DetectorFeatureResult& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Indicates the name of the feature that can be enabled for the detector.</p>
     */
    inline void SetName(DetectorFeatureResult&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Indicates the name of the feature that can be enabled for the detector.</p>
     */
    inline DetectorFeatureConfigurationResult& WithName(const DetectorFeatureResult& value) { SetName(value); return *this;}

    /**
     * <p>Indicates the name of the feature that can be enabled for the detector.</p>
     */
    inline DetectorFeatureConfigurationResult& WithName(DetectorFeatureResult&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>Indicates the status of the feature that is enabled for the detector.</p>
     */
    inline const FeatureStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the feature that is enabled for the detector.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates the status of the feature that is enabled for the detector.</p>
     */
    inline void SetStatus(const FeatureStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates the status of the feature that is enabled for the detector.</p>
     */
    inline void SetStatus(FeatureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates the status of the feature that is enabled for the detector.</p>
     */
    inline DetectorFeatureConfigurationResult& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the feature that is enabled for the detector.</p>
     */
    inline DetectorFeatureConfigurationResult& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp at which the feature object was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp at which the feature object was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp at which the feature object was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp at which the feature object was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp at which the feature object was updated.</p>
     */
    inline DetectorFeatureConfigurationResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp at which the feature object was updated.</p>
     */
    inline DetectorFeatureConfigurationResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline const Aws::Vector<DetectorAdditionalConfigurationResult>& GetAdditionalConfiguration() const{ return m_additionalConfiguration; }

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline void SetAdditionalConfiguration(const Aws::Vector<DetectorAdditionalConfigurationResult>& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = value; }

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline void SetAdditionalConfiguration(Aws::Vector<DetectorAdditionalConfigurationResult>&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::move(value); }

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline DetectorFeatureConfigurationResult& WithAdditionalConfiguration(const Aws::Vector<DetectorAdditionalConfigurationResult>& value) { SetAdditionalConfiguration(value); return *this;}

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline DetectorFeatureConfigurationResult& WithAdditionalConfiguration(Aws::Vector<DetectorAdditionalConfigurationResult>&& value) { SetAdditionalConfiguration(std::move(value)); return *this;}

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline DetectorFeatureConfigurationResult& AddAdditionalConfiguration(const DetectorAdditionalConfigurationResult& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.push_back(value); return *this; }

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline DetectorFeatureConfigurationResult& AddAdditionalConfiguration(DetectorAdditionalConfigurationResult&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.push_back(std::move(value)); return *this; }

  private:

    DetectorFeatureResult m_name;
    bool m_nameHasBeenSet = false;

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<DetectorAdditionalConfigurationResult> m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
