/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AuthorizeSnapshotAccessMessage">AWS
   * API Reference</a></p>
   */
  class AuthorizeSnapshotAccessRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API AuthorizeSnapshotAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeSnapshotAccess"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

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
    inline AuthorizeSnapshotAccessRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the snapshot the account is authorized to restore.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to authorize access to.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to authorize access to.</p>
     */
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to authorize access to.</p>
     */
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to authorize access to.</p>
     */
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to authorize access to.</p>
     */
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to authorize access to.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to authorize access to.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to authorize access to.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}


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
    inline bool SnapshotClusterIdentifierHasBeenSet() const { return m_snapshotClusterIdentifierHasBeenSet; }

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
    inline void SetSnapshotClusterIdentifier(Aws::String&& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = std::move(value); }

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
    inline AuthorizeSnapshotAccessRequest& WithSnapshotClusterIdentifier(Aws::String&& value) { SetSnapshotClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster the snapshot was created from. This parameter
     * is required if your IAM user has a policy containing a snapshot resource element
     * that specifies anything other than * for the cluster name.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithSnapshotClusterIdentifier(const char* value) { SetSnapshotClusterIdentifier(value); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services account authorized to restore the
     * specified snapshot.</p> <p>To share a snapshot with Amazon Web Services Support,
     * specify amazon-redshift-support.</p>
     */
    inline const Aws::String& GetAccountWithRestoreAccess() const{ return m_accountWithRestoreAccess; }

    /**
     * <p>The identifier of the Amazon Web Services account authorized to restore the
     * specified snapshot.</p> <p>To share a snapshot with Amazon Web Services Support,
     * specify amazon-redshift-support.</p>
     */
    inline bool AccountWithRestoreAccessHasBeenSet() const { return m_accountWithRestoreAccessHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services account authorized to restore the
     * specified snapshot.</p> <p>To share a snapshot with Amazon Web Services Support,
     * specify amazon-redshift-support.</p>
     */
    inline void SetAccountWithRestoreAccess(const Aws::String& value) { m_accountWithRestoreAccessHasBeenSet = true; m_accountWithRestoreAccess = value; }

    /**
     * <p>The identifier of the Amazon Web Services account authorized to restore the
     * specified snapshot.</p> <p>To share a snapshot with Amazon Web Services Support,
     * specify amazon-redshift-support.</p>
     */
    inline void SetAccountWithRestoreAccess(Aws::String&& value) { m_accountWithRestoreAccessHasBeenSet = true; m_accountWithRestoreAccess = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services account authorized to restore the
     * specified snapshot.</p> <p>To share a snapshot with Amazon Web Services Support,
     * specify amazon-redshift-support.</p>
     */
    inline void SetAccountWithRestoreAccess(const char* value) { m_accountWithRestoreAccessHasBeenSet = true; m_accountWithRestoreAccess.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services account authorized to restore the
     * specified snapshot.</p> <p>To share a snapshot with Amazon Web Services Support,
     * specify amazon-redshift-support.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithAccountWithRestoreAccess(const Aws::String& value) { SetAccountWithRestoreAccess(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account authorized to restore the
     * specified snapshot.</p> <p>To share a snapshot with Amazon Web Services Support,
     * specify amazon-redshift-support.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithAccountWithRestoreAccess(Aws::String&& value) { SetAccountWithRestoreAccess(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account authorized to restore the
     * specified snapshot.</p> <p>To share a snapshot with Amazon Web Services Support,
     * specify amazon-redshift-support.</p>
     */
    inline AuthorizeSnapshotAccessRequest& WithAccountWithRestoreAccess(const char* value) { SetAccountWithRestoreAccess(value); return *this;}

  private:

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::String m_snapshotClusterIdentifier;
    bool m_snapshotClusterIdentifierHasBeenSet = false;

    Aws::String m_accountWithRestoreAccess;
    bool m_accountWithRestoreAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
