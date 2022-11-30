/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/ResamplingConfigInput.h>
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

ResamplingConfigInput::ResamplingConfigInput() : 
    m_algorithmName(AlgorithmNameResampling::NOT_SET),
    m_algorithmNameHasBeenSet(false),
    m_outputResolutionHasBeenSet(false),
    m_targetBandsHasBeenSet(false)
{
}

ResamplingConfigInput::ResamplingConfigInput(JsonView jsonValue) : 
    m_algorithmName(AlgorithmNameResampling::NOT_SET),
    m_algorithmNameHasBeenSet(false),
    m_outputResolutionHasBeenSet(false),
    m_targetBandsHasBeenSet(false)
{
  *this = jsonValue;
}

ResamplingConfigInput& ResamplingConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlgorithmName"))
  {
    m_algorithmName = AlgorithmNameResamplingMapper::GetAlgorithmNameResamplingForName(jsonValue.GetString("AlgorithmName"));

    m_algorithmNameHasBeenSet = true;
  }

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

JsonValue ResamplingConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmNameHasBeenSet)
  {
   payload.WithString("AlgorithmName", AlgorithmNameResamplingMapper::GetNameForAlgorithmNameResampling(m_algorithmName));
  }

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
