/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/BatchStartViewerSessionRevocationError.h>
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
namespace IVS
{
namespace Model
{
  class BatchStartViewerSessionRevocationResult
  {
  public:
    AWS_IVS_API BatchStartViewerSessionRevocationResult();
    AWS_IVS_API BatchStartViewerSessionRevocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API BatchStartViewerSessionRevocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Each error object is related to a specific <code>channelArn</code> and
     * <code>viewerId</code> pair in the request.</p>
     */
    inline const Aws::Vector<BatchStartViewerSessionRevocationError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Each error object is related to a specific <code>channelArn</code> and
     * <code>viewerId</code> pair in the request.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchStartViewerSessionRevocationError>& value) { m_errors = value; }

    /**
     * <p>Each error object is related to a specific <code>channelArn</code> and
     * <code>viewerId</code> pair in the request.</p>
     */
    inline void SetErrors(Aws::Vector<BatchStartViewerSessionRevocationError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Each error object is related to a specific <code>channelArn</code> and
     * <code>viewerId</code> pair in the request.</p>
     */
    inline BatchStartViewerSessionRevocationResult& WithErrors(const Aws::Vector<BatchStartViewerSessionRevocationError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Each error object is related to a specific <code>channelArn</code> and
     * <code>viewerId</code> pair in the request.</p>
     */
    inline BatchStartViewerSessionRevocationResult& WithErrors(Aws::Vector<BatchStartViewerSessionRevocationError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Each error object is related to a specific <code>channelArn</code> and
     * <code>viewerId</code> pair in the request.</p>
     */
    inline BatchStartViewerSessionRevocationResult& AddErrors(const BatchStartViewerSessionRevocationError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Each error object is related to a specific <code>channelArn</code> and
     * <code>viewerId</code> pair in the request.</p>
     */
    inline BatchStartViewerSessionRevocationResult& AddErrors(BatchStartViewerSessionRevocationError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchStartViewerSessionRevocationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchStartViewerSessionRevocationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchStartViewerSessionRevocationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchStartViewerSessionRevocationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
