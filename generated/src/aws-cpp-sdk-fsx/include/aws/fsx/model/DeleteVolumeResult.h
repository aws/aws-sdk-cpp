/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/VolumeLifecycle.h>
#include <aws/fsx/model/DeleteVolumeOntapResponse.h>
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
  class DeleteVolumeResult
  {
  public:
    AWS_FSX_API DeleteVolumeResult() = default;
    AWS_FSX_API DeleteVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the volume that's being deleted.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    DeleteVolumeResult& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle state of the volume being deleted. If the
     * <code>DeleteVolume</code> operation is successful, this value is
     * <code>DELETING</code>.</p>
     */
    inline VolumeLifecycle GetLifecycle() const { return m_lifecycle; }
    inline void SetLifecycle(VolumeLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline DeleteVolumeResult& WithLifecycle(VolumeLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned after a <code>DeleteVolume</code> request, showing the status of the
     * delete request.</p>
     */
    inline const DeleteVolumeOntapResponse& GetOntapResponse() const { return m_ontapResponse; }
    template<typename OntapResponseT = DeleteVolumeOntapResponse>
    void SetOntapResponse(OntapResponseT&& value) { m_ontapResponseHasBeenSet = true; m_ontapResponse = std::forward<OntapResponseT>(value); }
    template<typename OntapResponseT = DeleteVolumeOntapResponse>
    DeleteVolumeResult& WithOntapResponse(OntapResponseT&& value) { SetOntapResponse(std::forward<OntapResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteVolumeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    VolumeLifecycle m_lifecycle{VolumeLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    DeleteVolumeOntapResponse m_ontapResponse;
    bool m_ontapResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
