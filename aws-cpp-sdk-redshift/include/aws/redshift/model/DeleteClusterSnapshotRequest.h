/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DeleteClusterSnapshotRequest : public RedshiftRequest
  {
  public:
    DeleteClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteClusterSnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline DeleteClusterSnapshotRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline DeleteClusterSnapshotRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the manual snapshot to be deleted.</p>
     * <p>Constraints: Must be the name of an existing snapshot that is in the
     * <code>available</code>, <code>failed</code>, or <code>cancelled</code>
     * state.</p>
     */
    inline DeleteClusterSnapshotRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}


    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline const Aws::String& GetSnapshotClusterIdentifier() const{ return m_snapshotClusterIdentifier; }

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline bool SnapshotClusterIdentifierHasBeenSet() const { return m_snapshotClusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline void SetSnapshotClusterIdentifier(const Aws::String& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline void SetSnapshotClusterIdentifier(Aws::String&& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline void SetSnapshotClusterIdentifier(const char* value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline DeleteClusterSnapshotRequest& WithSnapshotClusterIdentifier(const Aws::String& value) { SetSnapshotClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline DeleteClusterSnapshotRequest& WithSnapshotClusterIdentifier(Aws::String&& value) { SetSnapshotClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cluster the snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints: Must be the name of valid cluster.</p>
     */
    inline DeleteClusterSnapshotRequest& WithSnapshotClusterIdentifier(const char* value) { SetSnapshotClusterIdentifier(value); return *this;}

  private:

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet;

    Aws::String m_snapshotClusterIdentifier;
    bool m_snapshotClusterIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
