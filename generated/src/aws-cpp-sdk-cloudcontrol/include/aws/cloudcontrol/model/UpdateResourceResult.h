/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/cloudcontrol/model/ProgressEvent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudControlApi
{
namespace Model
{
  class UpdateResourceResult
  {
  public:
    AWS_CLOUDCONTROLAPI_API UpdateResourceResult() = default;
    AWS_CLOUDCONTROLAPI_API UpdateResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDCONTROLAPI_API UpdateResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the current status of the resource update request.</p> <p>Use the
     * <code>RequestToken</code> of the <code>ProgressEvent</code> with <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * to return the current status of a resource operation request.</p>
     */
    inline const ProgressEvent& GetProgressEvent() const { return m_progressEvent; }
    template<typename ProgressEventT = ProgressEvent>
    void SetProgressEvent(ProgressEventT&& value) { m_progressEventHasBeenSet = true; m_progressEvent = std::forward<ProgressEventT>(value); }
    template<typename ProgressEventT = ProgressEvent>
    UpdateResourceResult& WithProgressEvent(ProgressEventT&& value) { SetProgressEvent(std::forward<ProgressEventT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProgressEvent m_progressEvent;
    bool m_progressEventHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
