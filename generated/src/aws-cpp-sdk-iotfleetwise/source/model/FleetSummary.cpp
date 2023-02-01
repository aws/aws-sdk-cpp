/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/FleetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

FleetSummary::FleetSummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_signalCatalogArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
}

FleetSummary::FleetSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_signalCatalogArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

FleetSummary& FleetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signalCatalogArn"))
  {
    m_signalCatalogArn = jsonValue.GetString("signalCatalogArn");

    m_signalCatalogArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("lastModificationTime");

    m_lastModificationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue FleetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_signalCatalogArnHasBeenSet)
  {
   payload.WithString("signalCatalogArn", m_signalCatalogArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModificationTimeHasBeenSet)
  {
   payload.WithDouble("lastModificationTime", m_lastModificationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
