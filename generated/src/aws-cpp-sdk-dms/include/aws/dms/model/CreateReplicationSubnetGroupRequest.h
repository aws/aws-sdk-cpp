/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateReplicationSubnetGroupRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationSubnetGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationSubnetGroup"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the replication subnet group. This value is stored as a
     * lowercase string.</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters, periods, underscores, or hyphens. Must not be "default".</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetReplicationSubnetGroupIdentifier() const { return m_replicationSubnetGroupIdentifier; }
    inline bool ReplicationSubnetGroupIdentifierHasBeenSet() const { return m_replicationSubnetGroupIdentifierHasBeenSet; }
    template<typename ReplicationSubnetGroupIdentifierT = Aws::String>
    void SetReplicationSubnetGroupIdentifier(ReplicationSubnetGroupIdentifierT&& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = std::forward<ReplicationSubnetGroupIdentifierT>(value); }
    template<typename ReplicationSubnetGroupIdentifierT = Aws::String>
    CreateReplicationSubnetGroupRequest& WithReplicationSubnetGroupIdentifier(ReplicationSubnetGroupIdentifierT&& value) { SetReplicationSubnetGroupIdentifier(std::forward<ReplicationSubnetGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the subnet group. </p> <p>Constraints: This parameter
     * Must not contain non-printable control characters.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupDescription() const { return m_replicationSubnetGroupDescription; }
    inline bool ReplicationSubnetGroupDescriptionHasBeenSet() const { return m_replicationSubnetGroupDescriptionHasBeenSet; }
    template<typename ReplicationSubnetGroupDescriptionT = Aws::String>
    void SetReplicationSubnetGroupDescription(ReplicationSubnetGroupDescriptionT&& value) { m_replicationSubnetGroupDescriptionHasBeenSet = true; m_replicationSubnetGroupDescription = std::forward<ReplicationSubnetGroupDescriptionT>(value); }
    template<typename ReplicationSubnetGroupDescriptionT = Aws::String>
    CreateReplicationSubnetGroupRequest& WithReplicationSubnetGroupDescription(ReplicationSubnetGroupDescriptionT&& value) { SetReplicationSubnetGroupDescription(std::forward<ReplicationSubnetGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Two or more subnet IDs to be assigned to the subnet group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateReplicationSubnetGroupRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateReplicationSubnetGroupRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more tags to be assigned to the subnet group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateReplicationSubnetGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateReplicationSubnetGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_replicationSubnetGroupIdentifier;
    bool m_replicationSubnetGroupIdentifierHasBeenSet = false;

    Aws::String m_replicationSubnetGroupDescription;
    bool m_replicationSubnetGroupDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
