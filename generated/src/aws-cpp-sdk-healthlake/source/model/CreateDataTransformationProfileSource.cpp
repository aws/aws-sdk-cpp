/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/CreateDataTransformationProfileSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

CreateDataTransformationProfileSource::CreateDataTransformationProfileSource(JsonView jsonValue) { *this = jsonValue; }

CreateDataTransformationProfileSource& CreateDataTransformationProfileSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StarterProfile")) {
    m_starterProfile = jsonValue.GetObject("StarterProfile");
    m_starterProfileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExistingVersionedProfileId")) {
    m_existingVersionedProfileId = jsonValue.GetObject("ExistingVersionedProfileId");
    m_existingVersionedProfileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProfileMapping")) {
    m_profileMapping = jsonValue.GetObject("ProfileMapping");
    m_profileMappingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SampleData")) {
    m_sampleData = jsonValue.GetObject("SampleData");
    m_sampleDataHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateDataTransformationProfileSource::Jsonize() const {
  JsonValue payload;

  if (m_starterProfileHasBeenSet) {
    payload.WithObject("StarterProfile", m_starterProfile.Jsonize());
  }

  if (m_existingVersionedProfileIdHasBeenSet) {
    payload.WithObject("ExistingVersionedProfileId", m_existingVersionedProfileId.Jsonize());
  }

  if (m_profileMappingHasBeenSet) {
    payload.WithObject("ProfileMapping", m_profileMapping.Jsonize());
  }

  if (m_sampleDataHasBeenSet) {
    payload.WithObject("SampleData", m_sampleData.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
