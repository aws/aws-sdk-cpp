/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AccessControlAccess.h>
#include <aws/bedrock-agent/model/AccessControlPrincipalType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>An access control entry specifying a principal and their access
 * level.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DocumentAccessControlEntry">AWS
 * API Reference</a></p>
 */
class DocumentAccessControlEntry {
 public:
  AWS_BEDROCKAGENT_API DocumentAccessControlEntry() = default;
  AWS_BEDROCKAGENT_API DocumentAccessControlEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API DocumentAccessControlEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The user identifier.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DocumentAccessControlEntry& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of principal.</p>
   */
  inline AccessControlPrincipalType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AccessControlPrincipalType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline DocumentAccessControlEntry& WithType(AccessControlPrincipalType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to allow or deny access.</p>
   */
  inline AccessControlAccess GetAccess() const { return m_access; }
  inline bool AccessHasBeenSet() const { return m_accessHasBeenSet; }
  inline void SetAccess(AccessControlAccess value) {
    m_accessHasBeenSet = true;
    m_access = value;
  }
  inline DocumentAccessControlEntry& WithAccess(AccessControlAccess value) {
    SetAccess(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  AccessControlPrincipalType m_type{AccessControlPrincipalType::NOT_SET};

  AccessControlAccess m_access{AccessControlAccess::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_accessHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
