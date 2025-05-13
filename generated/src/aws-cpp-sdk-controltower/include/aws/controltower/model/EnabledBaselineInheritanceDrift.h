/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/EnabledBaselineDriftStatus.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>The inheritance drift summary for the enabled baseline. Inheritance drift
   * occurs when any accounts in the target OU do not match the baseline
   * configuration defined on that OU. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledBaselineInheritanceDrift">AWS
   * API Reference</a></p>
   */
  class EnabledBaselineInheritanceDrift
  {
  public:
    AWS_CONTROLTOWER_API EnabledBaselineInheritanceDrift() = default;
    AWS_CONTROLTOWER_API EnabledBaselineInheritanceDrift(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledBaselineInheritanceDrift& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inheritance drift status for enabled baselines.</p>
     */
    inline EnabledBaselineDriftStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EnabledBaselineDriftStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EnabledBaselineInheritanceDrift& WithStatus(EnabledBaselineDriftStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    EnabledBaselineDriftStatus m_status{EnabledBaselineDriftStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
