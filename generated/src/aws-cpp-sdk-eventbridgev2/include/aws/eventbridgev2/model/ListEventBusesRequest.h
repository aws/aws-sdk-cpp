/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2Request.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

/**
 */
class ListEventBusesRequest : public EventBridgeV2Request {
 public:
  AWS_EVENTBRIDGEV2_API ListEventBusesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEventBuses"; }

  AWS_EVENTBRIDGEV2_API Aws::String SerializePayload() const override;

  AWS_EVENTBRIDGEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Name of an event bus. The first character must be alphanumeric; the remaining
   * characters may also include '.', '-', and '_'. The grammar matches the name
   * segment of EventBusArn (event-busv2/&lt;name&gt;/&lt;id&gt;), so every valid
   * name can be represented in the bus's ARN. The same type is used everywhere a bus
   * name appears.</p>
   */
  inline const Aws::String& GetNamePrefix() const { return m_namePrefix; }
  inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }
  template <typename NamePrefixT = Aws::String>
  void SetNamePrefix(NamePrefixT&& value) {
    m_namePrefixHasBeenSet = true;
    m_namePrefix = std::forward<NamePrefixT>(value);
  }
  template <typename NamePrefixT = Aws::String>
  ListEventBusesRequest& WithNamePrefix(NamePrefixT&& value) {
    SetNamePrefix(std::forward<NamePrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS Account Id.</p>
   */
  inline const Aws::String& GetEventBusAccountId() const { return m_eventBusAccountId; }
  inline bool EventBusAccountIdHasBeenSet() const { return m_eventBusAccountIdHasBeenSet; }
  template <typename EventBusAccountIdT = Aws::String>
  void SetEventBusAccountId(EventBusAccountIdT&& value) {
    m_eventBusAccountIdHasBeenSet = true;
    m_eventBusAccountId = std::forward<EventBusAccountIdT>(value);
  }
  template <typename EventBusAccountIdT = Aws::String>
  ListEventBusesRequest& WithEventBusAccountId(EventBusAccountIdT&& value) {
    SetEventBusAccountId(std::forward<EventBusAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Opaque pagination token returned by a List operation. Pass it back in the
   * next request to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEventBusesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of results to return in one page of a List operation.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListEventBusesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_namePrefix;

  Aws::String m_eventBusAccountId;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_namePrefixHasBeenSet = false;
  bool m_eventBusAccountIdHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
