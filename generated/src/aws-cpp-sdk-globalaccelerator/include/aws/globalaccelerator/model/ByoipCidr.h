/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/ByoipCidrState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/ByoipCidrEvent.h>
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
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>Information about an IP address range that is provisioned for use with your
   * Amazon Web Services resources through bring your own IP address (BYOIP).</p>
   * <p>The following describes each BYOIP <code>State</code> that your IP address
   * range can be in.</p> <ul> <li> <p> <b>PENDING_PROVISIONING</b> — You’ve
   * submitted a request to provision an IP address range but it is not yet
   * provisioned with Global Accelerator.</p> </li> <li> <p> <b>READY</b> — The
   * address range is provisioned with Global Accelerator and can be advertised.</p>
   * </li> <li> <p> <b>PENDING_ADVERTISING</b> — You’ve submitted a request for
   * Global Accelerator to advertise an address range but it is not yet being
   * advertised.</p> </li> <li> <p> <b>ADVERTISING</b> — The address range is being
   * advertised by Global Accelerator.</p> </li> <li> <p> <b>PENDING_WITHDRAWING</b>
   * — You’ve submitted a request to withdraw an address range from being advertised
   * but it is still being advertised by Global Accelerator.</p> </li> <li> <p>
   * <b>PENDING_DEPROVISIONING</b> — You’ve submitted a request to deprovision an
   * address range from Global Accelerator but it is still provisioned.</p> </li>
   * <li> <p> <b>DEPROVISIONED</b> — The address range is deprovisioned from Global
   * Accelerator.</p> </li> <li> <p> <b>FAILED_PROVISION </b> — The request to
   * provision the address range from Global Accelerator was not successful. Please
   * make sure that you provide all of the correct information, and try again. If the
   * request fails a second time, contact Amazon Web Services support.</p> </li> <li>
   * <p> <b>FAILED_ADVERTISING</b> — The request for Global Accelerator to advertise
   * the address range was not successful. Please make sure that you provide all of
   * the correct information, and try again. If the request fails a second time,
   * contact Amazon Web Services support.</p> </li> <li> <p> <b>FAILED_WITHDRAW</b> —
   * The request to withdraw the address range from advertising by Global Accelerator
   * was not successful. Please make sure that you provide all of the correct
   * information, and try again. If the request fails a second time, contact Amazon
   * Web Services support.</p> </li> <li> <p> <b>FAILED_DEPROVISION </b> — The
   * request to deprovision the address range from Global Accelerator was not
   * successful. Please make sure that you provide all of the correct information,
   * and try again. If the request fails a second time, contact Amazon Web Services
   * support.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ByoipCidr">AWS
   * API Reference</a></p>
   */
  class ByoipCidr
  {
  public:
    AWS_GLOBALACCELERATOR_API ByoipCidr();
    AWS_GLOBALACCELERATOR_API ByoipCidr(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API ByoipCidr& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline ByoipCidr& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline ByoipCidr& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline ByoipCidr& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The state of the address pool.</p>
     */
    inline const ByoipCidrState& GetState() const{ return m_state; }

    /**
     * <p>The state of the address pool.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the address pool.</p>
     */
    inline void SetState(const ByoipCidrState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the address pool.</p>
     */
    inline void SetState(ByoipCidrState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the address pool.</p>
     */
    inline ByoipCidr& WithState(const ByoipCidrState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the address pool.</p>
     */
    inline ByoipCidr& WithState(ByoipCidrState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A history of status changes for an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline const Aws::Vector<ByoipCidrEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>A history of status changes for an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>A history of status changes for an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline void SetEvents(const Aws::Vector<ByoipCidrEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>A history of status changes for an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline void SetEvents(Aws::Vector<ByoipCidrEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>A history of status changes for an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline ByoipCidr& WithEvents(const Aws::Vector<ByoipCidrEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>A history of status changes for an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline ByoipCidr& WithEvents(Aws::Vector<ByoipCidrEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>A history of status changes for an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline ByoipCidr& AddEvents(const ByoipCidrEvent& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>A history of status changes for an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline ByoipCidr& AddEvents(ByoipCidrEvent&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    ByoipCidrState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<ByoipCidrEvent> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
