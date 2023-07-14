/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/InferenceInputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

InferenceInputConfiguration::InferenceInputConfiguration() : 
    m_s3InputConfigurationHasBeenSet(false),
    m_inputTimeZoneOffsetHasBeenSet(false),
    m_inferenceInputNameConfigurationHasBeenSet(false)
{
}

InferenceInputConfiguration::InferenceInputConfiguration(JsonView jsonValue) : 
    m_s3InputConfigurationHasBeenSet(false),
    m_inputTimeZoneOffsetHasBeenSet(false),
    m_inferenceInputNameConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceInputConfiguration& InferenceInputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3InputConfiguration"))
  {
    m_s3InputConfiguration = jsonValue.GetObject("S3InputConfiguration");

    m_s3InputConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputTimeZoneOffset"))
  {
    m_inputTimeZoneOffset = jsonValue.GetString("InputTimeZoneOffset");

    m_inputTimeZoneOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceInputNameConfiguration"))
  {
    m_inferenceInputNameConfiguration = jsonValue.GetObject("InferenceInputNameConfiguration");

    m_inferenceInputNameConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceInputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3InputConfigurationHasBeenSet)
  {
   payload.WithObject("S3InputConfiguration", m_s3InputConfiguration.Jsonize());

  }

  if(m_inputTimeZoneOffsetHasBeenSet)
  {
   payload.WithString("InputTimeZoneOffset", m_inputTimeZoneOffset);

  }

  if(m_inferenceInputNameConfigurationHasBeenSet)
  {
   payload.WithObject("InferenceInputNameConfiguration", m_inferenceInputNameConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
