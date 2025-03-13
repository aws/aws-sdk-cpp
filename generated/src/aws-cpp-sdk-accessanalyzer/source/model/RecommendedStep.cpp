/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/RecommendedStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

RecommendedStep::RecommendedStep(JsonView jsonValue)
{
  *this = jsonValue;
}

RecommendedStep& RecommendedStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unusedPermissionsRecommendedStep"))
  {
    m_unusedPermissionsRecommendedStep = jsonValue.GetObject("unusedPermissionsRecommendedStep");
    m_unusedPermissionsRecommendedStepHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendedStep::Jsonize() const
{
  JsonValue payload;

  if(m_unusedPermissionsRecommendedStepHasBeenSet)
  {
   payload.WithObject("unusedPermissionsRecommendedStep", m_unusedPermissionsRecommendedStep.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
