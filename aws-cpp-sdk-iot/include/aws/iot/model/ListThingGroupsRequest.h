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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API ListThingGroupsRequest : public IoTRequest
  {
  public:
    ListThingGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListThingGroups"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListThingGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListThingGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListThingGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline ListThingGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A filter that limits the results to those with the specified parent
     * group.</p>
     */
    inline const Aws::String& GetParentGroup() const{ return m_parentGroup; }

    /**
     * <p>A filter that limits the results to those with the specified parent
     * group.</p>
     */
    inline bool ParentGroupHasBeenSet() const { return m_parentGroupHasBeenSet; }

    /**
     * <p>A filter that limits the results to those with the specified parent
     * group.</p>
     */
    inline void SetParentGroup(const Aws::String& value) { m_parentGroupHasBeenSet = true; m_parentGroup = value; }

    /**
     * <p>A filter that limits the results to those with the specified parent
     * group.</p>
     */
    inline void SetParentGroup(Aws::String&& value) { m_parentGroupHasBeenSet = true; m_parentGroup = std::move(value); }

    /**
     * <p>A filter that limits the results to those with the specified parent
     * group.</p>
     */
    inline void SetParentGroup(const char* value) { m_parentGroupHasBeenSet = true; m_parentGroup.assign(value); }

    /**
     * <p>A filter that limits the results to those with the specified parent
     * group.</p>
     */
    inline ListThingGroupsRequest& WithParentGroup(const Aws::String& value) { SetParentGroup(value); return *this;}

    /**
     * <p>A filter that limits the results to those with the specified parent
     * group.</p>
     */
    inline ListThingGroupsRequest& WithParentGroup(Aws::String&& value) { SetParentGroup(std::move(value)); return *this;}

    /**
     * <p>A filter that limits the results to those with the specified parent
     * group.</p>
     */
    inline ListThingGroupsRequest& WithParentGroup(const char* value) { SetParentGroup(value); return *this;}


    /**
     * <p>A filter that limits the results to those with the specified name prefix.</p>
     */
    inline const Aws::String& GetNamePrefixFilter() const{ return m_namePrefixFilter; }

    /**
     * <p>A filter that limits the results to those with the specified name prefix.</p>
     */
    inline bool NamePrefixFilterHasBeenSet() const { return m_namePrefixFilterHasBeenSet; }

    /**
     * <p>A filter that limits the results to those with the specified name prefix.</p>
     */
    inline void SetNamePrefixFilter(const Aws::String& value) { m_namePrefixFilterHasBeenSet = true; m_namePrefixFilter = value; }

    /**
     * <p>A filter that limits the results to those with the specified name prefix.</p>
     */
    inline void SetNamePrefixFilter(Aws::String&& value) { m_namePrefixFilterHasBeenSet = true; m_namePrefixFilter = std::move(value); }

    /**
     * <p>A filter that limits the results to those with the specified name prefix.</p>
     */
    inline void SetNamePrefixFilter(const char* value) { m_namePrefixFilterHasBeenSet = true; m_namePrefixFilter.assign(value); }

    /**
     * <p>A filter that limits the results to those with the specified name prefix.</p>
     */
    inline ListThingGroupsRequest& WithNamePrefixFilter(const Aws::String& value) { SetNamePrefixFilter(value); return *this;}

    /**
     * <p>A filter that limits the results to those with the specified name prefix.</p>
     */
    inline ListThingGroupsRequest& WithNamePrefixFilter(Aws::String&& value) { SetNamePrefixFilter(std::move(value)); return *this;}

    /**
     * <p>A filter that limits the results to those with the specified name prefix.</p>
     */
    inline ListThingGroupsRequest& WithNamePrefixFilter(const char* value) { SetNamePrefixFilter(value); return *this;}


    /**
     * <p>If true, return child groups as well.</p>
     */
    inline bool GetRecursive() const{ return m_recursive; }

    /**
     * <p>If true, return child groups as well.</p>
     */
    inline bool RecursiveHasBeenSet() const { return m_recursiveHasBeenSet; }

    /**
     * <p>If true, return child groups as well.</p>
     */
    inline void SetRecursive(bool value) { m_recursiveHasBeenSet = true; m_recursive = value; }

    /**
     * <p>If true, return child groups as well.</p>
     */
    inline ListThingGroupsRequest& WithRecursive(bool value) { SetRecursive(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_parentGroup;
    bool m_parentGroupHasBeenSet;

    Aws::String m_namePrefixFilter;
    bool m_namePrefixFilterHasBeenSet;

    bool m_recursive;
    bool m_recursiveHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
