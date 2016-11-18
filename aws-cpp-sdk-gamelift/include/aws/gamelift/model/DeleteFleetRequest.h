﻿/*
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

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p>
   */
  class AWS_GAMELIFT_API DeleteFleetRequest : public GameLiftRequest
  {
  public:
    DeleteFleetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier for the fleet you want to delete.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for the fleet you want to delete.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for the fleet you want to delete.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for the fleet you want to delete.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for the fleet you want to delete.</p>
     */
    inline DeleteFleetRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for the fleet you want to delete.</p>
     */
    inline DeleteFleetRequest& WithFleetId(Aws::String&& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for the fleet you want to delete.</p>
     */
    inline DeleteFleetRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
