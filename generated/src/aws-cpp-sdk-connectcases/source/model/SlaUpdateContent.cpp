/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SlaUpdateContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

SlaUpdateContent::SlaUpdateContent(JsonView jsonValue) { *this = jsonValue; }

SlaUpdateContent& SlaUpdateContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("slaUpdateConfiguration")) {
    m_slaUpdateConfiguration = jsonValue.GetObject("slaUpdateConfiguration");
    m_slaUpdateConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SlaUpdateContent::Jsonize() const {
  JsonValue payload;

  if (m_slaUpdateConfigurationHasBeenSet) {
    payload.WithObject("slaUpdateConfiguration", m_slaUpdateConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
