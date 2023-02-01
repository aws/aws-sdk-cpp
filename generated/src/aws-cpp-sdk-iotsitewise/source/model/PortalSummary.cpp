/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PortalSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

PortalSummary::PortalSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_startUrlHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

PortalSummary::PortalSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_startUrlHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

PortalSummary& PortalSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startUrl"))
  {
    m_startUrl = jsonValue.GetString("startUrl");

    m_startUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateDate"))
  {
    m_lastUpdateDate = jsonValue.GetDouble("lastUpdateDate");

    m_lastUpdateDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue PortalSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_startUrlHasBeenSet)
  {
   payload.WithString("startUrl", m_startUrl);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastUpdateDateHasBeenSet)
  {
   payload.WithDouble("lastUpdateDate", m_lastUpdateDate.SecondsWithMSPrecision());
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
