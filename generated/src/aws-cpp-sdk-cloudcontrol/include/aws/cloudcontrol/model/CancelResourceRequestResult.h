﻿/**
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
    AWS_CLOUDCONTROLAPI_API CancelResourceRequestResult();
    AWS_CLOUDCONTROLAPI_API CancelResourceRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDCONTROLAPI_API CancelResourceRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ProgressEvent& GetProgressEvent() const{ return m_progressEvent; }
    inline void SetProgressEvent(const ProgressEvent& value) { m_progressEvent = value; }
    inline void SetProgressEvent(ProgressEvent&& value) { m_progressEvent = std::move(value); }
    inline CancelResourceRequestResult& WithProgressEvent(const ProgressEvent& value) { SetProgressEvent(value); return *this;}
    inline CancelResourceRequestResult& WithProgressEvent(ProgressEvent&& value) { SetProgressEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelResourceRequestResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelResourceRequestResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelResourceRequestResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ProgressEvent m_progressEvent;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
