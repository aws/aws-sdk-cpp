/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Lightsail {
namespace Model {

/**
 */
class CheckSubdomainAvailabilityRequest : public LightsailRequest {
 public:
  AWS_LIGHTSAIL_API CheckSubdomainAvailabilityRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CheckSubdomainAvailability"; }

  AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

  AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The subdomain to check (for example, <code>mysite</code> or
   * <code>blog.mysite</code>).</p> <p>A subdomain can contain one or two labels
   * separated by a period (<code>.</code>). Each label must start and end with a
   * lowercase letter or a number, and can contain only lowercase letters, numbers,
   * and hyphens (<code>-</code>). The name can be up to 39 characters long,
   * including periods. Labels that start with <code>xn--</code> aren't supported,
   * and some names are reserved.</p> <p>Specify only the subdomain. A web address,
   * such as <code>mysite.amazonlightsail.com</code>, isn't accepted.</p>
   */
  inline const Aws::String& GetSubdomainName() const { return m_subdomainName; }
  inline bool SubdomainNameHasBeenSet() const { return m_subdomainNameHasBeenSet; }
  template <typename SubdomainNameT = Aws::String>
  void SetSubdomainName(SubdomainNameT&& value) {
    m_subdomainNameHasBeenSet = true;
    m_subdomainName = std::forward<SubdomainNameT>(value);
  }
  template <typename SubdomainNameT = Aws::String>
  CheckSubdomainAvailabilityRequest& WithSubdomainName(SubdomainNameT&& value) {
    SetSubdomainName(std::forward<SubdomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to reserve the subdomain for your account if it's
   * available. A reservation holds the subdomain for 15 minutes so that other
   * accounts can't create it. Checking the subdomain again doesn't extend the
   * reservation.</p> <p>For a nested subdomain, such as <code>blog.mysite</code>,
   * the top-level subdomain (<code>mysite</code>) is reserved.</p> <p>You can have
   * up to 5 active reservations at a time.</p>
   */
  inline bool GetReserve() const { return m_reserve; }
  inline bool ReserveHasBeenSet() const { return m_reserveHasBeenSet; }
  inline void SetReserve(bool value) {
    m_reserveHasBeenSet = true;
    m_reserve = value;
  }
  inline CheckSubdomainAvailabilityRequest& WithReserve(bool value) {
    SetReserve(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_subdomainName;

  bool m_reserve{false};
  bool m_subdomainNameHasBeenSet = false;
  bool m_reserveHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
