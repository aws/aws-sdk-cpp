/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Request for ListProfilingGroups operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfilingGroupsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API ListProfilingGroupsRequest : public CodeGuruProfilerRequest
  {
  public:
    ListProfilingGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProfilingGroups"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>If set to true, returns the full description of the profiling groups instead
     * of the names. Defaults to false.</p>
     */
    inline bool GetIncludeDescription() const{ return m_includeDescription; }

    /**
     * <p>If set to true, returns the full description of the profiling groups instead
     * of the names. Defaults to false.</p>
     */
    inline bool IncludeDescriptionHasBeenSet() const { return m_includeDescriptionHasBeenSet; }

    /**
     * <p>If set to true, returns the full description of the profiling groups instead
     * of the names. Defaults to false.</p>
     */
    inline void SetIncludeDescription(bool value) { m_includeDescriptionHasBeenSet = true; m_includeDescription = value; }

    /**
     * <p>If set to true, returns the full description of the profiling groups instead
     * of the names. Defaults to false.</p>
     */
    inline ListProfilingGroupsRequest& WithIncludeDescription(bool value) { SetIncludeDescription(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListProfilingGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListProfilingGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListProfilingGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListProfilingGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_includeDescription;
    bool m_includeDescriptionHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
