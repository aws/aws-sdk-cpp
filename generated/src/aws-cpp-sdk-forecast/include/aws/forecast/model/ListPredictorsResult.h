/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/PredictorSummary.h>
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
namespace ForecastService
{
namespace Model
{
  class ListPredictorsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListPredictorsResult();
    AWS_FORECASTSERVICE_API ListPredictorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListPredictorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that summarize each predictor's properties.</p>
     */
    inline const Aws::Vector<PredictorSummary>& GetPredictors() const{ return m_predictors; }

    /**
     * <p>An array of objects that summarize each predictor's properties.</p>
     */
    inline void SetPredictors(const Aws::Vector<PredictorSummary>& value) { m_predictors = value; }

    /**
     * <p>An array of objects that summarize each predictor's properties.</p>
     */
    inline void SetPredictors(Aws::Vector<PredictorSummary>&& value) { m_predictors = std::move(value); }

    /**
     * <p>An array of objects that summarize each predictor's properties.</p>
     */
    inline ListPredictorsResult& WithPredictors(const Aws::Vector<PredictorSummary>& value) { SetPredictors(value); return *this;}

    /**
     * <p>An array of objects that summarize each predictor's properties.</p>
     */
    inline ListPredictorsResult& WithPredictors(Aws::Vector<PredictorSummary>&& value) { SetPredictors(std::move(value)); return *this;}

    /**
     * <p>An array of objects that summarize each predictor's properties.</p>
     */
    inline ListPredictorsResult& AddPredictors(const PredictorSummary& value) { m_predictors.push_back(value); return *this; }

    /**
     * <p>An array of objects that summarize each predictor's properties.</p>
     */
    inline ListPredictorsResult& AddPredictors(PredictorSummary&& value) { m_predictors.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListPredictorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListPredictorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListPredictorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PredictorSummary> m_predictors;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
