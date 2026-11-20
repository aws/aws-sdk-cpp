/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/FailedItemErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>One entry per Managed API ID that could not be processed in a batch call. Ids
 * that succeed are omitted from the response — callers infer success by
 * absence.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/FailedManagedApiItem">AWS
 * API Reference</a></p>
 */
class FailedManagedApiItem {
 public:
  AWS_APIPORTAL_API FailedManagedApiItem() = default;
  AWS_APIPORTAL_API FailedManagedApiItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API FailedManagedApiItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the Managed API that could not be processed.</p>
   */
  inline const Aws::String& GetManagedApiId() const { return m_managedApiId; }
  inline bool ManagedApiIdHasBeenSet() const { return m_managedApiIdHasBeenSet; }
  template <typename ManagedApiIdT = Aws::String>
  void SetManagedApiId(ManagedApiIdT&& value) {
    m_managedApiIdHasBeenSet = true;
    m_managedApiId = std::forward<ManagedApiIdT>(value);
  }
  template <typename ManagedApiIdT = Aws::String>
  FailedManagedApiItem& WithManagedApiId(ManagedApiIdT&& value) {
    SetManagedApiId(std::forward<ManagedApiIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline FailedItemErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(FailedItemErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline FailedManagedApiItem& WithErrorCode(FailedItemErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the failure.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  FailedManagedApiItem& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_managedApiId;

  FailedItemErrorCode m_errorCode{FailedItemErrorCode::NOT_SET};

  Aws::String m_errorMessage;
  bool m_managedApiIdHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
