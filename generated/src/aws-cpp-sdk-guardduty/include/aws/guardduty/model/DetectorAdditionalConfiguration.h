/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FeatureAdditionalConfiguration.h>
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
   * <p>Information about the additional configuration for a feature in your
   * GuardDuty account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DetectorAdditionalConfiguration">AWS
   * API Reference</a></p>
   */
  class DetectorAdditionalConfiguration
  {
  public:
    AWS_GUARDDUTY_API DetectorAdditionalConfiguration() = default;
    AWS_GUARDDUTY_API DetectorAdditionalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DetectorAdditionalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the additional configuration.</p>
     */
    inline FeatureAdditionalConfiguration GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(FeatureAdditionalConfiguration value) { m_nameHasBeenSet = true; m_name = value; }
    inline DetectorAdditionalConfiguration& WithName(FeatureAdditionalConfiguration value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the additional configuration.</p>
     */
    inline FeatureStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeatureStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DetectorAdditionalConfiguration& WithStatus(FeatureStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    FeatureAdditionalConfiguration m_name{FeatureAdditionalConfiguration::NOT_SET};
    bool m_nameHasBeenSet = false;

    FeatureStatus m_status{FeatureStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
