/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace IAM {
namespace Model {

/**
 * <p>Defines a single mapping from a source key in the external identity
 * provider's assertion or token to a target trusted context key.</p> <p>This data
 * type is used as a member of the <a
 * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ContextProvider.html">ContextProvider</a>
 * data type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ContextProviderKeyDefinition">AWS
 * API Reference</a></p>
 */
class ContextProviderKeyDefinition {
 public:
  AWS_IAM_API ContextProviderKeyDefinition() = default;
  AWS_IAM_API ContextProviderKeyDefinition(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_IAM_API ContextProviderKeyDefinition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The key in the external identity provider's assertion or token to read the
   * value from.</p> <p>The key can contain only ASCII letters (A-Z, a-z), numbers
   * (0-9), single spaces, and the following characters: <code>_ . : / = + - @
   * #</code>. It can't start or end with a space or contain two spaces in a row.</p>
   */
  inline const Aws::String& GetSourceKey() const { return m_sourceKey; }
  inline bool SourceKeyHasBeenSet() const { return m_sourceKeyHasBeenSet; }
  template <typename SourceKeyT = Aws::String>
  void SetSourceKey(SourceKeyT&& value) {
    m_sourceKeyHasBeenSet = true;
    m_sourceKey = std::forward<SourceKeyT>(value);
  }
  template <typename SourceKeyT = Aws::String>
  ContextProviderKeyDefinition& WithSourceKey(SourceKeyT&& value) {
    SetSourceKey(std::forward<SourceKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trusted context key to map the source value into.</p> <p>The key can
   * contain only ASCII letters (A-Z, a-z), numbers (0-9), single spaces, and the
   * following characters: <code>_ . : / = + - @ #</code>. It can't start or end with
   * a space or contain two spaces in a row.</p>
   */
  inline const Aws::String& GetTargetKey() const { return m_targetKey; }
  inline bool TargetKeyHasBeenSet() const { return m_targetKeyHasBeenSet; }
  template <typename TargetKeyT = Aws::String>
  void SetTargetKey(TargetKeyT&& value) {
    m_targetKeyHasBeenSet = true;
    m_targetKey = std::forward<TargetKeyT>(value);
  }
  template <typename TargetKeyT = Aws::String>
  ContextProviderKeyDefinition& WithTargetKey(TargetKeyT&& value) {
    SetTargetKey(std::forward<TargetKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceKey;

  Aws::String m_targetKey;
  bool m_sourceKeyHasBeenSet = false;
  bool m_targetKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
