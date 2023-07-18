/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/ExperimentSummary.h>
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
  class AWS_FIS_API ListExperimentsResult
  {
  public:
    ListExperimentsResult();
    ListExperimentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListExperimentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The experiments.</p>
     */
    inline const Aws::Vector<ExperimentSummary>& GetExperiments() const{ return m_experiments; }

    /**
     * <p>The experiments.</p>
     */
    inline void SetExperiments(const Aws::Vector<ExperimentSummary>& value) { m_experiments = value; }

    /**
     * <p>The experiments.</p>
     */
    inline void SetExperiments(Aws::Vector<ExperimentSummary>&& value) { m_experiments = std::move(value); }

    /**
     * <p>The experiments.</p>
     */
    inline ListExperimentsResult& WithExperiments(const Aws::Vector<ExperimentSummary>& value) { SetExperiments(value); return *this;}

    /**
     * <p>The experiments.</p>
     */
    inline ListExperimentsResult& WithExperiments(Aws::Vector<ExperimentSummary>&& value) { SetExperiments(std::move(value)); return *this;}

    /**
     * <p>The experiments.</p>
     */
    inline ListExperimentsResult& AddExperiments(const ExperimentSummary& value) { m_experiments.push_back(value); return *this; }

    /**
     * <p>The experiments.</p>
     */
    inline ListExperimentsResult& AddExperiments(ExperimentSummary&& value) { m_experiments.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListExperimentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListExperimentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListExperimentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ExperimentSummary> m_experiments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
