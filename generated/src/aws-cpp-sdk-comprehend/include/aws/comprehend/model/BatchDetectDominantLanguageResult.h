﻿/**
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
    AWS_COMPREHEND_API BatchDetectDominantLanguageResult();
    AWS_COMPREHEND_API BatchDetectDominantLanguageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API BatchDetectDominantLanguageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline const Aws::Vector<BatchDetectDominantLanguageItemResult>& GetResultList() const{ return m_resultList; }
    inline void SetResultList(const Aws::Vector<BatchDetectDominantLanguageItemResult>& value) { m_resultList = value; }
    inline void SetResultList(Aws::Vector<BatchDetectDominantLanguageItemResult>&& value) { m_resultList = std::move(value); }
    inline BatchDetectDominantLanguageResult& WithResultList(const Aws::Vector<BatchDetectDominantLanguageItemResult>& value) { SetResultList(value); return *this;}
    inline BatchDetectDominantLanguageResult& WithResultList(Aws::Vector<BatchDetectDominantLanguageItemResult>&& value) { SetResultList(std::move(value)); return *this;}
    inline BatchDetectDominantLanguageResult& AddResultList(const BatchDetectDominantLanguageItemResult& value) { m_resultList.push_back(value); return *this; }
    inline BatchDetectDominantLanguageResult& AddResultList(BatchDetectDominantLanguageItemResult&& value) { m_resultList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list containing one object for each document that contained an error. The
     * results are sorted in ascending order by the <code>Index</code> field and match
     * the order of the documents in the input list. If there are no errors in the
     * batch, the <code>ErrorList</code> is empty.</p>
     */
    inline const Aws::Vector<BatchItemError>& GetErrorList() const{ return m_errorList; }
    inline void SetErrorList(const Aws::Vector<BatchItemError>& value) { m_errorList = value; }
    inline void SetErrorList(Aws::Vector<BatchItemError>&& value) { m_errorList = std::move(value); }
    inline BatchDetectDominantLanguageResult& WithErrorList(const Aws::Vector<BatchItemError>& value) { SetErrorList(value); return *this;}
    inline BatchDetectDominantLanguageResult& WithErrorList(Aws::Vector<BatchItemError>&& value) { SetErrorList(std::move(value)); return *this;}
    inline BatchDetectDominantLanguageResult& AddErrorList(const BatchItemError& value) { m_errorList.push_back(value); return *this; }
    inline BatchDetectDominantLanguageResult& AddErrorList(BatchItemError&& value) { m_errorList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDetectDominantLanguageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDetectDominantLanguageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDetectDominantLanguageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDetectDominantLanguageItemResult> m_resultList;

    Aws::Vector<BatchItemError> m_errorList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
