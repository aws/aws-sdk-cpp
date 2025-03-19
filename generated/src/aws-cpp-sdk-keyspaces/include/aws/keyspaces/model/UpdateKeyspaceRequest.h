/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/KeyspacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/model/ReplicationSpecification.h>
#include <aws/keyspaces/model/ClientSideTimestamps.h>
#include <utility>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

  /**
   */
  class UpdateKeyspaceRequest : public KeyspacesRequest
  {
  public:
    AWS_KEYSPACES_API UpdateKeyspaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKeyspace"; }

    AWS_KEYSPACES_API Aws::String SerializePayload() const override;

    AWS_KEYSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the keyspace. </p>
     */
    inline const Aws::String& GetKeyspaceName() const { return m_keyspaceName; }
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }
    template<typename KeyspaceNameT = Aws::String>
    void SetKeyspaceName(KeyspaceNameT&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::forward<KeyspaceNameT>(value); }
    template<typename KeyspaceNameT = Aws::String>
    UpdateKeyspaceRequest& WithKeyspaceName(KeyspaceNameT&& value) { SetKeyspaceName(std::forward<KeyspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ReplicationSpecification& GetReplicationSpecification() const { return m_replicationSpecification; }
    inline bool ReplicationSpecificationHasBeenSet() const { return m_replicationSpecificationHasBeenSet; }
    template<typename ReplicationSpecificationT = ReplicationSpecification>
    void SetReplicationSpecification(ReplicationSpecificationT&& value) { m_replicationSpecificationHasBeenSet = true; m_replicationSpecification = std::forward<ReplicationSpecificationT>(value); }
    template<typename ReplicationSpecificationT = ReplicationSpecification>
    UpdateKeyspaceRequest& WithReplicationSpecification(ReplicationSpecificationT&& value) { SetReplicationSpecification(std::forward<ReplicationSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ClientSideTimestamps& GetClientSideTimestamps() const { return m_clientSideTimestamps; }
    inline bool ClientSideTimestampsHasBeenSet() const { return m_clientSideTimestampsHasBeenSet; }
    template<typename ClientSideTimestampsT = ClientSideTimestamps>
    void SetClientSideTimestamps(ClientSideTimestampsT&& value) { m_clientSideTimestampsHasBeenSet = true; m_clientSideTimestamps = std::forward<ClientSideTimestampsT>(value); }
    template<typename ClientSideTimestampsT = ClientSideTimestamps>
    UpdateKeyspaceRequest& WithClientSideTimestamps(ClientSideTimestampsT&& value) { SetClientSideTimestamps(std::forward<ClientSideTimestampsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    ReplicationSpecification m_replicationSpecification;
    bool m_replicationSpecificationHasBeenSet = false;

    ClientSideTimestamps m_clientSideTimestamps;
    bool m_clientSideTimestampsHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
