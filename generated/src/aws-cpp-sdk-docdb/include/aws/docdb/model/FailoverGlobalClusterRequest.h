/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   */
  class FailoverGlobalClusterRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API FailoverGlobalClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FailoverGlobalCluster"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the Amazon DocumentDB global cluster to apply this
     * operation. The identifier is the unique key assigned by the user when the
     * cluster is created. In other words, it's the name of the global cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing global
     * cluster.</p> </li> <li> <p>Minimum length of 1. Maximum length of 255.</p> </li>
     * </ul> <p>Pattern: <code>[A-Za-z][0-9A-Za-z-:._]*</code> </p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
    template<typename GlobalClusterIdentifierT = Aws::String>
    void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value); }
    template<typename GlobalClusterIdentifierT = Aws::String>
    FailoverGlobalClusterRequest& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the secondary Amazon DocumentDB cluster that you want to
     * promote to the primary for the global cluster. Use the Amazon Resource Name
     * (ARN) for the identifier so that Amazon DocumentDB can locate the cluster in its
     * Amazon Web Services region.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing secondary cluster.</p> </li> <li> <p>Minimum length of
     * 1. Maximum length of 255.</p> </li> </ul> <p>Pattern:
     * <code>[A-Za-z][0-9A-Za-z-:._]*</code> </p>
     */
    inline const Aws::String& GetTargetDbClusterIdentifier() const { return m_targetDbClusterIdentifier; }
    inline bool TargetDbClusterIdentifierHasBeenSet() const { return m_targetDbClusterIdentifierHasBeenSet; }
    template<typename TargetDbClusterIdentifierT = Aws::String>
    void SetTargetDbClusterIdentifier(TargetDbClusterIdentifierT&& value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier = std::forward<TargetDbClusterIdentifierT>(value); }
    template<typename TargetDbClusterIdentifierT = Aws::String>
    FailoverGlobalClusterRequest& WithTargetDbClusterIdentifier(TargetDbClusterIdentifierT&& value) { SetTargetDbClusterIdentifier(std::forward<TargetDbClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to allow data loss for this global cluster operation.
     * Allowing data loss triggers a global failover operation.</p> <p>If you don't
     * specify <code>AllowDataLoss</code>, the global cluster operation defaults to a
     * switchover.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified together
     * with the <code>Switchover</code> parameter.</p> </li> </ul>
     */
    inline bool GetAllowDataLoss() const { return m_allowDataLoss; }
    inline bool AllowDataLossHasBeenSet() const { return m_allowDataLossHasBeenSet; }
    inline void SetAllowDataLoss(bool value) { m_allowDataLossHasBeenSet = true; m_allowDataLoss = value; }
    inline FailoverGlobalClusterRequest& WithAllowDataLoss(bool value) { SetAllowDataLoss(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to switch over this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified together with the
     * <code>AllowDataLoss</code> parameter.</p> </li> </ul>
     */
    inline bool GetSwitchover() const { return m_switchover; }
    inline bool SwitchoverHasBeenSet() const { return m_switchoverHasBeenSet; }
    inline void SetSwitchover(bool value) { m_switchoverHasBeenSet = true; m_switchover = value; }
    inline FailoverGlobalClusterRequest& WithSwitchover(bool value) { SetSwitchover(value); return *this;}
    ///@}
  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_targetDbClusterIdentifier;
    bool m_targetDbClusterIdentifierHasBeenSet = false;

    bool m_allowDataLoss{false};
    bool m_allowDataLossHasBeenSet = false;

    bool m_switchover{false};
    bool m_switchoverHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
