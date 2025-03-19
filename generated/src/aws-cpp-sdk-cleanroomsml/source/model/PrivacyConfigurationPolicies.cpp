/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/PrivacyConfigurationPolicies.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

PrivacyConfigurationPolicies::PrivacyConfigurationPolicies(JsonView jsonValue)
{
  *this = jsonValue;
}

PrivacyConfigurationPolicies& PrivacyConfigurationPolicies::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("trainedModels"))
  {
    m_trainedModels = jsonValue.GetObject("trainedModels");
    m_trainedModelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainedModelExports"))
  {
    m_trainedModelExports = jsonValue.GetObject("trainedModelExports");
    m_trainedModelExportsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainedModelInferenceJobs"))
  {
    m_trainedModelInferenceJobs = jsonValue.GetObject("trainedModelInferenceJobs");
    m_trainedModelInferenceJobsHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivacyConfigurationPolicies::Jsonize() const
{
  JsonValue payload;

  if(m_trainedModelsHasBeenSet)
  {
   payload.WithObject("trainedModels", m_trainedModels.Jsonize());

  }

  if(m_trainedModelExportsHasBeenSet)
  {
   payload.WithObject("trainedModelExports", m_trainedModelExports.Jsonize());

  }

  if(m_trainedModelInferenceJobsHasBeenSet)
  {
   payload.WithObject("trainedModelInferenceJobs", m_trainedModelInferenceJobs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
