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
    AWS_CONTROLCATALOG_API ListObjectivesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListObjectives"; }

    AWS_CONTROLCATALOG_API Aws::String SerializePayload() const override;

    AWS_CONTROLCATALOG_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results on a page or for an API request call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListObjectivesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListObjectivesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional filter that narrows the results to a specific domain.</p> <p>This
     * filter allows you to specify one domain ARN at a time. Passing multiple ARNs in
     * the <code>ObjectiveFilter</code> isn’t supported.</p>
     */
    inline const ObjectiveFilter& GetObjectiveFilter() const { return m_objectiveFilter; }
    inline bool ObjectiveFilterHasBeenSet() const { return m_objectiveFilterHasBeenSet; }
    template<typename ObjectiveFilterT = ObjectiveFilter>
    void SetObjectiveFilter(ObjectiveFilterT&& value) { m_objectiveFilterHasBeenSet = true; m_objectiveFilter = std::forward<ObjectiveFilterT>(value); }
    template<typename ObjectiveFilterT = ObjectiveFilter>
    ListObjectivesRequest& WithObjectiveFilter(ObjectiveFilterT&& value) { SetObjectiveFilter(std::forward<ObjectiveFilterT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ObjectiveFilter m_objectiveFilter;
    bool m_objectiveFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
