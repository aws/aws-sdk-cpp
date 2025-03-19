/**
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
    AWS_FSX_API RestoreVolumeFromSnapshotResult() = default;
    AWS_FSX_API RestoreVolumeFromSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API RestoreVolumeFromSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the volume that you restored.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    RestoreVolumeFromSnapshotResult& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle state of the volume being restored.</p>
     */
    inline VolumeLifecycle GetLifecycle() const { return m_lifecycle; }
    inline void SetLifecycle(VolumeLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline RestoreVolumeFromSnapshotResult& WithLifecycle(VolumeLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of administrative actions for the file system that are in process or
     * waiting to be processed. Administrative actions describe changes to the Amazon
     * FSx system.</p>
     */
    inline const Aws::Vector<AdministrativeAction>& GetAdministrativeActions() const { return m_administrativeActions; }
    template<typename AdministrativeActionsT = Aws::Vector<AdministrativeAction>>
    void SetAdministrativeActions(AdministrativeActionsT&& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions = std::forward<AdministrativeActionsT>(value); }
    template<typename AdministrativeActionsT = Aws::Vector<AdministrativeAction>>
    RestoreVolumeFromSnapshotResult& WithAdministrativeActions(AdministrativeActionsT&& value) { SetAdministrativeActions(std::forward<AdministrativeActionsT>(value)); return *this;}
    template<typename AdministrativeActionsT = AdministrativeAction>
    RestoreVolumeFromSnapshotResult& AddAdministrativeActions(AdministrativeActionsT&& value) { m_administrativeActionsHasBeenSet = true; m_administrativeActions.emplace_back(std::forward<AdministrativeActionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RestoreVolumeFromSnapshotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    VolumeLifecycle m_lifecycle{VolumeLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    Aws::Vector<AdministrativeAction> m_administrativeActions;
    bool m_administrativeActionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
