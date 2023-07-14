/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringOutput.h>
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

MonitoringOutput::MonitoringOutput() : 
    m_s3OutputHasBeenSet(false)
{
}

MonitoringOutput::MonitoringOutput(JsonView jsonValue) : 
    m_s3OutputHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringOutput& MonitoringOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Output"))
  {
    m_s3Output = jsonValue.GetObject("S3Output");

    m_s3OutputHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringOutput::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputHasBeenSet)
  {
   payload.WithObject("S3Output", m_s3Output.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
