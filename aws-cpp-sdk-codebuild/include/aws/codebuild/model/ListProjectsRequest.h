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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/codebuild/model/ProjectSortByType.h>
#include <aws/codebuild/model/SortOrderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class AWS_CODEBUILD_API ListProjectsRequest : public CodeBuildRequest
  {
  public:
    ListProjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProjects"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The criterion to be used to list build project names. Valid values
     * include:</p> <ul> <li> <p> <code>CREATED_TIME</code>: List based on when each
     * build project was created.</p> </li> <li> <p> <code>LAST_MODIFIED_TIME</code>:
     * List based on when information about each build project was last changed.</p>
     * </li> <li> <p> <code>NAME</code>: List based on each build project's name.</p>
     * </li> </ul> <p>Use <code>sortOrder</code> to specify in what order to list the
     * build project names based on the preceding criteria.</p>
     */
    inline const ProjectSortByType& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The criterion to be used to list build project names. Valid values
     * include:</p> <ul> <li> <p> <code>CREATED_TIME</code>: List based on when each
     * build project was created.</p> </li> <li> <p> <code>LAST_MODIFIED_TIME</code>:
     * List based on when information about each build project was last changed.</p>
     * </li> <li> <p> <code>NAME</code>: List based on each build project's name.</p>
     * </li> </ul> <p>Use <code>sortOrder</code> to specify in what order to list the
     * build project names based on the preceding criteria.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The criterion to be used to list build project names. Valid values
     * include:</p> <ul> <li> <p> <code>CREATED_TIME</code>: List based on when each
     * build project was created.</p> </li> <li> <p> <code>LAST_MODIFIED_TIME</code>:
     * List based on when information about each build project was last changed.</p>
     * </li> <li> <p> <code>NAME</code>: List based on each build project's name.</p>
     * </li> </ul> <p>Use <code>sortOrder</code> to specify in what order to list the
     * build project names based on the preceding criteria.</p>
     */
    inline void SetSortBy(const ProjectSortByType& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The criterion to be used to list build project names. Valid values
     * include:</p> <ul> <li> <p> <code>CREATED_TIME</code>: List based on when each
     * build project was created.</p> </li> <li> <p> <code>LAST_MODIFIED_TIME</code>:
     * List based on when information about each build project was last changed.</p>
     * </li> <li> <p> <code>NAME</code>: List based on each build project's name.</p>
     * </li> </ul> <p>Use <code>sortOrder</code> to specify in what order to list the
     * build project names based on the preceding criteria.</p>
     */
    inline void SetSortBy(ProjectSortByType&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The criterion to be used to list build project names. Valid values
     * include:</p> <ul> <li> <p> <code>CREATED_TIME</code>: List based on when each
     * build project was created.</p> </li> <li> <p> <code>LAST_MODIFIED_TIME</code>:
     * List based on when information about each build project was last changed.</p>
     * </li> <li> <p> <code>NAME</code>: List based on each build project's name.</p>
     * </li> </ul> <p>Use <code>sortOrder</code> to specify in what order to list the
     * build project names based on the preceding criteria.</p>
     */
    inline ListProjectsRequest& WithSortBy(const ProjectSortByType& value) { SetSortBy(value); return *this;}

    /**
     * <p>The criterion to be used to list build project names. Valid values
     * include:</p> <ul> <li> <p> <code>CREATED_TIME</code>: List based on when each
     * build project was created.</p> </li> <li> <p> <code>LAST_MODIFIED_TIME</code>:
     * List based on when information about each build project was last changed.</p>
     * </li> <li> <p> <code>NAME</code>: List based on each build project's name.</p>
     * </li> </ul> <p>Use <code>sortOrder</code> to specify in what order to list the
     * build project names based on the preceding criteria.</p>
     */
    inline ListProjectsRequest& WithSortBy(ProjectSortByType&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The order in which to list build projects. Valid values include:</p> <ul>
     * <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li> <p>
     * <code>DESCENDING</code>: List in descending order.</p> </li> </ul> <p>Use
     * <code>sortBy</code> to specify the criterion to be used to list build project
     * names.</p>
     */
    inline const SortOrderType& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order in which to list build projects. Valid values include:</p> <ul>
     * <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li> <p>
     * <code>DESCENDING</code>: List in descending order.</p> </li> </ul> <p>Use
     * <code>sortBy</code> to specify the criterion to be used to list build project
     * names.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order in which to list build projects. Valid values include:</p> <ul>
     * <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li> <p>
     * <code>DESCENDING</code>: List in descending order.</p> </li> </ul> <p>Use
     * <code>sortBy</code> to specify the criterion to be used to list build project
     * names.</p>
     */
    inline void SetSortOrder(const SortOrderType& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order in which to list build projects. Valid values include:</p> <ul>
     * <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li> <p>
     * <code>DESCENDING</code>: List in descending order.</p> </li> </ul> <p>Use
     * <code>sortBy</code> to specify the criterion to be used to list build project
     * names.</p>
     */
    inline void SetSortOrder(SortOrderType&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order in which to list build projects. Valid values include:</p> <ul>
     * <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li> <p>
     * <code>DESCENDING</code>: List in descending order.</p> </li> </ul> <p>Use
     * <code>sortBy</code> to specify the criterion to be used to list build project
     * names.</p>
     */
    inline ListProjectsRequest& WithSortOrder(const SortOrderType& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order in which to list build projects. Valid values include:</p> <ul>
     * <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li> <p>
     * <code>DESCENDING</code>: List in descending order.</p> </li> </ul> <p>Use
     * <code>sortBy</code> to specify the criterion to be used to list build project
     * names.</p>
     */
    inline ListProjectsRequest& WithSortOrder(SortOrderType&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline ListProjectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline ListProjectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline ListProjectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ProjectSortByType m_sortBy;
    bool m_sortByHasBeenSet;

    SortOrderType m_sortOrder;
    bool m_sortOrderHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
