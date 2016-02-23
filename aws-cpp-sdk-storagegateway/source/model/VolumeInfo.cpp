/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/model/VolumeInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

VolumeInfo::VolumeInfo() : 
    m_volumeARNHasBeenSet(false),
    m_volumeTypeHasBeenSet(false)
{
}

VolumeInfo::VolumeInfo(const JsonValue& jsonValue) : 
    m_volumeARNHasBeenSet(false),
    m_volumeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeInfo& VolumeInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("VolumeARN"))
  {
    m_volumeARN = jsonValue.GetString("VolumeARN");

    m_volumeARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeType"))
  {
    m_volumeType = jsonValue.GetString("VolumeType");

    m_volumeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeInfo::Jsonize() const
{
  JsonValue payload;

  if(m_volumeARNHasBeenSet)
  {
   payload.WithString("VolumeARN", m_volumeARN);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", m_volumeType);

  }

  return payload;
}