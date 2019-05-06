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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class AWS_NEPTUNE_API FailoverDBClusterRequest : public NeptuneRequest
  {
  public:
    FailoverDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FailoverDBCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>A DB cluster identifier to force a failover for. This parameter is not
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier
     * of an existing DBCluster.</p> </li> </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Read Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline const Aws::String& GetTargetDBInstanceIdentifier() const{ return m_targetDBInstanceIdentifier; }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Read Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline bool TargetDBInstanceIdentifierHasBeenSet() const { return m_targetDBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Read Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline void SetTargetDBInstanceIdentifier(const Aws::String& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = value; }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Read Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline void SetTargetDBInstanceIdentifier(Aws::String&& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = std::move(value); }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Read Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline void SetTargetDBInstanceIdentifier(const char* value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier.assign(value); }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Read Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline FailoverDBClusterRequest& WithTargetDBInstanceIdentifier(const Aws::String& value) { SetTargetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Read Replica in the DB cluster. For
     * example, <code>mydbcluster-replica1</code>.</p>
     */
    inline FailoverDBClusterRequest& WithTargetDBInstanceIdentifier(Aws::String&& value) { SetTargetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Read Replica in the DB cluster. For
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
} // namespace Neptune
} // namespace Aws
