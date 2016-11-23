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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_REDSHIFT_API CopyClusterSnapshotRequest : public RedshiftRequest
  {
  public:
    CopyClusterSnapshotRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier for the source snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the identifier for a valid automated snapshot whose state is
     * <code>available</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceSnapshotIdentifier() const{ return m_sourceSnapshotIdentifier; }

    /**
     * <p>The identifier for the source snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the identifier for a valid automated snapshot whose state is
     * <code>available</code>.</p> </li> </ul>
     */
    inline void SetSourceSnapshotIdentifier(const Aws::String& value) { m_sourceSnapshotIdentifierHasBeenSet = true; m_sourceSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the source snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the identifier for a valid automated snapshot whose state is
     * <code>available</code>.</p> </li> </ul>
     */
    inline void SetSourceSnapshotIdentifier(Aws::String&& value) { m_sourceSnapshotIdentifierHasBeenSet = true; m_sourceSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the source snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the identifier for a valid automated snapshot whose state is
     * <code>available</code>.</p> </li> </ul>
     */
    inline void SetSourceSnapshotIdentifier(const char* value) { m_sourceSnapshotIdentifierHasBeenSet = true; m_sourceSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the source snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the identifier for a valid automated snapshot whose state is
     * <code>available</code>.</p> </li> </ul>
     */
    inline CopyClusterSnapshotRequest& WithSourceSnapshotIdentifier(const Aws::String& value) { SetSourceSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the source snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the identifier for a valid automated snapshot whose state is
     * <code>available</code>.</p> </li> </ul>
     */
    inline CopyClusterSnapshotRequest& WithSourceSnapshotIdentifier(Aws::String&& value) { SetSourceSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the source snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the identifier for a valid automated snapshot whose state is
     * <code>available</code>.</p> </li> </ul>
     */
    inline CopyClusterSnapshotRequest& WithSourceSnapshotIdentifier(const char* value) { SetSourceSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster the source snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier for a valid cluster.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetSourceSnapshotClusterIdentifier() const{ return m_sourceSnapshotClusterIdentifier; }

    /**
     * <p>The identifier of the cluster the source snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier for a valid cluster.</p>
     * </li> </ul>
     */
    inline void SetSourceSnapshotClusterIdentifier(const Aws::String& value) { m_sourceSnapshotClusterIdentifierHasBeenSet = true; m_sourceSnapshotClusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster the source snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier for a valid cluster.</p>
     * </li> </ul>
     */
    inline void SetSourceSnapshotClusterIdentifier(Aws::String&& value) { m_sourceSnapshotClusterIdentifierHasBeenSet = true; m_sourceSnapshotClusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster the source snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier for a valid cluster.</p>
     * </li> </ul>
     */
    inline void SetSourceSnapshotClusterIdentifier(const char* value) { m_sourceSnapshotClusterIdentifierHasBeenSet = true; m_sourceSnapshotClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster the source snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier for a valid cluster.</p>
     * </li> </ul>
     */
    inline CopyClusterSnapshotRequest& WithSourceSnapshotClusterIdentifier(const Aws::String& value) { SetSourceSnapshotClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster the source snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier for a valid cluster.</p>
     * </li> </ul>
     */
    inline CopyClusterSnapshotRequest& WithSourceSnapshotClusterIdentifier(Aws::String&& value) { SetSourceSnapshotClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster the source snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier for a valid cluster.</p>
     * </li> </ul>
     */
    inline CopyClusterSnapshotRequest& WithSourceSnapshotClusterIdentifier(const char* value) { SetSourceSnapshotClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier given to the new manual snapshot.</p> <p>Constraints:</p> <ul>
     * <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain from 1
     * to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for the AWS account that
     * is making the request.</p> </li> </ul>
     */
    inline const Aws::String& GetTargetSnapshotIdentifier() const{ return m_targetSnapshotIdentifier; }

    /**
     * <p>The identifier given to the new manual snapshot.</p> <p>Constraints:</p> <ul>
     * <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain from 1
     * to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for the AWS account that
     * is making the request.</p> </li> </ul>
     */
    inline void SetTargetSnapshotIdentifier(const Aws::String& value) { m_targetSnapshotIdentifierHasBeenSet = true; m_targetSnapshotIdentifier = value; }

    /**
     * <p>The identifier given to the new manual snapshot.</p> <p>Constraints:</p> <ul>
     * <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain from 1
     * to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for the AWS account that
     * is making the request.</p> </li> </ul>
     */
    inline void SetTargetSnapshotIdentifier(Aws::String&& value) { m_targetSnapshotIdentifierHasBeenSet = true; m_targetSnapshotIdentifier = value; }

    /**
     * <p>The identifier given to the new manual snapshot.</p> <p>Constraints:</p> <ul>
     * <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain from 1
     * to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for the AWS account that
     * is making the request.</p> </li> </ul>
     */
    inline void SetTargetSnapshotIdentifier(const char* value) { m_targetSnapshotIdentifierHasBeenSet = true; m_targetSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier given to the new manual snapshot.</p> <p>Constraints:</p> <ul>
     * <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain from 1
     * to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for the AWS account that
     * is making the request.</p> </li> </ul>
     */
    inline CopyClusterSnapshotRequest& WithTargetSnapshotIdentifier(const Aws::String& value) { SetTargetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier given to the new manual snapshot.</p> <p>Constraints:</p> <ul>
     * <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain from 1
     * to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for the AWS account that
     * is making the request.</p> </li> </ul>
     */
    inline CopyClusterSnapshotRequest& WithTargetSnapshotIdentifier(Aws::String&& value) { SetTargetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier given to the new manual snapshot.</p> <p>Constraints:</p> <ul>
     * <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain from 1
     * to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for the AWS account that
     * is making the request.</p> </li> </ul>
     */
    inline CopyClusterSnapshotRequest& WithTargetSnapshotIdentifier(const char* value) { SetTargetSnapshotIdentifier(value); return *this;}

  private:
    Aws::String m_sourceSnapshotIdentifier;
    bool m_sourceSnapshotIdentifierHasBeenSet;
    Aws::String m_sourceSnapshotClusterIdentifier;
    bool m_sourceSnapshotClusterIdentifierHasBeenSet;
    Aws::String m_targetSnapshotIdentifier;
    bool m_targetSnapshotIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
