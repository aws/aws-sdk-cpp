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
 * <p>Describes a resource that is not compliant with VPC encryption
 * requirements.</p> <p>For more information, see <a
 * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-encryption-controls.html">Enforce
 * VPC encryption in transit</a> in the <i>Amazon VPC User Guide</i>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcEncryptionNonCompliantResource">AWS
 * API Reference</a></p>
 */
class VpcEncryptionNonCompliantResource {
 public:
  AWS_EC2_API VpcEncryptionNonCompliantResource() = default;
  AWS_EC2_API VpcEncryptionNonCompliantResource(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API VpcEncryptionNonCompliantResource& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the non-compliant resource.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  VpcEncryptionNonCompliantResource& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the non-compliant resource.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  VpcEncryptionNonCompliantResource& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the non-compliant resource.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  VpcEncryptionNonCompliantResource& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the resource can be excluded from encryption
   * enforcement.</p>
   */
  inline bool GetIsExcludable() const { return m_isExcludable; }
  inline bool IsExcludableHasBeenSet() const { return m_isExcludableHasBeenSet; }
  inline void SetIsExcludable(bool value) {
    m_isExcludableHasBeenSet = true;
    m_isExcludable = value;
  }
  inline VpcEncryptionNonCompliantResource& WithIsExcludable(bool value) {
    SetIsExcludable(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_type;

  Aws::String m_description;

  bool m_isExcludable{false};
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_isExcludableHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
