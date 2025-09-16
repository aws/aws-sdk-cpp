/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace QueryProtocol {
namespace Model {

class StructArg {
 public:
  AWS_QUERYPROTOCOL_API StructArg() = default;
  AWS_QUERYPROTOCOL_API StructArg(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_QUERYPROTOCOL_API StructArg& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{

  inline const Aws::String& GetStringArg() const { return m_stringArg; }
  inline bool StringArgHasBeenSet() const { return m_stringArgHasBeenSet; }
  template <typename StringArgT = Aws::String>
  void SetStringArg(StringArgT&& value) {
    m_stringArgHasBeenSet = true;
    m_stringArg = std::forward<StringArgT>(value);
  }
  template <typename StringArgT = Aws::String>
  StructArg& WithStringArg(StringArgT&& value) {
    SetStringArg(std::forward<StringArgT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline bool GetOtherArg() const { return m_otherArg; }
  inline bool OtherArgHasBeenSet() const { return m_otherArgHasBeenSet; }
  inline void SetOtherArg(bool value) {
    m_otherArgHasBeenSet = true;
    m_otherArg = value;
  }
  inline StructArg& WithOtherArg(bool value) {
    SetOtherArg(value);
    return *this;
  }
  ///@}

  ///@{

  inline const StructArg& GetRecursiveArg() const { return *m_recursiveArg; }
  inline bool RecursiveArgHasBeenSet() const { return m_recursiveArgHasBeenSet; }
  template <typename RecursiveArgT = StructArg>
  void SetRecursiveArg(RecursiveArgT&& value) {
    m_recursiveArgHasBeenSet = true;
    m_recursiveArg = Aws::MakeShared<StructArg>("StructArg", std::forward<RecursiveArgT>(value));
  }
  template <typename RecursiveArgT = StructArg>
  StructArg& WithRecursiveArg(RecursiveArgT&& value) {
    SetRecursiveArg(std::forward<RecursiveArgT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringArg;
  bool m_stringArgHasBeenSet = false;

  bool m_otherArg{false};
  bool m_otherArgHasBeenSet = false;

  std::shared_ptr<StructArg> m_recursiveArg;
  bool m_recursiveArgHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
