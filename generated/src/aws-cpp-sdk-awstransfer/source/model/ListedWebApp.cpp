/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListedWebApp.h>
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

ListedWebApp::ListedWebApp(JsonView jsonValue)
{
  *this = jsonValue;
}

ListedWebApp& ListedWebApp::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebAppId"))
  {
    m_webAppId = jsonValue.GetString("WebAppId");
    m_webAppIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccessEndpoint"))
  {
    m_accessEndpoint = jsonValue.GetString("AccessEndpoint");
    m_accessEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebAppEndpoint"))
  {
    m_webAppEndpoint = jsonValue.GetString("WebAppEndpoint");
    m_webAppEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue ListedWebApp::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_webAppIdHasBeenSet)
  {
   payload.WithString("WebAppId", m_webAppId);

  }

  if(m_accessEndpointHasBeenSet)
  {
   payload.WithString("AccessEndpoint", m_accessEndpoint);

  }

  if(m_webAppEndpointHasBeenSet)
  {
   payload.WithString("WebAppEndpoint", m_webAppEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
