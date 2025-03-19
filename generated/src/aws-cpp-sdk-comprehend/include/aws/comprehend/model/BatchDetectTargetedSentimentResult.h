/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/BatchDetectTargetedSentimentItemResult.h>
#include <aws/comprehend/model/BatchItemError.h>
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
namespace Comprehend
{
namespace Model
{
  class BatchDetectTargetedSentimentResult
  {
  public:
    AWS_COMPREHEND_API BatchDetectTargetedSentimentResult() = default;
    AWS_COMPREHEND_API BatchDetectTargetedSentimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API BatchDetectTargetedSentimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline const Aws::Vector<BatchDetectTargetedSentimentItemResult>& GetResultList() const { return m_resultList; }
    template<typename ResultListT = Aws::Vector<BatchDetectTargetedSentimentItemResult>>
    void SetResultList(ResultListT&& value) { m_resultListHasBeenSet = true; m_resultList = std::forward<ResultListT>(value); }
    template<typename ResultListT = Aws::Vector<BatchDetectTargetedSentimentItemResult>>
    BatchDetectTargetedSentimentResult& WithResultList(ResultListT&& value) { SetResultList(std::forward<ResultListT>(value)); return *this;}
    template<typename ResultListT = BatchDetectTargetedSentimentItemResult>
    BatchDetectTargetedSentimentResult& AddResultList(ResultListT&& value) { m_resultListHasBeenSet = true; m_resultList.emplace_back(std::forward<ResultListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of errors that the operation can return.</p>
     */
    inline const Aws::Vector<BatchItemError>& GetErrorList() const { return m_errorList; }
    template<typename ErrorListT = Aws::Vector<BatchItemError>>
    void SetErrorList(ErrorListT&& value) { m_errorListHasBeenSet = true; m_errorList = std::forward<ErrorListT>(value); }
    template<typename ErrorListT = Aws::Vector<BatchItemError>>
    BatchDetectTargetedSentimentResult& WithErrorList(ErrorListT&& value) { SetErrorList(std::forward<ErrorListT>(value)); return *this;}
    template<typename ErrorListT = BatchItemError>
    BatchDetectTargetedSentimentResult& AddErrorList(ErrorListT&& value) { m_errorListHasBeenSet = true; m_errorList.emplace_back(std::forward<ErrorListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDetectTargetedSentimentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDetectTargetedSentimentItemResult> m_resultList;
    bool m_resultListHasBeenSet = false;

    Aws::Vector<BatchItemError> m_errorList;
    bool m_errorListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
