/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/Health_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Health {
namespace Model {

/**
 * <p>A filter for narrowing down service lifecycle results.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/ServiceLifecycleFilter">AWS
 * API Reference</a></p>
 */
class ServiceLifecycleFilter {
 public:
  AWS_HEALTH_API ServiceLifecycleFilter() = default;
  AWS_HEALTH_API ServiceLifecycleFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTH_API ServiceLifecycleFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services service name to filter by.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  ServiceLifecycleFilter& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_service;
  bool m_serviceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
