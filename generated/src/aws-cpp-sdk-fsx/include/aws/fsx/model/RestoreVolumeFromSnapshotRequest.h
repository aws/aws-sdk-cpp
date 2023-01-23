/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/RestoreOpenZFSVolumeOption.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class RestoreVolumeFromSnapshotRequest : public FSxRequest
  {
  public:
    AWS_FSX_API RestoreVolumeFromSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreVolumeFromSnapshot"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline RestoreVolumeFromSnapshotRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline RestoreVolumeFromSnapshotRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline RestoreVolumeFromSnapshotRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The ID of the volume that you are restoring.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the volume that you are restoring.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The ID of the volume that you are restoring.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the volume that you are restoring.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume that you are restoring.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume that you are restoring.</p>
     */
    inline RestoreVolumeFromSnapshotRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume that you are restoring.</p>
     */
    inline RestoreVolumeFromSnapshotRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume that you are restoring.</p>
     */
    inline RestoreVolumeFromSnapshotRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The ID of the source snapshot. Specifies the snapshot that you are restoring
     * from.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the source snapshot. Specifies the snapshot that you are restoring
     * from.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the source snapshot. Specifies the snapshot that you are restoring
     * from.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the source snapshot. Specifies the snapshot that you are restoring
     * from.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the source snapshot. Specifies the snapshot that you are restoring
     * from.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the source snapshot. Specifies the snapshot that you are restoring
     * from.</p>
     */
    inline RestoreVolumeFromSnapshotRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the source snapshot. Specifies the snapshot that you are restoring
     * from.</p>
     */
    inline RestoreVolumeFromSnapshotRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the source snapshot. Specifies the snapshot that you are restoring
     * from.</p>
     */
    inline RestoreVolumeFromSnapshotRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The settings used when restoring the specified volume from snapshot.</p> <ul>
     * <li> <p> <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots between
     * the current state and the specified snapshot. If there are intermediate
     * snapshots and this option isn't used, <code>RestoreVolumeFromSnapshot</code>
     * fails.</p> </li> <li> <p> <code>DELETE_CLONED_VOLUMES</code> - Deletes any
     * dependent clone volumes created from intermediate snapshots. If there are any
     * dependent clone volumes and this option isn't used,
     * <code>RestoreVolumeFromSnapshot</code> fails.</p> </li> </ul>
     */
    inline const Aws::Vector<RestoreOpenZFSVolumeOption>& GetOptions() const{ return m_options; }

    /**
     * <p>The settings used when restoring the specified volume from snapshot.</p> <ul>
     * <li> <p> <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots between
     * the current state and the specified snapshot. If there are intermediate
     * snapshots and this option isn't used, <code>RestoreVolumeFromSnapshot</code>
     * fails.</p> </li> <li> <p> <code>DELETE_CLONED_VOLUMES</code> - Deletes any
     * dependent clone volumes created from intermediate snapshots. If there are any
     * dependent clone volumes and this option isn't used,
     * <code>RestoreVolumeFromSnapshot</code> fails.</p> </li> </ul>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The settings used when restoring the specified volume from snapshot.</p> <ul>
     * <li> <p> <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots between
     * the current state and the specified snapshot. If there are intermediate
     * snapshots and this option isn't used, <code>RestoreVolumeFromSnapshot</code>
     * fails.</p> </li> <li> <p> <code>DELETE_CLONED_VOLUMES</code> - Deletes any
     * dependent clone volumes created from intermediate snapshots. If there are any
     * dependent clone volumes and this option isn't used,
     * <code>RestoreVolumeFromSnapshot</code> fails.</p> </li> </ul>
     */
    inline void SetOptions(const Aws::Vector<RestoreOpenZFSVolumeOption>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The settings used when restoring the specified volume from snapshot.</p> <ul>
     * <li> <p> <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots between
     * the current state and the specified snapshot. If there are intermediate
     * snapshots and this option isn't used, <code>RestoreVolumeFromSnapshot</code>
     * fails.</p> </li> <li> <p> <code>DELETE_CLONED_VOLUMES</code> - Deletes any
     * dependent clone volumes created from intermediate snapshots. If there are any
     * dependent clone volumes and this option isn't used,
     * <code>RestoreVolumeFromSnapshot</code> fails.</p> </li> </ul>
     */
    inline void SetOptions(Aws::Vector<RestoreOpenZFSVolumeOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The settings used when restoring the specified volume from snapshot.</p> <ul>
     * <li> <p> <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots between
     * the current state and the specified snapshot. If there are intermediate
     * snapshots and this option isn't used, <code>RestoreVolumeFromSnapshot</code>
     * fails.</p> </li> <li> <p> <code>DELETE_CLONED_VOLUMES</code> - Deletes any
     * dependent clone volumes created from intermediate snapshots. If there are any
     * dependent clone volumes and this option isn't used,
     * <code>RestoreVolumeFromSnapshot</code> fails.</p> </li> </ul>
     */
    inline RestoreVolumeFromSnapshotRequest& WithOptions(const Aws::Vector<RestoreOpenZFSVolumeOption>& value) { SetOptions(value); return *this;}

    /**
     * <p>The settings used when restoring the specified volume from snapshot.</p> <ul>
     * <li> <p> <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots between
     * the current state and the specified snapshot. If there are intermediate
     * snapshots and this option isn't used, <code>RestoreVolumeFromSnapshot</code>
     * fails.</p> </li> <li> <p> <code>DELETE_CLONED_VOLUMES</code> - Deletes any
     * dependent clone volumes created from intermediate snapshots. If there are any
     * dependent clone volumes and this option isn't used,
     * <code>RestoreVolumeFromSnapshot</code> fails.</p> </li> </ul>
     */
    inline RestoreVolumeFromSnapshotRequest& WithOptions(Aws::Vector<RestoreOpenZFSVolumeOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The settings used when restoring the specified volume from snapshot.</p> <ul>
     * <li> <p> <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots between
     * the current state and the specified snapshot. If there are intermediate
     * snapshots and this option isn't used, <code>RestoreVolumeFromSnapshot</code>
     * fails.</p> </li> <li> <p> <code>DELETE_CLONED_VOLUMES</code> - Deletes any
     * dependent clone volumes created from intermediate snapshots. If there are any
     * dependent clone volumes and this option isn't used,
     * <code>RestoreVolumeFromSnapshot</code> fails.</p> </li> </ul>
     */
    inline RestoreVolumeFromSnapshotRequest& AddOptions(const RestoreOpenZFSVolumeOption& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>The settings used when restoring the specified volume from snapshot.</p> <ul>
     * <li> <p> <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots between
     * the current state and the specified snapshot. If there are intermediate
     * snapshots and this option isn't used, <code>RestoreVolumeFromSnapshot</code>
     * fails.</p> </li> <li> <p> <code>DELETE_CLONED_VOLUMES</code> - Deletes any
     * dependent clone volumes created from intermediate snapshots. If there are any
     * dependent clone volumes and this option isn't used,
     * <code>RestoreVolumeFromSnapshot</code> fails.</p> </li> </ul>
     */
    inline RestoreVolumeFromSnapshotRequest& AddOptions(RestoreOpenZFSVolumeOption&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::Vector<RestoreOpenZFSVolumeOption> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
