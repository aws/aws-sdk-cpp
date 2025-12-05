/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {
class CreateSecurityProfileResult {
 public:
  AWS_IOT_API CreateSecurityProfileResult() = default;
  AWS_IOT_API CreateSecurityProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOT_API CreateSecurityProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name you gave to the security profile.</p>
   */
  inline const Aws::String& GetSecurityProfileName() const { return m_securityProfileName; }
  template <typename SecurityProfileNameT = Aws::String>
  void SetSecurityProfileName(SecurityProfileNameT&& value) {
    m_securityProfileNameHasBeenSet = true;
    m_securityProfileName = std::forward<SecurityProfileNameT>(value);
  }
  template <typename SecurityProfileNameT = Aws::String>
  CreateSecurityProfileResult& WithSecurityProfileName(SecurityProfileNameT&& value) {
    SetSecurityProfileName(std::forward<SecurityProfileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the security profile.</p>
   */
  inline const Aws::String& GetSecurityProfileArn() const { return m_securityProfileArn; }
  template <typename SecurityProfileArnT = Aws::String>
  void SetSecurityProfileArn(SecurityProfileArnT&& value) {
    m_securityProfileArnHasBeenSet = true;
    m_securityProfileArn = std::forward<SecurityProfileArnT>(value);
  }
  template <typename SecurityProfileArnT = Aws::String>
  CreateSecurityProfileResult& WithSecurityProfileArn(SecurityProfileArnT&& value) {
    SetSecurityProfileArn(std::forward<SecurityProfileArnT>(value));
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
  CreateSecurityProfileResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_securityProfileName;

  Aws::String m_securityProfileArn;

  Aws::String m_requestId;
  bool m_securityProfileNameHasBeenSet = false;
  bool m_securityProfileArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
