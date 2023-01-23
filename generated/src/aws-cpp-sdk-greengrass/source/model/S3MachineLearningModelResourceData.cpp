/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/S3MachineLearningModelResourceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

S3MachineLearningModelResourceData::S3MachineLearningModelResourceData() : 
    m_destinationPathHasBeenSet(false),
    m_ownerSettingHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
}

S3MachineLearningModelResourceData::S3MachineLearningModelResourceData(JsonView jsonValue) : 
    m_destinationPathHasBeenSet(false),
    m_ownerSettingHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
  *this = jsonValue;
}

S3MachineLearningModelResourceData& S3MachineLearningModelResourceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationPath"))
  {
    m_destinationPath = jsonValue.GetString("DestinationPath");

    m_destinationPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerSetting"))
  {
    m_ownerSetting = jsonValue.GetObject("OwnerSetting");

    m_ownerSettingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue S3MachineLearningModelResourceData::Jsonize() const
{
  JsonValue payload;

  if(m_destinationPathHasBeenSet)
  {
   payload.WithString("DestinationPath", m_destinationPath);

  }

  if(m_ownerSettingHasBeenSet)
  {
   payload.WithObject("OwnerSetting", m_ownerSetting.Jsonize());

  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
