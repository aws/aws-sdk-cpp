﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/BatchDetectEntitiesItemResult.h>
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
  class AWS_COMPREHEND_API BatchDetectEntitiesResult
  {
  public:
    BatchDetectEntitiesResult();
    BatchDetectEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchDetectEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline const Aws::Vector<BatchDetectEntitiesItemResult>& GetResultList() const{ return m_resultList; }

    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline void SetResultList(const Aws::Vector<BatchDetectEntitiesItemResult>& value) { m_resultList = value; }

    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline void SetResultList(Aws::Vector<BatchDetectEntitiesItemResult>&& value) { m_resultList = std::move(value); }

    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline BatchDetectEntitiesResult& WithResultList(const Aws::Vector<BatchDetectEntitiesItemResult>& value) { SetResultList(value); return *this;}

    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline BatchDetectEntitiesResult& WithResultList(Aws::Vector<BatchDetectEntitiesItemResult>&& value) { SetResultList(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline BatchDetectEntitiesResult& AddResultList(const BatchDetectEntitiesItemResult& value) { m_resultList.push_back(value); return *this; }

    /**
     * <p>A list of objects containing the results of the operation. The results are
     * sorted in ascending order by the <code>Index</code> field and match the order of
     * the documents in the input list. If all of the documents contain an error, the
     * <code>ResultList</code> is empty.</p>
     */
    inline BatchDetectEntitiesResult& AddResultList(BatchDetectEntitiesItemResult&& value) { m_resultList.push_back(std::move(value)); return *this; }


    /**
     * <p>A list containing one object for each document that contained an error. The
     * results are sorted in ascending order by the <code>Index</code> field and match
     * the order of the documents in the input list. If there are no errors in the
     * batch, the <code>ErrorList</code> is empty.</p>
     */
    inline const Aws::Vector<BatchItemError>& GetErrorList() const{ return m_errorList; }

    /**
     * <p>A list containing one object for each document that contained an error. The
     * results are sorted in ascending order by the <code>Index</code> field and match
     * the order of the documents in the input list. If there are no errors in the
     * batch, the <code>ErrorList</code> is empty.</p>
     */
    inline void SetErrorList(const Aws::Vector<BatchItemError>& value) { m_errorList = value; }

    /**
     * <p>A list containing one object for each document that contained an error. The
     * results are sorted in ascending order by the <code>Index</code> field and match
     * the order of the documents in the input list. If there are no errors in the
     * batch, the <code>ErrorList</code> is empty.</p>
     */
    inline void SetErrorList(Aws::Vector<BatchItemError>&& value) { m_errorList = std::move(value); }

    /**
     * <p>A list containing one object for each document that contained an error. The
     * results are sorted in ascending order by the <code>Index</code> field and match
     * the order of the documents in the input list. If there are no errors in the
     * batch, the <code>ErrorList</code> is empty.</p>
     */
    inline BatchDetectEntitiesResult& WithErrorList(const Aws::Vector<BatchItemError>& value) { SetErrorList(value); return *this;}

    /**
     * <p>A list containing one object for each document that contained an error. The
     * results are sorted in ascending order by the <code>Index</code> field and match
     * the order of the documents in the input list. If there are no errors in the
     * batch, the <code>ErrorList</code> is empty.</p>
     */
    inline BatchDetectEntitiesResult& WithErrorList(Aws::Vector<BatchItemError>&& value) { SetErrorList(std::move(value)); return *this;}

    /**
     * <p>A list containing one object for each document that contained an error. The
     * results are sorted in ascending order by the <code>Index</code> field and match
     * the order of the documents in the input list. If there are no errors in the
     * batch, the <code>ErrorList</code> is empty.</p>
     */
    inline BatchDetectEntitiesResult& AddErrorList(const BatchItemError& value) { m_errorList.push_back(value); return *this; }

    /**
     * <p>A list containing one object for each document that contained an error. The
     * results are sorted in ascending order by the <code>Index</code> field and match
     * the order of the documents in the input list. If there are no errors in the
     * batch, the <code>ErrorList</code> is empty.</p>
     */
    inline BatchDetectEntitiesResult& AddErrorList(BatchItemError&& value) { m_errorList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchDetectEntitiesItemResult> m_resultList;

    Aws::Vector<BatchItemError> m_errorList;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
