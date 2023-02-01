/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/ExplainabilityExportSummary.h>
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
  class ListExplainabilityExportsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListExplainabilityExportsResult();
    AWS_FORECASTSERVICE_API ListExplainabilityExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListExplainabilityExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that summarize the properties of each Explainability
     * export.</p>
     */
    inline const Aws::Vector<ExplainabilityExportSummary>& GetExplainabilityExports() const{ return m_explainabilityExports; }

    /**
     * <p>An array of objects that summarize the properties of each Explainability
     * export.</p>
     */
    inline void SetExplainabilityExports(const Aws::Vector<ExplainabilityExportSummary>& value) { m_explainabilityExports = value; }

    /**
     * <p>An array of objects that summarize the properties of each Explainability
     * export.</p>
     */
    inline void SetExplainabilityExports(Aws::Vector<ExplainabilityExportSummary>&& value) { m_explainabilityExports = std::move(value); }

    /**
     * <p>An array of objects that summarize the properties of each Explainability
     * export.</p>
     */
    inline ListExplainabilityExportsResult& WithExplainabilityExports(const Aws::Vector<ExplainabilityExportSummary>& value) { SetExplainabilityExports(value); return *this;}

    /**
     * <p>An array of objects that summarize the properties of each Explainability
     * export.</p>
     */
    inline ListExplainabilityExportsResult& WithExplainabilityExports(Aws::Vector<ExplainabilityExportSummary>&& value) { SetExplainabilityExports(std::move(value)); return *this;}

    /**
     * <p>An array of objects that summarize the properties of each Explainability
     * export.</p>
     */
    inline ListExplainabilityExportsResult& AddExplainabilityExports(const ExplainabilityExportSummary& value) { m_explainabilityExports.push_back(value); return *this; }

    /**
     * <p>An array of objects that summarize the properties of each Explainability
     * export.</p>
     */
    inline ListExplainabilityExportsResult& AddExplainabilityExports(ExplainabilityExportSummary&& value) { m_explainabilityExports.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns this token if the response is truncated. To retrieve the next set of
     * results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Returns this token if the response is truncated. To retrieve the next set of
     * results, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Returns this token if the response is truncated. To retrieve the next set of
     * results, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Returns this token if the response is truncated. To retrieve the next set of
     * results, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Returns this token if the response is truncated. To retrieve the next set of
     * results, use the token in the next request.</p>
     */
    inline ListExplainabilityExportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Returns this token if the response is truncated. To retrieve the next set of
     * results, use the token in the next request.</p>
     */
    inline ListExplainabilityExportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Returns this token if the response is truncated. To retrieve the next set of
     * results, use the token in the next request.</p>
     */
    inline ListExplainabilityExportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ExplainabilityExportSummary> m_explainabilityExports;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
