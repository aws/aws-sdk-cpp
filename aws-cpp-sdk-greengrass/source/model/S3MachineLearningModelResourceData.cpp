/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
