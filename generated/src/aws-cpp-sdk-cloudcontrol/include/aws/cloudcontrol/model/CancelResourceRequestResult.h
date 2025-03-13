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
  class CancelResourceRequestResult
  {
  public:
    AWS_CLOUDCONTROLAPI_API CancelResourceRequestResult() = default;
    AWS_CLOUDCONTROLAPI_API CancelResourceRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDCONTROLAPI_API CancelResourceRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ProgressEvent& GetProgressEvent() const { return m_progressEvent; }
    template<typename ProgressEventT = ProgressEvent>
    void SetProgressEvent(ProgressEventT&& value) { m_progressEventHasBeenSet = true; m_progressEvent = std::forward<ProgressEventT>(value); }
    template<typename ProgressEventT = ProgressEvent>
    CancelResourceRequestResult& WithProgressEvent(ProgressEventT&& value) { SetProgressEvent(std::forward<ProgressEventT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelResourceRequestResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
