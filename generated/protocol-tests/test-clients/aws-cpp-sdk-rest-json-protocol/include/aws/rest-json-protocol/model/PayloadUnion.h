/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {

/**
 */
class PayloadUnion {
 public:
  AWS_RESTJSONPROTOCOL_API PayloadUnion() = default;
  AWS_RESTJSONPROTOCOL_API PayloadUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API PayloadUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetUnionMember() const { return m_unionMember; }
  inline bool UnionMemberHasBeenSet() const { return m_unionMemberHasBeenSet; }
  template <typename UnionMemberT = Aws::String>
  void SetUnionMember(UnionMemberT&& value) {
    m_unionMemberHasBeenSet = true;
    m_unionMember = std::forward<UnionMemberT>(value);
  }
  template <typename UnionMemberT = Aws::String>
  PayloadUnion& WithUnionMember(UnionMemberT&& value) {
    SetUnionMember(std::forward<UnionMemberT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_unionMember;
  bool m_unionMemberHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
