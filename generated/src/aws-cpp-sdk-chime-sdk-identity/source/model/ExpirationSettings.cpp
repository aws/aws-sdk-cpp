/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/ExpirationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

ExpirationSettings::ExpirationSettings() : 
    m_expirationDays(0),
    m_expirationDaysHasBeenSet(false),
    m_expirationCriterion(ExpirationCriterion::NOT_SET),
    m_expirationCriterionHasBeenSet(false)
{
}

ExpirationSettings::ExpirationSettings(JsonView jsonValue) : 
    m_expirationDays(0),
    m_expirationDaysHasBeenSet(false),
    m_expirationCriterion(ExpirationCriterion::NOT_SET),
    m_expirationCriterionHasBeenSet(false)
{
  *this = jsonValue;
}

ExpirationSettings& ExpirationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExpirationDays"))
  {
    m_expirationDays = jsonValue.GetInteger("ExpirationDays");

    m_expirationDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationCriterion"))
  {
    m_expirationCriterion = ExpirationCriterionMapper::GetExpirationCriterionForName(jsonValue.GetString("ExpirationCriterion"));

    m_expirationCriterionHasBeenSet = true;
  }

  return *this;
}

JsonValue ExpirationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_expirationDaysHasBeenSet)
  {
   payload.WithInteger("ExpirationDays", m_expirationDays);

  }

  if(m_expirationCriterionHasBeenSet)
  {
   payload.WithString("ExpirationCriterion", ExpirationCriterionMapper::GetNameForExpirationCriterion(m_expirationCriterion));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
