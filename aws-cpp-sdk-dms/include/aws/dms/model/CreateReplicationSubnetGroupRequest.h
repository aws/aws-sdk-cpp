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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationSubnetGroupRequest : public DatabaseMigrationServiceRequest
  {
  public:
    CreateReplicationSubnetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationSubnetGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the replication subnet group. This value is stored as a
     * lowercase string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, spaces, underscores, or hyphens. Must not be "default".</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetReplicationSubnetGroupIdentifier() const{ return m_replicationSubnetGroupIdentifier; }

    /**
     * <p>The name for the replication subnet group. This value is stored as a
     * lowercase string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, spaces, underscores, or hyphens. Must not be "default".</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline bool ReplicationSubnetGroupIdentifierHasBeenSet() const { return m_replicationSubnetGroupIdentifierHasBeenSet; }

    /**
     * <p>The name for the replication subnet group. This value is stored as a
     * lowercase string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, spaces, underscores, or hyphens. Must not be "default".</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetReplicationSubnetGroupIdentifier(const Aws::String& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = value; }

    /**
     * <p>The name for the replication subnet group. This value is stored as a
     * lowercase string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, spaces, underscores, or hyphens. Must not be "default".</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetReplicationSubnetGroupIdentifier(Aws::String&& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = std::move(value); }

    /**
     * <p>The name for the replication subnet group. This value is stored as a
     * lowercase string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, spaces, underscores, or hyphens. Must not be "default".</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetReplicationSubnetGroupIdentifier(const char* value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier.assign(value); }

    /**
     * <p>The name for the replication subnet group. This value is stored as a
     * lowercase string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, spaces, underscores, or hyphens. Must not be "default".</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateReplicationSubnetGroupRequest& WithReplicationSubnetGroupIdentifier(const Aws::String& value) { SetReplicationSubnetGroupIdentifier(value); return *this;}

    /**
     * <p>The name for the replication subnet group. This value is stored as a
     * lowercase string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, spaces, underscores, or hyphens. Must not be "default".</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateReplicationSubnetGroupRequest& WithReplicationSubnetGroupIdentifier(Aws::String&& value) { SetReplicationSubnetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name for the replication subnet group. This value is stored as a
     * lowercase string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, spaces, underscores, or hyphens. Must not be "default".</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateReplicationSubnetGroupRequest& WithReplicationSubnetGroupIdentifier(const char* value) { SetReplicationSubnetGroupIdentifier(value); return *this;}


    /**
     * <p>The description for the subnet group.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupDescription() const{ return m_replicationSubnetGroupDescription; }

    /**
     * <p>The description for the subnet group.</p>
     */
    inline bool ReplicationSubnetGroupDescriptionHasBeenSet() const { return m_replicationSubnetGroupDescriptionHasBeenSet; }

    /**
     * <p>The description for the subnet group.</p>
     */
    inline void SetReplicationSubnetGroupDescription(const Aws::String& value) { m_replicationSubnetGroupDescriptionHasBeenSet = true; m_replicationSubnetGroupDescription = value; }

    /**
     * <p>The description for the subnet group.</p>
     */
    inline void SetReplicationSubnetGroupDescription(Aws::String&& value) { m_replicationSubnetGroupDescriptionHasBeenSet = true; m_replicationSubnetGroupDescription = std::move(value); }

    /**
     * <p>The description for the subnet group.</p>
     */
    inline void SetReplicationSubnetGroupDescription(const char* value) { m_replicationSubnetGroupDescriptionHasBeenSet = true; m_replicationSubnetGroupDescription.assign(value); }

    /**
     * <p>The description for the subnet group.</p>
     */
    inline CreateReplicationSubnetGroupRequest& WithReplicationSubnetGroupDescription(const Aws::String& value) { SetReplicationSubnetGroupDescription(value); return *this;}

    /**
     * <p>The description for the subnet group.</p>
     */
    inline CreateReplicationSubnetGroupRequest& WithReplicationSubnetGroupDescription(Aws::String&& value) { SetReplicationSubnetGroupDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the subnet group.</p>
     */
    inline CreateReplicationSubnetGroupRequest& WithReplicationSubnetGroupDescription(const char* value) { SetReplicationSubnetGroupDescription(value); return *this;}


    /**
     * <p>The EC2 subnet IDs for the subnet group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The EC2 subnet IDs for the subnet group.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The EC2 subnet IDs for the subnet group.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The EC2 subnet IDs for the subnet group.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The EC2 subnet IDs for the subnet group.</p>
     */
    inline CreateReplicationSubnetGroupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The EC2 subnet IDs for the subnet group.</p>
     */
    inline CreateReplicationSubnetGroupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The EC2 subnet IDs for the subnet group.</p>
     */
    inline CreateReplicationSubnetGroupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The EC2 subnet IDs for the subnet group.</p>
     */
    inline CreateReplicationSubnetGroupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The EC2 subnet IDs for the subnet group.</p>
     */
    inline CreateReplicationSubnetGroupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The tag to be assigned to the subnet group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag to be assigned to the subnet group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag to be assigned to the subnet group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag to be assigned to the subnet group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag to be assigned to the subnet group.</p>
     */
    inline CreateReplicationSubnetGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag to be assigned to the subnet group.</p>
     */
    inline CreateReplicationSubnetGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag to be assigned to the subnet group.</p>
     */
    inline CreateReplicationSubnetGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag to be assigned to the subnet group.</p>
     */
    inline CreateReplicationSubnetGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_replicationSubnetGroupIdentifier;
    bool m_replicationSubnetGroupIdentifierHasBeenSet;

    Aws::String m_replicationSubnetGroupDescription;
    bool m_replicationSubnetGroupDescriptionHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
