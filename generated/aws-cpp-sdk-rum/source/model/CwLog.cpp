/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/CwLog.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

CwLog::CwLog() : 
    m_cwLogEnabled(false),
    m_cwLogEnabledHasBeenSet(false),
    m_cwLogGroupHasBeenSet(false)
{
}

CwLog::CwLog(JsonView jsonValue) : 
    m_cwLogEnabled(false),
    m_cwLogEnabledHasBeenSet(false),
    m_cwLogGroupHasBeenSet(false)
{
  *this = jsonValue;
}

CwLog& CwLog::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CwLogEnabled"))
  {
    m_cwLogEnabled = jsonValue.GetBool("CwLogEnabled");

    m_cwLogEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CwLogGroup"))
  {
    m_cwLogGroup = jsonValue.GetString("CwLogGroup");

    m_cwLogGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue CwLog::Jsonize() const
{
  JsonValue payload;

  if(m_cwLogEnabledHasBeenSet)
  {
   payload.WithBool("CwLogEnabled", m_cwLogEnabled);

  }

  if(m_cwLogGroupHasBeenSet)
  {
   payload.WithString("CwLogGroup", m_cwLogGroup);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
