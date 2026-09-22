/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>A telemetry field available for use in query expressions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/Field">AWS
 * API Reference</a></p>
 */
class Field {
 public:
  AWS_CLOUDWATCHOMNI_API Field() = default;
  AWS_CLOUDWATCHOMNI_API Field(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API Field& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of the field. Field names are case-sensitive and must be used
   * exactly as returned when referencing them in query expressions.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Field& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Child fields nested under this field.</p>
   */
  inline const Aws::Vector<Field>& GetChildren() const { return m_children; }
  inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
  template <typename ChildrenT = Aws::Vector<Field>>
  void SetChildren(ChildrenT&& value) {
    m_childrenHasBeenSet = true;
    m_children = std::forward<ChildrenT>(value);
  }
  template <typename ChildrenT = Aws::Vector<Field>>
  Field& WithChildren(ChildrenT&& value) {
    SetChildren(std::forward<ChildrenT>(value));
    return *this;
  }
  template <typename ChildrenT = Field>
  Field& AddChildren(ChildrenT&& value) {
    m_childrenHasBeenSet = true;
    m_children.emplace_back(std::forward<ChildrenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<Field> m_children;
  bool m_nameHasBeenSet = false;
  bool m_childrenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
