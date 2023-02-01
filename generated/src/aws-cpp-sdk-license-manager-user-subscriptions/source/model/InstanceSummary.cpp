/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/InstanceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

InstanceSummary::InstanceSummary() : 
    m_instanceIdHasBeenSet(false),
    m_lastStatusCheckDateHasBeenSet(false),
    m_productsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

InstanceSummary::InstanceSummary(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_lastStatusCheckDateHasBeenSet(false),
    m_productsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceSummary& InstanceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStatusCheckDate"))
  {
    m_lastStatusCheckDate = jsonValue.GetString("LastStatusCheckDate");

    m_lastStatusCheckDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Products"))
  {
    Aws::Utils::Array<JsonView> productsJsonList = jsonValue.GetArray("Products");
    for(unsigned productsIndex = 0; productsIndex < productsJsonList.GetLength(); ++productsIndex)
    {
      m_products.push_back(productsJsonList[productsIndex].AsString());
    }
    m_productsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_lastStatusCheckDateHasBeenSet)
  {
   payload.WithString("LastStatusCheckDate", m_lastStatusCheckDate);

  }

  if(m_productsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productsJsonList(m_products.size());
   for(unsigned productsIndex = 0; productsIndex < productsJsonList.GetLength(); ++productsIndex)
   {
     productsJsonList[productsIndex].AsString(m_products[productsIndex]);
   }
   payload.WithArray("Products", std::move(productsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
