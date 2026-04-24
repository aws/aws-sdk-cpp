/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonDeployment.h>
#include <aws/ecs/model/Failure.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {
class DescribeDaemonDeploymentsResult {
 public:
  AWS_ECS_API DescribeDaemonDeploymentsResult() = default;
  AWS_ECS_API DescribeDaemonDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API DescribeDaemonDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Any failures associated with the call.</p>
   */
  inline const Aws::Vector<Failure>& GetFailures() const { return m_failures; }
  template <typename FailuresT = Aws::Vector<Failure>>
  void SetFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures = std::forward<FailuresT>(value);
  }
  template <typename FailuresT = Aws::Vector<Failure>>
  DescribeDaemonDeploymentsResult& WithFailures(FailuresT&& value) {
    SetFailures(std::forward<FailuresT>(value));
    return *this;
  }
  template <typename FailuresT = Failure>
  DescribeDaemonDeploymentsResult& AddFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures.emplace_back(std::forward<FailuresT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of daemon deployments.</p>
   */
  inline const Aws::Vector<DaemonDeployment>& GetDaemonDeployments() const { return m_daemonDeployments; }
  template <typename DaemonDeploymentsT = Aws::Vector<DaemonDeployment>>
  void SetDaemonDeployments(DaemonDeploymentsT&& value) {
    m_daemonDeploymentsHasBeenSet = true;
    m_daemonDeployments = std::forward<DaemonDeploymentsT>(value);
  }
  template <typename DaemonDeploymentsT = Aws::Vector<DaemonDeployment>>
  DescribeDaemonDeploymentsResult& WithDaemonDeployments(DaemonDeploymentsT&& value) {
    SetDaemonDeployments(std::forward<DaemonDeploymentsT>(value));
    return *this;
  }
  template <typename DaemonDeploymentsT = DaemonDeployment>
  DescribeDaemonDeploymentsResult& AddDaemonDeployments(DaemonDeploymentsT&& value) {
    m_daemonDeploymentsHasBeenSet = true;
    m_daemonDeployments.emplace_back(std::forward<DaemonDeploymentsT>(value));
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
  DescribeDaemonDeploymentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Failure> m_failures;

  Aws::Vector<DaemonDeployment> m_daemonDeployments;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_failuresHasBeenSet = false;
  bool m_daemonDeploymentsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
