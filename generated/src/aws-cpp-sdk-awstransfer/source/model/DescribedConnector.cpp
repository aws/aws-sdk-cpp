/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedConnector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

DescribedConnector::DescribedConnector() : 
    m_arnHasBeenSet(false),
    m_connectorIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_as2ConfigHasBeenSet(false),
    m_accessRoleHasBeenSet(false),
    m_loggingRoleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DescribedConnector::DescribedConnector(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_connectorIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_as2ConfigHasBeenSet(false),
    m_accessRoleHasBeenSet(false),
    m_loggingRoleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

DescribedConnector& DescribedConnector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectorId"))
  {
    m_connectorId = jsonValue.GetString("ConnectorId");

    m_connectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("As2Config"))
  {
    m_as2Config = jsonValue.GetObject("As2Config");

    m_as2ConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessRole"))
  {
    m_accessRole = jsonValue.GetString("AccessRole");

    m_accessRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoggingRole"))
  {
    m_loggingRole = jsonValue.GetString("LoggingRole");

    m_loggingRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribedConnector::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_connectorIdHasBeenSet)
  {
   payload.WithString("ConnectorId", m_connectorId);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_as2ConfigHasBeenSet)
  {
   payload.WithObject("As2Config", m_as2Config.Jsonize());

  }

  if(m_accessRoleHasBeenSet)
  {
   payload.WithString("AccessRole", m_accessRole);

  }

  if(m_loggingRoleHasBeenSet)
  {
   payload.WithString("LoggingRole", m_loggingRole);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
