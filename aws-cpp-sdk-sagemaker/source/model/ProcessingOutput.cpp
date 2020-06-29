/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingOutput.h>
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

ProcessingOutput::ProcessingOutput() : 
    m_outputNameHasBeenSet(false),
    m_s3OutputHasBeenSet(false)
{
}

ProcessingOutput::ProcessingOutput(JsonView jsonValue) : 
    m_outputNameHasBeenSet(false),
    m_s3OutputHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingOutput& ProcessingOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputName"))
  {
    m_outputName = jsonValue.GetString("OutputName");

    m_outputNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Output"))
  {
    m_s3Output = jsonValue.GetObject("S3Output");

    m_s3OutputHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingOutput::Jsonize() const
{
  JsonValue payload;

  if(m_outputNameHasBeenSet)
  {
   payload.WithString("OutputName", m_outputName);

  }

  if(m_s3OutputHasBeenSet)
  {
   payload.WithObject("S3Output", m_s3Output.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
