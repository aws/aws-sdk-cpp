/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguruprofiler/model/ProfilingGroupDescription.h>
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
namespace CodeGuruProfiler
{
namespace Model
{
  /**
   * <p>The structure representing the listProfilingGroupsResponse.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfilingGroupsResponse">AWS
   * API Reference</a></p>
   */
  class ListProfilingGroupsResult
  {
  public:
    AWS_CODEGURUPROFILER_API ListProfilingGroupsResult() = default;
    AWS_CODEGURUPROFILER_API ListProfilingGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API ListProfilingGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfilingGroups</code> request. When the results of a
     * <code>ListProfilingGroups</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProfilingGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A returned list of profiling group names. A list of the names is returned
     * only if <code>includeDescription</code> is <code>false</code>, otherwise a list
     * of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProfilingGroupNames() const { return m_profilingGroupNames; }
    template<typename ProfilingGroupNamesT = Aws::Vector<Aws::String>>
    void SetProfilingGroupNames(ProfilingGroupNamesT&& value) { m_profilingGroupNamesHasBeenSet = true; m_profilingGroupNames = std::forward<ProfilingGroupNamesT>(value); }
    template<typename ProfilingGroupNamesT = Aws::Vector<Aws::String>>
    ListProfilingGroupsResult& WithProfilingGroupNames(ProfilingGroupNamesT&& value) { SetProfilingGroupNames(std::forward<ProfilingGroupNamesT>(value)); return *this;}
    template<typename ProfilingGroupNamesT = Aws::String>
    ListProfilingGroupsResult& AddProfilingGroupNames(ProfilingGroupNamesT&& value) { m_profilingGroupNamesHasBeenSet = true; m_profilingGroupNames.emplace_back(std::forward<ProfilingGroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A returned list <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects. A list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned only if
     * <code>includeDescription</code> is <code>true</code>, otherwise a list of
     * profiling group names is returned. </p>
     */
    inline const Aws::Vector<ProfilingGroupDescription>& GetProfilingGroups() const { return m_profilingGroups; }
    template<typename ProfilingGroupsT = Aws::Vector<ProfilingGroupDescription>>
    void SetProfilingGroups(ProfilingGroupsT&& value) { m_profilingGroupsHasBeenSet = true; m_profilingGroups = std::forward<ProfilingGroupsT>(value); }
    template<typename ProfilingGroupsT = Aws::Vector<ProfilingGroupDescription>>
    ListProfilingGroupsResult& WithProfilingGroups(ProfilingGroupsT&& value) { SetProfilingGroups(std::forward<ProfilingGroupsT>(value)); return *this;}
    template<typename ProfilingGroupsT = ProfilingGroupDescription>
    ListProfilingGroupsResult& AddProfilingGroups(ProfilingGroupsT&& value) { m_profilingGroupsHasBeenSet = true; m_profilingGroups.emplace_back(std::forward<ProfilingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProfilingGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_profilingGroupNames;
    bool m_profilingGroupNamesHasBeenSet = false;

    Aws::Vector<ProfilingGroupDescription> m_profilingGroups;
    bool m_profilingGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
