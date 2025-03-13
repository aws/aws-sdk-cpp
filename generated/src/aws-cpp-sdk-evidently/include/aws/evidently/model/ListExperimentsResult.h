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
    AWS_CLOUDWATCHEVIDENTLY_API ListExperimentsResult() = default;
    AWS_CLOUDWATCHEVIDENTLY_API ListExperimentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API ListExperimentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures that contain the configuration details of the
     * experiments in the specified project.</p>
     */
    inline const Aws::Vector<Experiment>& GetExperiments() const { return m_experiments; }
    template<typename ExperimentsT = Aws::Vector<Experiment>>
    void SetExperiments(ExperimentsT&& value) { m_experimentsHasBeenSet = true; m_experiments = std::forward<ExperimentsT>(value); }
    template<typename ExperimentsT = Aws::Vector<Experiment>>
    ListExperimentsResult& WithExperiments(ExperimentsT&& value) { SetExperiments(std::forward<ExperimentsT>(value)); return *this;}
    template<typename ExperimentsT = Experiment>
    ListExperimentsResult& AddExperiments(ExperimentsT&& value) { m_experimentsHasBeenSet = true; m_experiments.emplace_back(std::forward<ExperimentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use in a subsequent <code>ListExperiments</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExperimentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListExperimentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Experiment> m_experiments;
    bool m_experimentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
