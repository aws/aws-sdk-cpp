/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryLifeCycle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

RecoveryLifeCycle::RecoveryLifeCycle() : 
    m_apiCallDateTimeHasBeenSet(false),
    m_jobIDHasBeenSet(false),
    m_lastRecoveryResult(RecoveryResult::NOT_SET),
    m_lastRecoveryResultHasBeenSet(false)
{
}

RecoveryLifeCycle::RecoveryLifeCycle(JsonView jsonValue) : 
    m_apiCallDateTimeHasBeenSet(false),
    m_jobIDHasBeenSet(false),
    m_lastRecoveryResult(RecoveryResult::NOT_SET),
    m_lastRecoveryResultHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryLifeCycle& RecoveryLifeCycle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiCallDateTime"))
  {
    m_apiCallDateTime = jsonValue.GetString("apiCallDateTime");

    m_apiCallDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobID"))
  {
    m_jobID = jsonValue.GetString("jobID");

    m_jobIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRecoveryResult"))
  {
    m_lastRecoveryResult = RecoveryResultMapper::GetRecoveryResultForName(jsonValue.GetString("lastRecoveryResult"));

    m_lastRecoveryResultHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryLifeCycle::Jsonize() const
{
  JsonValue payload;

  if(m_apiCallDateTimeHasBeenSet)
  {
   payload.WithString("apiCallDateTime", m_apiCallDateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_jobIDHasBeenSet)
  {
   payload.WithString("jobID", m_jobID);

  }

  if(m_lastRecoveryResultHasBeenSet)
  {
   payload.WithString("lastRecoveryResult", RecoveryResultMapper::GetNameForRecoveryResult(m_lastRecoveryResult));
  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
