/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/ObservabilityConfigurationSummary.h>
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
namespace AppRunner
{
namespace Model
{
  class ListObservabilityConfigurationsResult
  {
  public:
    AWS_APPRUNNER_API ListObservabilityConfigurationsResult();
    AWS_APPRUNNER_API ListObservabilityConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListObservabilityConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of summary information records for observability configurations. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline const Aws::Vector<ObservabilityConfigurationSummary>& GetObservabilityConfigurationSummaryList() const{ return m_observabilityConfigurationSummaryList; }

    /**
     * <p>A list of summary information records for observability configurations. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline void SetObservabilityConfigurationSummaryList(const Aws::Vector<ObservabilityConfigurationSummary>& value) { m_observabilityConfigurationSummaryList = value; }

    /**
     * <p>A list of summary information records for observability configurations. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline void SetObservabilityConfigurationSummaryList(Aws::Vector<ObservabilityConfigurationSummary>&& value) { m_observabilityConfigurationSummaryList = std::move(value); }

    /**
     * <p>A list of summary information records for observability configurations. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline ListObservabilityConfigurationsResult& WithObservabilityConfigurationSummaryList(const Aws::Vector<ObservabilityConfigurationSummary>& value) { SetObservabilityConfigurationSummaryList(value); return *this;}

    /**
     * <p>A list of summary information records for observability configurations. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline ListObservabilityConfigurationsResult& WithObservabilityConfigurationSummaryList(Aws::Vector<ObservabilityConfigurationSummary>&& value) { SetObservabilityConfigurationSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of summary information records for observability configurations. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline ListObservabilityConfigurationsResult& AddObservabilityConfigurationSummaryList(const ObservabilityConfigurationSummary& value) { m_observabilityConfigurationSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of summary information records for observability configurations. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline ListObservabilityConfigurationsResult& AddObservabilityConfigurationSummaryList(ObservabilityConfigurationSummary&& value) { m_observabilityConfigurationSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListObservabilityConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListObservabilityConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListObservabilityConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ObservabilityConfigurationSummary> m_observabilityConfigurationSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
