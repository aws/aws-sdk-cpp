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
  class AWS_REDSHIFT_API AuthorizeSnapshotAccessRequest : public RedshiftRequest
  {
  public:
    AuthorizeSnapshotAccessRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster the snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline const Aws::String& GetSnapshotClusterIdentifier() const{ return m_snapshotClusterIdentifier; }

    /**
     * <p>The identifier of the cluster the snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline void SetSnapshotClusterIdentifier(const Aws::String& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster the snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline void SetSnapshotClusterIdentifier(Aws::String&& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster the snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline void SetSnapshotClusterIdentifier(const char* value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster the snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithSnapshotClusterIdentifier(const Aws::String& value) { SetSnapshotClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster the snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithSnapshotClusterIdentifier(Aws::String&& value) { SetSnapshotClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster the snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithSnapshotClusterIdentifier(const char* value) { SetSnapshotClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the AWS customer account authorized to restore the
     * specified snapshot.</p>
     */
    inline const Aws::String& GetAccountWithRestoreAccess() const{ return m_accountWithRestoreAccess; }

    /**
     * <p>The identifier of the AWS customer account authorized to restore the
     * specified snapshot.</p>
     */
    inline void SetAccountWithRestoreAccess(const Aws::String& value) { m_accountWithRestoreAccessHasBeenSet = true; m_accountWithRestoreAccess = value; }

    /**
     * <p>The identifier of the AWS customer account authorized to restore the
     * specified snapshot.</p>
     */
    inline void SetAccountWithRestoreAccess(Aws::String&& value) { m_accountWithRestoreAccessHasBeenSet = true; m_accountWithRestoreAccess = value; }

    /**
     * <p>The identifier of the AWS customer account authorized to restore the
     * specified snapshot.</p>
     */
    inline void SetAccountWithRestoreAccess(const char* value) { m_accountWithRestoreAccessHasBeenSet = true; m_accountWithRestoreAccess.assign(value); }

    /**
     * <p>The identifier of the AWS customer account authorized to restore the
     * specified snapshot.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithAccountWithRestoreAccess(const Aws::String& value) { SetAccountWithRestoreAccess(value); return *this;}

    /**
     * <p>The identifier of the AWS customer account authorized to restore the
     * specified snapshot.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithAccountWithRestoreAccess(Aws::String&& value) { SetAccountWithRestoreAccess(value); return *this;}

    /**
     * <p>The identifier of the AWS customer account authorized to restore the
     * specified snapshot.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithAccountWithRestoreAccess(const char* value) { SetAccountWithRestoreAccess(value); return *this;}

  private:
    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet;
    Aws::String m_snapshotClusterIdentifier;
    bool m_snapshotClusterIdentifierHasBeenSet;
    Aws::String m_accountWithRestoreAccess;
    bool m_accountWithRestoreAccessHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
