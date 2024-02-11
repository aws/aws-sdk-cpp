/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/TargetAccountConfigurationSummary.h>
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
  class ListTargetAccountConfigurationsResult
  {
  public:
    AWS_FIS_API ListTargetAccountConfigurationsResult();
    AWS_FIS_API ListTargetAccountConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API ListTargetAccountConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The target account configurations.</p>
     */
    inline const Aws::Vector<TargetAccountConfigurationSummary>& GetTargetAccountConfigurations() const{ return m_targetAccountConfigurations; }

    /**
     * <p>The target account configurations.</p>
     */
    inline void SetTargetAccountConfigurations(const Aws::Vector<TargetAccountConfigurationSummary>& value) { m_targetAccountConfigurations = value; }

    /**
     * <p>The target account configurations.</p>
     */
    inline void SetTargetAccountConfigurations(Aws::Vector<TargetAccountConfigurationSummary>&& value) { m_targetAccountConfigurations = std::move(value); }

    /**
     * <p>The target account configurations.</p>
     */
    inline ListTargetAccountConfigurationsResult& WithTargetAccountConfigurations(const Aws::Vector<TargetAccountConfigurationSummary>& value) { SetTargetAccountConfigurations(value); return *this;}

    /**
     * <p>The target account configurations.</p>
     */
    inline ListTargetAccountConfigurationsResult& WithTargetAccountConfigurations(Aws::Vector<TargetAccountConfigurationSummary>&& value) { SetTargetAccountConfigurations(std::move(value)); return *this;}

    /**
     * <p>The target account configurations.</p>
     */
    inline ListTargetAccountConfigurationsResult& AddTargetAccountConfigurations(const TargetAccountConfigurationSummary& value) { m_targetAccountConfigurations.push_back(value); return *this; }

    /**
     * <p>The target account configurations.</p>
     */
    inline ListTargetAccountConfigurationsResult& AddTargetAccountConfigurations(TargetAccountConfigurationSummary&& value) { m_targetAccountConfigurations.push_back(std::move(value)); return *this; }


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
    inline ListTargetAccountConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListTargetAccountConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListTargetAccountConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTargetAccountConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTargetAccountConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTargetAccountConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TargetAccountConfigurationSummary> m_targetAccountConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
