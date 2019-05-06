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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/SortOrderType.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class AWS_CODEBUILD_API ListBuildsForProjectRequest : public CodeBuildRequest
  {
  public:
    ListBuildsForProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBuildsForProject"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline ListBuildsForProjectRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline ListBuildsForProjectRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline ListBuildsForProjectRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The order to list build IDs. Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build IDs in ascending order by build ID.</p>
     * </li> <li> <p> <code>DESCENDING</code>: List the build IDs in descending order
     * by build ID.</p> </li> </ul>
     */
    inline const SortOrderType& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order to list build IDs. Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build IDs in ascending order by build ID.</p>
     * </li> <li> <p> <code>DESCENDING</code>: List the build IDs in descending order
     * by build ID.</p> </li> </ul>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order to list build IDs. Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build IDs in ascending order by build ID.</p>
     * </li> <li> <p> <code>DESCENDING</code>: List the build IDs in descending order
     * by build ID.</p> </li> </ul>
     */
    inline void SetSortOrder(const SortOrderType& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order to list build IDs. Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build IDs in ascending order by build ID.</p>
     * </li> <li> <p> <code>DESCENDING</code>: List the build IDs in descending order
     * by build ID.</p> </li> </ul>
     */
    inline void SetSortOrder(SortOrderType&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order to list build IDs. Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build IDs in ascending order by build ID.</p>
     * </li> <li> <p> <code>DESCENDING</code>: List the build IDs in descending order
     * by build ID.</p> </li> </ul>
     */
    inline ListBuildsForProjectRequest& WithSortOrder(const SortOrderType& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order to list build IDs. Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build IDs in ascending order by build ID.</p>
     * </li> <li> <p> <code>DESCENDING</code>: List the build IDs in descending order
     * by build ID.</p> </li> </ul>
     */
    inline ListBuildsForProjectRequest& WithSortOrder(SortOrderType&& value) { SetSortOrder(std::move(value)); return *this;}


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
    inline ListBuildsForProjectRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline ListBuildsForProjectRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline ListBuildsForProjectRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;

    SortOrderType m_sortOrder;
    bool m_sortOrderHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
