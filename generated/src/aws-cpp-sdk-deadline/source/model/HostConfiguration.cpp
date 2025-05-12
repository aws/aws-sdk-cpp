/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/HostConfiguration.h>
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

HostConfiguration::HostConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

HostConfiguration& HostConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scriptBody"))
  {
    m_scriptBody = jsonValue.GetString("scriptBody");
    m_scriptBodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scriptTimeoutSeconds"))
  {
    m_scriptTimeoutSeconds = jsonValue.GetInteger("scriptTimeoutSeconds");
    m_scriptTimeoutSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue HostConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_scriptBodyHasBeenSet)
  {
   payload.WithString("scriptBody", m_scriptBody);

  }

  if(m_scriptTimeoutSecondsHasBeenSet)
  {
   payload.WithInteger("scriptTimeoutSeconds", m_scriptTimeoutSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
