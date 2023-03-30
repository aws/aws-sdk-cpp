/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ProcessDetails.h>
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

ProcessDetails::ProcessDetails() : 
    m_nameHasBeenSet(false),
    m_executablePathHasBeenSet(false),
    m_executableSha256HasBeenSet(false),
    m_namespacePid(0),
    m_namespacePidHasBeenSet(false),
    m_pwdHasBeenSet(false),
    m_pid(0),
    m_pidHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_parentUuidHasBeenSet(false),
    m_userHasBeenSet(false),
    m_userId(0),
    m_userIdHasBeenSet(false),
    m_euid(0),
    m_euidHasBeenSet(false),
    m_lineageHasBeenSet(false)
{
}

ProcessDetails::ProcessDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_executablePathHasBeenSet(false),
    m_executableSha256HasBeenSet(false),
    m_namespacePid(0),
    m_namespacePidHasBeenSet(false),
    m_pwdHasBeenSet(false),
    m_pid(0),
    m_pidHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_parentUuidHasBeenSet(false),
    m_userHasBeenSet(false),
    m_userId(0),
    m_userIdHasBeenSet(false),
    m_euid(0),
    m_euidHasBeenSet(false),
    m_lineageHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessDetails& ProcessDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executablePath"))
  {
    m_executablePath = jsonValue.GetString("executablePath");

    m_executablePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executableSha256"))
  {
    m_executableSha256 = jsonValue.GetString("executableSha256");

    m_executableSha256HasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespacePid"))
  {
    m_namespacePid = jsonValue.GetInteger("namespacePid");

    m_namespacePidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pwd"))
  {
    m_pwd = jsonValue.GetString("pwd");

    m_pwdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pid"))
  {
    m_pid = jsonValue.GetInteger("pid");

    m_pidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uuid"))
  {
    m_uuid = jsonValue.GetString("uuid");

    m_uuidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentUuid"))
  {
    m_parentUuid = jsonValue.GetString("parentUuid");

    m_parentUuidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetString("user");

    m_userHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetInteger("userId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("euid"))
  {
    m_euid = jsonValue.GetInteger("euid");

    m_euidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lineage"))
  {
    Aws::Utils::Array<JsonView> lineageJsonList = jsonValue.GetArray("lineage");
    for(unsigned lineageIndex = 0; lineageIndex < lineageJsonList.GetLength(); ++lineageIndex)
    {
      m_lineage.push_back(lineageJsonList[lineageIndex].AsObject());
    }
    m_lineageHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_executablePathHasBeenSet)
  {
   payload.WithString("executablePath", m_executablePath);

  }

  if(m_executableSha256HasBeenSet)
  {
   payload.WithString("executableSha256", m_executableSha256);

  }

  if(m_namespacePidHasBeenSet)
  {
   payload.WithInteger("namespacePid", m_namespacePid);

  }

  if(m_pwdHasBeenSet)
  {
   payload.WithString("pwd", m_pwd);

  }

  if(m_pidHasBeenSet)
  {
   payload.WithInteger("pid", m_pid);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_uuidHasBeenSet)
  {
   payload.WithString("uuid", m_uuid);

  }

  if(m_parentUuidHasBeenSet)
  {
   payload.WithString("parentUuid", m_parentUuid);

  }

  if(m_userHasBeenSet)
  {
   payload.WithString("user", m_user);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithInteger("userId", m_userId);

  }

  if(m_euidHasBeenSet)
  {
   payload.WithInteger("euid", m_euid);

  }

  if(m_lineageHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lineageJsonList(m_lineage.size());
   for(unsigned lineageIndex = 0; lineageIndex < lineageJsonList.GetLength(); ++lineageIndex)
   {
     lineageJsonList[lineageIndex].AsObject(m_lineage[lineageIndex].Jsonize());
   }
   payload.WithArray("lineage", std::move(lineageJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
