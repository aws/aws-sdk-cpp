/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Represents a successfully deleted instrumentation
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/BatchDeleteSuccessfulDeletion">AWS
 * API Reference</a></p>
 */
class BatchDeleteSuccessfulDeletion {
 public:
  AWS_APPLICATIONSIGNALS_API BatchDeleteSuccessfulDeletion() = default;
  AWS_APPLICATIONSIGNALS_API BatchDeleteSuccessfulDeletion(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API BatchDeleteSuccessfulDeletion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ARN of the deleted configuration (populated only when deleting by ARN
   * list).</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  BatchDeleteSuccessfulDeletion& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Signal type of the deleted configuration (populated only when deleting by
   * scope).</p>
   */
  inline const Aws::String& GetSignalType() const { return m_signalType; }
  inline bool SignalTypeHasBeenSet() const { return m_signalTypeHasBeenSet; }
  template <typename SignalTypeT = Aws::String>
  void SetSignalType(SignalTypeT&& value) {
    m_signalTypeHasBeenSet = true;
    m_signalType = std::forward<SignalTypeT>(value);
  }
  template <typename SignalTypeT = Aws::String>
  BatchDeleteSuccessfulDeletion& WithSignalType(SignalTypeT&& value) {
    SetSignalType(std::forward<SignalTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Location hash of the deleted configuration (populated only when deleting by
   * scope).</p>
   */
  inline const Aws::String& GetLocationHash() const { return m_locationHash; }
  inline bool LocationHashHasBeenSet() const { return m_locationHashHasBeenSet; }
  template <typename LocationHashT = Aws::String>
  void SetLocationHash(LocationHashT&& value) {
    m_locationHashHasBeenSet = true;
    m_locationHash = std::forward<LocationHashT>(value);
  }
  template <typename LocationHashT = Aws::String>
  BatchDeleteSuccessfulDeletion& WithLocationHash(LocationHashT&& value) {
    SetLocationHash(std::forward<LocationHashT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_signalType;

  Aws::String m_locationHash;
  bool m_resourceArnHasBeenSet = false;
  bool m_signalTypeHasBeenSet = false;
  bool m_locationHashHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
