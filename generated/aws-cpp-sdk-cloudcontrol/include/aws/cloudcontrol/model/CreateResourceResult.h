﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/cloudcontrol/model/ProgressEvent.h>
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
  class AWS_CLOUDCONTROLAPI_API CreateResourceResult
  {
  public:
    CreateResourceResult();
    CreateResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the current status of the resource creation request.</p> <p>After
     * you have initiated a resource creation request, you can monitor the progress of
     * your request by calling <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
     * by <code>CreateResource</code>.</p>
     */
    inline const ProgressEvent& GetProgressEvent() const{ return m_progressEvent; }

    /**
     * <p>Represents the current status of the resource creation request.</p> <p>After
     * you have initiated a resource creation request, you can monitor the progress of
     * your request by calling <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
     * by <code>CreateResource</code>.</p>
     */
    inline void SetProgressEvent(const ProgressEvent& value) { m_progressEvent = value; }

    /**
     * <p>Represents the current status of the resource creation request.</p> <p>After
     * you have initiated a resource creation request, you can monitor the progress of
     * your request by calling <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
     * by <code>CreateResource</code>.</p>
     */
    inline void SetProgressEvent(ProgressEvent&& value) { m_progressEvent = std::move(value); }

    /**
     * <p>Represents the current status of the resource creation request.</p> <p>After
     * you have initiated a resource creation request, you can monitor the progress of
     * your request by calling <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
     * by <code>CreateResource</code>.</p>
     */
    inline CreateResourceResult& WithProgressEvent(const ProgressEvent& value) { SetProgressEvent(value); return *this;}

    /**
     * <p>Represents the current status of the resource creation request.</p> <p>After
     * you have initiated a resource creation request, you can monitor the progress of
     * your request by calling <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
     * by <code>CreateResource</code>.</p>
     */
    inline CreateResourceResult& WithProgressEvent(ProgressEvent&& value) { SetProgressEvent(std::move(value)); return *this;}

  private:

    ProgressEvent m_progressEvent;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
