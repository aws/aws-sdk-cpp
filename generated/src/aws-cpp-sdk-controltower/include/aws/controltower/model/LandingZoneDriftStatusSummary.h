/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/LandingZoneDriftStatus.h>
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
   * <p>The drift status summary of the landing zone. </p> <p>If the landing zone
   * differs from the expected configuration, it is defined to be in a state of
   * drift. You can repair this drift by resetting the landing zone.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/LandingZoneDriftStatusSummary">AWS
   * API Reference</a></p>
   */
  class LandingZoneDriftStatusSummary
  {
  public:
    AWS_CONTROLTOWER_API LandingZoneDriftStatusSummary() = default;
    AWS_CONTROLTOWER_API LandingZoneDriftStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API LandingZoneDriftStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The drift status of the landing zone. </p> <p>Valid values:</p> <ul> <li> <p>
     * <code>DRIFTED</code>: The landing zone deployed in this configuration does not
     * match the configuration that Amazon Web Services Control Tower expected. </p>
     * </li> <li> <p> <code>IN_SYNC</code>: The landing zone deployed in this
     * configuration matches the configuration that Amazon Web Services Control Tower
     * expected. </p> </li> </ul>
     */
    inline LandingZoneDriftStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LandingZoneDriftStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LandingZoneDriftStatusSummary& WithStatus(LandingZoneDriftStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    LandingZoneDriftStatus m_status{LandingZoneDriftStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
