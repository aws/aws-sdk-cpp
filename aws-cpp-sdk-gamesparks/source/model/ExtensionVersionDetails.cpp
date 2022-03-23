/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/ExtensionVersionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameSparks
{
namespace Model
{

ExtensionVersionDetails::ExtensionVersionDetails() : 
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

ExtensionVersionDetails::ExtensionVersionDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

ExtensionVersionDetails& ExtensionVersionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetString("Schema");

    m_schemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue ExtensionVersionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("Schema", m_schema);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace GameSparks
} // namespace Aws
