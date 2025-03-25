/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/KeyspacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/ReplicationSpecification.h>
#include <aws/keyspaces/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

  /**
   */
  class CreateKeyspaceRequest : public KeyspacesRequest
  {
  public:
    AWS_KEYSPACES_API CreateKeyspaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKeyspace"; }

    AWS_KEYSPACES_API Aws::String SerializePayload() const override;

    AWS_KEYSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the keyspace to be created.</p>
     */
    inline const Aws::String& GetKeyspaceName() const { return m_keyspaceName; }
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }
    template<typename KeyspaceNameT = Aws::String>
    void SetKeyspaceName(KeyspaceNameT&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::forward<KeyspaceNameT>(value); }
    template<typename KeyspaceNameT = Aws::String>
    CreateKeyspaceRequest& WithKeyspaceName(KeyspaceNameT&& value) { SetKeyspaceName(std::forward<KeyspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pair tags to be attached to the keyspace.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
     * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
     * Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateKeyspaceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateKeyspaceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The replication specification of the keyspace includes:</p> <ul> <li> <p>
     * <code>replicationStrategy</code> - the required value is
     * <code>SINGLE_REGION</code> or <code>MULTI_REGION</code>.</p> </li> <li> <p>
     * <code>regionList</code> - if the <code>replicationStrategy</code> is
     * <code>MULTI_REGION</code>, the <code>regionList</code> requires the current
     * Region and at least one additional Amazon Web Services Region where the keyspace
     * is going to be replicated in.</p> </li> </ul>
     */
    inline const ReplicationSpecification& GetReplicationSpecification() const { return m_replicationSpecification; }
    inline bool ReplicationSpecificationHasBeenSet() const { return m_replicationSpecificationHasBeenSet; }
    template<typename ReplicationSpecificationT = ReplicationSpecification>
    void SetReplicationSpecification(ReplicationSpecificationT&& value) { m_replicationSpecificationHasBeenSet = true; m_replicationSpecification = std::forward<ReplicationSpecificationT>(value); }
    template<typename ReplicationSpecificationT = ReplicationSpecification>
    CreateKeyspaceRequest& WithReplicationSpecification(ReplicationSpecificationT&& value) { SetReplicationSpecification(std::forward<ReplicationSpecificationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ReplicationSpecification m_replicationSpecification;
    bool m_replicationSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
