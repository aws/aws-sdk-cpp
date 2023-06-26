/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/Administrator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

Administrator::Administrator() : 
    m_accountIdHasBeenSet(false),
    m_graphArnHasBeenSet(false),
    m_delegationTimeHasBeenSet(false)
{
}

Administrator::Administrator(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_graphArnHasBeenSet(false),
    m_delegationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Administrator& Administrator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GraphArn"))
  {
    m_graphArn = jsonValue.GetString("GraphArn");

    m_graphArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DelegationTime"))
  {
    m_delegationTime = jsonValue.GetString("DelegationTime");

    m_delegationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Administrator::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_graphArnHasBeenSet)
  {
   payload.WithString("GraphArn", m_graphArn);

  }

  if(m_delegationTimeHasBeenSet)
  {
   payload.WithString("DelegationTime", m_delegationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
