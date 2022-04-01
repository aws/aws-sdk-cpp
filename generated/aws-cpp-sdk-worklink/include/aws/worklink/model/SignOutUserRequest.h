﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/worklink/WorkLinkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkLink
{
namespace Model
{

  /**
   */
  class AWS_WORKLINK_API SignOutUserRequest : public WorkLinkRequest
  {
  public:
    SignOutUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SignOutUser"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline SignOutUserRequest& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline SignOutUserRequest& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline SignOutUserRequest& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The name of the user.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The name of the user.</p>
     */
    inline SignOutUserRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline SignOutUserRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline SignOutUserRequest& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
