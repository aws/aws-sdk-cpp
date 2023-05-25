/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/LineageObject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

LineageObject::LineageObject() : 
    m_startTimeHasBeenSet(false),
    m_namespacePid(0),
    m_namespacePidHasBeenSet(false),
    m_userId(0),
    m_userIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pid(0),
    m_pidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_executablePathHasBeenSet(false),
    m_euid(0),
    m_euidHasBeenSet(false),
    m_parentUuidHasBeenSet(false)
{
}

LineageObject::LineageObject(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_namespacePid(0),
    m_namespacePidHasBeenSet(false),
    m_userId(0),
    m_userIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pid(0),
    m_pidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_executablePathHasBeenSet(false),
    m_euid(0),
    m_euidHasBeenSet(false),
    m_parentUuidHasBeenSet(false)
{
  *this = jsonValue;
}

LineageObject& LineageObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespacePid"))
  {
    m_namespacePid = jsonValue.GetInteger("namespacePid");

    m_namespacePidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetInteger("userId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pid"))
  {
    m_pid = jsonValue.GetInteger("pid");

    m_pidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uuid"))
  {
    m_uuid = jsonValue.GetString("uuid");

    m_uuidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executablePath"))
  {
    m_executablePath = jsonValue.GetString("executablePath");

    m_executablePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("euid"))
  {
    m_euid = jsonValue.GetInteger("euid");

    m_euidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentUuid"))
  {
    m_parentUuid = jsonValue.GetString("parentUuid");

    m_parentUuidHasBeenSet = true;
  }

  return *this;
}

JsonValue LineageObject::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_namespacePidHasBeenSet)
  {
   payload.WithInteger("namespacePid", m_namespacePid);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithInteger("userId", m_userId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pidHasBeenSet)
  {
   payload.WithInteger("pid", m_pid);

  }

  if(m_uuidHasBeenSet)
  {
   payload.WithString("uuid", m_uuid);

  }

  if(m_executablePathHasBeenSet)
  {
   payload.WithString("executablePath", m_executablePath);

  }

  if(m_euidHasBeenSet)
  {
   payload.WithInteger("euid", m_euid);

  }

  if(m_parentUuidHasBeenSet)
  {
   payload.WithString("parentUuid", m_parentUuid);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
