/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_encryptionAtRestHasBeenSet(false),
    m_connectionPasswordEncryptionHasBeenSet(false)
{
}

DataCatalogEncryptionSettings::DataCatalogEncryptionSettings(JsonView jsonValue) : 
    m_encryptionAtRestHasBeenSet(false),
    m_connectionPasswordEncryptionHasBeenSet(false)
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

  if(jsonValue.ValueExists("ConnectionPasswordEncryption"))
  {
    m_connectionPasswordEncryption = jsonValue.GetObject("ConnectionPasswordEncryption");

    m_connectionPasswordEncryptionHasBeenSet = true;
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

  if(m_connectionPasswordEncryptionHasBeenSet)
  {
   payload.WithObject("ConnectionPasswordEncryption", m_connectionPasswordEncryption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
