/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/EksAnywhereSubscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

EksAnywhereSubscription::EksAnywhereSubscription() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_effectiveDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_licenseQuantity(0),
    m_licenseQuantityHasBeenSet(false),
    m_licenseType(EksAnywhereSubscriptionLicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_termHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_autoRenew(false),
    m_autoRenewHasBeenSet(false),
    m_licenseArnsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

EksAnywhereSubscription::EksAnywhereSubscription(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_effectiveDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_licenseQuantity(0),
    m_licenseQuantityHasBeenSet(false),
    m_licenseType(EksAnywhereSubscriptionLicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_termHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_autoRenew(false),
    m_autoRenewHasBeenSet(false),
    m_licenseArnsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

EksAnywhereSubscription& EksAnywhereSubscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("effectiveDate"))
  {
    m_effectiveDate = jsonValue.GetDouble("effectiveDate");

    m_effectiveDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expirationDate"))
  {
    m_expirationDate = jsonValue.GetDouble("expirationDate");

    m_expirationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseQuantity"))
  {
    m_licenseQuantity = jsonValue.GetInteger("licenseQuantity");

    m_licenseQuantityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseType"))
  {
    m_licenseType = EksAnywhereSubscriptionLicenseTypeMapper::GetEksAnywhereSubscriptionLicenseTypeForName(jsonValue.GetString("licenseType"));

    m_licenseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("term"))
  {
    m_term = jsonValue.GetObject("term");

    m_termHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoRenew"))
  {
    m_autoRenew = jsonValue.GetBool("autoRenew");

    m_autoRenewHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseArns"))
  {
    Aws::Utils::Array<JsonView> licenseArnsJsonList = jsonValue.GetArray("licenseArns");
    for(unsigned licenseArnsIndex = 0; licenseArnsIndex < licenseArnsJsonList.GetLength(); ++licenseArnsIndex)
    {
      m_licenseArns.push_back(licenseArnsJsonList[licenseArnsIndex].AsString());
    }
    m_licenseArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue EksAnywhereSubscription::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_effectiveDateHasBeenSet)
  {
   payload.WithDouble("effectiveDate", m_effectiveDate.SecondsWithMSPrecision());
  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithDouble("expirationDate", m_expirationDate.SecondsWithMSPrecision());
  }

  if(m_licenseQuantityHasBeenSet)
  {
   payload.WithInteger("licenseQuantity", m_licenseQuantity);

  }

  if(m_licenseTypeHasBeenSet)
  {
   payload.WithString("licenseType", EksAnywhereSubscriptionLicenseTypeMapper::GetNameForEksAnywhereSubscriptionLicenseType(m_licenseType));
  }

  if(m_termHasBeenSet)
  {
   payload.WithObject("term", m_term.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_autoRenewHasBeenSet)
  {
   payload.WithBool("autoRenew", m_autoRenew);

  }

  if(m_licenseArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseArnsJsonList(m_licenseArns.size());
   for(unsigned licenseArnsIndex = 0; licenseArnsIndex < licenseArnsJsonList.GetLength(); ++licenseArnsIndex)
   {
     licenseArnsJsonList[licenseArnsIndex].AsString(m_licenseArns[licenseArnsIndex]);
   }
   payload.WithArray("licenseArns", std::move(licenseArnsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
