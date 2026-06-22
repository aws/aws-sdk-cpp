/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/InstrumentationConfigurationWithoutServiceEnv.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {
class ListInstrumentationConfigurationsResult {
 public:
  AWS_APPLICATIONSIGNALS_API ListInstrumentationConfigurationsResult() = default;
  AWS_APPLICATIONSIGNALS_API ListInstrumentationConfigurationsResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPLICATIONSIGNALS_API ListInstrumentationConfigurationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The service name associated with the returned configurations.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  ListInstrumentationConfigurationsResult& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment associated with the returned configurations.</p>
   */
  inline const Aws::String& GetEnvironment() const { return m_environment; }
  template <typename EnvironmentT = Aws::String>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = Aws::String>
  ListInstrumentationConfigurationsResult& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether there are configuration changes since the provided
   * <code>SyncedAt</code> timestamp.</p>
   */
  inline bool GetChanged() const { return m_changed; }
  inline void SetChanged(bool value) {
    m_changedHasBeenSet = true;
    m_changed = value;
  }
  inline ListInstrumentationConfigurationsResult& WithChanged(bool value) {
    SetChanged(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current set of active instrumentation configurations for the service and
   * environment. Items omit service and environment because they are provided in the
   * request.</p>
   */
  inline const Aws::Vector<InstrumentationConfigurationWithoutServiceEnv>& GetLatestConfigurations() const {
    return m_latestConfigurations;
  }
  template <typename LatestConfigurationsT = Aws::Vector<InstrumentationConfigurationWithoutServiceEnv>>
  void SetLatestConfigurations(LatestConfigurationsT&& value) {
    m_latestConfigurationsHasBeenSet = true;
    m_latestConfigurations = std::forward<LatestConfigurationsT>(value);
  }
  template <typename LatestConfigurationsT = Aws::Vector<InstrumentationConfigurationWithoutServiceEnv>>
  ListInstrumentationConfigurationsResult& WithLatestConfigurations(LatestConfigurationsT&& value) {
    SetLatestConfigurations(std::forward<LatestConfigurationsT>(value));
    return *this;
  }
  template <typename LatestConfigurationsT = InstrumentationConfigurationWithoutServiceEnv>
  ListInstrumentationConfigurationsResult& AddLatestConfigurations(LatestConfigurationsT&& value) {
    m_latestConfigurationsHasBeenSet = true;
    m_latestConfigurations.emplace_back(std::forward<LatestConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The server timestamp to supply on the next sync call.</p>
   */
  inline const Aws::Utils::DateTime& GetSyncedAt() const { return m_syncedAt; }
  template <typename SyncedAtT = Aws::Utils::DateTime>
  void SetSyncedAt(SyncedAtT&& value) {
    m_syncedAtHasBeenSet = true;
    m_syncedAt = std::forward<SyncedAtT>(value);
  }
  template <typename SyncedAtT = Aws::Utils::DateTime>
  ListInstrumentationConfigurationsResult& WithSyncedAt(SyncedAtT&& value) {
    SetSyncedAt(std::forward<SyncedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The suggested number of seconds to wait before the next sync request. This is
   * at least 60 seconds to prevent excessive polling.</p>
   */
  inline int GetSyncInterval() const { return m_syncInterval; }
  inline void SetSyncInterval(int value) {
    m_syncIntervalHasBeenSet = true;
    m_syncInterval = value;
  }
  inline ListInstrumentationConfigurationsResult& WithSyncInterval(int value) {
    SetSyncInterval(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token to continue listing configurations when more results are
   * available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInstrumentationConfigurationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListInstrumentationConfigurationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_service;

  Aws::String m_environment;

  bool m_changed{false};

  Aws::Vector<InstrumentationConfigurationWithoutServiceEnv> m_latestConfigurations;

  Aws::Utils::DateTime m_syncedAt{};

  int m_syncInterval{0};

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_serviceHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_changedHasBeenSet = false;
  bool m_latestConfigurationsHasBeenSet = false;
  bool m_syncedAtHasBeenSet = false;
  bool m_syncIntervalHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
