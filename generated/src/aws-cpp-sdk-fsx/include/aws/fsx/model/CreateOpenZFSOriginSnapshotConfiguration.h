﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/OpenZFSCopyStrategy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>The snapshot configuration to use when creating an Amazon FSx for OpenZFS
   * volume from a snapshot. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateOpenZFSOriginSnapshotConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateOpenZFSOriginSnapshotConfiguration
  {
  public:
    AWS_FSX_API CreateOpenZFSOriginSnapshotConfiguration();
    AWS_FSX_API CreateOpenZFSOriginSnapshotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateOpenZFSOriginSnapshotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetSnapshotARN() const{ return m_snapshotARN; }

    
    inline bool SnapshotARNHasBeenSet() const { return m_snapshotARNHasBeenSet; }

    
    inline void SetSnapshotARN(const Aws::String& value) { m_snapshotARNHasBeenSet = true; m_snapshotARN = value; }

    
    inline void SetSnapshotARN(Aws::String&& value) { m_snapshotARNHasBeenSet = true; m_snapshotARN = std::move(value); }

    
    inline void SetSnapshotARN(const char* value) { m_snapshotARNHasBeenSet = true; m_snapshotARN.assign(value); }

    
    inline CreateOpenZFSOriginSnapshotConfiguration& WithSnapshotARN(const Aws::String& value) { SetSnapshotARN(value); return *this;}

    
    inline CreateOpenZFSOriginSnapshotConfiguration& WithSnapshotARN(Aws::String&& value) { SetSnapshotARN(std::move(value)); return *this;}

    
    inline CreateOpenZFSOriginSnapshotConfiguration& WithSnapshotARN(const char* value) { SetSnapshotARN(value); return *this;}


    /**
     * <p>Specifies the strategy used when copying data from the snapshot to the new
     * volume. </p> <ul> <li> <p> <code>CLONE</code> - The new volume references the
     * data in the origin snapshot. Cloning a snapshot is faster than copying data from
     * the snapshot to a new volume and doesn't consume disk throughput. However, the
     * origin snapshot can't be deleted if there is a volume using its copied data.</p>
     * </li> <li> <p> <code>FULL_COPY</code> - Copies all data from the snapshot to the
     * new volume.</p> <p>Specify this option to create the volume from a snapshot on
     * another FSx for OpenZFS file system.</p> </li> </ul>  <p>The
     * <code>INCREMENTAL_COPY</code> option is only for updating an existing volume by
     * using a snapshot from another FSx for OpenZFS file system. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_CopySnapshotAndUpdateVolume.html">CopySnapshotAndUpdateVolume</a>.</p>
     * 
     */
    inline const OpenZFSCopyStrategy& GetCopyStrategy() const{ return m_copyStrategy; }

    /**
     * <p>Specifies the strategy used when copying data from the snapshot to the new
     * volume. </p> <ul> <li> <p> <code>CLONE</code> - The new volume references the
     * data in the origin snapshot. Cloning a snapshot is faster than copying data from
     * the snapshot to a new volume and doesn't consume disk throughput. However, the
     * origin snapshot can't be deleted if there is a volume using its copied data.</p>
     * </li> <li> <p> <code>FULL_COPY</code> - Copies all data from the snapshot to the
     * new volume.</p> <p>Specify this option to create the volume from a snapshot on
     * another FSx for OpenZFS file system.</p> </li> </ul>  <p>The
     * <code>INCREMENTAL_COPY</code> option is only for updating an existing volume by
     * using a snapshot from another FSx for OpenZFS file system. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_CopySnapshotAndUpdateVolume.html">CopySnapshotAndUpdateVolume</a>.</p>
     * 
     */
    inline bool CopyStrategyHasBeenSet() const { return m_copyStrategyHasBeenSet; }

    /**
     * <p>Specifies the strategy used when copying data from the snapshot to the new
     * volume. </p> <ul> <li> <p> <code>CLONE</code> - The new volume references the
     * data in the origin snapshot. Cloning a snapshot is faster than copying data from
     * the snapshot to a new volume and doesn't consume disk throughput. However, the
     * origin snapshot can't be deleted if there is a volume using its copied data.</p>
     * </li> <li> <p> <code>FULL_COPY</code> - Copies all data from the snapshot to the
     * new volume.</p> <p>Specify this option to create the volume from a snapshot on
     * another FSx for OpenZFS file system.</p> </li> </ul>  <p>The
     * <code>INCREMENTAL_COPY</code> option is only for updating an existing volume by
     * using a snapshot from another FSx for OpenZFS file system. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_CopySnapshotAndUpdateVolume.html">CopySnapshotAndUpdateVolume</a>.</p>
     * 
     */
    inline void SetCopyStrategy(const OpenZFSCopyStrategy& value) { m_copyStrategyHasBeenSet = true; m_copyStrategy = value; }

    /**
     * <p>Specifies the strategy used when copying data from the snapshot to the new
     * volume. </p> <ul> <li> <p> <code>CLONE</code> - The new volume references the
     * data in the origin snapshot. Cloning a snapshot is faster than copying data from
     * the snapshot to a new volume and doesn't consume disk throughput. However, the
     * origin snapshot can't be deleted if there is a volume using its copied data.</p>
     * </li> <li> <p> <code>FULL_COPY</code> - Copies all data from the snapshot to the
     * new volume.</p> <p>Specify this option to create the volume from a snapshot on
     * another FSx for OpenZFS file system.</p> </li> </ul>  <p>The
     * <code>INCREMENTAL_COPY</code> option is only for updating an existing volume by
     * using a snapshot from another FSx for OpenZFS file system. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_CopySnapshotAndUpdateVolume.html">CopySnapshotAndUpdateVolume</a>.</p>
     * 
     */
    inline void SetCopyStrategy(OpenZFSCopyStrategy&& value) { m_copyStrategyHasBeenSet = true; m_copyStrategy = std::move(value); }

    /**
     * <p>Specifies the strategy used when copying data from the snapshot to the new
     * volume. </p> <ul> <li> <p> <code>CLONE</code> - The new volume references the
     * data in the origin snapshot. Cloning a snapshot is faster than copying data from
     * the snapshot to a new volume and doesn't consume disk throughput. However, the
     * origin snapshot can't be deleted if there is a volume using its copied data.</p>
     * </li> <li> <p> <code>FULL_COPY</code> - Copies all data from the snapshot to the
     * new volume.</p> <p>Specify this option to create the volume from a snapshot on
     * another FSx for OpenZFS file system.</p> </li> </ul>  <p>The
     * <code>INCREMENTAL_COPY</code> option is only for updating an existing volume by
     * using a snapshot from another FSx for OpenZFS file system. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_CopySnapshotAndUpdateVolume.html">CopySnapshotAndUpdateVolume</a>.</p>
     * 
     */
    inline CreateOpenZFSOriginSnapshotConfiguration& WithCopyStrategy(const OpenZFSCopyStrategy& value) { SetCopyStrategy(value); return *this;}

    /**
     * <p>Specifies the strategy used when copying data from the snapshot to the new
     * volume. </p> <ul> <li> <p> <code>CLONE</code> - The new volume references the
     * data in the origin snapshot. Cloning a snapshot is faster than copying data from
     * the snapshot to a new volume and doesn't consume disk throughput. However, the
     * origin snapshot can't be deleted if there is a volume using its copied data.</p>
     * </li> <li> <p> <code>FULL_COPY</code> - Copies all data from the snapshot to the
     * new volume.</p> <p>Specify this option to create the volume from a snapshot on
     * another FSx for OpenZFS file system.</p> </li> </ul>  <p>The
     * <code>INCREMENTAL_COPY</code> option is only for updating an existing volume by
     * using a snapshot from another FSx for OpenZFS file system. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_CopySnapshotAndUpdateVolume.html">CopySnapshotAndUpdateVolume</a>.</p>
     * 
     */
    inline CreateOpenZFSOriginSnapshotConfiguration& WithCopyStrategy(OpenZFSCopyStrategy&& value) { SetCopyStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_snapshotARN;
    bool m_snapshotARNHasBeenSet = false;

    OpenZFSCopyStrategy m_copyStrategy;
    bool m_copyStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
