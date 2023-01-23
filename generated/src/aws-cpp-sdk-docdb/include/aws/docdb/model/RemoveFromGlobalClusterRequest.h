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
   * <p>Represents the input to <a>RemoveFromGlobalCluster</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/RemoveFromGlobalClusterMessage">AWS
   * API Reference</a></p>
   */
  class RemoveFromGlobalClusterRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API RemoveFromGlobalClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveFromGlobalCluster"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The cluster identifier to detach from the Amazon DocumentDB global cluster.
     * </p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>The cluster identifier to detach from the Amazon DocumentDB global cluster.
     * </p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier to detach from the Amazon DocumentDB global cluster.
     * </p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>The cluster identifier to detach from the Amazon DocumentDB global cluster.
     * </p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier to detach from the Amazon DocumentDB global cluster.
     * </p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier to detach from the Amazon DocumentDB global cluster.
     * </p>
     */
    inline RemoveFromGlobalClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier to detach from the Amazon DocumentDB global cluster.
     * </p>
     */
    inline RemoveFromGlobalClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier to detach from the Amazon DocumentDB global cluster.
     * </p>
     */
    inline RemoveFromGlobalClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) identifying the cluster that was detached from
     * the Amazon DocumentDB global cluster. </p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const{ return m_dbClusterIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the cluster that was detached from
     * the Amazon DocumentDB global cluster. </p>
     */
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the cluster that was detached from
     * the Amazon DocumentDB global cluster. </p>
     */
    inline void SetDbClusterIdentifier(const Aws::String& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the cluster that was detached from
     * the Amazon DocumentDB global cluster. </p>
     */
    inline void SetDbClusterIdentifier(Aws::String&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the cluster that was detached from
     * the Amazon DocumentDB global cluster. </p>
     */
    inline void SetDbClusterIdentifier(const char* value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the cluster that was detached from
     * the Amazon DocumentDB global cluster. </p>
     */
    inline RemoveFromGlobalClusterRequest& WithDbClusterIdentifier(const Aws::String& value) { SetDbClusterIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifying the cluster that was detached from
     * the Amazon DocumentDB global cluster. </p>
     */
    inline RemoveFromGlobalClusterRequest& WithDbClusterIdentifier(Aws::String&& value) { SetDbClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifying the cluster that was detached from
     * the Amazon DocumentDB global cluster. </p>
     */
    inline RemoveFromGlobalClusterRequest& WithDbClusterIdentifier(const char* value) { SetDbClusterIdentifier(value); return *this;}

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_dbClusterIdentifier;
    bool m_dbClusterIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
