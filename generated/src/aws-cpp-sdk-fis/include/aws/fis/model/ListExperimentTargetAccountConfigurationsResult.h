/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/ExperimentTargetAccountConfigurationSummary.h>
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
namespace FIS
{
namespace Model
{
  class ListExperimentTargetAccountConfigurationsResult
  {
  public:
    AWS_FIS_API ListExperimentTargetAccountConfigurationsResult();
    AWS_FIS_API ListExperimentTargetAccountConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API ListExperimentTargetAccountConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The target account configurations.</p>
     */
    inline const Aws::Vector<ExperimentTargetAccountConfigurationSummary>& GetTargetAccountConfigurations() const{ return m_targetAccountConfigurations; }

    /**
     * <p>The target account configurations.</p>
     */
    inline void SetTargetAccountConfigurations(const Aws::Vector<ExperimentTargetAccountConfigurationSummary>& value) { m_targetAccountConfigurations = value; }

    /**
     * <p>The target account configurations.</p>
     */
    inline void SetTargetAccountConfigurations(Aws::Vector<ExperimentTargetAccountConfigurationSummary>&& value) { m_targetAccountConfigurations = std::move(value); }

    /**
     * <p>The target account configurations.</p>
     */
    inline ListExperimentTargetAccountConfigurationsResult& WithTargetAccountConfigurations(const Aws::Vector<ExperimentTargetAccountConfigurationSummary>& value) { SetTargetAccountConfigurations(value); return *this;}

    /**
     * <p>The target account configurations.</p>
     */
    inline ListExperimentTargetAccountConfigurationsResult& WithTargetAccountConfigurations(Aws::Vector<ExperimentTargetAccountConfigurationSummary>&& value) { SetTargetAccountConfigurations(std::move(value)); return *this;}

    /**
     * <p>The target account configurations.</p>
     */
    inline ListExperimentTargetAccountConfigurationsResult& AddTargetAccountConfigurations(const ExperimentTargetAccountConfigurationSummary& value) { m_targetAccountConfigurations.push_back(value); return *this; }

    /**
     * <p>The target account configurations.</p>
     */
    inline ListExperimentTargetAccountConfigurationsResult& AddTargetAccountConfigurations(ExperimentTargetAccountConfigurationSummary&& value) { m_targetAccountConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListExperimentTargetAccountConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListExperimentTargetAccountConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListExperimentTargetAccountConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListExperimentTargetAccountConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListExperimentTargetAccountConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListExperimentTargetAccountConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ExperimentTargetAccountConfigurationSummary> m_targetAccountConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
