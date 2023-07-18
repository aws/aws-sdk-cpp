/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelMetadataSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ModelMetadataSummary::ModelMetadataSummary() : 
    m_domainHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false)
{
}

ModelMetadataSummary::ModelMetadataSummary(JsonView jsonValue) : 
    m_domainHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ModelMetadataSummary& ModelMetadataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Framework"))
  {
    m_framework = jsonValue.GetString("Framework");

    m_frameworkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Task"))
  {
    m_task = jsonValue.GetString("Task");

    m_taskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetString("Model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameworkVersion"))
  {
    m_frameworkVersion = jsonValue.GetString("FrameworkVersion");

    m_frameworkVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelMetadataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_frameworkHasBeenSet)
  {
   payload.WithString("Framework", m_framework);

  }

  if(m_taskHasBeenSet)
  {
   payload.WithString("Task", m_task);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("Model", m_model);

  }

  if(m_frameworkVersionHasBeenSet)
  {
   payload.WithString("FrameworkVersion", m_frameworkVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
