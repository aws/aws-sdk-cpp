/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the listProfilingGroupsRequest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfilingGroupsRequest">AWS
   * API Reference</a></p>
   */
  class ListProfilingGroupsRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API ListProfilingGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProfilingGroups"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUPROFILER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A <code>Boolean</code> value indicating whether to include a description. If
     * <code>true</code>, then a list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects that contain detailed
     * information about profiling groups is returned. If <code>false</code>, then a
     * list of profiling group names is returned.</p>
     */
    inline bool GetIncludeDescription() const{ return m_includeDescription; }

    /**
     * <p>A <code>Boolean</code> value indicating whether to include a description. If
     * <code>true</code>, then a list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects that contain detailed
     * information about profiling groups is returned. If <code>false</code>, then a
     * list of profiling group names is returned.</p>
     */
    inline bool IncludeDescriptionHasBeenSet() const { return m_includeDescriptionHasBeenSet; }

    /**
     * <p>A <code>Boolean</code> value indicating whether to include a description. If
     * <code>true</code>, then a list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects that contain detailed
     * information about profiling groups is returned. If <code>false</code>, then a
     * list of profiling group names is returned.</p>
     */
    inline void SetIncludeDescription(bool value) { m_includeDescriptionHasBeenSet = true; m_includeDescription = value; }

    /**
     * <p>A <code>Boolean</code> value indicating whether to include a description. If
     * <code>true</code>, then a list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> objects that contain detailed
     * information about profiling groups is returned. If <code>false</code>, then a
     * list of profiling group names is returned.</p>
     */
    inline ListProfilingGroupsRequest& WithIncludeDescription(bool value) { SetIncludeDescription(value); return *this;}


    /**
     * <p>The maximum number of profiling groups results returned by
     * <code>ListProfilingGroups</code> in paginated output. When this parameter is
     * used, <code>ListProfilingGroups</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListProfilingGroups</code> request with the returned
     * <code>nextToken</code> value. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of profiling groups results returned by
     * <code>ListProfilingGroups</code> in paginated output. When this parameter is
     * used, <code>ListProfilingGroups</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListProfilingGroups</code> request with the returned
     * <code>nextToken</code> value. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of profiling groups results returned by
     * <code>ListProfilingGroups</code> in paginated output. When this parameter is
     * used, <code>ListProfilingGroups</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListProfilingGroups</code> request with the returned
     * <code>nextToken</code> value. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of profiling groups results returned by
     * <code>ListProfilingGroups</code> in paginated output. When this parameter is
     * used, <code>ListProfilingGroups</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListProfilingGroups</code> request with the returned
     * <code>nextToken</code> value. </p>
     */
    inline ListProfilingGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfilingGroups</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * </p>  <p>This token should be treated as an opaque identifier that is only
     * used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfilingGroups</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * </p>  <p>This token should be treated as an opaque identifier that is only
     * used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfilingGroups</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * </p>  <p>This token should be treated as an opaque identifier that is only
     * used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfilingGroups</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * </p>  <p>This token should be treated as an opaque identifier that is only
     * used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfilingGroups</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * </p>  <p>This token should be treated as an opaque identifier that is only
     * used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfilingGroups</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * </p>  <p>This token should be treated as an opaque identifier that is only
     * used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListProfilingGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfilingGroups</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * </p>  <p>This token should be treated as an opaque identifier that is only
     * used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListProfilingGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfilingGroups</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * </p>  <p>This token should be treated as an opaque identifier that is only
     * used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListProfilingGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_includeDescription;
    bool m_includeDescriptionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
