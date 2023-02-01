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
  class StopDBClusterRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API StopDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopDBCluster"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the cluster to stop. Example:
     * <code>docdb-2019-05-28-15-24-52</code> </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The identifier of the cluster to stop. Example:
     * <code>docdb-2019-05-28-15-24-52</code> </p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster to stop. Example:
     * <code>docdb-2019-05-28-15-24-52</code> </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster to stop. Example:
     * <code>docdb-2019-05-28-15-24-52</code> </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster to stop. Example:
     * <code>docdb-2019-05-28-15-24-52</code> </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster to stop. Example:
     * <code>docdb-2019-05-28-15-24-52</code> </p>
     */
    inline StopDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster to stop. Example:
     * <code>docdb-2019-05-28-15-24-52</code> </p>
     */
    inline StopDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster to stop. Example:
     * <code>docdb-2019-05-28-15-24-52</code> </p>
     */
    inline StopDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
