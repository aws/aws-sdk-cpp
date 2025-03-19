/**
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
  class GetFailbackReplicationConfigurationRequest : public DrsRequest
  {
  public:
    AWS_DRS_API GetFailbackReplicationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFailbackReplicationConfiguration"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Recovery Instance whose failback replication configuration
     * should be returned.</p>
     */
    inline const Aws::String& GetRecoveryInstanceID() const { return m_recoveryInstanceID; }
    inline bool RecoveryInstanceIDHasBeenSet() const { return m_recoveryInstanceIDHasBeenSet; }
    template<typename RecoveryInstanceIDT = Aws::String>
    void SetRecoveryInstanceID(RecoveryInstanceIDT&& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = std::forward<RecoveryInstanceIDT>(value); }
    template<typename RecoveryInstanceIDT = Aws::String>
    GetFailbackReplicationConfigurationRequest& WithRecoveryInstanceID(RecoveryInstanceIDT&& value) { SetRecoveryInstanceID(std::forward<RecoveryInstanceIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recoveryInstanceID;
    bool m_recoveryInstanceIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
