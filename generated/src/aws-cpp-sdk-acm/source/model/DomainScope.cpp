/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/DomainScope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

DomainScope::DomainScope(JsonView jsonValue) { *this = jsonValue; }

DomainScope& DomainScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ExactDomain")) {
    m_exactDomain = DomainScopeOptionMapper::GetDomainScopeOptionForName(jsonValue.GetString("ExactDomain"));
    m_exactDomainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Subdomains")) {
    m_subdomains = DomainScopeOptionMapper::GetDomainScopeOptionForName(jsonValue.GetString("Subdomains"));
    m_subdomainsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Wildcards")) {
    m_wildcards = DomainScopeOptionMapper::GetDomainScopeOptionForName(jsonValue.GetString("Wildcards"));
    m_wildcardsHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainScope::Jsonize() const {
  JsonValue payload;

  if (m_exactDomainHasBeenSet) {
    payload.WithString("ExactDomain", DomainScopeOptionMapper::GetNameForDomainScopeOption(m_exactDomain));
  }

  if (m_subdomainsHasBeenSet) {
    payload.WithString("Subdomains", DomainScopeOptionMapper::GetNameForDomainScopeOption(m_subdomains));
  }

  if (m_wildcardsHasBeenSet) {
    payload.WithString("Wildcards", DomainScopeOptionMapper::GetNameForDomainScopeOption(m_wildcards));
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
