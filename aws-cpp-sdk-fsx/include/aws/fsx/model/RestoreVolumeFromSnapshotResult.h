/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/VolumeLifecycle.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{
  class AWS_FSX_API RestoreVolumeFromSnapshotResult
  {
  public:
    RestoreVolumeFromSnapshotResult();
    RestoreVolumeFromSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RestoreVolumeFromSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the volume that you restored.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the volume that you restored.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeId = value; }

    /**
     * <p>The ID of the volume that you restored.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume that you restored.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume that you restored.</p>
     */
    inline RestoreVolumeFromSnapshotResult& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume that you restored.</p>
     */
    inline RestoreVolumeFromSnapshotResult& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume that you restored.</p>
     */
    inline RestoreVolumeFromSnapshotResult& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The lifecycle state of the volume being restored.</p>
     */
    inline const VolumeLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle state of the volume being restored.</p>
     */
    inline void SetLifecycle(const VolumeLifecycle& value) { m_lifecycle = value; }

    /**
     * <p>The lifecycle state of the volume being restored.</p>
     */
    inline void SetLifecycle(VolumeLifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle state of the volume being restored.</p>
     */
    inline RestoreVolumeFromSnapshotResult& WithLifecycle(const VolumeLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle state of the volume being restored.</p>
     */
    inline RestoreVolumeFromSnapshotResult& WithLifecycle(VolumeLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}

  private:

    Aws::String m_volumeId;

    VolumeLifecycle m_lifecycle;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
