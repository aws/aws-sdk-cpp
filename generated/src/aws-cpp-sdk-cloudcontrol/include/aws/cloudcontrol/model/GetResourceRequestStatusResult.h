/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/cloudcontrol/model/ProgressEvent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudcontrol/model/HookProgressEvent.h>
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
  class GetResourceRequestStatusResult
  {
  public:
    AWS_CLOUDCONTROLAPI_API GetResourceRequestStatusResult() = default;
    AWS_CLOUDCONTROLAPI_API GetResourceRequestStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDCONTROLAPI_API GetResourceRequestStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the current status of the resource operation request.</p>
     */
    inline const ProgressEvent& GetProgressEvent() const { return m_progressEvent; }
    template<typename ProgressEventT = ProgressEvent>
    void SetProgressEvent(ProgressEventT&& value) { m_progressEventHasBeenSet = true; m_progressEvent = std::forward<ProgressEventT>(value); }
    template<typename ProgressEventT = ProgressEvent>
    GetResourceRequestStatusResult& WithProgressEvent(ProgressEventT&& value) { SetProgressEvent(std::forward<ProgressEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists Hook invocations for the specified target in the request. This is a
     * list since the same target can invoke multiple Hooks.</p>
     */
    inline const Aws::Vector<HookProgressEvent>& GetHooksProgressEvent() const { return m_hooksProgressEvent; }
    template<typename HooksProgressEventT = Aws::Vector<HookProgressEvent>>
    void SetHooksProgressEvent(HooksProgressEventT&& value) { m_hooksProgressEventHasBeenSet = true; m_hooksProgressEvent = std::forward<HooksProgressEventT>(value); }
    template<typename HooksProgressEventT = Aws::Vector<HookProgressEvent>>
    GetResourceRequestStatusResult& WithHooksProgressEvent(HooksProgressEventT&& value) { SetHooksProgressEvent(std::forward<HooksProgressEventT>(value)); return *this;}
    template<typename HooksProgressEventT = HookProgressEvent>
    GetResourceRequestStatusResult& AddHooksProgressEvent(HooksProgressEventT&& value) { m_hooksProgressEventHasBeenSet = true; m_hooksProgressEvent.emplace_back(std::forward<HooksProgressEventT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceRequestStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProgressEvent m_progressEvent;
    bool m_progressEventHasBeenSet = false;

    Aws::Vector<HookProgressEvent> m_hooksProgressEvent;
    bool m_hooksProgressEventHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
