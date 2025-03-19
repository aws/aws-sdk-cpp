/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobRunAsUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

JobRunAsUser::JobRunAsUser(JsonView jsonValue)
{
  *this = jsonValue;
}

JobRunAsUser& JobRunAsUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("posix"))
  {
    m_posix = jsonValue.GetObject("posix");
    m_posixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("windows"))
  {
    m_windows = jsonValue.GetObject("windows");
    m_windowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runAs"))
  {
    m_runAs = RunAsMapper::GetRunAsForName(jsonValue.GetString("runAs"));
    m_runAsHasBeenSet = true;
  }
  return *this;
}

JsonValue JobRunAsUser::Jsonize() const
{
  JsonValue payload;

  if(m_posixHasBeenSet)
  {
   payload.WithObject("posix", m_posix.Jsonize());

  }

  if(m_windowsHasBeenSet)
  {
   payload.WithObject("windows", m_windows.Jsonize());

  }

  if(m_runAsHasBeenSet)
  {
   payload.WithString("runAs", RunAsMapper::GetNameForRunAs(m_runAs));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
