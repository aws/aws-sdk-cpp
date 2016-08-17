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

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API FailoverDBClusterRequest : public RDSRequest
  {
  public:
    FailoverDBClusterRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Aurora Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline const Aws::String& GetTargetDBInstanceIdentifier() const{ return m_targetDBInstanceIdentifier; }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Aurora Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline void SetTargetDBInstanceIdentifier(const Aws::String& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = value; }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Aurora Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline void SetTargetDBInstanceIdentifier(Aws::String&& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = value; }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Aurora Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline void SetTargetDBInstanceIdentifier(const char* value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier.assign(value); }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Aurora Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline FailoverDBClusterRequest& WithTargetDBInstanceIdentifier(const Aws::String& value) { SetTargetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Aurora Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline FailoverDBClusterRequest& WithTargetDBInstanceIdentifier(Aws::String&& value) { SetTargetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Aurora Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline FailoverDBClusterRequest& WithTargetDBInstanceIdentifier(const char* value) { SetTargetDBInstanceIdentifier(value); return *this;}

  private:
    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;
    Aws::String m_targetDBInstanceIdentifier;
    bool m_targetDBInstanceIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
