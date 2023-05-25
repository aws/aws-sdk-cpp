/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrgFeature.h>
#include <aws/guardduty/model/FeatureStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/MemberAdditionalConfiguration.h>
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
   * <p>Contains information about the features for the member account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/MemberFeaturesConfiguration">AWS
   * API Reference</a></p>
   */
  class MemberFeaturesConfiguration
  {
  public:
    AWS_GUARDDUTY_API MemberFeaturesConfiguration();
    AWS_GUARDDUTY_API MemberFeaturesConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API MemberFeaturesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the feature.</p>
     */
    inline const OrgFeature& GetName() const{ return m_name; }

    /**
     * <p>The name of the feature.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the feature.</p>
     */
    inline void SetName(const OrgFeature& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the feature.</p>
     */
    inline void SetName(OrgFeature&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the feature.</p>
     */
    inline MemberFeaturesConfiguration& WithName(const OrgFeature& value) { SetName(value); return *this;}

    /**
     * <p>The name of the feature.</p>
     */
    inline MemberFeaturesConfiguration& WithName(OrgFeature&& value) { SetName(std::move(value)); return *this;}


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
    inline MemberFeaturesConfiguration& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the feature.</p>
     */
    inline MemberFeaturesConfiguration& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Additional configuration of the feature for the member account.</p>
     */
    inline const Aws::Vector<MemberAdditionalConfiguration>& GetAdditionalConfiguration() const{ return m_additionalConfiguration; }

    /**
     * <p>Additional configuration of the feature for the member account.</p>
     */
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }

    /**
     * <p>Additional configuration of the feature for the member account.</p>
     */
    inline void SetAdditionalConfiguration(const Aws::Vector<MemberAdditionalConfiguration>& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = value; }

    /**
     * <p>Additional configuration of the feature for the member account.</p>
     */
    inline void SetAdditionalConfiguration(Aws::Vector<MemberAdditionalConfiguration>&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::move(value); }

    /**
     * <p>Additional configuration of the feature for the member account.</p>
     */
    inline MemberFeaturesConfiguration& WithAdditionalConfiguration(const Aws::Vector<MemberAdditionalConfiguration>& value) { SetAdditionalConfiguration(value); return *this;}

    /**
     * <p>Additional configuration of the feature for the member account.</p>
     */
    inline MemberFeaturesConfiguration& WithAdditionalConfiguration(Aws::Vector<MemberAdditionalConfiguration>&& value) { SetAdditionalConfiguration(std::move(value)); return *this;}

    /**
     * <p>Additional configuration of the feature for the member account.</p>
     */
    inline MemberFeaturesConfiguration& AddAdditionalConfiguration(const MemberAdditionalConfiguration& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.push_back(value); return *this; }

    /**
     * <p>Additional configuration of the feature for the member account.</p>
     */
    inline MemberFeaturesConfiguration& AddAdditionalConfiguration(MemberAdditionalConfiguration&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.push_back(std::move(value)); return *this; }

  private:

    OrgFeature m_name;
    bool m_nameHasBeenSet = false;

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<MemberAdditionalConfiguration> m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
