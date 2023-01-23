/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedProfile.h>
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

DescribedProfile::DescribedProfile() : 
    m_arnHasBeenSet(false),
    m_profileIdHasBeenSet(false),
    m_profileType(ProfileType::NOT_SET),
    m_profileTypeHasBeenSet(false),
    m_as2IdHasBeenSet(false),
    m_certificateIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DescribedProfile::DescribedProfile(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_profileIdHasBeenSet(false),
    m_profileType(ProfileType::NOT_SET),
    m_profileTypeHasBeenSet(false),
    m_as2IdHasBeenSet(false),
    m_certificateIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

DescribedProfile& DescribedProfile::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ProfileType"))
  {
    m_profileType = ProfileTypeMapper::GetProfileTypeForName(jsonValue.GetString("ProfileType"));

    m_profileTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("As2Id"))
  {
    m_as2Id = jsonValue.GetString("As2Id");

    m_as2IdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateIds"))
  {
    Aws::Utils::Array<JsonView> certificateIdsJsonList = jsonValue.GetArray("CertificateIds");
    for(unsigned certificateIdsIndex = 0; certificateIdsIndex < certificateIdsJsonList.GetLength(); ++certificateIdsIndex)
    {
      m_certificateIds.push_back(certificateIdsJsonList[certificateIdsIndex].AsString());
    }
    m_certificateIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribedProfile::Jsonize() const
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

  if(m_profileTypeHasBeenSet)
  {
   payload.WithString("ProfileType", ProfileTypeMapper::GetNameForProfileType(m_profileType));
  }

  if(m_as2IdHasBeenSet)
  {
   payload.WithString("As2Id", m_as2Id);

  }

  if(m_certificateIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificateIdsJsonList(m_certificateIds.size());
   for(unsigned certificateIdsIndex = 0; certificateIdsIndex < certificateIdsJsonList.GetLength(); ++certificateIdsIndex)
   {
     certificateIdsJsonList[certificateIdsIndex].AsString(m_certificateIds[certificateIdsIndex]);
   }
   payload.WithArray("CertificateIds", std::move(certificateIdsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
