/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/OutputSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

OutputSource::OutputSource() : 
    m_kMSArnHasBeenSet(false),
    m_applyNormalization(false),
    m_applyNormalizationHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_outputS3PathHasBeenSet(false)
{
}

OutputSource::OutputSource(JsonView jsonValue) : 
    m_kMSArnHasBeenSet(false),
    m_applyNormalization(false),
    m_applyNormalizationHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_outputS3PathHasBeenSet(false)
{
  *this = jsonValue;
}

OutputSource& OutputSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KMSArn"))
  {
    m_kMSArn = jsonValue.GetString("KMSArn");

    m_kMSArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applyNormalization"))
  {
    m_applyNormalization = jsonValue.GetBool("applyNormalization");

    m_applyNormalizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("output"))
  {
    Aws::Utils::Array<JsonView> outputJsonList = jsonValue.GetArray("output");
    for(unsigned outputIndex = 0; outputIndex < outputJsonList.GetLength(); ++outputIndex)
    {
      m_output.push_back(outputJsonList[outputIndex].AsObject());
    }
    m_outputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputS3Path"))
  {
    m_outputS3Path = jsonValue.GetString("outputS3Path");

    m_outputS3PathHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputSource::Jsonize() const
{
  JsonValue payload;

  if(m_kMSArnHasBeenSet)
  {
   payload.WithString("KMSArn", m_kMSArn);

  }

  if(m_applyNormalizationHasBeenSet)
  {
   payload.WithBool("applyNormalization", m_applyNormalization);

  }

  if(m_outputHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputJsonList(m_output.size());
   for(unsigned outputIndex = 0; outputIndex < outputJsonList.GetLength(); ++outputIndex)
   {
     outputJsonList[outputIndex].AsObject(m_output[outputIndex].Jsonize());
   }
   payload.WithArray("output", std::move(outputJsonList));

  }

  if(m_outputS3PathHasBeenSet)
  {
   payload.WithString("outputS3Path", m_outputS3Path);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
