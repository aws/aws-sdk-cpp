/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrgFeatureAdditionalConfiguration.h>
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
   * <p>Information about the additional configuration for the member
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/MemberAdditionalConfigurationResult">AWS
   * API Reference</a></p>
   */
  class MemberAdditionalConfigurationResult
  {
  public:
    AWS_GUARDDUTY_API MemberAdditionalConfigurationResult() = default;
    AWS_GUARDDUTY_API MemberAdditionalConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API MemberAdditionalConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the name of the additional configuration that is set for the member
     * account.</p>
     */
    inline OrgFeatureAdditionalConfiguration GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(OrgFeatureAdditionalConfiguration value) { m_nameHasBeenSet = true; m_name = value; }
    inline MemberAdditionalConfigurationResult& WithName(OrgFeatureAdditionalConfiguration value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the additional configuration that is set for the
     * member account.</p>
     */
    inline FeatureStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeatureStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MemberAdditionalConfigurationResult& WithStatus(FeatureStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the additional configuration was set for the member
     * account. This is in UTC format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    MemberAdditionalConfigurationResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    OrgFeatureAdditionalConfiguration m_name{OrgFeatureAdditionalConfiguration::NOT_SET};
    bool m_nameHasBeenSet = false;

    FeatureStatus m_status{FeatureStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
