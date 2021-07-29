/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStateEntry.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryCluster
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RECOVERYCLUSTER_API UpdateRoutingControlStatesRequest : public Route53RecoveryClusterRequest
  {
  public:
    UpdateRoutingControlStatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoutingControlStates"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline const Aws::Vector<UpdateRoutingControlStateEntry>& GetUpdateRoutingControlStateEntries() const{ return m_updateRoutingControlStateEntries; }

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline bool UpdateRoutingControlStateEntriesHasBeenSet() const { return m_updateRoutingControlStateEntriesHasBeenSet; }

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline void SetUpdateRoutingControlStateEntries(const Aws::Vector<UpdateRoutingControlStateEntry>& value) { m_updateRoutingControlStateEntriesHasBeenSet = true; m_updateRoutingControlStateEntries = value; }

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline void SetUpdateRoutingControlStateEntries(Aws::Vector<UpdateRoutingControlStateEntry>&& value) { m_updateRoutingControlStateEntriesHasBeenSet = true; m_updateRoutingControlStateEntries = std::move(value); }

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline UpdateRoutingControlStatesRequest& WithUpdateRoutingControlStateEntries(const Aws::Vector<UpdateRoutingControlStateEntry>& value) { SetUpdateRoutingControlStateEntries(value); return *this;}

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline UpdateRoutingControlStatesRequest& WithUpdateRoutingControlStateEntries(Aws::Vector<UpdateRoutingControlStateEntry>&& value) { SetUpdateRoutingControlStateEntries(std::move(value)); return *this;}

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline UpdateRoutingControlStatesRequest& AddUpdateRoutingControlStateEntries(const UpdateRoutingControlStateEntry& value) { m_updateRoutingControlStateEntriesHasBeenSet = true; m_updateRoutingControlStateEntries.push_back(value); return *this; }

    /**
     * <p>A set of routing control entries that you want to update.</p>
     */
    inline UpdateRoutingControlStatesRequest& AddUpdateRoutingControlStateEntries(UpdateRoutingControlStateEntry&& value) { m_updateRoutingControlStateEntriesHasBeenSet = true; m_updateRoutingControlStateEntries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UpdateRoutingControlStateEntry> m_updateRoutingControlStateEntries;
    bool m_updateRoutingControlStateEntriesHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
