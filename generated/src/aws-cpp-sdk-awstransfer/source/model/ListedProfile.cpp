/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListedProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

ListedProfile::ListedProfile() : 
    m_arnHasBeenSet(false),
    m_profileIdHasBeenSet(false),
    m_as2IdHasBeenSet(false),
    m_profileType(ProfileType::NOT_SET),
    m_profileTypeHasBeenSet(false)
{
}

ListedProfile::ListedProfile(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_profileIdHasBeenSet(false),
    m_as2IdHasBeenSet(false),
    m_profileType(ProfileType::NOT_SET),
    m_profileTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ListedProfile& ListedProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileId"))
  {
    m_profileId = jsonValue.GetString("ProfileId");

    m_profileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("As2Id"))
  {
    m_as2Id = jsonValue.GetString("As2Id");

    m_as2IdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileType"))
  {
    m_profileType = ProfileTypeMapper::GetProfileTypeForName(jsonValue.GetString("ProfileType"));

    m_profileTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ListedProfile::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_as2IdHasBeenSet)
  {
   payload.WithString("As2Id", m_as2Id);

  }

  if(m_profileTypeHasBeenSet)
  {
   payload.WithString("ProfileType", ProfileTypeMapper::GetNameForProfileType(m_profileType));
  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
