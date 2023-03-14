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
  class GetResourceRequestStatusResult
  {
  public:
    AWS_CLOUDCONTROLAPI_API GetResourceRequestStatusResult();
    AWS_CLOUDCONTROLAPI_API GetResourceRequestStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDCONTROLAPI_API GetResourceRequestStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the current status of the resource operation request.</p>
     */
    inline const ProgressEvent& GetProgressEvent() const{ return m_progressEvent; }

    /**
     * <p>Represents the current status of the resource operation request.</p>
     */
    inline void SetProgressEvent(const ProgressEvent& value) { m_progressEvent = value; }

    /**
     * <p>Represents the current status of the resource operation request.</p>
     */
    inline void SetProgressEvent(ProgressEvent&& value) { m_progressEvent = std::move(value); }

    /**
     * <p>Represents the current status of the resource operation request.</p>
     */
    inline GetResourceRequestStatusResult& WithProgressEvent(const ProgressEvent& value) { SetProgressEvent(value); return *this;}

    /**
     * <p>Represents the current status of the resource operation request.</p>
     */
    inline GetResourceRequestStatusResult& WithProgressEvent(ProgressEvent&& value) { SetProgressEvent(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetResourceRequestStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetResourceRequestStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetResourceRequestStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProgressEvent m_progressEvent;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
