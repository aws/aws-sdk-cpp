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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationSubnetGroupRequest : public DatabaseMigrationServiceRequest
  {
  public:
    DeleteReplicationSubnetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReplicationSubnetGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The subnet group name of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupIdentifier() const{ return m_replicationSubnetGroupIdentifier; }

    /**
     * <p>The subnet group name of the replication instance.</p>
     */
    inline bool ReplicationSubnetGroupIdentifierHasBeenSet() const { return m_replicationSubnetGroupIdentifierHasBeenSet; }

    /**
     * <p>The subnet group name of the replication instance.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(const Aws::String& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = value; }

    /**
     * <p>The subnet group name of the replication instance.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(Aws::String&& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = std::move(value); }

    /**
     * <p>The subnet group name of the replication instance.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(const char* value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier.assign(value); }

    /**
     * <p>The subnet group name of the replication instance.</p>
     */
    inline DeleteReplicationSubnetGroupRequest& WithReplicationSubnetGroupIdentifier(const Aws::String& value) { SetReplicationSubnetGroupIdentifier(value); return *this;}

    /**
     * <p>The subnet group name of the replication instance.</p>
     */
    inline DeleteReplicationSubnetGroupRequest& WithReplicationSubnetGroupIdentifier(Aws::String&& value) { SetReplicationSubnetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The subnet group name of the replication instance.</p>
     */
    inline DeleteReplicationSubnetGroupRequest& WithReplicationSubnetGroupIdentifier(const char* value) { SetReplicationSubnetGroupIdentifier(value); return *this;}

  private:

    Aws::String m_replicationSubnetGroupIdentifier;
    bool m_replicationSubnetGroupIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
