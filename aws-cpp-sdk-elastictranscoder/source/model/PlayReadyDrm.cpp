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
#include <aws/elastictranscoder/model/PlayReadyDrm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

PlayReadyDrm::PlayReadyDrm() : 
    m_formatHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_keyMd5HasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_initializationVectorHasBeenSet(false),
    m_licenseAcquisitionUrlHasBeenSet(false)
{
}

PlayReadyDrm::PlayReadyDrm(const JsonValue& jsonValue) : 
    m_formatHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_keyMd5HasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_initializationVectorHasBeenSet(false),
    m_licenseAcquisitionUrlHasBeenSet(false)
{
  *this = jsonValue;
}

PlayReadyDrm& PlayReadyDrm::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyMd5"))
  {
    m_keyMd5 = jsonValue.GetString("KeyMd5");

    m_keyMd5HasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitializationVector"))
  {
    m_initializationVector = jsonValue.GetString("InitializationVector");

    m_initializationVectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseAcquisitionUrl"))
  {
    m_licenseAcquisitionUrl = jsonValue.GetString("LicenseAcquisitionUrl");

    m_licenseAcquisitionUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue PlayReadyDrm::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_keyMd5HasBeenSet)
  {
   payload.WithString("KeyMd5", m_keyMd5);

  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_initializationVectorHasBeenSet)
  {
   payload.WithString("InitializationVector", m_initializationVector);

  }

  if(m_licenseAcquisitionUrlHasBeenSet)
  {
   payload.WithString("LicenseAcquisitionUrl", m_licenseAcquisitionUrl);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws