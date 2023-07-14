/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/StepConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

StepConfig::StepConfig() : 
    m_nameHasBeenSet(false),
    m_actionOnFailure(ActionOnFailure::NOT_SET),
    m_actionOnFailureHasBeenSet(false),
    m_hadoopJarStepHasBeenSet(false)
{
}

StepConfig::StepConfig(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_actionOnFailure(ActionOnFailure::NOT_SET),
    m_actionOnFailureHasBeenSet(false),
    m_hadoopJarStepHasBeenSet(false)
{
  *this = jsonValue;
}

StepConfig& StepConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionOnFailure"))
  {
    m_actionOnFailure = ActionOnFailureMapper::GetActionOnFailureForName(jsonValue.GetString("ActionOnFailure"));

    m_actionOnFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HadoopJarStep"))
  {
    m_hadoopJarStep = jsonValue.GetObject("HadoopJarStep");

    m_hadoopJarStepHasBeenSet = true;
  }

  return *this;
}

JsonValue StepConfig::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_actionOnFailureHasBeenSet)
  {
   payload.WithString("ActionOnFailure", ActionOnFailureMapper::GetNameForActionOnFailure(m_actionOnFailure));
  }

  if(m_hadoopJarStepHasBeenSet)
  {
   payload.WithObject("HadoopJarStep", m_hadoopJarStep.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
