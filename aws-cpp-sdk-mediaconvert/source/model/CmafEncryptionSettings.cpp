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

#include <aws/mediaconvert/model/CmafEncryptionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

CmafEncryptionSettings::CmafEncryptionSettings() : 
    m_constantInitializationVectorHasBeenSet(false),
    m_encryptionMethod(CmafEncryptionType::NOT_SET),
    m_encryptionMethodHasBeenSet(false),
    m_initializationVectorInManifest(CmafInitializationVectorInManifest::NOT_SET),
    m_initializationVectorInManifestHasBeenSet(false),
    m_spekeKeyProviderHasBeenSet(false),
    m_staticKeyProviderHasBeenSet(false),
    m_type(CmafKeyProviderType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

CmafEncryptionSettings::CmafEncryptionSettings(JsonView jsonValue) : 
    m_constantInitializationVectorHasBeenSet(false),
    m_encryptionMethod(CmafEncryptionType::NOT_SET),
    m_encryptionMethodHasBeenSet(false),
    m_initializationVectorInManifest(CmafInitializationVectorInManifest::NOT_SET),
    m_initializationVectorInManifestHasBeenSet(false),
    m_spekeKeyProviderHasBeenSet(false),
    m_staticKeyProviderHasBeenSet(false),
    m_type(CmafKeyProviderType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

CmafEncryptionSettings& CmafEncryptionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("constantInitializationVector"))
  {
    m_constantInitializationVector = jsonValue.GetString("constantInitializationVector");

    m_constantInitializationVectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionMethod"))
  {
    m_encryptionMethod = CmafEncryptionTypeMapper::GetCmafEncryptionTypeForName(jsonValue.GetString("encryptionMethod"));

    m_encryptionMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initializationVectorInManifest"))
  {
    m_initializationVectorInManifest = CmafInitializationVectorInManifestMapper::GetCmafInitializationVectorInManifestForName(jsonValue.GetString("initializationVectorInManifest"));

    m_initializationVectorInManifestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spekeKeyProvider"))
  {
    m_spekeKeyProvider = jsonValue.GetObject("spekeKeyProvider");

    m_spekeKeyProviderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("staticKeyProvider"))
  {
    m_staticKeyProvider = jsonValue.GetObject("staticKeyProvider");

    m_staticKeyProviderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = CmafKeyProviderTypeMapper::GetCmafKeyProviderTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue CmafEncryptionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_constantInitializationVectorHasBeenSet)
  {
   payload.WithString("constantInitializationVector", m_constantInitializationVector);

  }

  if(m_encryptionMethodHasBeenSet)
  {
   payload.WithString("encryptionMethod", CmafEncryptionTypeMapper::GetNameForCmafEncryptionType(m_encryptionMethod));
  }

  if(m_initializationVectorInManifestHasBeenSet)
  {
   payload.WithString("initializationVectorInManifest", CmafInitializationVectorInManifestMapper::GetNameForCmafInitializationVectorInManifest(m_initializationVectorInManifest));
  }

  if(m_spekeKeyProviderHasBeenSet)
  {
   payload.WithObject("spekeKeyProvider", m_spekeKeyProvider.Jsonize());

  }

  if(m_staticKeyProviderHasBeenSet)
  {
   payload.WithObject("staticKeyProvider", m_staticKeyProvider.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CmafKeyProviderTypeMapper::GetNameForCmafKeyProviderType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
