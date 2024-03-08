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
    AWS_GUARDDUTY_API DetectorFeatureConfiguration();
    AWS_GUARDDUTY_API DetectorFeatureConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DetectorFeatureConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the feature.</p>
     */
    inline const DetectorFeature& GetName() const{ return m_name; }

    /**
     * <p>The name of the feature.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the feature.</p>
     */
    inline void SetName(const DetectorFeature& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the feature.</p>
     */
    inline void SetName(DetectorFeature&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the feature.</p>
     */
    inline DetectorFeatureConfiguration& WithName(const DetectorFeature& value) { SetName(value); return *this;}

    /**
     * <p>The name of the feature.</p>
     */
    inline DetectorFeatureConfiguration& WithName(DetectorFeature&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The status of the feature.</p>
     */
    inline const FeatureStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the feature.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the feature.</p>
     */
    inline void SetStatus(const FeatureStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the feature.</p>
     */
    inline void SetStatus(FeatureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the feature.</p>
     */
    inline DetectorFeatureConfiguration& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the feature.</p>
     */
    inline DetectorFeatureConfiguration& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline const Aws::Vector<DetectorAdditionalConfiguration>& GetAdditionalConfiguration() const{ return m_additionalConfiguration; }

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline void SetAdditionalConfiguration(const Aws::Vector<DetectorAdditionalConfiguration>& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = value; }

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline void SetAdditionalConfiguration(Aws::Vector<DetectorAdditionalConfiguration>&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::move(value); }

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline DetectorFeatureConfiguration& WithAdditionalConfiguration(const Aws::Vector<DetectorAdditionalConfiguration>& value) { SetAdditionalConfiguration(value); return *this;}

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline DetectorFeatureConfiguration& WithAdditionalConfiguration(Aws::Vector<DetectorAdditionalConfiguration>&& value) { SetAdditionalConfiguration(std::move(value)); return *this;}

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline DetectorFeatureConfiguration& AddAdditionalConfiguration(const DetectorAdditionalConfiguration& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.push_back(value); return *this; }

    /**
     * <p>Additional configuration for a resource.</p>
     */
    inline DetectorFeatureConfiguration& AddAdditionalConfiguration(DetectorAdditionalConfiguration&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.push_back(std::move(value)); return *this; }

  private:

    DetectorFeature m_name;
    bool m_nameHasBeenSet = false;

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<DetectorAdditionalConfiguration> m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
