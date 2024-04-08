/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/ControlCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controlcatalog/model/ObjectiveFilter.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ControlCatalog
{
namespace Model
{

  /**
   */
  class ListObjectivesRequest : public ControlCatalogRequest
  {
  public:
    AWS_CONTROLCATALOG_API ListObjectivesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListObjectives"; }

    AWS_CONTROLCATALOG_API Aws::String SerializePayload() const override;

    AWS_CONTROLCATALOG_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results on a page or for an API request call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results on a page or for an API request call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results on a page or for an API request call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results on a page or for an API request call.</p>
     */
    inline ListObjectivesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline ListObjectivesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline ListObjectivesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline ListObjectivesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An optional filter that narrows the results to a specific domain.</p> <p>This
     * filter allows you to specify one domain ARN at a time. Passing multiple ARNs in
     * the <code>ObjectiveFilter</code> isn’t currently supported.</p>
     */
    inline const ObjectiveFilter& GetObjectiveFilter() const{ return m_objectiveFilter; }

    /**
     * <p>An optional filter that narrows the results to a specific domain.</p> <p>This
     * filter allows you to specify one domain ARN at a time. Passing multiple ARNs in
     * the <code>ObjectiveFilter</code> isn’t currently supported.</p>
     */
    inline bool ObjectiveFilterHasBeenSet() const { return m_objectiveFilterHasBeenSet; }

    /**
     * <p>An optional filter that narrows the results to a specific domain.</p> <p>This
     * filter allows you to specify one domain ARN at a time. Passing multiple ARNs in
     * the <code>ObjectiveFilter</code> isn’t currently supported.</p>
     */
    inline void SetObjectiveFilter(const ObjectiveFilter& value) { m_objectiveFilterHasBeenSet = true; m_objectiveFilter = value; }

    /**
     * <p>An optional filter that narrows the results to a specific domain.</p> <p>This
     * filter allows you to specify one domain ARN at a time. Passing multiple ARNs in
     * the <code>ObjectiveFilter</code> isn’t currently supported.</p>
     */
    inline void SetObjectiveFilter(ObjectiveFilter&& value) { m_objectiveFilterHasBeenSet = true; m_objectiveFilter = std::move(value); }

    /**
     * <p>An optional filter that narrows the results to a specific domain.</p> <p>This
     * filter allows you to specify one domain ARN at a time. Passing multiple ARNs in
     * the <code>ObjectiveFilter</code> isn’t currently supported.</p>
     */
    inline ListObjectivesRequest& WithObjectiveFilter(const ObjectiveFilter& value) { SetObjectiveFilter(value); return *this;}

    /**
     * <p>An optional filter that narrows the results to a specific domain.</p> <p>This
     * filter allows you to specify one domain ARN at a time. Passing multiple ARNs in
     * the <code>ObjectiveFilter</code> isn’t currently supported.</p>
     */
    inline ListObjectivesRequest& WithObjectiveFilter(ObjectiveFilter&& value) { SetObjectiveFilter(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ObjectiveFilter m_objectiveFilter;
    bool m_objectiveFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
