/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class DisassociateMemberFromFleetRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API DisassociateMemberFromFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateMemberFromFleet"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    /**
     * <p>The farm ID of the fleet to disassociate a member from.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID of the fleet to disassociate a member from.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID of the fleet to disassociate a member from.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID of the fleet to disassociate a member from.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID of the fleet to disassociate a member from.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID of the fleet to disassociate a member from.</p>
     */
    inline DisassociateMemberFromFleetRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID of the fleet to disassociate a member from.</p>
     */
    inline DisassociateMemberFromFleetRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID of the fleet to disassociate a member from.</p>
     */
    inline DisassociateMemberFromFleetRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The fleet ID of the fleet to from which to disassociate a member.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The fleet ID of the fleet to from which to disassociate a member.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>The fleet ID of the fleet to from which to disassociate a member.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>The fleet ID of the fleet to from which to disassociate a member.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>The fleet ID of the fleet to from which to disassociate a member.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>The fleet ID of the fleet to from which to disassociate a member.</p>
     */
    inline DisassociateMemberFromFleetRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The fleet ID of the fleet to from which to disassociate a member.</p>
     */
    inline DisassociateMemberFromFleetRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The fleet ID of the fleet to from which to disassociate a member.</p>
     */
    inline DisassociateMemberFromFleetRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A member's principal ID to disassociate from a fleet.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>A member's principal ID to disassociate from a fleet.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>A member's principal ID to disassociate from a fleet.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>A member's principal ID to disassociate from a fleet.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>A member's principal ID to disassociate from a fleet.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>A member's principal ID to disassociate from a fleet.</p>
     */
    inline DisassociateMemberFromFleetRequest& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>A member's principal ID to disassociate from a fleet.</p>
     */
    inline DisassociateMemberFromFleetRequest& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>A member's principal ID to disassociate from a fleet.</p>
     */
    inline DisassociateMemberFromFleetRequest& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}

  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
