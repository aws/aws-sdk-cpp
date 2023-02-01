/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/WorkerTypeSpecificationInput.h>
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

WorkerTypeSpecificationInput::WorkerTypeSpecificationInput() : 
    m_imageConfigurationHasBeenSet(false)
{
}

WorkerTypeSpecificationInput::WorkerTypeSpecificationInput(JsonView jsonValue) : 
    m_imageConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

WorkerTypeSpecificationInput& WorkerTypeSpecificationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageConfiguration"))
  {
    m_imageConfiguration = jsonValue.GetObject("imageConfiguration");

    m_imageConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkerTypeSpecificationInput::Jsonize() const
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
