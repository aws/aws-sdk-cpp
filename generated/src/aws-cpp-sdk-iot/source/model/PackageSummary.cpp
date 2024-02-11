/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PackageSummary.h>
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

PackageSummary::PackageSummary() : 
    m_packageNameHasBeenSet(false),
    m_defaultVersionNameHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
}

PackageSummary::PackageSummary(JsonView jsonValue) : 
    m_packageNameHasBeenSet(false),
    m_defaultVersionNameHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
  *this = jsonValue;
}

PackageSummary& PackageSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("packageName"))
  {
    m_packageName = jsonValue.GetString("packageName");

    m_packageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultVersionName"))
  {
    m_defaultVersionName = jsonValue.GetString("defaultVersionName");

    m_defaultVersionNameHasBeenSet = true;
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

JsonValue PackageSummary::Jsonize() const
{
  JsonValue payload;

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("packageName", m_packageName);

  }

  if(m_defaultVersionNameHasBeenSet)
  {
   payload.WithString("defaultVersionName", m_defaultVersionName);

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
