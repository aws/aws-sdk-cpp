/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrgFeatureAdditionalConfiguration.h>
#include <aws/guardduty/model/FeatureStatus.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/MemberAdditionalConfiguration">AWS
   * API Reference</a></p>
   */
  class MemberAdditionalConfiguration
  {
  public:
    AWS_GUARDDUTY_API MemberAdditionalConfiguration() = default;
    AWS_GUARDDUTY_API MemberAdditionalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API MemberAdditionalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the additional configuration.</p>
     */
    inline OrgFeatureAdditionalConfiguration GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(OrgFeatureAdditionalConfiguration value) { m_nameHasBeenSet = true; m_name = value; }
    inline MemberAdditionalConfiguration& WithName(OrgFeatureAdditionalConfiguration value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the additional configuration.</p>
     */
    inline FeatureStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeatureStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MemberAdditionalConfiguration& WithStatus(FeatureStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    OrgFeatureAdditionalConfiguration m_name{OrgFeatureAdditionalConfiguration::NOT_SET};
    bool m_nameHasBeenSet = false;

    FeatureStatus m_status{FeatureStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
