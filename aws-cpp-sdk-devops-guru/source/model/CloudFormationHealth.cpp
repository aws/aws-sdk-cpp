/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/CloudFormationHealth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

CloudFormationHealth::CloudFormationHealth() : 
    m_stackNameHasBeenSet(false),
    m_insightHasBeenSet(false),
    m_analyzedResourceCount(0),
    m_analyzedResourceCountHasBeenSet(false)
{
}

CloudFormationHealth::CloudFormationHealth(JsonView jsonValue) : 
    m_stackNameHasBeenSet(false),
    m_insightHasBeenSet(false),
    m_analyzedResourceCount(0),
    m_analyzedResourceCountHasBeenSet(false)
{
  *this = jsonValue;
}

CloudFormationHealth& CloudFormationHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StackName"))
  {
    m_stackName = jsonValue.GetString("StackName");

    m_stackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Insight"))
  {
    m_insight = jsonValue.GetObject("Insight");

    m_insightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnalyzedResourceCount"))
  {
    m_analyzedResourceCount = jsonValue.GetInt64("AnalyzedResourceCount");

    m_analyzedResourceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudFormationHealth::Jsonize() const
{
  JsonValue payload;

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("StackName", m_stackName);

  }

  if(m_insightHasBeenSet)
  {
   payload.WithObject("Insight", m_insight.Jsonize());

  }

  if(m_analyzedResourceCountHasBeenSet)
  {
   payload.WithInt64("AnalyzedResourceCount", m_analyzedResourceCount);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
