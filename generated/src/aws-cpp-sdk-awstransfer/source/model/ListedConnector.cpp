/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListedConnector.h>
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

ListedConnector::ListedConnector() : 
    m_arnHasBeenSet(false),
    m_connectorIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

ListedConnector::ListedConnector(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_connectorIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

ListedConnector& ListedConnector::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue ListedConnector::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
