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

#include <aws/glue/model/DataCatalogEncryptionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DataCatalogEncryptionSettings::DataCatalogEncryptionSettings() : 
    m_encryptionAtRestHasBeenSet(false)
{
}

DataCatalogEncryptionSettings::DataCatalogEncryptionSettings(JsonView jsonValue) : 
    m_encryptionAtRestHasBeenSet(false)
{
  *this = jsonValue;
}

DataCatalogEncryptionSettings& DataCatalogEncryptionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionAtRest"))
  {
    m_encryptionAtRest = jsonValue.GetObject("EncryptionAtRest");

    m_encryptionAtRestHasBeenSet = true;
  }

  return *this;
}

JsonValue DataCatalogEncryptionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionAtRestHasBeenSet)
  {
   payload.WithObject("EncryptionAtRest", m_encryptionAtRest.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
