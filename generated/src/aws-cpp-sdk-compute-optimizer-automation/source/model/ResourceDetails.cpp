/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/ResourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

ResourceDetails::ResourceDetails(JsonView jsonValue) { *this = jsonValue; }

ResourceDetails& ResourceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ebsVolume")) {
    m_ebsVolume = jsonValue.GetObject("ebsVolume");
    m_ebsVolumeHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceDetails::Jsonize() const {
  JsonValue payload;

  if (m_ebsVolumeHasBeenSet) {
    payload.WithObject("ebsVolume", m_ebsVolume.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
