/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Failure.h>
#include <aws/ecs/model/Service.h>

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
/**
 * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DescribeServicesResponse">AWS
 * API Reference</a></p>
 */
class DescribeServicesResult {
 public:
  AWS_ECS_API DescribeServicesResult() = default;
  AWS_ECS_API DescribeServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API DescribeServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of services described.</p>
   */
  inline const Aws::Vector<Service>& GetServices() const { return m_services; }
  template <typename ServicesT = Aws::Vector<Service>>
  void SetServices(ServicesT&& value) {
    m_servicesHasBeenSet = true;
    m_services = std::forward<ServicesT>(value);
  }
  template <typename ServicesT = Aws::Vector<Service>>
  DescribeServicesResult& WithServices(ServicesT&& value) {
    SetServices(std::forward<ServicesT>(value));
    return *this;
  }
  template <typename ServicesT = Service>
  DescribeServicesResult& AddServices(ServicesT&& value) {
    m_servicesHasBeenSet = true;
    m_services.emplace_back(std::forward<ServicesT>(value));
    return *this;
  }
  ///@}

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
  DescribeServicesResult& WithFailures(FailuresT&& value) {
    SetFailures(std::forward<FailuresT>(value));
    return *this;
  }
  template <typename FailuresT = Failure>
  DescribeServicesResult& AddFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures.emplace_back(std::forward<FailuresT>(value));
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
  DescribeServicesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Service> m_services;

  Aws::Vector<Failure> m_failures;

  Aws::String m_requestId;
  bool m_servicesHasBeenSet = false;
  bool m_failuresHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
