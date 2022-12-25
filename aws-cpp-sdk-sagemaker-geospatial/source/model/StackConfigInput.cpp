/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/StackConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

StackConfigInput::StackConfigInput() : 
    m_outputResolutionHasBeenSet(false),
    m_targetBandsHasBeenSet(false)
{
}

StackConfigInput::StackConfigInput(JsonView jsonValue) : 
    m_outputResolutionHasBeenSet(false),
    m_targetBandsHasBeenSet(false)
{
  *this = jsonValue;
}

StackConfigInput& StackConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputResolution"))
  {
    m_outputResolution = jsonValue.GetObject("OutputResolution");

    m_outputResolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetBands"))
  {
    Aws::Utils::Array<JsonView> targetBandsJsonList = jsonValue.GetArray("TargetBands");
    for(unsigned targetBandsIndex = 0; targetBandsIndex < targetBandsJsonList.GetLength(); ++targetBandsIndex)
    {
      m_targetBands.push_back(targetBandsJsonList[targetBandsIndex].AsString());
    }
    m_targetBandsHasBeenSet = true;
  }

  return *this;
}

JsonValue StackConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_outputResolutionHasBeenSet)
  {
   payload.WithObject("OutputResolution", m_outputResolution.Jsonize());

  }

  if(m_targetBandsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetBandsJsonList(m_targetBands.size());
   for(unsigned targetBandsIndex = 0; targetBandsIndex < targetBandsJsonList.GetLength(); ++targetBandsIndex)
   {
     targetBandsJsonList[targetBandsIndex].AsString(m_targetBands[targetBandsIndex]);
   }
   payload.WithArray("TargetBands", std::move(targetBandsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
