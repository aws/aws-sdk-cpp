﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   */
  class AWS_MIGRATIONHUBREFACTORSPACES_API ListApplicationsRequest : public MigrationHubRefactorSpacesRequest
  {
  public:
    ListApplicationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplications"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the environment. </p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }

    /**
     * <p>The ID of the environment. </p>
     */
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }

    /**
     * <p>The ID of the environment. </p>
     */
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }

    /**
     * <p>The ID of the environment. </p>
     */
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }

    /**
     * <p>The ID of the environment. </p>
     */
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }

    /**
     * <p>The ID of the environment. </p>
     */
    inline ListApplicationsRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}

    /**
     * <p>The ID of the environment. </p>
     */
    inline ListApplicationsRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment. </p>
     */
    inline ListApplicationsRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline ListApplicationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListApplicationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListApplicationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListApplicationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
