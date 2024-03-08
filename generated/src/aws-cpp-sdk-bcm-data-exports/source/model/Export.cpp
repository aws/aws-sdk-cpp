/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/Export.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

Export::Export() : 
    m_dataQueryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_destinationConfigurationsHasBeenSet(false),
    m_exportArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_refreshCadenceHasBeenSet(false)
{
}

Export::Export(JsonView jsonValue) : 
    m_dataQueryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_destinationConfigurationsHasBeenSet(false),
    m_exportArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_refreshCadenceHasBeenSet(false)
{
  *this = jsonValue;
}

Export& Export::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataQuery"))
  {
    m_dataQuery = jsonValue.GetObject("DataQuery");

    m_dataQueryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationConfigurations"))
  {
    m_destinationConfigurations = jsonValue.GetObject("DestinationConfigurations");

    m_destinationConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportArn"))
  {
    m_exportArn = jsonValue.GetString("ExportArn");

    m_exportArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshCadence"))
  {
    m_refreshCadence = jsonValue.GetObject("RefreshCadence");

    m_refreshCadenceHasBeenSet = true;
  }

  return *this;
}

JsonValue Export::Jsonize() const
{
  JsonValue payload;

  if(m_dataQueryHasBeenSet)
  {
   payload.WithObject("DataQuery", m_dataQuery.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_destinationConfigurationsHasBeenSet)
  {
   payload.WithObject("DestinationConfigurations", m_destinationConfigurations.Jsonize());

  }

  if(m_exportArnHasBeenSet)
  {
   payload.WithString("ExportArn", m_exportArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_refreshCadenceHasBeenSet)
  {
   payload.WithObject("RefreshCadence", m_refreshCadence.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
