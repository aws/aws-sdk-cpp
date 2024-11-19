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
    AWS_KEYSPACES_API UpdateKeyspaceRequest();

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
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = value; }
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::move(value); }
    inline void SetKeyspaceName(const char* value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName.assign(value); }
    inline UpdateKeyspaceRequest& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}
    inline UpdateKeyspaceRequest& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}
    inline UpdateKeyspaceRequest& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}
    ///@}

    ///@{
    
    inline const ReplicationSpecification& GetReplicationSpecification() const{ return m_replicationSpecification; }
    inline bool ReplicationSpecificationHasBeenSet() const { return m_replicationSpecificationHasBeenSet; }
    inline void SetReplicationSpecification(const ReplicationSpecification& value) { m_replicationSpecificationHasBeenSet = true; m_replicationSpecification = value; }
    inline void SetReplicationSpecification(ReplicationSpecification&& value) { m_replicationSpecificationHasBeenSet = true; m_replicationSpecification = std::move(value); }
    inline UpdateKeyspaceRequest& WithReplicationSpecification(const ReplicationSpecification& value) { SetReplicationSpecification(value); return *this;}
    inline UpdateKeyspaceRequest& WithReplicationSpecification(ReplicationSpecification&& value) { SetReplicationSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ClientSideTimestamps& GetClientSideTimestamps() const{ return m_clientSideTimestamps; }
    inline bool ClientSideTimestampsHasBeenSet() const { return m_clientSideTimestampsHasBeenSet; }
    inline void SetClientSideTimestamps(const ClientSideTimestamps& value) { m_clientSideTimestampsHasBeenSet = true; m_clientSideTimestamps = value; }
    inline void SetClientSideTimestamps(ClientSideTimestamps&& value) { m_clientSideTimestampsHasBeenSet = true; m_clientSideTimestamps = std::move(value); }
    inline UpdateKeyspaceRequest& WithClientSideTimestamps(const ClientSideTimestamps& value) { SetClientSideTimestamps(value); return *this;}
    inline UpdateKeyspaceRequest& WithClientSideTimestamps(ClientSideTimestamps&& value) { SetClientSideTimestamps(std::move(value)); return *this;}
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
