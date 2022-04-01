﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DisableSnapshotCopyMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DisableSnapshotCopyRequest : public RedshiftRequest
  {
  public:
    DisableSnapshotCopyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableSnapshotCopy"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier of the source cluster that you want to disable copying
     * of snapshots to a destination region.</p> <p>Constraints: Must be the valid name
     * of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of the source cluster that you want to disable copying
     * of snapshots to a destination region.</p> <p>Constraints: Must be the valid name
     * of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the source cluster that you want to disable copying
     * of snapshots to a destination region.</p> <p>Constraints: Must be the valid name
     * of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the source cluster that you want to disable copying
     * of snapshots to a destination region.</p> <p>Constraints: Must be the valid name
     * of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the source cluster that you want to disable copying
     * of snapshots to a destination region.</p> <p>Constraints: Must be the valid name
     * of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the source cluster that you want to disable copying
     * of snapshots to a destination region.</p> <p>Constraints: Must be the valid name
     * of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline DisableSnapshotCopyRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the source cluster that you want to disable copying
     * of snapshots to a destination region.</p> <p>Constraints: Must be the valid name
     * of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline DisableSnapshotCopyRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the source cluster that you want to disable copying
     * of snapshots to a destination region.</p> <p>Constraints: Must be the valid name
     * of an existing cluster that has cross-region snapshot copy enabled.</p>
     */
    inline DisableSnapshotCopyRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
