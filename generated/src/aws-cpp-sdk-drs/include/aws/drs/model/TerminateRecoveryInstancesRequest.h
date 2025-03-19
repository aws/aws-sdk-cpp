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
    AWS_DRS_API TerminateRecoveryInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TerminateRecoveryInstances"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The IDs of the Recovery Instances that should be terminated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecoveryInstanceIDs() const { return m_recoveryInstanceIDs; }
    inline bool RecoveryInstanceIDsHasBeenSet() const { return m_recoveryInstanceIDsHasBeenSet; }
    template<typename RecoveryInstanceIDsT = Aws::Vector<Aws::String>>
    void SetRecoveryInstanceIDs(RecoveryInstanceIDsT&& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs = std::forward<RecoveryInstanceIDsT>(value); }
    template<typename RecoveryInstanceIDsT = Aws::Vector<Aws::String>>
    TerminateRecoveryInstancesRequest& WithRecoveryInstanceIDs(RecoveryInstanceIDsT&& value) { SetRecoveryInstanceIDs(std::forward<RecoveryInstanceIDsT>(value)); return *this;}
    template<typename RecoveryInstanceIDsT = Aws::String>
    TerminateRecoveryInstancesRequest& AddRecoveryInstanceIDs(RecoveryInstanceIDsT&& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs.emplace_back(std::forward<RecoveryInstanceIDsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_recoveryInstanceIDs;
    bool m_recoveryInstanceIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
