/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API CopyDBClusterSnapshotRequest : public RDSRequest
  {
  public:
    CopyDBClusterSnapshotRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline const Aws::String& GetSourceDBClusterSnapshotIdentifier() const{ return m_sourceDBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline void SetSourceDBClusterSnapshotIdentifier(const Aws::String& value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline void SetSourceDBClusterSnapshotIdentifier(Aws::String&& value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline void SetSourceDBClusterSnapshotIdentifier(const char* value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(const Aws::String& value) { SetSourceDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(Aws::String&& value) { SetSourceDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(const char* value) { SetSourceDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline const Aws::String& GetTargetDBClusterSnapshotIdentifier() const{ return m_targetDBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline void SetTargetDBClusterSnapshotIdentifier(const Aws::String& value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline void SetTargetDBClusterSnapshotIdentifier(Aws::String&& value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline void SetTargetDBClusterSnapshotIdentifier(const char* value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(const Aws::String& value) { SetTargetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(Aws::String&& value) { SetTargetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter is not case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot end
     * with a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(const char* value) { SetTargetDBClusterSnapshotIdentifier(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline CopyDBClusterSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CopyDBClusterSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    
    inline CopyDBClusterSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CopyDBClusterSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_sourceDBClusterSnapshotIdentifier;
    bool m_sourceDBClusterSnapshotIdentifierHasBeenSet;
    Aws::String m_targetDBClusterSnapshotIdentifier;
    bool m_targetDBClusterSnapshotIdentifierHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
