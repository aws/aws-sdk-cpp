/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListBuildsForProjectRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API ListBuildsForProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBuildsForProject"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline ListBuildsForProjectRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline ListBuildsForProjectRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline ListBuildsForProjectRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The order to sort the results in. The results are sorted by build number, not
     * the build identifier. If this is not specified, the results are sorted in
     * descending order.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build identifiers in ascending order, by build
     * number.</p> </li> <li> <p> <code>DESCENDING</code>: List the build identifiers
     * in descending order, by build number.</p> </li> </ul> <p>If the project has more
     * than 100 builds, setting the sort order will result in an error. </p>
     */
    inline const SortOrderType& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order to sort the results in. The results are sorted by build number, not
     * the build identifier. If this is not specified, the results are sorted in
     * descending order.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build identifiers in ascending order, by build
     * number.</p> </li> <li> <p> <code>DESCENDING</code>: List the build identifiers
     * in descending order, by build number.</p> </li> </ul> <p>If the project has more
     * than 100 builds, setting the sort order will result in an error. </p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order to sort the results in. The results are sorted by build number, not
     * the build identifier. If this is not specified, the results are sorted in
     * descending order.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build identifiers in ascending order, by build
     * number.</p> </li> <li> <p> <code>DESCENDING</code>: List the build identifiers
     * in descending order, by build number.</p> </li> </ul> <p>If the project has more
     * than 100 builds, setting the sort order will result in an error. </p>
     */
    inline void SetSortOrder(const SortOrderType& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order to sort the results in. The results are sorted by build number, not
     * the build identifier. If this is not specified, the results are sorted in
     * descending order.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build identifiers in ascending order, by build
     * number.</p> </li> <li> <p> <code>DESCENDING</code>: List the build identifiers
     * in descending order, by build number.</p> </li> </ul> <p>If the project has more
     * than 100 builds, setting the sort order will result in an error. </p>
     */
    inline void SetSortOrder(SortOrderType&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order to sort the results in. The results are sorted by build number, not
     * the build identifier. If this is not specified, the results are sorted in
     * descending order.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build identifiers in ascending order, by build
     * number.</p> </li> <li> <p> <code>DESCENDING</code>: List the build identifiers
     * in descending order, by build number.</p> </li> </ul> <p>If the project has more
     * than 100 builds, setting the sort order will result in an error. </p>
     */
    inline ListBuildsForProjectRequest& WithSortOrder(const SortOrderType& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order to sort the results in. The results are sorted by build number, not
     * the build identifier. If this is not specified, the results are sorted in
     * descending order.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ASCENDING</code>: List the build identifiers in ascending order, by build
     * number.</p> </li> <li> <p> <code>DESCENDING</code>: List the build identifiers
     * in descending order, by build number.</p> </li> </ul> <p>If the project has more
     * than 100 builds, setting the sort order will result in an error. </p>
     */
    inline ListBuildsForProjectRequest& WithSortOrder(SortOrderType&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a
     * <i>nextToken</i>. To get the next batch of items in the list, call this
     * operation again, adding the next token to the call. To get all of the items in
     * the list, keep calling this operation with each subsequent next token that is
     * returned, until no more next tokens are returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a
     * <i>nextToken</i>. To get the next batch of items in the list, call this
     * operation again, adding the next token to the call. To get all of the items in
     * the list, keep calling this operation with each subsequent next token that is
     * returned, until no more next tokens are returned.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a
     * <i>nextToken</i>. To get the next batch of items in the list, call this
     * operation again, adding the next token to the call. To get all of the items in
     * the list, keep calling this operation with each subsequent next token that is
     * returned, until no more next tokens are returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a
     * <i>nextToken</i>. To get the next batch of items in the list, call this
     * operation again, adding the next token to the call. To get all of the items in
     * the list, keep calling this operation with each subsequent next token that is
     * returned, until no more next tokens are returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a
     * <i>nextToken</i>. To get the next batch of items in the list, call this
     * operation again, adding the next token to the call. To get all of the items in
     * the list, keep calling this operation with each subsequent next token that is
     * returned, until no more next tokens are returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a
     * <i>nextToken</i>. To get the next batch of items in the list, call this
     * operation again, adding the next token to the call. To get all of the items in
     * the list, keep calling this operation with each subsequent next token that is
     * returned, until no more next tokens are returned.</p>
     */
    inline ListBuildsForProjectRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a
     * <i>nextToken</i>. To get the next batch of items in the list, call this
     * operation again, adding the next token to the call. To get all of the items in
     * the list, keep calling this operation with each subsequent next token that is
     * returned, until no more next tokens are returned.</p>
     */
    inline ListBuildsForProjectRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a
     * <i>nextToken</i>. To get the next batch of items in the list, call this
     * operation again, adding the next token to the call. To get all of the items in
     * the list, keep calling this operation with each subsequent next token that is
     * returned, until no more next tokens are returned.</p>
     */
    inline ListBuildsForProjectRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    SortOrderType m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
