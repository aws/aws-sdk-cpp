﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/CodeStarRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStar
{
namespace Model
{

  /**
   */
  class AWS_CODESTAR_API ListResourcesRequest : public CodeStarRequest
  {
  public:
    ListResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResources"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The ID of the project.</p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p>The ID of the project.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p>The ID of the project.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p>The ID of the project.</p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p>The ID of the project.</p>
     */
    inline ListResourcesRequest& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The ID of the project.</p>
     */
    inline ListResourcesRequest& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project.</p>
     */
    inline ListResourcesRequest& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The continuation token for the next set of results, if the results cannot be
     * returned in one response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The continuation token for the next set of results, if the results cannot be
     * returned in one response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The continuation token for the next set of results, if the results cannot be
     * returned in one response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The continuation token for the next set of results, if the results cannot be
     * returned in one response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The continuation token for the next set of results, if the results cannot be
     * returned in one response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The continuation token for the next set of results, if the results cannot be
     * returned in one response.</p>
     */
    inline ListResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The continuation token for the next set of results, if the results cannot be
     * returned in one response.</p>
     */
    inline ListResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The continuation token for the next set of results, if the results cannot be
     * returned in one response.</p>
     */
    inline ListResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum amount of data that can be contained in a single set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum amount of data that can be contained in a single set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum amount of data that can be contained in a single set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum amount of data that can be contained in a single set of
     * results.</p>
     */
    inline ListResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
