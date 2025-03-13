/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/BatchDetectDominantLanguageItemResult.h>
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
  class BatchDetectDominantLanguageResult
  {
  public:
    AWS_COMPREHEND_API BatchDetectDominantLanguageResult() = default;
    AWS_COMPREHEND_API BatchDetectDominantLanguageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API BatchDetectDominantLanguageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline const Aws::Vector<BatchDetectDominantLanguageItemResult>& GetResultList() const { return m_resultList; }
    template<typename ResultListT = Aws::Vector<BatchDetectDominantLanguageItemResult>>
    void SetResultList(ResultListT&& value) { m_resultListHasBeenSet = true; m_resultList = std::forward<ResultListT>(value); }
    template<typename ResultListT = Aws::Vector<BatchDetectDominantLanguageItemResult>>
    BatchDetectDominantLanguageResult& WithResultList(ResultListT&& value) { SetResultList(std::forward<ResultListT>(value)); return *this;}
    template<typename ResultListT = BatchDetectDominantLanguageItemResult>
    BatchDetectDominantLanguageResult& AddResultList(ResultListT&& value) { m_resultListHasBeenSet = true; m_resultList.emplace_back(std::forward<ResultListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list containing one object for each document that contained an error. The
     * results are sorted in ascending order by the <code>Index</code> field and match
     * the order of the documents in the input list. If there are no errors in the
     * batch, the <code>ErrorList</code> is empty.</p>
     */
    inline const Aws::Vector<BatchItemError>& GetErrorList() const { return m_errorList; }
    template<typename ErrorListT = Aws::Vector<BatchItemError>>
    void SetErrorList(ErrorListT&& value) { m_errorListHasBeenSet = true; m_errorList = std::forward<ErrorListT>(value); }
    template<typename ErrorListT = Aws::Vector<BatchItemError>>
    BatchDetectDominantLanguageResult& WithErrorList(ErrorListT&& value) { SetErrorList(std::forward<ErrorListT>(value)); return *this;}
    template<typename ErrorListT = BatchItemError>
    BatchDetectDominantLanguageResult& AddErrorList(ErrorListT&& value) { m_errorListHasBeenSet = true; m_errorList.emplace_back(std::forward<ErrorListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDetectDominantLanguageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDetectDominantLanguageItemResult> m_resultList;
    bool m_resultListHasBeenSet = false;

    Aws::Vector<BatchItemError> m_errorList;
    bool m_errorListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
