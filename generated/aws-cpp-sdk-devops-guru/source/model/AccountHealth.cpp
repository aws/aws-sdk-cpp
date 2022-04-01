/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/AccountHealth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

AccountHealth::AccountHealth() : 
    m_accountIdHasBeenSet(false),
    m_insightHasBeenSet(false)
{
}

AccountHealth::AccountHealth(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_insightHasBeenSet(false)
{
  *this = jsonValue;
}

AccountHealth& AccountHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Insight"))
  {
    m_insight = jsonValue.GetObject("Insight");

    m_insightHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountHealth::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_insightHasBeenSet)
  {
   payload.WithObject("Insight", m_insight.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
