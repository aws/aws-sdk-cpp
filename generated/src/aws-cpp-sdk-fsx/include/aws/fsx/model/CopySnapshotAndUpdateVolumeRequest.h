/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/OpenZFSCopyStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/UpdateOpenZFSVolumeOption.h>
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
  class CopySnapshotAndUpdateVolumeRequest : public FSxRequest
  {
  public:
    AWS_FSX_API CopySnapshotAndUpdateVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopySnapshotAndUpdateVolume"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CopySnapshotAndUpdateVolumeRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CopySnapshotAndUpdateVolumeRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CopySnapshotAndUpdateVolumeRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Specifies the ID of the volume that you are copying the snapshot to.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>Specifies the ID of the volume that you are copying the snapshot to.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the volume that you are copying the snapshot to.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>Specifies the ID of the volume that you are copying the snapshot to.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>Specifies the ID of the volume that you are copying the snapshot to.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>Specifies the ID of the volume that you are copying the snapshot to.</p>
     */
    inline CopySnapshotAndUpdateVolumeRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>Specifies the ID of the volume that you are copying the snapshot to.</p>
     */
    inline CopySnapshotAndUpdateVolumeRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the volume that you are copying the snapshot to.</p>
     */
    inline CopySnapshotAndUpdateVolumeRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    
    inline const Aws::String& GetSourceSnapshotARN() const{ return m_sourceSnapshotARN; }

    
    inline bool SourceSnapshotARNHasBeenSet() const { return m_sourceSnapshotARNHasBeenSet; }

    
    inline void SetSourceSnapshotARN(const Aws::String& value) { m_sourceSnapshotARNHasBeenSet = true; m_sourceSnapshotARN = value; }

    
    inline void SetSourceSnapshotARN(Aws::String&& value) { m_sourceSnapshotARNHasBeenSet = true; m_sourceSnapshotARN = std::move(value); }

    
    inline void SetSourceSnapshotARN(const char* value) { m_sourceSnapshotARNHasBeenSet = true; m_sourceSnapshotARN.assign(value); }

    
    inline CopySnapshotAndUpdateVolumeRequest& WithSourceSnapshotARN(const Aws::String& value) { SetSourceSnapshotARN(value); return *this;}

    
    inline CopySnapshotAndUpdateVolumeRequest& WithSourceSnapshotARN(Aws::String&& value) { SetSourceSnapshotARN(std::move(value)); return *this;}

    
    inline CopySnapshotAndUpdateVolumeRequest& WithSourceSnapshotARN(const char* value) { SetSourceSnapshotARN(value); return *this;}


    /**
     * <p>Specifies the strategy to use when copying data from a snapshot to the
     * volume. </p> <ul> <li> <p> <code>FULL_COPY</code> - Copies all data from the
     * snapshot to the volume. </p> </li> <li> <p> <code>INCREMENTAL_COPY</code> -
     * Copies only the snapshot data that's changed since the previous replication.</p>
     * </li> </ul>  <p> <code>CLONE</code> isn't a valid copy strategy option for
     * the <code>CopySnapshotAndUpdateVolume</code> operation.</p> 
     */
    inline const OpenZFSCopyStrategy& GetCopyStrategy() const{ return m_copyStrategy; }

    /**
     * <p>Specifies the strategy to use when copying data from a snapshot to the
     * volume. </p> <ul> <li> <p> <code>FULL_COPY</code> - Copies all data from the
     * snapshot to the volume. </p> </li> <li> <p> <code>INCREMENTAL_COPY</code> -
     * Copies only the snapshot data that's changed since the previous replication.</p>
     * </li> </ul>  <p> <code>CLONE</code> isn't a valid copy strategy option for
     * the <code>CopySnapshotAndUpdateVolume</code> operation.</p> 
     */
    inline bool CopyStrategyHasBeenSet() const { return m_copyStrategyHasBeenSet; }

    /**
     * <p>Specifies the strategy to use when copying data from a snapshot to the
     * volume. </p> <ul> <li> <p> <code>FULL_COPY</code> - Copies all data from the
     * snapshot to the volume. </p> </li> <li> <p> <code>INCREMENTAL_COPY</code> -
     * Copies only the snapshot data that's changed since the previous replication.</p>
     * </li> </ul>  <p> <code>CLONE</code> isn't a valid copy strategy option for
     * the <code>CopySnapshotAndUpdateVolume</code> operation.</p> 
     */
    inline void SetCopyStrategy(const OpenZFSCopyStrategy& value) { m_copyStrategyHasBeenSet = true; m_copyStrategy = value; }

    /**
     * <p>Specifies the strategy to use when copying data from a snapshot to the
     * volume. </p> <ul> <li> <p> <code>FULL_COPY</code> - Copies all data from the
     * snapshot to the volume. </p> </li> <li> <p> <code>INCREMENTAL_COPY</code> -
     * Copies only the snapshot data that's changed since the previous replication.</p>
     * </li> </ul>  <p> <code>CLONE</code> isn't a valid copy strategy option for
     * the <code>CopySnapshotAndUpdateVolume</code> operation.</p> 
     */
    inline void SetCopyStrategy(OpenZFSCopyStrategy&& value) { m_copyStrategyHasBeenSet = true; m_copyStrategy = std::move(value); }

    /**
     * <p>Specifies the strategy to use when copying data from a snapshot to the
     * volume. </p> <ul> <li> <p> <code>FULL_COPY</code> - Copies all data from the
     * snapshot to the volume. </p> </li> <li> <p> <code>INCREMENTAL_COPY</code> -
     * Copies only the snapshot data that's changed since the previous replication.</p>
     * </li> </ul>  <p> <code>CLONE</code> isn't a valid copy strategy option for
     * the <code>CopySnapshotAndUpdateVolume</code> operation.</p> 
     */
    inline CopySnapshotAndUpdateVolumeRequest& WithCopyStrategy(const OpenZFSCopyStrategy& value) { SetCopyStrategy(value); return *this;}

    /**
     * <p>Specifies the strategy to use when copying data from a snapshot to the
     * volume. </p> <ul> <li> <p> <code>FULL_COPY</code> - Copies all data from the
     * snapshot to the volume. </p> </li> <li> <p> <code>INCREMENTAL_COPY</code> -
     * Copies only the snapshot data that's changed since the previous replication.</p>
     * </li> </ul>  <p> <code>CLONE</code> isn't a valid copy strategy option for
     * the <code>CopySnapshotAndUpdateVolume</code> operation.</p> 
     */
    inline CopySnapshotAndUpdateVolumeRequest& WithCopyStrategy(OpenZFSCopyStrategy&& value) { SetCopyStrategy(std::move(value)); return *this;}


    /**
     * <p>Confirms that you want to delete data on the destination volume that wasn’t
     * there during the previous snapshot replication.</p> <p>Your replication will
     * fail if you don’t include an option for a specific type of data and that data is
     * on your destination. For example, if you don’t include
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> and there are intermediate snapshots
     * on the destination, you can’t copy the snapshot.</p> <ul> <li> <p>
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots on the
     * destination volume that aren’t on the source volume.</p> </li> <li> <p>
     * <code>DELETE_CLONED_VOLUMES</code> - Deletes snapshot clones on the destination
     * volume that aren't on the source volume.</p> </li> <li> <p>
     * <code>DELETE_INTERMEDIATE_DATA</code> - Overwrites snapshots on the destination
     * volume that don’t match the source snapshot that you’re copying.</p> </li> </ul>
     */
    inline const Aws::Vector<UpdateOpenZFSVolumeOption>& GetOptions() const{ return m_options; }

    /**
     * <p>Confirms that you want to delete data on the destination volume that wasn’t
     * there during the previous snapshot replication.</p> <p>Your replication will
     * fail if you don’t include an option for a specific type of data and that data is
     * on your destination. For example, if you don’t include
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> and there are intermediate snapshots
     * on the destination, you can’t copy the snapshot.</p> <ul> <li> <p>
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots on the
     * destination volume that aren’t on the source volume.</p> </li> <li> <p>
     * <code>DELETE_CLONED_VOLUMES</code> - Deletes snapshot clones on the destination
     * volume that aren't on the source volume.</p> </li> <li> <p>
     * <code>DELETE_INTERMEDIATE_DATA</code> - Overwrites snapshots on the destination
     * volume that don’t match the source snapshot that you’re copying.</p> </li> </ul>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Confirms that you want to delete data on the destination volume that wasn’t
     * there during the previous snapshot replication.</p> <p>Your replication will
     * fail if you don’t include an option for a specific type of data and that data is
     * on your destination. For example, if you don’t include
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> and there are intermediate snapshots
     * on the destination, you can’t copy the snapshot.</p> <ul> <li> <p>
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots on the
     * destination volume that aren’t on the source volume.</p> </li> <li> <p>
     * <code>DELETE_CLONED_VOLUMES</code> - Deletes snapshot clones on the destination
     * volume that aren't on the source volume.</p> </li> <li> <p>
     * <code>DELETE_INTERMEDIATE_DATA</code> - Overwrites snapshots on the destination
     * volume that don’t match the source snapshot that you’re copying.</p> </li> </ul>
     */
    inline void SetOptions(const Aws::Vector<UpdateOpenZFSVolumeOption>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Confirms that you want to delete data on the destination volume that wasn’t
     * there during the previous snapshot replication.</p> <p>Your replication will
     * fail if you don’t include an option for a specific type of data and that data is
     * on your destination. For example, if you don’t include
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> and there are intermediate snapshots
     * on the destination, you can’t copy the snapshot.</p> <ul> <li> <p>
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots on the
     * destination volume that aren’t on the source volume.</p> </li> <li> <p>
     * <code>DELETE_CLONED_VOLUMES</code> - Deletes snapshot clones on the destination
     * volume that aren't on the source volume.</p> </li> <li> <p>
     * <code>DELETE_INTERMEDIATE_DATA</code> - Overwrites snapshots on the destination
     * volume that don’t match the source snapshot that you’re copying.</p> </li> </ul>
     */
    inline void SetOptions(Aws::Vector<UpdateOpenZFSVolumeOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Confirms that you want to delete data on the destination volume that wasn’t
     * there during the previous snapshot replication.</p> <p>Your replication will
     * fail if you don’t include an option for a specific type of data and that data is
     * on your destination. For example, if you don’t include
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> and there are intermediate snapshots
     * on the destination, you can’t copy the snapshot.</p> <ul> <li> <p>
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots on the
     * destination volume that aren’t on the source volume.</p> </li> <li> <p>
     * <code>DELETE_CLONED_VOLUMES</code> - Deletes snapshot clones on the destination
     * volume that aren't on the source volume.</p> </li> <li> <p>
     * <code>DELETE_INTERMEDIATE_DATA</code> - Overwrites snapshots on the destination
     * volume that don’t match the source snapshot that you’re copying.</p> </li> </ul>
     */
    inline CopySnapshotAndUpdateVolumeRequest& WithOptions(const Aws::Vector<UpdateOpenZFSVolumeOption>& value) { SetOptions(value); return *this;}

    /**
     * <p>Confirms that you want to delete data on the destination volume that wasn’t
     * there during the previous snapshot replication.</p> <p>Your replication will
     * fail if you don’t include an option for a specific type of data and that data is
     * on your destination. For example, if you don’t include
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> and there are intermediate snapshots
     * on the destination, you can’t copy the snapshot.</p> <ul> <li> <p>
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots on the
     * destination volume that aren’t on the source volume.</p> </li> <li> <p>
     * <code>DELETE_CLONED_VOLUMES</code> - Deletes snapshot clones on the destination
     * volume that aren't on the source volume.</p> </li> <li> <p>
     * <code>DELETE_INTERMEDIATE_DATA</code> - Overwrites snapshots on the destination
     * volume that don’t match the source snapshot that you’re copying.</p> </li> </ul>
     */
    inline CopySnapshotAndUpdateVolumeRequest& WithOptions(Aws::Vector<UpdateOpenZFSVolumeOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>Confirms that you want to delete data on the destination volume that wasn’t
     * there during the previous snapshot replication.</p> <p>Your replication will
     * fail if you don’t include an option for a specific type of data and that data is
     * on your destination. For example, if you don’t include
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> and there are intermediate snapshots
     * on the destination, you can’t copy the snapshot.</p> <ul> <li> <p>
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots on the
     * destination volume that aren’t on the source volume.</p> </li> <li> <p>
     * <code>DELETE_CLONED_VOLUMES</code> - Deletes snapshot clones on the destination
     * volume that aren't on the source volume.</p> </li> <li> <p>
     * <code>DELETE_INTERMEDIATE_DATA</code> - Overwrites snapshots on the destination
     * volume that don’t match the source snapshot that you’re copying.</p> </li> </ul>
     */
    inline CopySnapshotAndUpdateVolumeRequest& AddOptions(const UpdateOpenZFSVolumeOption& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>Confirms that you want to delete data on the destination volume that wasn’t
     * there during the previous snapshot replication.</p> <p>Your replication will
     * fail if you don’t include an option for a specific type of data and that data is
     * on your destination. For example, if you don’t include
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> and there are intermediate snapshots
     * on the destination, you can’t copy the snapshot.</p> <ul> <li> <p>
     * <code>DELETE_INTERMEDIATE_SNAPSHOTS</code> - Deletes snapshots on the
     * destination volume that aren’t on the source volume.</p> </li> <li> <p>
     * <code>DELETE_CLONED_VOLUMES</code> - Deletes snapshot clones on the destination
     * volume that aren't on the source volume.</p> </li> <li> <p>
     * <code>DELETE_INTERMEDIATE_DATA</code> - Overwrites snapshots on the destination
     * volume that don’t match the source snapshot that you’re copying.</p> </li> </ul>
     */
    inline CopySnapshotAndUpdateVolumeRequest& AddOptions(UpdateOpenZFSVolumeOption&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::String m_sourceSnapshotARN;
    bool m_sourceSnapshotARNHasBeenSet = false;

    OpenZFSCopyStrategy m_copyStrategy;
    bool m_copyStrategyHasBeenSet = false;

    Aws::Vector<UpdateOpenZFSVolumeOption> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
