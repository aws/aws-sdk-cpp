/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Network policy for agent execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/EnvironmentNetworkConfiguration">AWS
 * API Reference</a></p>
 */
class EnvironmentNetworkConfiguration {
 public:
  AWS_CONTINUUM_API EnvironmentNetworkConfiguration() = default;
  AWS_CONTINUUM_API EnvironmentNetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API EnvironmentNetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Domains that an environment's agent execution may contact.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedDomains() const { return m_allowedDomains; }
  inline bool AllowedDomainsHasBeenSet() const { return m_allowedDomainsHasBeenSet; }
  template <typename AllowedDomainsT = Aws::Vector<Aws::String>>
  void SetAllowedDomains(AllowedDomainsT&& value) {
    m_allowedDomainsHasBeenSet = true;
    m_allowedDomains = std::forward<AllowedDomainsT>(value);
  }
  template <typename AllowedDomainsT = Aws::Vector<Aws::String>>
  EnvironmentNetworkConfiguration& WithAllowedDomains(AllowedDomainsT&& value) {
    SetAllowedDomains(std::forward<AllowedDomainsT>(value));
    return *this;
  }
  template <typename AllowedDomainsT = Aws::String>
  EnvironmentNetworkConfiguration& AddAllowedDomains(AllowedDomainsT&& value) {
    m_allowedDomainsHasBeenSet = true;
    m_allowedDomains.emplace_back(std::forward<AllowedDomainsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_allowedDomains;
  bool m_allowedDomainsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
