/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

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
 * <p>Describes the HTTP status codes that your application returns to indicate
 * successful and failed attempts. The Web Application Firewall (WAF) rule group
 * uses these status codes to track successful and failed attempts.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/WafResponseInspection">AWS
 * API Reference</a></p>
 */
class WafResponseInspection {
 public:
  AWS_LIGHTSAIL_API WafResponseInspection() = default;
  AWS_LIGHTSAIL_API WafResponseInspection(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API WafResponseInspection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTP status codes that indicate a successful attempt (for example,
   * <code>200</code>).</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to
   * 10 status codes.</p> </li> <li> <p>Each status code must be from <code>0</code>
   * to <code>999</code>.</p> </li> <li> <p>Can't contain a status code that is also
   * in <code>failureCodes</code>.</p> </li> </ul>
   */
  inline const Aws::Vector<int>& GetSuccessCodes() const { return m_successCodes; }
  inline bool SuccessCodesHasBeenSet() const { return m_successCodesHasBeenSet; }
  template <typename SuccessCodesT = Aws::Vector<int>>
  void SetSuccessCodes(SuccessCodesT&& value) {
    m_successCodesHasBeenSet = true;
    m_successCodes = std::forward<SuccessCodesT>(value);
  }
  template <typename SuccessCodesT = Aws::Vector<int>>
  WafResponseInspection& WithSuccessCodes(SuccessCodesT&& value) {
    SetSuccessCodes(std::forward<SuccessCodesT>(value));
    return *this;
  }
  inline WafResponseInspection& AddSuccessCodes(int value) {
    m_successCodesHasBeenSet = true;
    m_successCodes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status codes that indicate a failed attempt (for example,
   * <code>401</code>).</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to
   * 10 status codes.</p> </li> <li> <p>Each status code must be from <code>0</code>
   * to <code>999</code>.</p> </li> <li> <p>Can't contain a status code that is also
   * in <code>successCodes</code>.</p> </li> </ul>
   */
  inline const Aws::Vector<int>& GetFailureCodes() const { return m_failureCodes; }
  inline bool FailureCodesHasBeenSet() const { return m_failureCodesHasBeenSet; }
  template <typename FailureCodesT = Aws::Vector<int>>
  void SetFailureCodes(FailureCodesT&& value) {
    m_failureCodesHasBeenSet = true;
    m_failureCodes = std::forward<FailureCodesT>(value);
  }
  template <typename FailureCodesT = Aws::Vector<int>>
  WafResponseInspection& WithFailureCodes(FailureCodesT&& value) {
    SetFailureCodes(std::forward<FailureCodesT>(value));
    return *this;
  }
  inline WafResponseInspection& AddFailureCodes(int value) {
    m_failureCodesHasBeenSet = true;
    m_failureCodes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<int> m_successCodes;

  Aws::Vector<int> m_failureCodes;
  bool m_successCodesHasBeenSet = false;
  bool m_failureCodesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
