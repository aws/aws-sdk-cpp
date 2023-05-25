/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/VersionInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

VersionInformation::VersionInformation() : 
    m_arnHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_idHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

VersionInformation::VersionInformation(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_idHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

VersionInformation& VersionInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetString("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue VersionInformation::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithString("CreationTimestamp", m_creationTimestamp);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
