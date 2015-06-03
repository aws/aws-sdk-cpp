/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

  /*
  */
  class AWS_ECS_API ListTaskDefinitionsRequest : public ECSRequest
  {
  public:
    ListTaskDefinitionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The full family name that you want to filter the <code>ListTaskDefinitions</code> results with. Specifying a <code>familyPrefix</code> will limit the listed task definitions to task definition revisions that belong to that family.</p>
    */
    inline const Aws::String& GetFamilyPrefix() const{ return m_familyPrefix; }
    /*
     <p>The full family name that you want to filter the <code>ListTaskDefinitions</code> results with. Specifying a <code>familyPrefix</code> will limit the listed task definitions to task definition revisions that belong to that family.</p>
    */
    inline void SetFamilyPrefix(const Aws::String& value) { m_familyPrefixHasBeenSet = true; m_familyPrefix = value; }

    /*
     <p>The full family name that you want to filter the <code>ListTaskDefinitions</code> results with. Specifying a <code>familyPrefix</code> will limit the listed task definitions to task definition revisions that belong to that family.</p>
    */
    inline void SetFamilyPrefix(const char* value) { m_familyPrefixHasBeenSet = true; m_familyPrefix.assign(value); }

    /*
     <p>The full family name that you want to filter the <code>ListTaskDefinitions</code> results with. Specifying a <code>familyPrefix</code> will limit the listed task definitions to task definition revisions that belong to that family.</p>
    */
    inline ListTaskDefinitionsRequest&  WithFamilyPrefix(const Aws::String& value) { SetFamilyPrefix(value); return *this;}

    /*
     <p>The full family name that you want to filter the <code>ListTaskDefinitions</code> results with. Specifying a <code>familyPrefix</code> will limit the listed task definitions to task definition revisions that belong to that family.</p>
    */
    inline ListTaskDefinitionsRequest& WithFamilyPrefix(const char* value) { SetFamilyPrefix(value); return *this;}

    /*
     <p>The <code>nextToken</code> value returned from a previous paginated <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used and the results exceeded the value of that parameter. Pagination continues from the end of the previous results that returned the <code>nextToken</code> value. This value is <code>null</code> when there are no more results to return.</p>
    */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    /*
     <p>The <code>nextToken</code> value returned from a previous paginated <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used and the results exceeded the value of that parameter. Pagination continues from the end of the previous results that returned the <code>nextToken</code> value. This value is <code>null</code> when there are no more results to return.</p>
    */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /*
     <p>The <code>nextToken</code> value returned from a previous paginated <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used and the results exceeded the value of that parameter. Pagination continues from the end of the previous results that returned the <code>nextToken</code> value. This value is <code>null</code> when there are no more results to return.</p>
    */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /*
     <p>The <code>nextToken</code> value returned from a previous paginated <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used and the results exceeded the value of that parameter. Pagination continues from the end of the previous results that returned the <code>nextToken</code> value. This value is <code>null</code> when there are no more results to return.</p>
    */
    inline ListTaskDefinitionsRequest&  WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /*
     <p>The <code>nextToken</code> value returned from a previous paginated <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used and the results exceeded the value of that parameter. Pagination continues from the end of the previous results that returned the <code>nextToken</code> value. This value is <code>null</code> when there are no more results to return.</p>
    */
    inline ListTaskDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /*
     <p>The maximum number of task definition results returned by <code>ListTaskDefinitions</code> in paginated output. When this parameter is used, <code>ListTaskDefinitions</code> only returns <code>maxResults</code> results in a single page along with a <code>nextToken</code> response element. The remaining results of the initial request can be seen by sending another <code>ListTaskDefinitions</code> request with the returned <code>nextToken</code> value. This value can be between 1 and 100. If this parameter is not used, then <code>ListTaskDefinitions</code> returns up to 100 results and a <code>nextToken</code> value if applicable.</p>
    */
    inline long GetMaxResults() const{ return m_maxResults; }
    /*
     <p>The maximum number of task definition results returned by <code>ListTaskDefinitions</code> in paginated output. When this parameter is used, <code>ListTaskDefinitions</code> only returns <code>maxResults</code> results in a single page along with a <code>nextToken</code> response element. The remaining results of the initial request can be seen by sending another <code>ListTaskDefinitions</code> request with the returned <code>nextToken</code> value. This value can be between 1 and 100. If this parameter is not used, then <code>ListTaskDefinitions</code> returns up to 100 results and a <code>nextToken</code> value if applicable.</p>
    */
    inline void SetMaxResults(long value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /*
     <p>The maximum number of task definition results returned by <code>ListTaskDefinitions</code> in paginated output. When this parameter is used, <code>ListTaskDefinitions</code> only returns <code>maxResults</code> results in a single page along with a <code>nextToken</code> response element. The remaining results of the initial request can be seen by sending another <code>ListTaskDefinitions</code> request with the returned <code>nextToken</code> value. This value can be between 1 and 100. If this parameter is not used, then <code>ListTaskDefinitions</code> returns up to 100 results and a <code>nextToken</code> value if applicable.</p>
    */
    inline ListTaskDefinitionsRequest&  WithMaxResults(long value) { SetMaxResults(value); return *this;}

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
