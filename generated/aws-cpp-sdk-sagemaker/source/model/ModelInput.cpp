/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelInput.h>
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

ModelInput::ModelInput() : 
    m_dataInputConfigHasBeenSet(false)
{
}

ModelInput::ModelInput(JsonView jsonValue) : 
    m_dataInputConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ModelInput& ModelInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataInputConfig"))
  {
    m_dataInputConfig = jsonValue.GetString("DataInputConfig");

    m_dataInputConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelInput::Jsonize() const
{
  JsonValue payload;

  if(m_dataInputConfigHasBeenSet)
  {
   payload.WithString("DataInputConfig", m_dataInputConfig);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
