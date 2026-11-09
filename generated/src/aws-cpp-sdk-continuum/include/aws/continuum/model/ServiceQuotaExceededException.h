/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The request would exceed a service quota. Review your quota and request an
 * increase if needed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ServiceQuotaExceededException">AWS
 * API Reference</a></p>
 */
class ServiceQuotaExceededException {
 public:
  AWS_CONTINUUM_API ServiceQuotaExceededException() = default;
  AWS_CONTINUUM_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Description of the quota that was exceeded.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ServiceQuotaExceededException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The quota code for the exceeded limit.</p>
   */
  inline const Aws::String& GetQuotaCode() const { return m_quotaCode; }
  inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
  template <typename QuotaCodeT = Aws::String>
  void SetQuotaCode(QuotaCodeT&& value) {
    m_quotaCodeHasBeenSet = true;
    m_quotaCode = std::forward<QuotaCodeT>(value);
  }
  template <typename QuotaCodeT = Aws::String>
  ServiceQuotaExceededException& WithQuotaCode(QuotaCodeT&& value) {
    SetQuotaCode(std::forward<QuotaCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service code for the exceeded limit.</p>
   */
  inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
  inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
  template <typename ServiceCodeT = Aws::String>
  void SetServiceCode(ServiceCodeT&& value) {
    m_serviceCodeHasBeenSet = true;
    m_serviceCode = std::forward<ServiceCodeT>(value);
  }
  template <typename ServiceCodeT = Aws::String>
  ServiceQuotaExceededException& WithServiceCode(ServiceCodeT&& value) {
    SetServiceCode(std::forward<ServiceCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_quotaCode;

  Aws::String m_serviceCode;
  bool m_messageHasBeenSet = false;
  bool m_quotaCodeHasBeenSet = false;
  bool m_serviceCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
