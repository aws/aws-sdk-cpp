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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/codebuild/model/SortOrderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class AWS_CODEBUILD_API ListBuildsRequest : public CodeBuildRequest
  {
  public:
    ListBuildsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline void SetSortOrder(const SortOrderType& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order to list build IDs. Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build IDs in ascending order by build ID.</p>
     * </li> <li> <p> <code>DESCENDING</code>: List the build IDs in descending order
     * by build ID.</p> </li> </ul>
     */
    inline void SetSortOrder(SortOrderType&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order to list build IDs. Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build IDs in ascending order by build ID.</p>
     * </li> <li> <p> <code>DESCENDING</code>: List the build IDs in descending order
     * by build ID.</p> </li> </ul>
     */
    inline ListBuildsRequest& WithSortOrder(const SortOrderType& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order to list build IDs. Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build IDs in ascending order by build ID.</p>
     * </li> <li> <p> <code>DESCENDING</code>: List the build IDs in descending order
     * by build ID.</p> </li> </ul>
     */
    inline ListBuildsRequest& WithSortOrder(SortOrderType&& value) { SetSortOrder(value); return *this;}

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
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

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
    inline ListBuildsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline ListBuildsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a <i>next
     * token</i>. To get the next batch of items in the list, call this operation
     * again, adding the next token to the call. To get all of the items in the list,
     * keep calling this operation with each subsequent next token that is returned,
     * until no more next tokens are returned.</p>
     */
    inline ListBuildsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    SortOrderType m_sortOrder;
    bool m_sortOrderHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
