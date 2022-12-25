/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input of <a>CreateDBClusterSnapshot</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class CreateDBClusterSnapshotRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API CreateDBClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBClusterSnapshot"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the cluster snapshot. This parameter is stored as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * letters, numbers, or hyphens.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens. </p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const{ return m_dBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the cluster snapshot. This parameter is stored as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * letters, numbers, or hyphens.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens. </p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster snapshot. This parameter is stored as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * letters, numbers, or hyphens.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens. </p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline void SetDBClusterSnapshotIdentifier(const Aws::String& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the cluster snapshot. This parameter is stored as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * letters, numbers, or hyphens.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens. </p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline void SetDBClusterSnapshotIdentifier(Aws::String&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster snapshot. This parameter is stored as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * letters, numbers, or hyphens.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens. </p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline void SetDBClusterSnapshotIdentifier(const char* value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster snapshot. This parameter is stored as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * letters, numbers, or hyphens.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens. </p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline CreateDBClusterSnapshotRequest& WithDBClusterSnapshotIdentifier(const Aws::String& value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster snapshot. This parameter is stored as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * letters, numbers, or hyphens.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens. </p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline CreateDBClusterSnapshotRequest& WithDBClusterSnapshotIdentifier(Aws::String&& value) { SetDBClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster snapshot. This parameter is stored as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * letters, numbers, or hyphens.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens. </p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline CreateDBClusterSnapshotRequest& WithDBClusterSnapshotIdentifier(const char* value) { SetDBClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>The identifier of the cluster to create a snapshot for. This parameter is not
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing <code>DBCluster</code>.</p> </li> </ul> <p>Example:
     * <code>my-cluster</code> </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The identifier of the cluster to create a snapshot for. This parameter is not
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing <code>DBCluster</code>.</p> </li> </ul> <p>Example:
     * <code>my-cluster</code> </p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster to create a snapshot for. This parameter is not
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing <code>DBCluster</code>.</p> </li> </ul> <p>Example:
     * <code>my-cluster</code> </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster to create a snapshot for. This parameter is not
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing <code>DBCluster</code>.</p> </li> </ul> <p>Example:
     * <code>my-cluster</code> </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster to create a snapshot for. This parameter is not
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing <code>DBCluster</code>.</p> </li> </ul> <p>Example:
     * <code>my-cluster</code> </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster to create a snapshot for. This parameter is not
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing <code>DBCluster</code>.</p> </li> </ul> <p>Example:
     * <code>my-cluster</code> </p>
     */
    inline CreateDBClusterSnapshotRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster to create a snapshot for. This parameter is not
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing <code>DBCluster</code>.</p> </li> </ul> <p>Example:
     * <code>my-cluster</code> </p>
     */
    inline CreateDBClusterSnapshotRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster to create a snapshot for. This parameter is not
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing <code>DBCluster</code>.</p> </li> </ul> <p>Example:
     * <code>my-cluster</code> </p>
     */
    inline CreateDBClusterSnapshotRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline CreateDBClusterSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline CreateDBClusterSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline CreateDBClusterSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline CreateDBClusterSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
