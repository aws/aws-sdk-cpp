/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/InferenceOutputConfiguration.h>
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

InferenceOutputConfiguration::InferenceOutputConfiguration() : 
    m_s3OutputConfigurationHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

InferenceOutputConfiguration::InferenceOutputConfiguration(JsonView jsonValue) : 
    m_s3OutputConfigurationHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceOutputConfiguration& InferenceOutputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3OutputConfiguration"))
  {
    m_s3OutputConfiguration = jsonValue.GetObject("S3OutputConfiguration");

    m_s3OutputConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceOutputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputConfigurationHasBeenSet)
  {
   payload.WithObject("S3OutputConfiguration", m_s3OutputConfiguration.Jsonize());

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
