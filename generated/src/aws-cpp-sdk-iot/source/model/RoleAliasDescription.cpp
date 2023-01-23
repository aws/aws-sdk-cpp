/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/RoleAliasDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

RoleAliasDescription::RoleAliasDescription() : 
    m_roleAliasHasBeenSet(false),
    m_roleAliasArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_credentialDurationSeconds(0),
    m_credentialDurationSecondsHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
}

RoleAliasDescription::RoleAliasDescription(JsonView jsonValue) : 
    m_roleAliasHasBeenSet(false),
    m_roleAliasArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_credentialDurationSeconds(0),
    m_credentialDurationSecondsHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
  *this = jsonValue;
}

RoleAliasDescription& RoleAliasDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleAlias"))
  {
    m_roleAlias = jsonValue.GetString("roleAlias");

    m_roleAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleAliasArn"))
  {
    m_roleAliasArn = jsonValue.GetString("roleAliasArn");

    m_roleAliasArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("credentialDurationSeconds"))
  {
    m_credentialDurationSeconds = jsonValue.GetInteger("credentialDurationSeconds");

    m_credentialDurationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue RoleAliasDescription::Jsonize() const
{
  JsonValue payload;

  if(m_roleAliasHasBeenSet)
  {
   payload.WithString("roleAlias", m_roleAlias);

  }

  if(m_roleAliasArnHasBeenSet)
  {
   payload.WithString("roleAliasArn", m_roleAliasArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_credentialDurationSecondsHasBeenSet)
  {
   payload.WithInteger("credentialDurationSeconds", m_credentialDurationSeconds);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("lastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
