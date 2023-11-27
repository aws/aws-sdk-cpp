/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/DriftStatus.h>
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
   * <p>The drift summary of the enabled control.</p> <p>Amazon Web Services Control
   * Tower expects the enabled control configuration to include all supported and
   * governed Regions. If the enabled control differs from the expected
   * configuration, it is defined to be in a state of drift. You can repair this
   * drift by resetting the enabled control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/DriftStatusSummary">AWS
   * API Reference</a></p>
   */
  class DriftStatusSummary
  {
  public:
    AWS_CONTROLTOWER_API DriftStatusSummary();
    AWS_CONTROLTOWER_API DriftStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API DriftStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The drift status of the enabled control.</p> <p>Valid values:</p> <ul> <li>
     * <p> <code>DRIFTED</code>: The <code>enabledControl</code> deployed in this
     * configuration doesn’t match the configuration that Amazon Web Services Control
     * Tower expected. </p> </li> <li> <p> <code>IN_SYNC</code>: The
     * <code>enabledControl</code> deployed in this configuration matches the
     * configuration that Amazon Web Services Control Tower expected.</p> </li> <li>
     * <p> <code>NOT_CHECKING</code>: Amazon Web Services Control Tower does not check
     * drift for this enabled control. Drift is not supported for the control type.</p>
     * </li> <li> <p> <code>UNKNOWN</code>: Amazon Web Services Control Tower is not
     * able to check the drift status for the enabled control. </p> </li> </ul>
     */
    inline const DriftStatus& GetDriftStatus() const{ return m_driftStatus; }

    /**
     * <p> The drift status of the enabled control.</p> <p>Valid values:</p> <ul> <li>
     * <p> <code>DRIFTED</code>: The <code>enabledControl</code> deployed in this
     * configuration doesn’t match the configuration that Amazon Web Services Control
     * Tower expected. </p> </li> <li> <p> <code>IN_SYNC</code>: The
     * <code>enabledControl</code> deployed in this configuration matches the
     * configuration that Amazon Web Services Control Tower expected.</p> </li> <li>
     * <p> <code>NOT_CHECKING</code>: Amazon Web Services Control Tower does not check
     * drift for this enabled control. Drift is not supported for the control type.</p>
     * </li> <li> <p> <code>UNKNOWN</code>: Amazon Web Services Control Tower is not
     * able to check the drift status for the enabled control. </p> </li> </ul>
     */
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }

    /**
     * <p> The drift status of the enabled control.</p> <p>Valid values:</p> <ul> <li>
     * <p> <code>DRIFTED</code>: The <code>enabledControl</code> deployed in this
     * configuration doesn’t match the configuration that Amazon Web Services Control
     * Tower expected. </p> </li> <li> <p> <code>IN_SYNC</code>: The
     * <code>enabledControl</code> deployed in this configuration matches the
     * configuration that Amazon Web Services Control Tower expected.</p> </li> <li>
     * <p> <code>NOT_CHECKING</code>: Amazon Web Services Control Tower does not check
     * drift for this enabled control. Drift is not supported for the control type.</p>
     * </li> <li> <p> <code>UNKNOWN</code>: Amazon Web Services Control Tower is not
     * able to check the drift status for the enabled control. </p> </li> </ul>
     */
    inline void SetDriftStatus(const DriftStatus& value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }

    /**
     * <p> The drift status of the enabled control.</p> <p>Valid values:</p> <ul> <li>
     * <p> <code>DRIFTED</code>: The <code>enabledControl</code> deployed in this
     * configuration doesn’t match the configuration that Amazon Web Services Control
     * Tower expected. </p> </li> <li> <p> <code>IN_SYNC</code>: The
     * <code>enabledControl</code> deployed in this configuration matches the
     * configuration that Amazon Web Services Control Tower expected.</p> </li> <li>
     * <p> <code>NOT_CHECKING</code>: Amazon Web Services Control Tower does not check
     * drift for this enabled control. Drift is not supported for the control type.</p>
     * </li> <li> <p> <code>UNKNOWN</code>: Amazon Web Services Control Tower is not
     * able to check the drift status for the enabled control. </p> </li> </ul>
     */
    inline void SetDriftStatus(DriftStatus&& value) { m_driftStatusHasBeenSet = true; m_driftStatus = std::move(value); }

    /**
     * <p> The drift status of the enabled control.</p> <p>Valid values:</p> <ul> <li>
     * <p> <code>DRIFTED</code>: The <code>enabledControl</code> deployed in this
     * configuration doesn’t match the configuration that Amazon Web Services Control
     * Tower expected. </p> </li> <li> <p> <code>IN_SYNC</code>: The
     * <code>enabledControl</code> deployed in this configuration matches the
     * configuration that Amazon Web Services Control Tower expected.</p> </li> <li>
     * <p> <code>NOT_CHECKING</code>: Amazon Web Services Control Tower does not check
     * drift for this enabled control. Drift is not supported for the control type.</p>
     * </li> <li> <p> <code>UNKNOWN</code>: Amazon Web Services Control Tower is not
     * able to check the drift status for the enabled control. </p> </li> </ul>
     */
    inline DriftStatusSummary& WithDriftStatus(const DriftStatus& value) { SetDriftStatus(value); return *this;}

    /**
     * <p> The drift status of the enabled control.</p> <p>Valid values:</p> <ul> <li>
     * <p> <code>DRIFTED</code>: The <code>enabledControl</code> deployed in this
     * configuration doesn’t match the configuration that Amazon Web Services Control
     * Tower expected. </p> </li> <li> <p> <code>IN_SYNC</code>: The
     * <code>enabledControl</code> deployed in this configuration matches the
     * configuration that Amazon Web Services Control Tower expected.</p> </li> <li>
     * <p> <code>NOT_CHECKING</code>: Amazon Web Services Control Tower does not check
     * drift for this enabled control. Drift is not supported for the control type.</p>
     * </li> <li> <p> <code>UNKNOWN</code>: Amazon Web Services Control Tower is not
     * able to check the drift status for the enabled control. </p> </li> </ul>
     */
    inline DriftStatusSummary& WithDriftStatus(DriftStatus&& value) { SetDriftStatus(std::move(value)); return *this;}

  private:

    DriftStatus m_driftStatus;
    bool m_driftStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
