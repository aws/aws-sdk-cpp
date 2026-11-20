/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace APIPortal {
namespace Model {

/**
 */
class ListManagedApiEventsRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API ListManagedApiEventsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListManagedApiEvents"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

  AWS_APIPORTAL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the Managed API.</p>
   */
  inline const Aws::String& GetManagedApiId() const { return m_managedApiId; }
  inline bool ManagedApiIdHasBeenSet() const { return m_managedApiIdHasBeenSet; }
  template <typename ManagedApiIdT = Aws::String>
  void SetManagedApiId(ManagedApiIdT&& value) {
    m_managedApiIdHasBeenSet = true;
    m_managedApiId = std::forward<ManagedApiIdT>(value);
  }
  template <typename ManagedApiIdT = Aws::String>
  ListManagedApiEventsRequest& WithManagedApiId(ManagedApiIdT&& value) {
    SetManagedApiId(std::forward<ManagedApiIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Inclusive lower bound on each event's start time; only events that started at
   * or after this time are returned. Optional; defaults to 30 days before the
   * current time.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAfter() const { return m_startedAfter; }
  inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }
  template <typename StartedAfterT = Aws::Utils::DateTime>
  void SetStartedAfter(StartedAfterT&& value) {
    m_startedAfterHasBeenSet = true;
    m_startedAfter = std::forward<StartedAfterT>(value);
  }
  template <typename StartedAfterT = Aws::Utils::DateTime>
  ListManagedApiEventsRequest& WithStartedAfter(StartedAfterT&& value) {
    SetStartedAfter(std::forward<StartedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Exclusive upper bound on each event's start time; only events that started
   * before this time are returned. Optional; defaults to the current time.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedBefore() const { return m_startedBefore; }
  inline bool StartedBeforeHasBeenSet() const { return m_startedBeforeHasBeenSet; }
  template <typename StartedBeforeT = Aws::Utils::DateTime>
  void SetStartedBefore(StartedBeforeT&& value) {
    m_startedBeforeHasBeenSet = true;
    m_startedBefore = std::forward<StartedBeforeT>(value);
  }
  template <typename StartedBeforeT = Aws::Utils::DateTime>
  ListManagedApiEventsRequest& WithStartedBefore(StartedBeforeT&& value) {
    SetStartedBefore(std::forward<StartedBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in one page, from 1 to 20.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListManagedApiEventsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token returned by a previous call. Omit it to get the first
   * page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListManagedApiEventsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_managedApiId;

  Aws::Utils::DateTime m_startedAfter{};

  Aws::Utils::DateTime m_startedBefore{};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_managedApiIdHasBeenSet = false;
  bool m_startedAfterHasBeenSet = false;
  bool m_startedBeforeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
