/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API ListTaskDefinitionFamiliesRequest : public ECSRequest
  {
  public:
    ListTaskDefinitionFamiliesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The <code>familyPrefix</code> is a string that is used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline const Aws::String& GetFamilyPrefix() const{ return m_familyPrefix; }

    /**
     * <p>The <code>familyPrefix</code> is a string that is used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline void SetFamilyPrefix(const Aws::String& value) { m_familyPrefixHasBeenSet = true; m_familyPrefix = value; }

    /**
     * <p>The <code>familyPrefix</code> is a string that is used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline void SetFamilyPrefix(Aws::String&& value) { m_familyPrefixHasBeenSet = true; m_familyPrefix = value; }

    /**
     * <p>The <code>familyPrefix</code> is a string that is used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline void SetFamilyPrefix(const char* value) { m_familyPrefixHasBeenSet = true; m_familyPrefix.assign(value); }

    /**
     * <p>The <code>familyPrefix</code> is a string that is used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline ListTaskDefinitionFamiliesRequest& WithFamilyPrefix(const Aws::String& value) { SetFamilyPrefix(value); return *this;}

    /**
     * <p>The <code>familyPrefix</code> is a string that is used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline ListTaskDefinitionFamiliesRequest& WithFamilyPrefix(Aws::String&& value) { SetFamilyPrefix(value); return *this;}

    /**
     * <p>The <code>familyPrefix</code> is a string that is used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline ListTaskDefinitionFamiliesRequest& WithFamilyPrefix(const char* value) { SetFamilyPrefix(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitionFamilies</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitionFamilies</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitionFamilies</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitionFamilies</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitionFamilies</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p>
     */
    inline ListTaskDefinitionFamiliesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitionFamilies</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p>
     */
    inline ListTaskDefinitionFamiliesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitionFamilies</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p>
     */
    inline ListTaskDefinitionFamiliesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of task definition family results returned by
     * <code>ListTaskDefinitionFamilies</code> in paginated output. When this parameter
     * is used, <code>ListTaskDefinitions</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListTaskDefinitionFamilies</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter is not used, then <code>ListTaskDefinitionFamilies</code> returns up
     * to 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline long GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of task definition family results returned by
     * <code>ListTaskDefinitionFamilies</code> in paginated output. When this parameter
     * is used, <code>ListTaskDefinitions</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListTaskDefinitionFamilies</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter is not used, then <code>ListTaskDefinitionFamilies</code> returns up
     * to 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(long value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of task definition family results returned by
     * <code>ListTaskDefinitionFamilies</code> in paginated output. When this parameter
     * is used, <code>ListTaskDefinitions</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListTaskDefinitionFamilies</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter is not used, then <code>ListTaskDefinitionFamilies</code> returns up
     * to 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline ListTaskDefinitionFamiliesRequest& WithMaxResults(long value) { SetMaxResults(value); return *this;}

  private:
    Aws::String m_familyPrefix;
    bool m_familyPrefixHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    long m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
