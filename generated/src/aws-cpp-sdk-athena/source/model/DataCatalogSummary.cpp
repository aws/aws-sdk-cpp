/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/DataCatalogSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

DataCatalogSummary::DataCatalogSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DataCatalogSummary& DataCatalogSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogName"))
  {
    m_catalogName = jsonValue.GetString("CatalogName");
    m_catalogNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = DataCatalogTypeMapper::GetDataCatalogTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = DataCatalogStatusMapper::GetDataCatalogStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionType"))
  {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("ConnectionType"));
    m_connectionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue DataCatalogSummary::Jsonize() const
{
  JsonValue payload;

  if(m_catalogNameHasBeenSet)
  {
   payload.WithString("CatalogName", m_catalogName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DataCatalogTypeMapper::GetNameForDataCatalogType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DataCatalogStatusMapper::GetNameForDataCatalogStatus(m_status));
  }

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("ConnectionType", ConnectionTypeMapper::GetNameForConnectionType(m_connectionType));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", m_error);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
