/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/RdsSalSettings.h>
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

RdsSalSettings::RdsSalSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

RdsSalSettings& RdsSalSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RdsSalCredentialsProvider"))
  {
    m_rdsSalCredentialsProvider = jsonValue.GetObject("RdsSalCredentialsProvider");
    m_rdsSalCredentialsProviderHasBeenSet = true;
  }
  return *this;
}

JsonValue RdsSalSettings::Jsonize() const
{
  JsonValue payload;

  if(m_rdsSalCredentialsProviderHasBeenSet)
  {
   payload.WithObject("RdsSalCredentialsProvider", m_rdsSalCredentialsProvider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
