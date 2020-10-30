/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DocDbSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

DocDbSettings::DocDbSettings() : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_nestingLevel(NestingLevelValue::NOT_SET),
    m_nestingLevelHasBeenSet(false),
    m_extractDocId(false),
    m_extractDocIdHasBeenSet(false),
    m_docsToInvestigate(0),
    m_docsToInvestigateHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

DocDbSettings::DocDbSettings(JsonView jsonValue) : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_nestingLevel(NestingLevelValue::NOT_SET),
    m_nestingLevelHasBeenSet(false),
    m_extractDocId(false),
    m_extractDocIdHasBeenSet(false),
    m_docsToInvestigate(0),
    m_docsToInvestigateHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

DocDbSettings& DocDbSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

    m_serverNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NestingLevel"))
  {
    m_nestingLevel = NestingLevelValueMapper::GetNestingLevelValueForName(jsonValue.GetString("NestingLevel"));

    m_nestingLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtractDocId"))
  {
    m_extractDocId = jsonValue.GetBool("ExtractDocId");

    m_extractDocIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocsToInvestigate"))
  {
    m_docsToInvestigate = jsonValue.GetInteger("DocsToInvestigate");

    m_docsToInvestigateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DocDbSettings::Jsonize() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_nestingLevelHasBeenSet)
  {
   payload.WithString("NestingLevel", NestingLevelValueMapper::GetNameForNestingLevelValue(m_nestingLevel));
  }

  if(m_extractDocIdHasBeenSet)
  {
   payload.WithBool("ExtractDocId", m_extractDocId);

  }

  if(m_docsToInvestigateHasBeenSet)
  {
   payload.WithInteger("DocsToInvestigate", m_docsToInvestigate);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
