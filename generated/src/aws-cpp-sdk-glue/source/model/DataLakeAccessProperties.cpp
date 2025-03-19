/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataLakeAccessProperties.h>
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

DataLakeAccessProperties::DataLakeAccessProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

DataLakeAccessProperties& DataLakeAccessProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataLakeAccess"))
  {
    m_dataLakeAccess = jsonValue.GetBool("DataLakeAccess");
    m_dataLakeAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataTransferRole"))
  {
    m_dataTransferRole = jsonValue.GetString("DataTransferRole");
    m_dataTransferRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKey"))
  {
    m_kmsKey = jsonValue.GetString("KmsKey");
    m_kmsKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CatalogType"))
  {
    m_catalogType = jsonValue.GetString("CatalogType");
    m_catalogTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DataLakeAccessProperties::Jsonize() const
{
  JsonValue payload;

  if(m_dataLakeAccessHasBeenSet)
  {
   payload.WithBool("DataLakeAccess", m_dataLakeAccess);

  }

  if(m_dataTransferRoleHasBeenSet)
  {
   payload.WithString("DataTransferRole", m_dataTransferRole);

  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("KmsKey", m_kmsKey);

  }

  if(m_catalogTypeHasBeenSet)
  {
   payload.WithString("CatalogType", m_catalogType);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
