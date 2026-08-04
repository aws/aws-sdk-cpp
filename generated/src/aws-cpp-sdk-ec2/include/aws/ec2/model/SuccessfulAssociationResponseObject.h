/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

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
 * <p>Describes a successful application status check association.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SuccessfulAssociationResponseObject">AWS
 * API Reference</a></p>
 */
class SuccessfulAssociationResponseObject {
 public:
  AWS_EC2_API SuccessfulAssociationResponseObject() = default;
  AWS_EC2_API SuccessfulAssociationResponseObject(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API SuccessfulAssociationResponseObject& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
  SuccessfulAssociationResponseObject& WithApplicationStatusCheckId(ApplicationStatusCheckIdT&& value) {
    SetApplicationStatusCheckId(std::forward<ApplicationStatusCheckIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of association. Valid values: <code>EC2TAG</code> and
   * <code>INSTANCE_ID</code>.</p>
   */
  inline const Aws::String& GetAssociationType() const { return m_associationType; }
  inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
  template <typename AssociationTypeT = Aws::String>
  void SetAssociationType(AssociationTypeT&& value) {
    m_associationTypeHasBeenSet = true;
    m_associationType = std::forward<AssociationTypeT>(value);
  }
  template <typename AssociationTypeT = Aws::String>
  SuccessfulAssociationResponseObject& WithAssociationType(AssociationTypeT&& value) {
    SetAssociationType(std::forward<AssociationTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The association value. For <code>EC2TAG</code>, the value is formatted as
   * <code>key=value</code>. For <code>INSTANCE_ID</code>, the value is the instance
   * ID.</p>
   */
  inline const Aws::String& GetAssociationValue() const { return m_associationValue; }
  inline bool AssociationValueHasBeenSet() const { return m_associationValueHasBeenSet; }
  template <typename AssociationValueT = Aws::String>
  void SetAssociationValue(AssociationValueT&& value) {
    m_associationValueHasBeenSet = true;
    m_associationValue = std::forward<AssociationValueT>(value);
  }
  template <typename AssociationValueT = Aws::String>
  SuccessfulAssociationResponseObject& WithAssociationValue(AssociationValueT&& value) {
    SetAssociationValue(std::forward<AssociationValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationStatusCheckId;

  Aws::String m_associationType;

  Aws::String m_associationValue;
  bool m_applicationStatusCheckIdHasBeenSet = false;
  bool m_associationTypeHasBeenSet = false;
  bool m_associationValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
