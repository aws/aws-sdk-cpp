/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ProtectionPolicy.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p>
   */
  class AWS_GAMELIFT_API UpdateFleetAttributesRequest : public GameLiftRequest
  {
  public:
    UpdateFleetAttributesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier for the fleet you want to update attribute metadata for.
     * </p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for the fleet you want to update attribute metadata for.
     * </p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for the fleet you want to update attribute metadata for.
     * </p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for the fleet you want to update attribute metadata for.
     * </p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for the fleet you want to update attribute metadata for.
     * </p>
     */
    inline UpdateFleetAttributesRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for the fleet you want to update attribute metadata for.
     * </p>
     */
    inline UpdateFleetAttributesRequest& WithFleetId(Aws::String&& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for the fleet you want to update attribute metadata for.
     * </p>
     */
    inline UpdateFleetAttributesRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline UpdateFleetAttributesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline UpdateFleetAttributesRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline UpdateFleetAttributesRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline UpdateFleetAttributesRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline UpdateFleetAttributesRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline UpdateFleetAttributesRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Game session protection policy to apply to all new instances created in this
     * fleet. Instances that already exist will not be affected. You can set protection
     * for individual instances using <a>UpdateGameSession</a>. <ul><li>NoProtection:
     * The game session can be terminated during a scale-down event.</li>
     * <li>FullProtection: If the game session is in an ACTIVE status, it cannot be
     * terminated during a scale-down event.</li></ul></p>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }

    /**
     * <p>Game session protection policy to apply to all new instances created in this
     * fleet. Instances that already exist will not be affected. You can set protection
     * for individual instances using <a>UpdateGameSession</a>. <ul><li>NoProtection:
     * The game session can be terminated during a scale-down event.</li>
     * <li>FullProtection: If the game session is in an ACTIVE status, it cannot be
     * terminated during a scale-down event.</li></ul></p>
     */
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>Game session protection policy to apply to all new instances created in this
     * fleet. Instances that already exist will not be affected. You can set protection
     * for individual instances using <a>UpdateGameSession</a>. <ul><li>NoProtection:
     * The game session can be terminated during a scale-down event.</li>
     * <li>FullProtection: If the game session is in an ACTIVE status, it cannot be
     * terminated during a scale-down event.</li></ul></p>
     */
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>Game session protection policy to apply to all new instances created in this
     * fleet. Instances that already exist will not be affected. You can set protection
     * for individual instances using <a>UpdateGameSession</a>. <ul><li>NoProtection:
     * The game session can be terminated during a scale-down event.</li>
     * <li>FullProtection: If the game session is in an ACTIVE status, it cannot be
     * terminated during a scale-down event.</li></ul></p>
     */
    inline UpdateFleetAttributesRequest& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

    /**
     * <p>Game session protection policy to apply to all new instances created in this
     * fleet. Instances that already exist will not be affected. You can set protection
     * for individual instances using <a>UpdateGameSession</a>. <ul><li>NoProtection:
     * The game session can be terminated during a scale-down event.</li>
     * <li>FullProtection: If the game session is in an ACTIVE status, it cannot be
     * terminated during a scale-down event.</li></ul></p>
     */
    inline UpdateFleetAttributesRequest& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
