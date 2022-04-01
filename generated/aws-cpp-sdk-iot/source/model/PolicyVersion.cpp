/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PolicyVersion.h>
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

PolicyVersion::PolicyVersion() : 
    m_versionIdHasBeenSet(false),
    m_isDefaultVersion(false),
    m_isDefaultVersionHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
}

PolicyVersion::PolicyVersion(JsonView jsonValue) : 
    m_versionIdHasBeenSet(false),
    m_isDefaultVersion(false),
    m_isDefaultVersionHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyVersion& PolicyVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("versionId"))
  {
    m_versionId = jsonValue.GetString("versionId");

    m_versionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isDefaultVersion"))
  {
    m_isDefaultVersion = jsonValue.GetBool("isDefaultVersion");

    m_isDefaultVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createDate"))
  {
    m_createDate = jsonValue.GetDouble("createDate");

    m_createDateHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyVersion::Jsonize() const
{
  JsonValue payload;

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("versionId", m_versionId);

  }

  if(m_isDefaultVersionHasBeenSet)
  {
   payload.WithBool("isDefaultVersion", m_isDefaultVersion);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithDouble("createDate", m_createDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
