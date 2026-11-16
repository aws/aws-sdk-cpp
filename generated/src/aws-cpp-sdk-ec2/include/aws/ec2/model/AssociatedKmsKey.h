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
 * <p>Describes an KMS key that is associated with an Amazon EBS snapshot, in
 * addition to the key the snapshot is encrypted under. An associated key provides
 * a second way to access the snapshot's data for cross-account sharing and
 * copying.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociatedKmsKey">AWS
 * API Reference</a></p>
 */
class AssociatedKmsKey {
 public:
  AWS_EC2_API AssociatedKmsKey() = default;
  AWS_EC2_API AssociatedKmsKey(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API AssociatedKmsKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the associated KMS key.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  AssociatedKmsKey& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kmsKeyId;
  bool m_kmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
