/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class TerminateRecoveryInstancesRequest : public DrsRequest
  {
  public:
    AWS_DRS_API TerminateRecoveryInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TerminateRecoveryInstances"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>The IDs of the Recovery Instances that should be terminated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecoveryInstanceIDs() const{ return m_recoveryInstanceIDs; }

    /**
     * <p>The IDs of the Recovery Instances that should be terminated.</p>
     */
    inline bool RecoveryInstanceIDsHasBeenSet() const { return m_recoveryInstanceIDsHasBeenSet; }

    /**
     * <p>The IDs of the Recovery Instances that should be terminated.</p>
     */
    inline void SetRecoveryInstanceIDs(const Aws::Vector<Aws::String>& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs = value; }

    /**
     * <p>The IDs of the Recovery Instances that should be terminated.</p>
     */
    inline void SetRecoveryInstanceIDs(Aws::Vector<Aws::String>&& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs = std::move(value); }

    /**
     * <p>The IDs of the Recovery Instances that should be terminated.</p>
     */
    inline TerminateRecoveryInstancesRequest& WithRecoveryInstanceIDs(const Aws::Vector<Aws::String>& value) { SetRecoveryInstanceIDs(value); return *this;}

    /**
     * <p>The IDs of the Recovery Instances that should be terminated.</p>
     */
    inline TerminateRecoveryInstancesRequest& WithRecoveryInstanceIDs(Aws::Vector<Aws::String>&& value) { SetRecoveryInstanceIDs(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Recovery Instances that should be terminated.</p>
     */
    inline TerminateRecoveryInstancesRequest& AddRecoveryInstanceIDs(const Aws::String& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs.push_back(value); return *this; }

    /**
     * <p>The IDs of the Recovery Instances that should be terminated.</p>
     */
    inline TerminateRecoveryInstancesRequest& AddRecoveryInstanceIDs(Aws::String&& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Recovery Instances that should be terminated.</p>
     */
    inline TerminateRecoveryInstancesRequest& AddRecoveryInstanceIDs(const char* value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_recoveryInstanceIDs;
    bool m_recoveryInstanceIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
