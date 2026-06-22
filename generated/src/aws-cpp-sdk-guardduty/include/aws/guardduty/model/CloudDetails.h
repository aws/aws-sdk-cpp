/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CloudProvider.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains details about the cloud environment associated with an
 * investigation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CloudDetails">AWS
 * API Reference</a></p>
 */
class CloudDetails {
 public:
  AWS_GUARDDUTY_API CloudDetails() = default;
  AWS_GUARDDUTY_API CloudDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API CloudDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The cloud provider. Currently, only <code>AWS</code> is supported.</p>
   */
  inline CloudProvider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(CloudProvider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline CloudDetails& WithProvider(CloudProvider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region in which the investigated resource
   * resides.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  CloudDetails& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the investigated resource.</p>
   */
  inline const Aws::String& GetAccount() const { return m_account; }
  inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
  template <typename AccountT = Aws::String>
  void SetAccount(AccountT&& value) {
    m_accountHasBeenSet = true;
    m_account = std::forward<AccountT>(value);
  }
  template <typename AccountT = Aws::String>
  CloudDetails& WithAccount(AccountT&& value) {
    SetAccount(std::forward<AccountT>(value));
    return *this;
  }
  ///@}
 private:
  CloudProvider m_provider{CloudProvider::NOT_SET};

  Aws::String m_region;

  Aws::String m_account;
  bool m_providerHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_accountHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
