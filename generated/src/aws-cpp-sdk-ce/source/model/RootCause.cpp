/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/RootCause.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

RootCause::RootCause() : 
    m_serviceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_linkedAccountHasBeenSet(false),
    m_usageTypeHasBeenSet(false),
    m_linkedAccountNameHasBeenSet(false)
{
}

RootCause::RootCause(JsonView jsonValue) : 
    m_serviceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_linkedAccountHasBeenSet(false),
    m_usageTypeHasBeenSet(false),
    m_linkedAccountNameHasBeenSet(false)
{
  *this = jsonValue;
}

RootCause& RootCause::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Service"))
  {
    m_service = jsonValue.GetString("Service");

    m_serviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkedAccount"))
  {
    m_linkedAccount = jsonValue.GetString("LinkedAccount");

    m_linkedAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsageType"))
  {
    m_usageType = jsonValue.GetString("UsageType");

    m_usageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkedAccountName"))
  {
    m_linkedAccountName = jsonValue.GetString("LinkedAccountName");

    m_linkedAccountNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RootCause::Jsonize() const
{
  JsonValue payload;

  if(m_serviceHasBeenSet)
  {
   payload.WithString("Service", m_service);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_linkedAccountHasBeenSet)
  {
   payload.WithString("LinkedAccount", m_linkedAccount);

  }

  if(m_usageTypeHasBeenSet)
  {
   payload.WithString("UsageType", m_usageType);

  }

  if(m_linkedAccountNameHasBeenSet)
  {
   payload.WithString("LinkedAccountName", m_linkedAccountName);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
