/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ActorProcess.h>
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

ActorProcess::ActorProcess(JsonView jsonValue)
{
  *this = jsonValue;
}

ActorProcess& ActorProcess::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sha256"))
  {
    m_sha256 = jsonValue.GetString("sha256");
    m_sha256HasBeenSet = true;
  }
  return *this;
}

JsonValue ActorProcess::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_sha256HasBeenSet)
  {
   payload.WithString("sha256", m_sha256);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
