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
    AWS_CONNECT_API BatchPutContactResult() = default;
    AWS_CONNECT_API BatchPutContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API BatchPutContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of requests for which contact was successfully created.</p>
     */
    inline const Aws::Vector<SuccessfulRequest>& GetSuccessfulRequestList() const { return m_successfulRequestList; }
    template<typename SuccessfulRequestListT = Aws::Vector<SuccessfulRequest>>
    void SetSuccessfulRequestList(SuccessfulRequestListT&& value) { m_successfulRequestListHasBeenSet = true; m_successfulRequestList = std::forward<SuccessfulRequestListT>(value); }
    template<typename SuccessfulRequestListT = Aws::Vector<SuccessfulRequest>>
    BatchPutContactResult& WithSuccessfulRequestList(SuccessfulRequestListT&& value) { SetSuccessfulRequestList(std::forward<SuccessfulRequestListT>(value)); return *this;}
    template<typename SuccessfulRequestListT = SuccessfulRequest>
    BatchPutContactResult& AddSuccessfulRequestList(SuccessfulRequestListT&& value) { m_successfulRequestListHasBeenSet = true; m_successfulRequestList.emplace_back(std::forward<SuccessfulRequestListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of requests for which contact creation failed.</p>
     */
    inline const Aws::Vector<FailedRequest>& GetFailedRequestList() const { return m_failedRequestList; }
    template<typename FailedRequestListT = Aws::Vector<FailedRequest>>
    void SetFailedRequestList(FailedRequestListT&& value) { m_failedRequestListHasBeenSet = true; m_failedRequestList = std::forward<FailedRequestListT>(value); }
    template<typename FailedRequestListT = Aws::Vector<FailedRequest>>
    BatchPutContactResult& WithFailedRequestList(FailedRequestListT&& value) { SetFailedRequestList(std::forward<FailedRequestListT>(value)); return *this;}
    template<typename FailedRequestListT = FailedRequest>
    BatchPutContactResult& AddFailedRequestList(FailedRequestListT&& value) { m_failedRequestListHasBeenSet = true; m_failedRequestList.emplace_back(std::forward<FailedRequestListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchPutContactResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SuccessfulRequest> m_successfulRequestList;
    bool m_successfulRequestListHasBeenSet = false;

    Aws::Vector<FailedRequest> m_failedRequestList;
    bool m_failedRequestListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
