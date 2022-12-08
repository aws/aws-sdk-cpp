/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/Experiment.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class ListExperimentsResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ListExperimentsResult();
    AWS_CLOUDWATCHEVIDENTLY_API ListExperimentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API ListExperimentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures that contain the configuration details of the
     * experiments in the specified project.</p>
     */
    inline const Aws::Vector<Experiment>& GetExperiments() const{ return m_experiments; }

    /**
     * <p>An array of structures that contain the configuration details of the
     * experiments in the specified project.</p>
     */
    inline void SetExperiments(const Aws::Vector<Experiment>& value) { m_experiments = value; }

    /**
     * <p>An array of structures that contain the configuration details of the
     * experiments in the specified project.</p>
     */
    inline void SetExperiments(Aws::Vector<Experiment>&& value) { m_experiments = std::move(value); }

    /**
     * <p>An array of structures that contain the configuration details of the
     * experiments in the specified project.</p>
     */
    inline ListExperimentsResult& WithExperiments(const Aws::Vector<Experiment>& value) { SetExperiments(value); return *this;}

    /**
     * <p>An array of structures that contain the configuration details of the
     * experiments in the specified project.</p>
     */
    inline ListExperimentsResult& WithExperiments(Aws::Vector<Experiment>&& value) { SetExperiments(std::move(value)); return *this;}

    /**
     * <p>An array of structures that contain the configuration details of the
     * experiments in the specified project.</p>
     */
    inline ListExperimentsResult& AddExperiments(const Experiment& value) { m_experiments.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain the configuration details of the
     * experiments in the specified project.</p>
     */
    inline ListExperimentsResult& AddExperiments(Experiment&& value) { m_experiments.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use in a subsequent <code>ListExperiments</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use in a subsequent <code>ListExperiments</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use in a subsequent <code>ListExperiments</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use in a subsequent <code>ListExperiments</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use in a subsequent <code>ListExperiments</code> operation to
     * return the next set of results.</p>
     */
    inline ListExperimentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use in a subsequent <code>ListExperiments</code> operation to
     * return the next set of results.</p>
     */
    inline ListExperimentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use in a subsequent <code>ListExperiments</code> operation to
     * return the next set of results.</p>
     */
    inline ListExperimentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Experiment> m_experiments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
