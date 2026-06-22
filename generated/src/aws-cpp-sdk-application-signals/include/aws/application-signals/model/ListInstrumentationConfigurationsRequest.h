/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/InstrumentationType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ApplicationSignals {
namespace Model {

/**
 */
class ListInstrumentationConfigurationsRequest : public ApplicationSignalsRequest {
 public:
  AWS_APPLICATIONSIGNALS_API ListInstrumentationConfigurationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListInstrumentationConfigurations"; }

  AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the service to retrieve instrumentation configurations for.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  ListInstrumentationConfigurationsRequest& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment that the service is running in.</p>
   */
  inline const Aws::String& GetEnvironment() const { return m_environment; }
  inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
  template <typename EnvironmentT = Aws::String>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = Aws::String>
  ListInstrumentationConfigurationsRequest& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of instrumentation configuration (BREAKPOINT or PROBE). Required to
   * determine which backing store to query.</p>
   */
  inline InstrumentationType GetInstrumentationType() const { return m_instrumentationType; }
  inline bool InstrumentationTypeHasBeenSet() const { return m_instrumentationTypeHasBeenSet; }
  inline void SetInstrumentationType(InstrumentationType value) {
    m_instrumentationTypeHasBeenSet = true;
    m_instrumentationType = value;
  }
  inline ListInstrumentationConfigurationsRequest& WithInstrumentationType(InstrumentationType value) {
    SetInstrumentationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp from the last successful sync. When provided, the response
   * returns <code>Changed</code> as <code>false</code> if nothing is new since this
   * time, or returns the latest configurations when changes exist.</p>
   */
  inline const Aws::Utils::DateTime& GetSyncedAt() const { return m_syncedAt; }
  inline bool SyncedAtHasBeenSet() const { return m_syncedAtHasBeenSet; }
  template <typename SyncedAtT = Aws::Utils::DateTime>
  void SetSyncedAt(SyncedAtT&& value) {
    m_syncedAtHasBeenSet = true;
    m_syncedAt = std::forward<SyncedAtT>(value);
  }
  template <typename SyncedAtT = Aws::Utils::DateTime>
  ListInstrumentationConfigurationsRequest& WithSyncedAt(SyncedAtT&& value) {
    SetSyncedAt(std::forward<SyncedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of configurations to return in one call. The default is 50
   * and the maximum is 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListInstrumentationConfigurationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use the token returned by a previous call to retrieve the next page of
   * configurations.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInstrumentationConfigurationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_service;

  Aws::String m_environment;

  InstrumentationType m_instrumentationType{InstrumentationType::NOT_SET};

  Aws::Utils::DateTime m_syncedAt{};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_serviceHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_instrumentationTypeHasBeenSet = false;
  bool m_syncedAtHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
