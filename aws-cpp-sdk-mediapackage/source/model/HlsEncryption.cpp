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

#include <aws/mediapackage/model/HlsEncryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

HlsEncryption::HlsEncryption() : 
    m_constantInitializationVectorHasBeenSet(false),
    m_encryptionMethod(EncryptionMethod::NOT_SET),
    m_encryptionMethodHasBeenSet(false),
    m_keyRotationIntervalSeconds(0),
    m_keyRotationIntervalSecondsHasBeenSet(false),
    m_repeatExtXKey(false),
    m_repeatExtXKeyHasBeenSet(false),
    m_spekeKeyProviderHasBeenSet(false)
{
}

HlsEncryption::HlsEncryption(const JsonValue& jsonValue) : 
    m_constantInitializationVectorHasBeenSet(false),
    m_encryptionMethod(EncryptionMethod::NOT_SET),
    m_encryptionMethodHasBeenSet(false),
    m_keyRotationIntervalSeconds(0),
    m_keyRotationIntervalSecondsHasBeenSet(false),
    m_repeatExtXKey(false),
    m_repeatExtXKeyHasBeenSet(false),
    m_spekeKeyProviderHasBeenSet(false)
{
  *this = jsonValue;
}

HlsEncryption& HlsEncryption::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("constantInitializationVector"))
  {
    m_constantInitializationVector = jsonValue.GetString("constantInitializationVector");

    m_constantInitializationVectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionMethod"))
  {
    m_encryptionMethod = EncryptionMethodMapper::GetEncryptionMethodForName(jsonValue.GetString("encryptionMethod"));

    m_encryptionMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyRotationIntervalSeconds"))
  {
    m_keyRotationIntervalSeconds = jsonValue.GetInteger("keyRotationIntervalSeconds");

    m_keyRotationIntervalSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repeatExtXKey"))
  {
    m_repeatExtXKey = jsonValue.GetBool("repeatExtXKey");

    m_repeatExtXKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spekeKeyProvider"))
  {
    m_spekeKeyProvider = jsonValue.GetObject("spekeKeyProvider");

    m_spekeKeyProviderHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_constantInitializationVectorHasBeenSet)
  {
   payload.WithString("constantInitializationVector", m_constantInitializationVector);

  }

  if(m_encryptionMethodHasBeenSet)
  {
   payload.WithString("encryptionMethod", EncryptionMethodMapper::GetNameForEncryptionMethod(m_encryptionMethod));
  }

  if(m_keyRotationIntervalSecondsHasBeenSet)
  {
   payload.WithInteger("keyRotationIntervalSeconds", m_keyRotationIntervalSeconds);

  }

  if(m_repeatExtXKeyHasBeenSet)
  {
   payload.WithBool("repeatExtXKey", m_repeatExtXKey);

  }

  if(m_spekeKeyProviderHasBeenSet)
  {
   payload.WithObject("spekeKeyProvider", m_spekeKeyProvider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
