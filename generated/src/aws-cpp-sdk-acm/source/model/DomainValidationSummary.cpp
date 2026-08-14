/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/DomainValidationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

DomainValidationSummary::DomainValidationSummary(JsonView jsonValue) { *this = jsonValue; }

DomainValidationSummary& DomainValidationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DomainName")) {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ActiveValidationConfiguration")) {
    m_activeValidationConfiguration = jsonValue.GetObject("ActiveValidationConfiguration");
    m_activeValidationConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestedValidationConfiguration")) {
    m_requestedValidationConfiguration = jsonValue.GetObject("RequestedValidationConfiguration");
    m_requestedValidationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainValidationSummary::Jsonize() const {
  JsonValue payload;

  if (m_domainNameHasBeenSet) {
    payload.WithString("DomainName", m_domainName);
  }

  if (m_activeValidationConfigurationHasBeenSet) {
    payload.WithObject("ActiveValidationConfiguration", m_activeValidationConfiguration.Jsonize());
  }

  if (m_requestedValidationConfigurationHasBeenSet) {
    payload.WithObject("RequestedValidationConfiguration", m_requestedValidationConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
