/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/BatchPrediction.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetBatchPredictionJobsResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetBatchPredictionJobsResult();
    AWS_FRAUDDETECTOR_API GetBatchPredictionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetBatchPredictionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array containing the details of each batch prediction job.</p>
     */
    inline const Aws::Vector<BatchPrediction>& GetBatchPredictions() const{ return m_batchPredictions; }

    /**
     * <p>An array containing the details of each batch prediction job.</p>
     */
    inline void SetBatchPredictions(const Aws::Vector<BatchPrediction>& value) { m_batchPredictions = value; }

    /**
     * <p>An array containing the details of each batch prediction job.</p>
     */
    inline void SetBatchPredictions(Aws::Vector<BatchPrediction>&& value) { m_batchPredictions = std::move(value); }

    /**
     * <p>An array containing the details of each batch prediction job.</p>
     */
    inline GetBatchPredictionJobsResult& WithBatchPredictions(const Aws::Vector<BatchPrediction>& value) { SetBatchPredictions(value); return *this;}

    /**
     * <p>An array containing the details of each batch prediction job.</p>
     */
    inline GetBatchPredictionJobsResult& WithBatchPredictions(Aws::Vector<BatchPrediction>&& value) { SetBatchPredictions(std::move(value)); return *this;}

    /**
     * <p>An array containing the details of each batch prediction job.</p>
     */
    inline GetBatchPredictionJobsResult& AddBatchPredictions(const BatchPrediction& value) { m_batchPredictions.push_back(value); return *this; }

    /**
     * <p>An array containing the details of each batch prediction job.</p>
     */
    inline GetBatchPredictionJobsResult& AddBatchPredictions(BatchPrediction&& value) { m_batchPredictions.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token for the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token for the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token for the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token for the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token for the subsequent request.</p>
     */
    inline GetBatchPredictionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token for the subsequent request.</p>
     */
    inline GetBatchPredictionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token for the subsequent request.</p>
     */
    inline GetBatchPredictionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BatchPrediction> m_batchPredictions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
