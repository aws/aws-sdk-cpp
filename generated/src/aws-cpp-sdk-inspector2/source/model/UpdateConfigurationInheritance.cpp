/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/UpdateConfigurationInheritance.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

UpdateConfigurationInheritance::UpdateConfigurationInheritance(JsonView jsonValue) { *this = jsonValue; }

UpdateConfigurationInheritance& UpdateConfigurationInheritance::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ec2Configuration")) {
    m_ec2Configuration = InheritanceModeMapper::GetInheritanceModeForName(jsonValue.GetString("ec2Configuration"));
    m_ec2ConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrConfiguration")) {
    m_ecrConfiguration = InheritanceModeMapper::GetInheritanceModeForName(jsonValue.GetString("ecrConfiguration"));
    m_ecrConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateConfigurationInheritance::Jsonize() const {
  JsonValue payload;

  if (m_ec2ConfigurationHasBeenSet) {
    payload.WithString("ec2Configuration", InheritanceModeMapper::GetNameForInheritanceMode(m_ec2Configuration));
  }

  if (m_ecrConfigurationHasBeenSet) {
    payload.WithString("ecrConfiguration", InheritanceModeMapper::GetNameForInheritanceMode(m_ecrConfiguration));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
