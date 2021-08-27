/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SchemaVersionNumber.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

SchemaVersionNumber::SchemaVersionNumber() : 
    m_latestVersion(false),
    m_latestVersionHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false)
{
}

SchemaVersionNumber::SchemaVersionNumber(JsonView jsonValue) : 
    m_latestVersion(false),
    m_latestVersionHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaVersionNumber& SchemaVersionNumber::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LatestVersion"))
  {
    m_latestVersion = jsonValue.GetBool("LatestVersion");

    m_latestVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("VersionNumber");

    m_versionNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaVersionNumber::Jsonize() const
{
  JsonValue payload;

  if(m_latestVersionHasBeenSet)
  {
   payload.WithBool("LatestVersion", m_latestVersion);

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("VersionNumber", m_versionNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
