/*
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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AlgorithmSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API ListAlgorithmsResult
  {
  public:
    ListAlgorithmsResult();
    ListAlgorithmsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAlgorithmsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>&gt;An array of <code>AlgorithmSummary</code> objects, each of which lists an
     * algorithm.</p>
     */
    inline const Aws::Vector<AlgorithmSummary>& GetAlgorithmSummaryList() const{ return m_algorithmSummaryList; }

    /**
     * <p>&gt;An array of <code>AlgorithmSummary</code> objects, each of which lists an
     * algorithm.</p>
     */
    inline void SetAlgorithmSummaryList(const Aws::Vector<AlgorithmSummary>& value) { m_algorithmSummaryList = value; }

    /**
     * <p>&gt;An array of <code>AlgorithmSummary</code> objects, each of which lists an
     * algorithm.</p>
     */
    inline void SetAlgorithmSummaryList(Aws::Vector<AlgorithmSummary>&& value) { m_algorithmSummaryList = std::move(value); }

    /**
     * <p>&gt;An array of <code>AlgorithmSummary</code> objects, each of which lists an
     * algorithm.</p>
     */
    inline ListAlgorithmsResult& WithAlgorithmSummaryList(const Aws::Vector<AlgorithmSummary>& value) { SetAlgorithmSummaryList(value); return *this;}

    /**
     * <p>&gt;An array of <code>AlgorithmSummary</code> objects, each of which lists an
     * algorithm.</p>
     */
    inline ListAlgorithmsResult& WithAlgorithmSummaryList(Aws::Vector<AlgorithmSummary>&& value) { SetAlgorithmSummaryList(std::move(value)); return *this;}

    /**
     * <p>&gt;An array of <code>AlgorithmSummary</code> objects, each of which lists an
     * algorithm.</p>
     */
    inline ListAlgorithmsResult& AddAlgorithmSummaryList(const AlgorithmSummary& value) { m_algorithmSummaryList.push_back(value); return *this; }

    /**
     * <p>&gt;An array of <code>AlgorithmSummary</code> objects, each of which lists an
     * algorithm.</p>
     */
    inline ListAlgorithmsResult& AddAlgorithmSummaryList(AlgorithmSummary&& value) { m_algorithmSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of algorithms, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of algorithms, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of algorithms, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of algorithms, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of algorithms, use it in the subsequent request.</p>
     */
    inline ListAlgorithmsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of algorithms, use it in the subsequent request.</p>
     */
    inline ListAlgorithmsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of algorithms, use it in the subsequent request.</p>
     */
    inline ListAlgorithmsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AlgorithmSummary> m_algorithmSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
