/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_COMPREHEND_API BatchDetectTargetedSentimentResult();
    AWS_COMPREHEND_API BatchDetectTargetedSentimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API BatchDetectTargetedSentimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline const Aws::Vector<BatchDetectTargetedSentimentItemResult>& GetResultList() const{ return m_resultList; }

    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline void SetResultList(const Aws::Vector<BatchDetectTargetedSentimentItemResult>& value) { m_resultList = value; }

    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline void SetResultList(Aws::Vector<BatchDetectTargetedSentimentItemResult>&& value) { m_resultList = std::move(value); }

    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline BatchDetectTargetedSentimentResult& WithResultList(const Aws::Vector<BatchDetectTargetedSentimentItemResult>& value) { SetResultList(value); return *this;}

    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline BatchDetectTargetedSentimentResult& WithResultList(Aws::Vector<BatchDetectTargetedSentimentItemResult>&& value) { SetResultList(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline BatchDetectTargetedSentimentResult& AddResultList(const BatchDetectTargetedSentimentItemResult& value) { m_resultList.push_back(value); return *this; }

    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline BatchDetectTargetedSentimentResult& AddResultList(BatchDetectTargetedSentimentItemResult&& value) { m_resultList.push_back(std::move(value)); return *this; }


    /**
     * <p>List of errors that the operation can return.</p>
     */
    inline const Aws::Vector<BatchItemError>& GetErrorList() const{ return m_errorList; }

    /**
     * <p>List of errors that the operation can return.</p>
     */
    inline void SetErrorList(const Aws::Vector<BatchItemError>& value) { m_errorList = value; }

    /**
     * <p>List of errors that the operation can return.</p>
     */
    inline void SetErrorList(Aws::Vector<BatchItemError>&& value) { m_errorList = std::move(value); }

    /**
     * <p>List of errors that the operation can return.</p>
     */
    inline BatchDetectTargetedSentimentResult& WithErrorList(const Aws::Vector<BatchItemError>& value) { SetErrorList(value); return *this;}

    /**
     * <p>List of errors that the operation can return.</p>
     */
    inline BatchDetectTargetedSentimentResult& WithErrorList(Aws::Vector<BatchItemError>&& value) { SetErrorList(std::move(value)); return *this;}

    /**
     * <p>List of errors that the operation can return.</p>
     */
    inline BatchDetectTargetedSentimentResult& AddErrorList(const BatchItemError& value) { m_errorList.push_back(value); return *this; }

    /**
     * <p>List of errors that the operation can return.</p>
     */
    inline BatchDetectTargetedSentimentResult& AddErrorList(BatchItemError&& value) { m_errorList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchDetectTargetedSentimentItemResult> m_resultList;

    Aws::Vector<BatchItemError> m_errorList;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
