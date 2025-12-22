/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/HookTargetAction.h>
#include <aws/cloudformation/model/HookTargetType.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFormation {
namespace Model {

/**
 * <p>The <code>HookTarget</code> data type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/HookTarget">AWS
 * API Reference</a></p>
 */
class HookTarget {
 public:
  AWS_CLOUDFORMATION_API HookTarget() = default;
  AWS_CLOUDFORMATION_API HookTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API HookTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The target type.</p>
   */
  inline HookTargetType GetTargetType() const { return m_targetType; }
  inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
  inline void SetTargetType(HookTargetType value) {
    m_targetTypeHasBeenSet = true;
    m_targetType = value;
  }
  inline HookTarget& WithTargetType(HookTargetType value) {
    SetTargetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target name, for example, <code>AWS::S3::Bucket</code>.</p>
   */
  inline const Aws::String& GetTargetTypeName() const { return m_targetTypeName; }
  inline bool TargetTypeNameHasBeenSet() const { return m_targetTypeNameHasBeenSet; }
  template <typename TargetTypeNameT = Aws::String>
  void SetTargetTypeName(TargetTypeNameT&& value) {
    m_targetTypeNameHasBeenSet = true;
    m_targetTypeName = std::forward<TargetTypeNameT>(value);
  }
  template <typename TargetTypeNameT = Aws::String>
  HookTarget& WithTargetTypeName(TargetTypeNameT&& value) {
    SetTargetTypeName(std::forward<TargetTypeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Hook invocation target.</p>
   */
  inline const Aws::String& GetTargetId() const { return m_targetId; }
  inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
  template <typename TargetIdT = Aws::String>
  void SetTargetId(TargetIdT&& value) {
    m_targetIdHasBeenSet = true;
    m_targetId = std::forward<TargetIdT>(value);
  }
  template <typename TargetIdT = Aws::String>
  HookTarget& WithTargetId(TargetIdT&& value) {
    SetTargetId(std::forward<TargetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action that invoked the Hook.</p>
   */
  inline HookTargetAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(HookTargetAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline HookTarget& WithAction(HookTargetAction value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  HookTargetType m_targetType{HookTargetType::NOT_SET};

  Aws::String m_targetTypeName;

  Aws::String m_targetId;

  HookTargetAction m_action{HookTargetAction::NOT_SET};
  bool m_targetTypeHasBeenSet = false;
  bool m_targetTypeNameHasBeenSet = false;
  bool m_targetIdHasBeenSet = false;
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
