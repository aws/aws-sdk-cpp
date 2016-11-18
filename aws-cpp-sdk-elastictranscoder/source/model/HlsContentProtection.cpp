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
#include <aws/elastictranscoder/model/HlsContentProtection.h>
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

HlsContentProtection::HlsContentProtection() : 
    m_methodHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_keyMd5HasBeenSet(false),
    m_initializationVectorHasBeenSet(false),
    m_licenseAcquisitionUrlHasBeenSet(false),
    m_keyStoragePolicyHasBeenSet(false)
{
}

HlsContentProtection::HlsContentProtection(const JsonValue& jsonValue) : 
    m_methodHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_keyMd5HasBeenSet(false),
    m_initializationVectorHasBeenSet(false),
    m_licenseAcquisitionUrlHasBeenSet(false),
    m_keyStoragePolicyHasBeenSet(false)
{
  *this = jsonValue;
}

HlsContentProtection& HlsContentProtection::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Method"))
  {
    m_method = jsonValue.GetString("Method");

    m_methodHasBeenSet = true;
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

  if(jsonValue.ValueExists("KeyStoragePolicy"))
  {
    m_keyStoragePolicy = jsonValue.GetString("KeyStoragePolicy");

    m_keyStoragePolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsContentProtection::Jsonize() const
{
  JsonValue payload;

  if(m_methodHasBeenSet)
  {
   payload.WithString("Method", m_method);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_keyMd5HasBeenSet)
  {
   payload.WithString("KeyMd5", m_keyMd5);

  }

  if(m_initializationVectorHasBeenSet)
  {
   payload.WithString("InitializationVector", m_initializationVector);

  }

  if(m_licenseAcquisitionUrlHasBeenSet)
  {
   payload.WithString("LicenseAcquisitionUrl", m_licenseAcquisitionUrl);

  }

  if(m_keyStoragePolicyHasBeenSet)
  {
   payload.WithString("KeyStoragePolicy", m_keyStoragePolicy);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws