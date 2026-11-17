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
class PayloadStructure {
 public:
  AWS_RESTJSONPROTOCOL_API PayloadStructure() = default;
  AWS_RESTJSONPROTOCOL_API PayloadStructure(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API PayloadStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetStructureMember() const { return m_structureMember; }
  inline bool StructureMemberHasBeenSet() const { return m_structureMemberHasBeenSet; }
  template <typename StructureMemberT = Aws::String>
  void SetStructureMember(StructureMemberT&& value) {
    m_structureMemberHasBeenSet = true;
    m_structureMember = std::forward<StructureMemberT>(value);
  }
  template <typename StructureMemberT = Aws::String>
  PayloadStructure& WithStructureMember(StructureMemberT&& value) {
    SetStructureMember(std::forward<StructureMemberT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_structureMember;
  bool m_structureMemberHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
