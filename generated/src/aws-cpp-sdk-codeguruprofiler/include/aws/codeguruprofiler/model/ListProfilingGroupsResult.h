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
    AWS_CODEGURUPROFILER_API ListProfilingGroupsResult();
    AWS_CODEGURUPROFILER_API ListProfilingGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API ListProfilingGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfilingGroups</code> request. When the results of a
     * <code>ListProfilingGroups</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfilingGroups</code> request. When the results of a
     * <code>ListProfilingGroups</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfilingGroups</code> request. When the results of a
     * <code>ListProfilingGroups</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfilingGroups</code> request. When the results of a
     * <code>ListProfilingGroups</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfilingGroups</code> request. When the results of a
     * <code>ListProfilingGroups</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListProfilingGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfilingGroups</code> request. When the results of a
     * <code>ListProfilingGroups</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListProfilingGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfilingGroups</code> request. When the results of a
     * <code>ListProfilingGroups</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListProfilingGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> A returned list of profiling group names. A list of the names is returned
     * only if <code>includeDescription</code> is <code>false</code>, otherwise a list
     * of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProfilingGroupNames() const{ return m_profilingGroupNames; }

    /**
     * <p> A returned list of profiling group names. A list of the names is returned
     * only if <code>includeDescription</code> is <code>false</code>, otherwise a list
     * of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned. </p>
     */
    inline void SetProfilingGroupNames(const Aws::Vector<Aws::String>& value) { m_profilingGroupNames = value; }

    /**
     * <p> A returned list of profiling group names. A list of the names is returned
     * only if <code>includeDescription</code> is <code>false</code>, otherwise a list
     * of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned. </p>
     */
    inline void SetProfilingGroupNames(Aws::Vector<Aws::String>&& value) { m_profilingGroupNames = std::move(value); }

    /**
     * <p> A returned list of profiling group names. A list of the names is returned
     * only if <code>includeDescription</code> is <code>false</code>, otherwise a list
     * of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned. </p>
     */
    inline ListProfilingGroupsResult& WithProfilingGroupNames(const Aws::Vector<Aws::String>& value) { SetProfilingGroupNames(value); return *this;}

    /**
     * <p> A returned list of profiling group names. A list of the names is returned
     * only if <code>includeDescription</code> is <code>false</code>, otherwise a list
     * of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned. </p>
     */
    inline ListProfilingGroupsResult& WithProfilingGroupNames(Aws::Vector<Aws::String>&& value) { SetProfilingGroupNames(std::move(value)); return *this;}

    /**
     * <p> A returned list of profiling group names. A list of the names is returned
     * only if <code>includeDescription</code> is <code>false</code>, otherwise a list
     * of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned. </p>
     */
    inline ListProfilingGroupsResult& AddProfilingGroupNames(const Aws::String& value) { m_profilingGroupNames.push_back(value); return *this; }

    /**
     * <p> A returned list of profiling group names. A list of the names is returned
     * only if <code>includeDescription</code> is <code>false</code>, otherwise a list
     * of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned. </p>
     */
    inline ListProfilingGroupsResult& AddProfilingGroupNames(Aws::String&& value) { m_profilingGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p> A returned list of profiling group names. A list of the names is returned
     * only if <code>includeDescription</code> is <code>false</code>, otherwise a list
     * of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned. </p>
     */
    inline ListProfilingGroupsResult& AddProfilingGroupNames(const char* value) { m_profilingGroupNames.push_back(value); return *this; }


    /**
     * <p> A returned list <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects. A list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned only if
     * <code>includeDescription</code> is <code>true</code>, otherwise a list of
     * profiling group names is returned. </p>
     */
    inline const Aws::Vector<ProfilingGroupDescription>& GetProfilingGroups() const{ return m_profilingGroups; }

    /**
     * <p> A returned list <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects. A list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned only if
     * <code>includeDescription</code> is <code>true</code>, otherwise a list of
     * profiling group names is returned. </p>
     */
    inline void SetProfilingGroups(const Aws::Vector<ProfilingGroupDescription>& value) { m_profilingGroups = value; }

    /**
     * <p> A returned list <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects. A list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned only if
     * <code>includeDescription</code> is <code>true</code>, otherwise a list of
     * profiling group names is returned. </p>
     */
    inline void SetProfilingGroups(Aws::Vector<ProfilingGroupDescription>&& value) { m_profilingGroups = std::move(value); }

    /**
     * <p> A returned list <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects. A list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned only if
     * <code>includeDescription</code> is <code>true</code>, otherwise a list of
     * profiling group names is returned. </p>
     */
    inline ListProfilingGroupsResult& WithProfilingGroups(const Aws::Vector<ProfilingGroupDescription>& value) { SetProfilingGroups(value); return *this;}

    /**
     * <p> A returned list <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects. A list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned only if
     * <code>includeDescription</code> is <code>true</code>, otherwise a list of
     * profiling group names is returned. </p>
     */
    inline ListProfilingGroupsResult& WithProfilingGroups(Aws::Vector<ProfilingGroupDescription>&& value) { SetProfilingGroups(std::move(value)); return *this;}

    /**
     * <p> A returned list <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects. A list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned only if
     * <code>includeDescription</code> is <code>true</code>, otherwise a list of
     * profiling group names is returned. </p>
     */
    inline ListProfilingGroupsResult& AddProfilingGroups(const ProfilingGroupDescription& value) { m_profilingGroups.push_back(value); return *this; }

    /**
     * <p> A returned list <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects. A list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects is returned only if
     * <code>includeDescription</code> is <code>true</code>, otherwise a list of
     * profiling group names is returned. </p>
     */
    inline ListProfilingGroupsResult& AddProfilingGroups(ProfilingGroupDescription&& value) { m_profilingGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_profilingGroupNames;

    Aws::Vector<ProfilingGroupDescription> m_profilingGroups;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
