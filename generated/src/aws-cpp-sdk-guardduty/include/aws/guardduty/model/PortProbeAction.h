/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/PortProbeDetail.h>
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
   * <p>Contains information about the PORT_PROBE action described in the
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/PortProbeAction">AWS
   * API Reference</a></p>
   */
  class PortProbeAction
  {
  public:
    AWS_GUARDDUTY_API PortProbeAction() = default;
    AWS_GUARDDUTY_API PortProbeAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API PortProbeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether EC2 blocked the port probe to the instance, such as with an
     * ACL.</p>
     */
    inline bool GetBlocked() const { return m_blocked; }
    inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }
    inline void SetBlocked(bool value) { m_blockedHasBeenSet = true; m_blocked = value; }
    inline PortProbeAction& WithBlocked(bool value) { SetBlocked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects related to port probe details.</p>
     */
    inline const Aws::Vector<PortProbeDetail>& GetPortProbeDetails() const { return m_portProbeDetails; }
    inline bool PortProbeDetailsHasBeenSet() const { return m_portProbeDetailsHasBeenSet; }
    template<typename PortProbeDetailsT = Aws::Vector<PortProbeDetail>>
    void SetPortProbeDetails(PortProbeDetailsT&& value) { m_portProbeDetailsHasBeenSet = true; m_portProbeDetails = std::forward<PortProbeDetailsT>(value); }
    template<typename PortProbeDetailsT = Aws::Vector<PortProbeDetail>>
    PortProbeAction& WithPortProbeDetails(PortProbeDetailsT&& value) { SetPortProbeDetails(std::forward<PortProbeDetailsT>(value)); return *this;}
    template<typename PortProbeDetailsT = PortProbeDetail>
    PortProbeAction& AddPortProbeDetails(PortProbeDetailsT&& value) { m_portProbeDetailsHasBeenSet = true; m_portProbeDetails.emplace_back(std::forward<PortProbeDetailsT>(value)); return *this; }
    ///@}
  private:

    bool m_blocked{false};
    bool m_blockedHasBeenSet = false;

    Aws::Vector<PortProbeDetail> m_portProbeDetails;
    bool m_portProbeDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
