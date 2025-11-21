/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace ApplicationSignals {
namespace Model {

/**
 */
class ListEntityEventsRequest : public ApplicationSignalsRequest {
 public:
  AWS_APPLICATIONSIGNALS_API ListEntityEventsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEntityEvents"; }

  AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;

  AWS_APPLICATIONSIGNALS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The entity for which to retrieve change events. This specifies the service,
   * resource, or other entity whose event history you want to examine.</p> <p>This
   * is a string-to-string map. It can include the following fields.</p> <ul> <li>
   * <p> <code>Type</code> designates the type of object this is.</p> </li> <li> <p>
   * <code>ResourceType</code> specifies the type of the resource. This field is used
   * only when the value of the <code>Type</code> field is <code>Resource</code> or
   * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Name</code> specifies the
   * name of the object. This is used only if the value of the <code>Type</code>
   * field is <code>Service</code>, <code>RemoteService</code>, or
   * <code>AWS::Service</code>.</p> </li> <li> <p> <code>Identifier</code> identifies
   * the resource objects of this resource. This is used only if the value of the
   * <code>Type</code> field is <code>Resource</code> or
   * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Environment</code>
   * specifies the location where this object is hosted, or what it belongs to.</p>
   * </li> <li> <p> <code>AwsAccountId</code> specifies the account where this object
   * is in.</p> </li> </ul> <p>Below is an example of a service.</p> <p> <code>{
   * "Type": "Service", "Name": "visits-service", "Environment": "petclinic-test"
   * }</code> </p> <p>Below is an example of a resource.</p> <p> <code>{ "Type":
   * "AWS::Resource", "ResourceType": "AWS::DynamoDB::Table", "Identifier":
   * "Customers" }</code> </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEntity() const { return m_entity; }
  inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
  template <typename EntityT = Aws::Map<Aws::String, Aws::String>>
  void SetEntity(EntityT&& value) {
    m_entityHasBeenSet = true;
    m_entity = std::forward<EntityT>(value);
  }
  template <typename EntityT = Aws::Map<Aws::String, Aws::String>>
  ListEntityEventsRequest& WithEntity(EntityT&& value) {
    SetEntity(std::forward<EntityT>(value));
    return *this;
  }
  template <typename EntityKeyT = Aws::String, typename EntityValueT = Aws::String>
  ListEntityEventsRequest& AddEntity(EntityKeyT&& key, EntityValueT&& value) {
    m_entityHasBeenSet = true;
    m_entity.emplace(std::forward<EntityKeyT>(key), std::forward<EntityValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start of the time period to retrieve change events for. When used in a
   * raw HTTP Query API, it is formatted as epoch time in seconds. For example:
   * <code>1698778057</code> </p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  ListEntityEventsRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time period to retrieve change events for. When used in a raw
   * HTTP Query API, it is formatted as epoch time in seconds. For example:
   * <code>1698778057</code> </p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  ListEntityEventsRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of change events to return in one operation. If you omit
   * this parameter, the default of 50 is used.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListEntityEventsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Include this value, if it was returned by the previous operation, to get the
   * next set of change events.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEntityEventsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_entity;
  bool m_entityHasBeenSet = false;

  Aws::Utils::DateTime m_startTime{};
  bool m_startTimeHasBeenSet = false;

  Aws::Utils::DateTime m_endTime{};
  bool m_endTimeHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
