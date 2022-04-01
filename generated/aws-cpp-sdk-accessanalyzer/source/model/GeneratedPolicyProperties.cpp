/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/GeneratedPolicyProperties.h>
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

GeneratedPolicyProperties::GeneratedPolicyProperties() : 
    m_cloudTrailPropertiesHasBeenSet(false),
    m_isComplete(false),
    m_isCompleteHasBeenSet(false),
    m_principalArnHasBeenSet(false)
{
}

GeneratedPolicyProperties::GeneratedPolicyProperties(JsonView jsonValue) : 
    m_cloudTrailPropertiesHasBeenSet(false),
    m_isComplete(false),
    m_isCompleteHasBeenSet(false),
    m_principalArnHasBeenSet(false)
{
  *this = jsonValue;
}

GeneratedPolicyProperties& GeneratedPolicyProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudTrailProperties"))
  {
    m_cloudTrailProperties = jsonValue.GetObject("cloudTrailProperties");

    m_cloudTrailPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isComplete"))
  {
    m_isComplete = jsonValue.GetBool("isComplete");

    m_isCompleteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalArn"))
  {
    m_principalArn = jsonValue.GetString("principalArn");

    m_principalArnHasBeenSet = true;
  }

  return *this;
}

JsonValue GeneratedPolicyProperties::Jsonize() const
{
  JsonValue payload;

  if(m_cloudTrailPropertiesHasBeenSet)
  {
   payload.WithObject("cloudTrailProperties", m_cloudTrailProperties.Jsonize());

  }

  if(m_isCompleteHasBeenSet)
  {
   payload.WithBool("isComplete", m_isComplete);

  }

  if(m_principalArnHasBeenSet)
  {
   payload.WithString("principalArn", m_principalArn);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
