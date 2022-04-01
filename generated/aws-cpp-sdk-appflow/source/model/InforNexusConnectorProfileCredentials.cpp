/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/InforNexusConnectorProfileCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

InforNexusConnectorProfileCredentials::InforNexusConnectorProfileCredentials() : 
    m_accessKeyIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_datakeyHasBeenSet(false)
{
}

InforNexusConnectorProfileCredentials::InforNexusConnectorProfileCredentials(JsonView jsonValue) : 
    m_accessKeyIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_datakeyHasBeenSet(false)
{
  *this = jsonValue;
}

InforNexusConnectorProfileCredentials& InforNexusConnectorProfileCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("accessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretAccessKey"))
  {
    m_secretAccessKey = jsonValue.GetString("secretAccessKey");

    m_secretAccessKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datakey"))
  {
    m_datakey = jsonValue.GetString("datakey");

    m_datakeyHasBeenSet = true;
  }

  return *this;
}

JsonValue InforNexusConnectorProfileCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("accessKeyId", m_accessKeyId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_secretAccessKeyHasBeenSet)
  {
   payload.WithString("secretAccessKey", m_secretAccessKey);

  }

  if(m_datakeyHasBeenSet)
  {
   payload.WithString("datakey", m_datakey);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
