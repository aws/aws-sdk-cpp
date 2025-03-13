/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/BatchReadOperationResponse.h>
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
namespace CloudDirectory
{
namespace Model
{
  class BatchReadResult
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchReadResult() = default;
    AWS_CLOUDDIRECTORY_API BatchReadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API BatchReadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline const Aws::Vector<BatchReadOperationResponse>& GetResponses() const { return m_responses; }
    template<typename ResponsesT = Aws::Vector<BatchReadOperationResponse>>
    void SetResponses(ResponsesT&& value) { m_responsesHasBeenSet = true; m_responses = std::forward<ResponsesT>(value); }
    template<typename ResponsesT = Aws::Vector<BatchReadOperationResponse>>
    BatchReadResult& WithResponses(ResponsesT&& value) { SetResponses(std::forward<ResponsesT>(value)); return *this;}
    template<typename ResponsesT = BatchReadOperationResponse>
    BatchReadResult& AddResponses(ResponsesT&& value) { m_responsesHasBeenSet = true; m_responses.emplace_back(std::forward<ResponsesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchReadResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchReadOperationResponse> m_responses;
    bool m_responsesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
