/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/elasticmapreduce/model/StepConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StepConfig::StepConfig() : 
    m_actionOnFailureHasBeenSet(false)
{
}

StepConfig::StepConfig(const JsonValue& jsonValue) : 
    m_actionOnFailureHasBeenSet(false)
{
  *this = jsonValue;
}

StepConfig& StepConfig::operator =(const JsonValue& jsonValue)
{
  m_name = jsonValue.GetString("Name");

  if(jsonValue.ValueExists("ActionOnFailure"))
  {
    m_actionOnFailure = ActionOnFailureMapper::GetActionOnFailureForName(jsonValue.GetString("ActionOnFailure"));

    m_actionOnFailureHasBeenSet = true;
  }

  m_hadoopJarStep = jsonValue.GetObject("HadoopJarStep");

  return *this;
}

JsonValue StepConfig::Jsonize() const
{
  JsonValue payload;

  payload.WithString("Name", m_name);

  if(m_actionOnFailureHasBeenSet)
  {
   payload.WithString("ActionOnFailure", ActionOnFailureMapper::GetNameForActionOnFailure(m_actionOnFailure));
  }

  payload.WithObject("HadoopJarStep", m_hadoopJarStep.Jsonize());

  return std::move(payload);
}