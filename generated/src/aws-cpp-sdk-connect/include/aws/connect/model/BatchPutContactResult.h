/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/SuccessfulRequest.h>
#include <aws/connect/model/FailedRequest.h>
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
namespace Connect
{
namespace Model
{
  class BatchPutContactResult
  {
  public:
    AWS_CONNECT_API BatchPutContactResult();
    AWS_CONNECT_API BatchPutContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API BatchPutContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of requests for which contact was successfully created.</p>
     */
    inline const Aws::Vector<SuccessfulRequest>& GetSuccessfulRequestList() const{ return m_successfulRequestList; }

    /**
     * <p>List of requests for which contact was successfully created.</p>
     */
    inline void SetSuccessfulRequestList(const Aws::Vector<SuccessfulRequest>& value) { m_successfulRequestList = value; }

    /**
     * <p>List of requests for which contact was successfully created.</p>
     */
    inline void SetSuccessfulRequestList(Aws::Vector<SuccessfulRequest>&& value) { m_successfulRequestList = std::move(value); }

    /**
     * <p>List of requests for which contact was successfully created.</p>
     */
    inline BatchPutContactResult& WithSuccessfulRequestList(const Aws::Vector<SuccessfulRequest>& value) { SetSuccessfulRequestList(value); return *this;}

    /**
     * <p>List of requests for which contact was successfully created.</p>
     */
    inline BatchPutContactResult& WithSuccessfulRequestList(Aws::Vector<SuccessfulRequest>&& value) { SetSuccessfulRequestList(std::move(value)); return *this;}

    /**
     * <p>List of requests for which contact was successfully created.</p>
     */
    inline BatchPutContactResult& AddSuccessfulRequestList(const SuccessfulRequest& value) { m_successfulRequestList.push_back(value); return *this; }

    /**
     * <p>List of requests for which contact was successfully created.</p>
     */
    inline BatchPutContactResult& AddSuccessfulRequestList(SuccessfulRequest&& value) { m_successfulRequestList.push_back(std::move(value)); return *this; }


    /**
     * <p>List of requests for which contact creation failed.</p>
     */
    inline const Aws::Vector<FailedRequest>& GetFailedRequestList() const{ return m_failedRequestList; }

    /**
     * <p>List of requests for which contact creation failed.</p>
     */
    inline void SetFailedRequestList(const Aws::Vector<FailedRequest>& value) { m_failedRequestList = value; }

    /**
     * <p>List of requests for which contact creation failed.</p>
     */
    inline void SetFailedRequestList(Aws::Vector<FailedRequest>&& value) { m_failedRequestList = std::move(value); }

    /**
     * <p>List of requests for which contact creation failed.</p>
     */
    inline BatchPutContactResult& WithFailedRequestList(const Aws::Vector<FailedRequest>& value) { SetFailedRequestList(value); return *this;}

    /**
     * <p>List of requests for which contact creation failed.</p>
     */
    inline BatchPutContactResult& WithFailedRequestList(Aws::Vector<FailedRequest>&& value) { SetFailedRequestList(std::move(value)); return *this;}

    /**
     * <p>List of requests for which contact creation failed.</p>
     */
    inline BatchPutContactResult& AddFailedRequestList(const FailedRequest& value) { m_failedRequestList.push_back(value); return *this; }

    /**
     * <p>List of requests for which contact creation failed.</p>
     */
    inline BatchPutContactResult& AddFailedRequestList(FailedRequest&& value) { m_failedRequestList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchPutContactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchPutContactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchPutContactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SuccessfulRequest> m_successfulRequestList;

    Aws::Vector<FailedRequest> m_failedRequestList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
