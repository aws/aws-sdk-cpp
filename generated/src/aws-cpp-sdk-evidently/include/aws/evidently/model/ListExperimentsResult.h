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


    ///@{
    /**
     * <p>An array of structures that contain the configuration details of the
     * experiments in the specified project.</p>
     */
    inline const Aws::Vector<Experiment>& GetExperiments() const{ return m_experiments; }
    inline void SetExperiments(const Aws::Vector<Experiment>& value) { m_experiments = value; }
    inline void SetExperiments(Aws::Vector<Experiment>&& value) { m_experiments = std::move(value); }
    inline ListExperimentsResult& WithExperiments(const Aws::Vector<Experiment>& value) { SetExperiments(value); return *this;}
    inline ListExperimentsResult& WithExperiments(Aws::Vector<Experiment>&& value) { SetExperiments(std::move(value)); return *this;}
    inline ListExperimentsResult& AddExperiments(const Experiment& value) { m_experiments.push_back(value); return *this; }
    inline ListExperimentsResult& AddExperiments(Experiment&& value) { m_experiments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use in a subsequent <code>ListExperiments</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListExperimentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListExperimentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListExperimentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListExperimentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListExperimentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListExperimentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Experiment> m_experiments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
