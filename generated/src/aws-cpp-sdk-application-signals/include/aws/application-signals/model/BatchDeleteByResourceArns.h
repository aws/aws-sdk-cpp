/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/InstrumentationType.h>
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
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Parameters for targeted delete by ARN list.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/BatchDeleteByResourceArns">AWS
 * API Reference</a></p>
 */
class BatchDeleteByResourceArns {
 public:
  AWS_APPLICATIONSIGNALS_API BatchDeleteByResourceArns() = default;
  AWS_APPLICATIONSIGNALS_API BatchDeleteByResourceArns(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API BatchDeleteByResourceArns& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>List of resource ARNs to delete.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
  inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
  template <typename ResourceArnsT = Aws::Vector<Aws::String>>
  void SetResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns = std::forward<ResourceArnsT>(value);
  }
  template <typename ResourceArnsT = Aws::Vector<Aws::String>>
  BatchDeleteByResourceArns& WithResourceArns(ResourceArnsT&& value) {
    SetResourceArns(std::forward<ResourceArnsT>(value));
    return *this;
  }
  template <typename ResourceArnsT = Aws::String>
  BatchDeleteByResourceArns& AddResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instrumentation type: BREAKPOINT or PROBE.</p>
   */
  inline InstrumentationType GetInstrumentationType() const { return m_instrumentationType; }
  inline bool InstrumentationTypeHasBeenSet() const { return m_instrumentationTypeHasBeenSet; }
  inline void SetInstrumentationType(InstrumentationType value) {
    m_instrumentationTypeHasBeenSet = true;
    m_instrumentationType = value;
  }
  inline BatchDeleteByResourceArns& WithInstrumentationType(InstrumentationType value) {
    SetInstrumentationType(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_resourceArns;

  InstrumentationType m_instrumentationType{InstrumentationType::NOT_SET};
  bool m_resourceArnsHasBeenSet = false;
  bool m_instrumentationTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
