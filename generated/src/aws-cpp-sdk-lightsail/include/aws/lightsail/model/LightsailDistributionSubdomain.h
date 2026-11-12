/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/LightsailDistributionSubdomainStateEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {

/**
 * <p>Describes the Lightsail subdomain of a distribution. The distribution is
 * reachable at the subdomain's web address, which is the subdomain followed by
 * <code>amazonlightsail.com</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LightsailDistributionSubdomain">AWS
 * API Reference</a></p>
 */
class LightsailDistributionSubdomain {
 public:
  AWS_LIGHTSAIL_API LightsailDistributionSubdomain() = default;
  AWS_LIGHTSAIL_API LightsailDistributionSubdomain(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API LightsailDistributionSubdomain& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The subdomain (for example, <code>mysite</code>), not its web address.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  LightsailDistributionSubdomain& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the subdomain for the distribution.</p> <p>The following states
   * are possible:</p> <ul> <li> <p> <code>Creating</code> – The subdomain is being
   * created.</p> </li> <li> <p> <code>Attaching</code> – The subdomain is being
   * associated with the distribution.</p> </li> <li> <p> <code>Attached</code> – The
   * subdomain is associated with the distribution.</p> </li> <li> <p>
   * <code>Error</code> – The subdomain couldn't be created or associated with the
   * distribution. For more information, see the <code>errorCode</code> and
   * <code>errorDetails</code> parameters.</p> </li> </ul>
   */
  inline LightsailDistributionSubdomainStateEnum GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(LightsailDistributionSubdomainStateEnum value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline LightsailDistributionSubdomain& WithState(LightsailDistributionSubdomainStateEnum value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code that describes why the subdomain is in the <code>Error</code>
   * state.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  LightsailDistributionSubdomain& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the error that caused the subdomain to be in the
   * <code>Error</code> state.</p>
   */
  inline const Aws::String& GetErrorDetails() const { return m_errorDetails; }
  inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
  template <typename ErrorDetailsT = Aws::String>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = Aws::String>
  LightsailDistributionSubdomain& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  LightsailDistributionSubdomainStateEnum m_state{LightsailDistributionSubdomainStateEnum::NOT_SET};

  Aws::String m_errorCode;

  Aws::String m_errorDetails;
  bool m_nameHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
