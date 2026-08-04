/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AssociationTypeEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Information about an application status check association. Each item in the
 * <code>associationSet</code> of a
 * <code>DescribeApplicationStatusCheckAssociations</code> response is of this
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ApplicationStatusCheckAssociationObject">AWS
 * API Reference</a></p>
 */
class ApplicationStatusCheckAssociationObject {
 public:
  AWS_EC2_API ApplicationStatusCheckAssociationObject() = default;
  AWS_EC2_API ApplicationStatusCheckAssociationObject(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ApplicationStatusCheckAssociationObject& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the application status check.</p>
   */
  inline const Aws::String& GetApplicationStatusCheckId() const { return m_applicationStatusCheckId; }
  inline bool ApplicationStatusCheckIdHasBeenSet() const { return m_applicationStatusCheckIdHasBeenSet; }
  template <typename ApplicationStatusCheckIdT = Aws::String>
  void SetApplicationStatusCheckId(ApplicationStatusCheckIdT&& value) {
    m_applicationStatusCheckIdHasBeenSet = true;
    m_applicationStatusCheckId = std::forward<ApplicationStatusCheckIdT>(value);
  }
  template <typename ApplicationStatusCheckIdT = Aws::String>
  ApplicationStatusCheckAssociationObject& WithApplicationStatusCheckId(ApplicationStatusCheckIdT&& value) {
    SetApplicationStatusCheckId(std::forward<ApplicationStatusCheckIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of target that the application status check is associated with.
   * Possible values:</p> <ul> <li> <p> <code>tag</code> – The check applies to
   * current and future instances with a matching tag key-value pair.</p> </li> <li>
   * <p> <code>instance-id</code> – The check applies to a specific instance.</p>
   * </li> </ul>
   */
  inline AssociationTypeEnum GetAssociationType() const { return m_associationType; }
  inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
  inline void SetAssociationType(AssociationTypeEnum value) {
    m_associationTypeHasBeenSet = true;
    m_associationType = value;
  }
  inline ApplicationStatusCheckAssociationObject& WithAssociationType(AssociationTypeEnum value) {
    SetAssociationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key for the association. This value is present only for tag-based
   * associations, where it contains the tag key. For instance-based associations,
   * this value is absent.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  ApplicationStatusCheckAssociationObject& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value for the association target. For tag-based associations, this is the
   * tag value. For instance-based associations, this is the instance ID (for
   * example, <code>i-0123456789abcdef0</code>).</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  ApplicationStatusCheckAssociationObject& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationStatusCheckId;

  AssociationTypeEnum m_associationType{AssociationTypeEnum::NOT_SET};

  Aws::String m_key;

  Aws::String m_value;
  bool m_applicationStatusCheckIdHasBeenSet = false;
  bool m_associationTypeHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
