/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/LabelsS3InputConfiguration.h>
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

LabelsS3InputConfiguration::LabelsS3InputConfiguration() : 
    m_bucketHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

LabelsS3InputConfiguration::LabelsS3InputConfiguration(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

LabelsS3InputConfiguration& LabelsS3InputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelsS3InputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
