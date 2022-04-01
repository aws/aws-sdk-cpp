﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class AWS_DRS_API StopFailbackRequest : public DrsRequest
  {
  public:
    StopFailbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopFailback"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Recovery Instance we want to stop failback for.</p>
     */
    inline const Aws::String& GetRecoveryInstanceID() const{ return m_recoveryInstanceID; }

    /**
     * <p>The ID of the Recovery Instance we want to stop failback for.</p>
     */
    inline bool RecoveryInstanceIDHasBeenSet() const { return m_recoveryInstanceIDHasBeenSet; }

    /**
     * <p>The ID of the Recovery Instance we want to stop failback for.</p>
     */
    inline void SetRecoveryInstanceID(const Aws::String& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = value; }

    /**
     * <p>The ID of the Recovery Instance we want to stop failback for.</p>
     */
    inline void SetRecoveryInstanceID(Aws::String&& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = std::move(value); }

    /**
     * <p>The ID of the Recovery Instance we want to stop failback for.</p>
     */
    inline void SetRecoveryInstanceID(const char* value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID.assign(value); }

    /**
     * <p>The ID of the Recovery Instance we want to stop failback for.</p>
     */
    inline StopFailbackRequest& WithRecoveryInstanceID(const Aws::String& value) { SetRecoveryInstanceID(value); return *this;}

    /**
     * <p>The ID of the Recovery Instance we want to stop failback for.</p>
     */
    inline StopFailbackRequest& WithRecoveryInstanceID(Aws::String&& value) { SetRecoveryInstanceID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Recovery Instance we want to stop failback for.</p>
     */
    inline StopFailbackRequest& WithRecoveryInstanceID(const char* value) { SetRecoveryInstanceID(value); return *this;}

  private:

    Aws::String m_recoveryInstanceID;
    bool m_recoveryInstanceIDHasBeenSet;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
