/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FeatureAdditionalConfiguration.h>
#include <aws/guardduty/model/FeatureStatus.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the additional configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DetectorAdditionalConfigurationResult">AWS
   * API Reference</a></p>
   */
  class DetectorAdditionalConfigurationResult
  {
  public:
    AWS_GUARDDUTY_API DetectorAdditionalConfigurationResult();
    AWS_GUARDDUTY_API DetectorAdditionalConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DetectorAdditionalConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the additional configuration.</p>
     */
    inline const FeatureAdditionalConfiguration& GetName() const{ return m_name; }

    /**
     * <p>Name of the additional configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the additional configuration.</p>
     */
    inline void SetName(const FeatureAdditionalConfiguration& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the additional configuration.</p>
     */
    inline void SetName(FeatureAdditionalConfiguration&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the additional configuration.</p>
     */
    inline DetectorAdditionalConfigurationResult& WithName(const FeatureAdditionalConfiguration& value) { SetName(value); return *this;}

    /**
     * <p>Name of the additional configuration.</p>
     */
    inline DetectorAdditionalConfigurationResult& WithName(FeatureAdditionalConfiguration&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>Status of the additional configuration.</p>
     */
    inline const FeatureStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the additional configuration.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the additional configuration.</p>
     */
    inline void SetStatus(const FeatureStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the additional configuration.</p>
     */
    inline void SetStatus(FeatureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the additional configuration.</p>
     */
    inline DetectorAdditionalConfigurationResult& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the additional configuration.</p>
     */
    inline DetectorAdditionalConfigurationResult& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp at which the additional configuration was last updated. This is
     * in UTC format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp at which the additional configuration was last updated. This is
     * in UTC format.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp at which the additional configuration was last updated. This is
     * in UTC format.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp at which the additional configuration was last updated. This is
     * in UTC format.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp at which the additional configuration was last updated. This is
     * in UTC format.</p>
     */
    inline DetectorAdditionalConfigurationResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp at which the additional configuration was last updated. This is
     * in UTC format.</p>
     */
    inline DetectorAdditionalConfigurationResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    FeatureAdditionalConfiguration m_name;
    bool m_nameHasBeenSet = false;

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
