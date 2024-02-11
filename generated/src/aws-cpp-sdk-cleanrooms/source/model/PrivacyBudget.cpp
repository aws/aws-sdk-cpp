/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PrivacyBudget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

PrivacyBudget::PrivacyBudget() : 
    m_differentialPrivacyHasBeenSet(false)
{
}

PrivacyBudget::PrivacyBudget(JsonView jsonValue) : 
    m_differentialPrivacyHasBeenSet(false)
{
  *this = jsonValue;
}

PrivacyBudget& PrivacyBudget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("differentialPrivacy"))
  {
    m_differentialPrivacy = jsonValue.GetObject("differentialPrivacy");

    m_differentialPrivacyHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivacyBudget::Jsonize() const
{
  JsonValue payload;

  if(m_differentialPrivacyHasBeenSet)
  {
   payload.WithObject("differentialPrivacy", m_differentialPrivacy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
