/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingInput.h>
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

ProcessingInput::ProcessingInput() : 
    m_inputNameHasBeenSet(false),
    m_s3InputHasBeenSet(false)
{
}

ProcessingInput::ProcessingInput(JsonView jsonValue) : 
    m_inputNameHasBeenSet(false),
    m_s3InputHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingInput& ProcessingInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputName"))
  {
    m_inputName = jsonValue.GetString("InputName");

    m_inputNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Input"))
  {
    m_s3Input = jsonValue.GetObject("S3Input");

    m_s3InputHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingInput::Jsonize() const
{
  JsonValue payload;

  if(m_inputNameHasBeenSet)
  {
   payload.WithString("InputName", m_inputName);

  }

  if(m_s3InputHasBeenSet)
  {
   payload.WithObject("S3Input", m_s3Input.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
