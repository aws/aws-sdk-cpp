/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AssessmentTargetFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

AssessmentTargetFilter::AssessmentTargetFilter() : 
    m_assessmentTargetNamePatternHasBeenSet(false)
{
}

AssessmentTargetFilter::AssessmentTargetFilter(JsonView jsonValue) : 
    m_assessmentTargetNamePatternHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentTargetFilter& AssessmentTargetFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assessmentTargetNamePattern"))
  {
    m_assessmentTargetNamePattern = jsonValue.GetString("assessmentTargetNamePattern");

    m_assessmentTargetNamePatternHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentTargetFilter::Jsonize() const
{
  JsonValue payload;

  if(m_assessmentTargetNamePatternHasBeenSet)
  {
   payload.WithString("assessmentTargetNamePattern", m_assessmentTargetNamePattern);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
