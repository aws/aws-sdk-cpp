﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/VolumeLifecycle.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/AdministrativeAction.h>
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
  class RestoreVolumeFromSnapshotResult
  {
  public:
    AWS_FSX_API RestoreVolumeFromSnapshotResult();
    AWS_FSX_API RestoreVolumeFromSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API RestoreVolumeFromSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the volume that you restored.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeId.assign(value); }
    inline RestoreVolumeFromSnapshotResult& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline RestoreVolumeFromSnapshotResult& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline RestoreVolumeFromSnapshotResult& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle state of the volume being restored.</p>
     */
    inline const VolumeLifecycle& GetLifecycle() const{ return m_lifecycle; }
    inline void SetLifecycle(const VolumeLifecycle& value) { m_lifecycle = value; }
    inline void SetLifecycle(VolumeLifecycle&& value) { m_lifecycle = std::move(value); }
    inline RestoreVolumeFromSnapshotResult& WithLifecycle(const VolumeLifecycle& value) { SetLifecycle(value); return *this;}
    inline RestoreVolumeFromSnapshotResult& WithLifecycle(VolumeLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system.</p>
     */
    inline const Aws::Vector<AdministrativeAction>& GetAdministrativeActions() const{ return m_administrativeActions; }
    inline void SetAdministrativeActions(const Aws::Vector<AdministrativeAction>& value) { m_administrativeActions = value; }
    inline void SetAdministrativeActions(Aws::Vector<AdministrativeAction>&& value) { m_administrativeActions = std::move(value); }
    inline RestoreVolumeFromSnapshotResult& WithAdministrativeActions(const Aws::Vector<AdministrativeAction>& value) { SetAdministrativeActions(value); return *this;}
    inline RestoreVolumeFromSnapshotResult& WithAdministrativeActions(Aws::Vector<AdministrativeAction>&& value) { SetAdministrativeActions(std::move(value)); return *this;}
    inline RestoreVolumeFromSnapshotResult& AddAdministrativeActions(const AdministrativeAction& value) { m_administrativeActions.push_back(value); return *this; }
    inline RestoreVolumeFromSnapshotResult& AddAdministrativeActions(AdministrativeAction&& value) { m_administrativeActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RestoreVolumeFromSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RestoreVolumeFromSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RestoreVolumeFromSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeId;

    VolumeLifecycle m_lifecycle;

    Aws::Vector<AdministrativeAction> m_administrativeActions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
