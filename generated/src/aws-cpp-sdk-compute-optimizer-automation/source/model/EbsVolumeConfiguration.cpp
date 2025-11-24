/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/EbsVolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

EbsVolumeConfiguration::EbsVolumeConfiguration(JsonView jsonValue) { *this = jsonValue; }

EbsVolumeConfiguration& EbsVolumeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sizeInGib")) {
    m_sizeInGib = jsonValue.GetInteger("sizeInGib");
    m_sizeInGibHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iops")) {
    m_iops = jsonValue.GetInteger("iops");
    m_iopsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("throughput")) {
    m_throughput = jsonValue.GetInteger("throughput");
    m_throughputHasBeenSet = true;
  }
  return *this;
}

JsonValue EbsVolumeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  if (m_sizeInGibHasBeenSet) {
    payload.WithInteger("sizeInGib", m_sizeInGib);
  }

  if (m_iopsHasBeenSet) {
    payload.WithInteger("iops", m_iops);
  }

  if (m_throughputHasBeenSet) {
    payload.WithInteger("throughput", m_throughput);
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
