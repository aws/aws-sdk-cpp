/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/freetier/FreeTierRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/freetier/model/LanguageCode.h>
#include <aws/freetier/model/ActivityStatus.h>
#include <utility>

namespace Aws
{
namespace FreeTier
{
namespace Model
{

  /**
   */
  class ListAccountActivitiesRequest : public FreeTierRequest
  {
  public:
    AWS_FREETIER_API ListAccountActivitiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccountActivities"; }

    AWS_FREETIER_API Aws::String SerializePayload() const override;

    AWS_FREETIER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The activity status filter. This field can be used to filter the response by
     * activities status. </p>
     */
    inline const Aws::Vector<ActivityStatus>& GetFilterActivityStatuses() const { return m_filterActivityStatuses; }
    inline bool FilterActivityStatusesHasBeenSet() const { return m_filterActivityStatusesHasBeenSet; }
    template<typename FilterActivityStatusesT = Aws::Vector<ActivityStatus>>
    void SetFilterActivityStatuses(FilterActivityStatusesT&& value) { m_filterActivityStatusesHasBeenSet = true; m_filterActivityStatuses = std::forward<FilterActivityStatusesT>(value); }
    template<typename FilterActivityStatusesT = Aws::Vector<ActivityStatus>>
    ListAccountActivitiesRequest& WithFilterActivityStatuses(FilterActivityStatusesT&& value) { SetFilterActivityStatuses(std::forward<FilterActivityStatusesT>(value)); return *this;}
    inline ListAccountActivitiesRequest& AddFilterActivityStatuses(ActivityStatus value) { m_filterActivityStatusesHasBeenSet = true; m_filterActivityStatuses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token from a previous paginated response. If this is specified, the
     * response includes records beginning from this token (inclusive), up to the
     * number specified by <code>maxResults</code>. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccountActivitiesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAccountActivitiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The language code used to return translated titles. </p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline ListAccountActivitiesRequest& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}
  private:

    Aws::Vector<ActivityStatus> m_filterActivityStatuses;
    bool m_filterActivityStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
