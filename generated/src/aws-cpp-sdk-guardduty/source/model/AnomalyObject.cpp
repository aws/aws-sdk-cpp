/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AnomalyObject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

AnomalyObject::AnomalyObject() : 
    m_profileType(ProfileType::NOT_SET),
    m_profileTypeHasBeenSet(false),
    m_profileSubtype(ProfileSubtype::NOT_SET),
    m_profileSubtypeHasBeenSet(false),
    m_observationsHasBeenSet(false)
{
}

AnomalyObject::AnomalyObject(JsonView jsonValue) : 
    m_profileType(ProfileType::NOT_SET),
    m_profileTypeHasBeenSet(false),
    m_profileSubtype(ProfileSubtype::NOT_SET),
    m_profileSubtypeHasBeenSet(false),
    m_observationsHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyObject& AnomalyObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("profileType"))
  {
    m_profileType = ProfileTypeMapper::GetProfileTypeForName(jsonValue.GetString("profileType"));

    m_profileTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profileSubtype"))
  {
    m_profileSubtype = ProfileSubtypeMapper::GetProfileSubtypeForName(jsonValue.GetString("profileSubtype"));

    m_profileSubtypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("observations"))
  {
    m_observations = jsonValue.GetObject("observations");

    m_observationsHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyObject::Jsonize() const
{
  JsonValue payload;

  if(m_profileTypeHasBeenSet)
  {
   payload.WithString("profileType", ProfileTypeMapper::GetNameForProfileType(m_profileType));
  }

  if(m_profileSubtypeHasBeenSet)
  {
   payload.WithString("profileSubtype", ProfileSubtypeMapper::GetNameForProfileSubtype(m_profileSubtype));
  }

  if(m_observationsHasBeenSet)
  {
   payload.WithObject("observations", m_observations.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
