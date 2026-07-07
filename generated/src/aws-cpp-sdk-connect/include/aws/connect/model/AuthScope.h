/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AuthCodeEntityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains the scope configuration for an authorization code. Defines the
 * permissions and access boundaries for the session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AuthScope">AWS
 * API Reference</a></p>
 */
class AuthScope {
 public:
  AWS_CONNECT_API AuthScope() = default;
  AWS_CONNECT_API AuthScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AuthScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of security profile identifiers to scope the session to. Maximum of
   * 10 security profiles.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityProfileIds() const { return m_securityProfileIds; }
  inline bool SecurityProfileIdsHasBeenSet() const { return m_securityProfileIdsHasBeenSet; }
  template <typename SecurityProfileIdsT = Aws::Vector<Aws::String>>
  void SetSecurityProfileIds(SecurityProfileIdsT&& value) {
    m_securityProfileIdsHasBeenSet = true;
    m_securityProfileIds = std::forward<SecurityProfileIdsT>(value);
  }
  template <typename SecurityProfileIdsT = Aws::Vector<Aws::String>>
  AuthScope& WithSecurityProfileIds(SecurityProfileIdsT&& value) {
    SetSecurityProfileIds(std::forward<SecurityProfileIdsT>(value));
    return *this;
  }
  template <typename SecurityProfileIdsT = Aws::String>
  AuthScope& AddSecurityProfileIds(SecurityProfileIdsT&& value) {
    m_securityProfileIdsHasBeenSet = true;
    m_securityProfileIds.emplace_back(std::forward<SecurityProfileIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of entity to scope the session to.</p>
   */
  inline AuthCodeEntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(AuthCodeEntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline AuthScope& WithEntityType(AuthCodeEntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the entity to scope the session to.</p>
   */
  inline const Aws::String& GetEntityId() const { return m_entityId; }
  inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
  template <typename EntityIdT = Aws::String>
  void SetEntityId(EntityIdT&& value) {
    m_entityIdHasBeenSet = true;
    m_entityId = std::forward<EntityIdT>(value);
  }
  template <typename EntityIdT = Aws::String>
  AuthScope& WithEntityId(EntityIdT&& value) {
    SetEntityId(std::forward<EntityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Customer Profiles domain to scope the session to.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  AuthScope& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_securityProfileIds;

  AuthCodeEntityType m_entityType{AuthCodeEntityType::NOT_SET};

  Aws::String m_entityId;

  Aws::String m_domainName;
  bool m_securityProfileIdsHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_entityIdHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
