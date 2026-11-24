/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/OntapError.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>Describes why a resource lifecycle state changed.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/LifecycleTransitionReason">AWS
 * API Reference</a></p>
 */
class LifecycleTransitionReason {
 public:
  AWS_FSX_API LifecycleTransitionReason() = default;
  AWS_FSX_API LifecycleTransitionReason(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API LifecycleTransitionReason& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  LifecycleTransitionReason& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error returned by ONTAP when an operation on the resource fails. Returned
   * only for certain FSx for ONTAP resources.</p>
   */
  inline const OntapError& GetOntapError() const { return m_ontapError; }
  inline bool OntapErrorHasBeenSet() const { return m_ontapErrorHasBeenSet; }
  template <typename OntapErrorT = OntapError>
  void SetOntapError(OntapErrorT&& value) {
    m_ontapErrorHasBeenSet = true;
    m_ontapError = std::forward<OntapErrorT>(value);
  }
  template <typename OntapErrorT = OntapError>
  LifecycleTransitionReason& WithOntapError(OntapErrorT&& value) {
    SetOntapError(std::forward<OntapErrorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  OntapError m_ontapError;
  bool m_messageHasBeenSet = false;
  bool m_ontapErrorHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
