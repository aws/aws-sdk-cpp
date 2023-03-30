/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrgFeature.h>
#include <aws/guardduty/model/FeatureStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/MemberAdditionalConfigurationResult.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/MemberFeaturesConfigurationResult">AWS
   * API Reference</a></p>
   */
  class MemberFeaturesConfigurationResult
  {
  public:
    AWS_GUARDDUTY_API MemberFeaturesConfigurationResult();
    AWS_GUARDDUTY_API MemberFeaturesConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API MemberFeaturesConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates the name of the feature that is enabled for the detector.</p>
     */
    inline const OrgFeature& GetName() const{ return m_name; }

    /**
     * <p>Indicates the name of the feature that is enabled for the detector.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Indicates the name of the feature that is enabled for the detector.</p>
     */
    inline void SetName(const OrgFeature& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Indicates the name of the feature that is enabled for the detector.</p>
     */
    inline void SetName(OrgFeature&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Indicates the name of the feature that is enabled for the detector.</p>
     */
    inline MemberFeaturesConfigurationResult& WithName(const OrgFeature& value) { SetName(value); return *this;}

    /**
     * <p>Indicates the name of the feature that is enabled for the detector.</p>
     */
    inline MemberFeaturesConfigurationResult& WithName(OrgFeature&& value) { SetName(std::move(value)); return *this;}


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
    inline MemberFeaturesConfigurationResult& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the feature that is enabled for the detector.</p>
     */
    inline MemberFeaturesConfigurationResult& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline MemberFeaturesConfigurationResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp at which the feature object was updated.</p>
     */
    inline MemberFeaturesConfigurationResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Indicates the additional configuration of the feature that is configured for
     * the member account.</p>
     */
    inline const Aws::Vector<MemberAdditionalConfigurationResult>& GetAdditionalConfiguration() const{ return m_additionalConfiguration; }

    /**
     * <p>Indicates the additional configuration of the feature that is configured for
     * the member account.</p>
     */
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }

    /**
     * <p>Indicates the additional configuration of the feature that is configured for
     * the member account.</p>
     */
    inline void SetAdditionalConfiguration(const Aws::Vector<MemberAdditionalConfigurationResult>& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = value; }

    /**
     * <p>Indicates the additional configuration of the feature that is configured for
     * the member account.</p>
     */
    inline void SetAdditionalConfiguration(Aws::Vector<MemberAdditionalConfigurationResult>&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::move(value); }

    /**
     * <p>Indicates the additional configuration of the feature that is configured for
     * the member account.</p>
     */
    inline MemberFeaturesConfigurationResult& WithAdditionalConfiguration(const Aws::Vector<MemberAdditionalConfigurationResult>& value) { SetAdditionalConfiguration(value); return *this;}

    /**
     * <p>Indicates the additional configuration of the feature that is configured for
     * the member account.</p>
     */
    inline MemberFeaturesConfigurationResult& WithAdditionalConfiguration(Aws::Vector<MemberAdditionalConfigurationResult>&& value) { SetAdditionalConfiguration(std::move(value)); return *this;}

    /**
     * <p>Indicates the additional configuration of the feature that is configured for
     * the member account.</p>
     */
    inline MemberFeaturesConfigurationResult& AddAdditionalConfiguration(const MemberAdditionalConfigurationResult& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.push_back(value); return *this; }

    /**
     * <p>Indicates the additional configuration of the feature that is configured for
     * the member account.</p>
     */
    inline MemberFeaturesConfigurationResult& AddAdditionalConfiguration(MemberAdditionalConfigurationResult&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.push_back(std::move(value)); return *this; }

  private:

    OrgFeature m_name;
    bool m_nameHasBeenSet = false;

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<MemberAdditionalConfigurationResult> m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
