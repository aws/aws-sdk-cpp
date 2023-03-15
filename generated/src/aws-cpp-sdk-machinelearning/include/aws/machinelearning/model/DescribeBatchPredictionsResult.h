﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/BatchPrediction.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>DescribeBatchPredictions</code> operation.
   * The content is essentially a list of
   * <code>BatchPrediction</code>s.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DescribeBatchPredictionsOutput">AWS
   * API Reference</a></p>
   */
  class DescribeBatchPredictionsResult
  {
  public:
    AWS_MACHINELEARNING_API DescribeBatchPredictionsResult();
    AWS_MACHINELEARNING_API DescribeBatchPredictionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API DescribeBatchPredictionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>BatchPrediction</code> objects that meet the search criteria.
     * </p>
     */
    inline const Aws::Vector<BatchPrediction>& GetResults() const{ return m_results; }

    /**
     * <p>A list of <code>BatchPrediction</code> objects that meet the search criteria.
     * </p>
     */
    inline void SetResults(const Aws::Vector<BatchPrediction>& value) { m_results = value; }

    /**
     * <p>A list of <code>BatchPrediction</code> objects that meet the search criteria.
     * </p>
     */
    inline void SetResults(Aws::Vector<BatchPrediction>&& value) { m_results = std::move(value); }

    /**
     * <p>A list of <code>BatchPrediction</code> objects that meet the search criteria.
     * </p>
     */
    inline DescribeBatchPredictionsResult& WithResults(const Aws::Vector<BatchPrediction>& value) { SetResults(value); return *this;}

    /**
     * <p>A list of <code>BatchPrediction</code> objects that meet the search criteria.
     * </p>
     */
    inline DescribeBatchPredictionsResult& WithResults(Aws::Vector<BatchPrediction>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A list of <code>BatchPrediction</code> objects that meet the search criteria.
     * </p>
     */
    inline DescribeBatchPredictionsResult& AddResults(const BatchPrediction& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A list of <code>BatchPrediction</code> objects that meet the search criteria.
     * </p>
     */
    inline DescribeBatchPredictionsResult& AddResults(BatchPrediction&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline DescribeBatchPredictionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline DescribeBatchPredictionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline DescribeBatchPredictionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeBatchPredictionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeBatchPredictionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeBatchPredictionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchPrediction> m_results;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
