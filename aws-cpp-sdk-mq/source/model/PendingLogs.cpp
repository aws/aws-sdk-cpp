/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mq/model/PendingLogs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

PendingLogs::PendingLogs() : 
    m_audit(false),
    m_auditHasBeenSet(false),
    m_general(false),
    m_generalHasBeenSet(false)
{
}

PendingLogs::PendingLogs(JsonView jsonValue) : 
    m_audit(false),
    m_auditHasBeenSet(false),
    m_general(false),
    m_generalHasBeenSet(false)
{
  *this = jsonValue;
}

PendingLogs& PendingLogs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audit"))
  {
    m_audit = jsonValue.GetBool("audit");

    m_auditHasBeenSet = true;
  }

  if(jsonValue.ValueExists("general"))
  {
    m_general = jsonValue.GetBool("general");

    m_generalHasBeenSet = true;
  }

  return *this;
}

JsonValue PendingLogs::Jsonize() const
{
  JsonValue payload;

  if(m_auditHasBeenSet)
  {
   payload.WithBool("audit", m_audit);

  }

  if(m_generalHasBeenSet)
  {
   payload.WithBool("general", m_general);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
