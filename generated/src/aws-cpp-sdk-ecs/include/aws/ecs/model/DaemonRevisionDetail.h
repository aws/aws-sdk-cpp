/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonCapacityProvider.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>Details about a daemon revision, including the running task counts per
 * capacity provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonRevisionDetail">AWS
 * API Reference</a></p>
 */
class DaemonRevisionDetail {
 public:
  AWS_ECS_API DaemonRevisionDetail() = default;
  AWS_ECS_API DaemonRevisionDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonRevisionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon revision.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DaemonRevisionDetail& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacity providers associated with this daemon revision.</p>
   */
  inline const Aws::Vector<DaemonCapacityProvider>& GetCapacityProviders() const { return m_capacityProviders; }
  inline bool CapacityProvidersHasBeenSet() const { return m_capacityProvidersHasBeenSet; }
  template <typename CapacityProvidersT = Aws::Vector<DaemonCapacityProvider>>
  void SetCapacityProviders(CapacityProvidersT&& value) {
    m_capacityProvidersHasBeenSet = true;
    m_capacityProviders = std::forward<CapacityProvidersT>(value);
  }
  template <typename CapacityProvidersT = Aws::Vector<DaemonCapacityProvider>>
  DaemonRevisionDetail& WithCapacityProviders(CapacityProvidersT&& value) {
    SetCapacityProviders(std::forward<CapacityProvidersT>(value));
    return *this;
  }
  template <typename CapacityProvidersT = DaemonCapacityProvider>
  DaemonRevisionDetail& AddCapacityProviders(CapacityProvidersT&& value) {
    m_capacityProvidersHasBeenSet = true;
    m_capacityProviders.emplace_back(std::forward<CapacityProvidersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of daemon tasks running for this revision.</p>
   */
  inline int GetTotalRunningCount() const { return m_totalRunningCount; }
  inline bool TotalRunningCountHasBeenSet() const { return m_totalRunningCountHasBeenSet; }
  inline void SetTotalRunningCount(int value) {
    m_totalRunningCountHasBeenSet = true;
    m_totalRunningCount = value;
  }
  inline DaemonRevisionDetail& WithTotalRunningCount(int value) {
    SetTotalRunningCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::Vector<DaemonCapacityProvider> m_capacityProviders;

  int m_totalRunningCount{0};
  bool m_arnHasBeenSet = false;
  bool m_capacityProvidersHasBeenSet = false;
  bool m_totalRunningCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
