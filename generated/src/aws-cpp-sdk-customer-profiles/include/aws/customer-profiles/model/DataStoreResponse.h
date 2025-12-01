/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/Readiness.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>The data store response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DataStoreResponse">AWS
 * API Reference</a></p>
 */
class DataStoreResponse {
 public:
  AWS_CUSTOMERPROFILES_API DataStoreResponse() = default;
  AWS_CUSTOMERPROFILES_API DataStoreResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API DataStoreResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>True if data store is enabled for this domain</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline DataStoreResponse& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Readiness& GetReadiness() const { return m_readiness; }
  inline bool ReadinessHasBeenSet() const { return m_readinessHasBeenSet; }
  template <typename ReadinessT = Readiness>
  void SetReadiness(ReadinessT&& value) {
    m_readinessHasBeenSet = true;
    m_readiness = std::forward<ReadinessT>(value);
  }
  template <typename ReadinessT = Readiness>
  DataStoreResponse& WithReadiness(ReadinessT&& value) {
    SetReadiness(std::forward<ReadinessT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};
  bool m_enabledHasBeenSet = false;

  Readiness m_readiness;
  bool m_readinessHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
