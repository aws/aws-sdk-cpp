/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/LabelsInputConfiguration.h>
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

LabelsInputConfiguration::LabelsInputConfiguration() : 
    m_s3InputConfigurationHasBeenSet(false)
{
}

LabelsInputConfiguration::LabelsInputConfiguration(JsonView jsonValue) : 
    m_s3InputConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

LabelsInputConfiguration& LabelsInputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3InputConfiguration"))
  {
    m_s3InputConfiguration = jsonValue.GetObject("S3InputConfiguration");

    m_s3InputConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelsInputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3InputConfigurationHasBeenSet)
  {
   payload.WithObject("S3InputConfiguration", m_s3InputConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
