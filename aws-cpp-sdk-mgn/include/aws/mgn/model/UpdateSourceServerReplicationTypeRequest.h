/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/model/ReplicationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class UpdateSourceServerReplicationTypeRequest : public MgnRequest
  {
  public:
    AWS_MGN_API UpdateSourceServerReplicationTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSourceServerReplicationType"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Replication type to which to update source server.</p>
     */
    inline const ReplicationType& GetReplicationType() const{ return m_replicationType; }

    /**
     * <p>Replication type to which to update source server.</p>
     */
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }

    /**
     * <p>Replication type to which to update source server.</p>
     */
    inline void SetReplicationType(const ReplicationType& value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }

    /**
     * <p>Replication type to which to update source server.</p>
     */
    inline void SetReplicationType(ReplicationType&& value) { m_replicationTypeHasBeenSet = true; m_replicationType = std::move(value); }

    /**
     * <p>Replication type to which to update source server.</p>
     */
    inline UpdateSourceServerReplicationTypeRequest& WithReplicationType(const ReplicationType& value) { SetReplicationType(value); return *this;}

    /**
     * <p>Replication type to which to update source server.</p>
     */
    inline UpdateSourceServerReplicationTypeRequest& WithReplicationType(ReplicationType&& value) { SetReplicationType(std::move(value)); return *this;}


    /**
     * <p>ID of source server on which to update replication type.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>ID of source server on which to update replication type.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>ID of source server on which to update replication type.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>ID of source server on which to update replication type.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>ID of source server on which to update replication type.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>ID of source server on which to update replication type.</p>
     */
    inline UpdateSourceServerReplicationTypeRequest& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>ID of source server on which to update replication type.</p>
     */
    inline UpdateSourceServerReplicationTypeRequest& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>ID of source server on which to update replication type.</p>
     */
    inline UpdateSourceServerReplicationTypeRequest& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}

  private:

    ReplicationType m_replicationType;
    bool m_replicationTypeHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
