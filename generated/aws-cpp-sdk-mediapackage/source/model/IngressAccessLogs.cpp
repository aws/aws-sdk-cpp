/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/IngressAccessLogs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

IngressAccessLogs::IngressAccessLogs() : 
    m_logGroupNameHasBeenSet(false)
{
}

IngressAccessLogs::IngressAccessLogs(JsonView jsonValue) : 
    m_logGroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

IngressAccessLogs& IngressAccessLogs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue IngressAccessLogs::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
