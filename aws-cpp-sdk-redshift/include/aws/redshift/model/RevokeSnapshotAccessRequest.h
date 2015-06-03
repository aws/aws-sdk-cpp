/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

  /*
    <p> </p>
  */
  class AWS_REDSHIFT_API RevokeSnapshotAccessRequest : public RedshiftRequest
  {
  public:
    RevokeSnapshotAccessRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The identifier of the snapshot that the account can no longer access. </p>
    */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }
    /*
     <p> The identifier of the snapshot that the account can no longer access. </p>
    */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifier = value; }

    /*
     <p> The identifier of the snapshot that the account can no longer access. </p>
    */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifier.assign(value); }

    /*
     <p> The identifier of the snapshot that the account can no longer access. </p>
    */
    inline RevokeSnapshotAccessRequest&  WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /*
     <p> The identifier of the snapshot that the account can no longer access. </p>
    */
    inline RevokeSnapshotAccessRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}

    /*
     <p> The identifier of the cluster the snapshot was created from. This parameter is required if your IAM user has a policy containing a snapshot resource element that specifies anything other than * for the cluster name. </p>
    */
    inline const Aws::String& GetSnapshotClusterIdentifier() const{ return m_snapshotClusterIdentifier; }
    /*
     <p> The identifier of the cluster the snapshot was created from. This parameter is required if your IAM user has a policy containing a snapshot resource element that specifies anything other than * for the cluster name. </p>
    */
    inline void SetSnapshotClusterIdentifier(const Aws::String& value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier = value; }

    /*
     <p> The identifier of the cluster the snapshot was created from. This parameter is required if your IAM user has a policy containing a snapshot resource element that specifies anything other than * for the cluster name. </p>
    */
    inline void SetSnapshotClusterIdentifier(const char* value) { m_snapshotClusterIdentifierHasBeenSet = true; m_snapshotClusterIdentifier.assign(value); }

    /*
     <p> The identifier of the cluster the snapshot was created from. This parameter is required if your IAM user has a policy containing a snapshot resource element that specifies anything other than * for the cluster name. </p>
    */
    inline RevokeSnapshotAccessRequest&  WithSnapshotClusterIdentifier(const Aws::String& value) { SetSnapshotClusterIdentifier(value); return *this;}

    /*
     <p> The identifier of the cluster the snapshot was created from. This parameter is required if your IAM user has a policy containing a snapshot resource element that specifies anything other than * for the cluster name. </p>
    */
    inline RevokeSnapshotAccessRequest& WithSnapshotClusterIdentifier(const char* value) { SetSnapshotClusterIdentifier(value); return *this;}

    /*
     <p> The identifier of the AWS customer account that can no longer restore the specified snapshot. </p>
    */
    inline const Aws::String& GetAccountWithRestoreAccess() const{ return m_accountWithRestoreAccess; }
    /*
     <p> The identifier of the AWS customer account that can no longer restore the specified snapshot. </p>
    */
    inline void SetAccountWithRestoreAccess(const Aws::String& value) { m_accountWithRestoreAccess = value; }

    /*
     <p> The identifier of the AWS customer account that can no longer restore the specified snapshot. </p>
    */
    inline void SetAccountWithRestoreAccess(const char* value) { m_accountWithRestoreAccess.assign(value); }

    /*
     <p> The identifier of the AWS customer account that can no longer restore the specified snapshot. </p>
    */
    inline RevokeSnapshotAccessRequest&  WithAccountWithRestoreAccess(const Aws::String& value) { SetAccountWithRestoreAccess(value); return *this;}

    /*
     <p> The identifier of the AWS customer account that can no longer restore the specified snapshot. </p>
    */
    inline RevokeSnapshotAccessRequest& WithAccountWithRestoreAccess(const char* value) { SetAccountWithRestoreAccess(value); return *this;}

  private:
    Aws::String m_snapshotIdentifier;
    Aws::String m_snapshotClusterIdentifier;
    bool m_snapshotClusterIdentifierHasBeenSet;
    Aws::String m_accountWithRestoreAccess;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
