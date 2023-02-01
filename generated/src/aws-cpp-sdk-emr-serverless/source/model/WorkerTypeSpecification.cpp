/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/WorkerTypeSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

WorkerTypeSpecification::WorkerTypeSpecification() : 
    m_imageConfigurationHasBeenSet(false)
{
}

WorkerTypeSpecification::WorkerTypeSpecification(JsonView jsonValue) : 
    m_imageConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

WorkerTypeSpecification& WorkerTypeSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageConfiguration"))
  {
    m_imageConfiguration = jsonValue.GetObject("imageConfiguration");

    m_imageConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkerTypeSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_imageConfigurationHasBeenSet)
  {
   payload.WithObject("imageConfiguration", m_imageConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
