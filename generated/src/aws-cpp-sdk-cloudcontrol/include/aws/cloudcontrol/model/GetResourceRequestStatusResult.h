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
    AWS_CLOUDCONTROLAPI_API GetResourceRequestStatusResult();
    AWS_CLOUDCONTROLAPI_API GetResourceRequestStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDCONTROLAPI_API GetResourceRequestStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the current status of the resource operation request.</p>
     */
    inline const ProgressEvent& GetProgressEvent() const{ return m_progressEvent; }
    inline void SetProgressEvent(const ProgressEvent& value) { m_progressEvent = value; }
    inline void SetProgressEvent(ProgressEvent&& value) { m_progressEvent = std::move(value); }
    inline GetResourceRequestStatusResult& WithProgressEvent(const ProgressEvent& value) { SetProgressEvent(value); return *this;}
    inline GetResourceRequestStatusResult& WithProgressEvent(ProgressEvent&& value) { SetProgressEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists Hook invocations for the specified target in the request. This is a
     * list since the same target can invoke multiple Hooks.</p>
     */
    inline const Aws::Vector<HookProgressEvent>& GetHooksProgressEvent() const{ return m_hooksProgressEvent; }
    inline void SetHooksProgressEvent(const Aws::Vector<HookProgressEvent>& value) { m_hooksProgressEvent = value; }
    inline void SetHooksProgressEvent(Aws::Vector<HookProgressEvent>&& value) { m_hooksProgressEvent = std::move(value); }
    inline GetResourceRequestStatusResult& WithHooksProgressEvent(const Aws::Vector<HookProgressEvent>& value) { SetHooksProgressEvent(value); return *this;}
    inline GetResourceRequestStatusResult& WithHooksProgressEvent(Aws::Vector<HookProgressEvent>&& value) { SetHooksProgressEvent(std::move(value)); return *this;}
    inline GetResourceRequestStatusResult& AddHooksProgressEvent(const HookProgressEvent& value) { m_hooksProgressEvent.push_back(value); return *this; }
    inline GetResourceRequestStatusResult& AddHooksProgressEvent(HookProgressEvent&& value) { m_hooksProgressEvent.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResourceRequestStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResourceRequestStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResourceRequestStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ProgressEvent m_progressEvent;

    Aws::Vector<HookProgressEvent> m_hooksProgressEvent;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
