/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedHostKey.h>
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

DescribedHostKey::DescribedHostKey() : 
    m_arnHasBeenSet(false),
    m_hostKeyIdHasBeenSet(false),
    m_hostKeyFingerprintHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dateImportedHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DescribedHostKey::DescribedHostKey(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_hostKeyIdHasBeenSet(false),
    m_hostKeyFingerprintHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dateImportedHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

DescribedHostKey& DescribedHostKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostKeyId"))
  {
    m_hostKeyId = jsonValue.GetString("HostKeyId");

    m_hostKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostKeyFingerprint"))
  {
    m_hostKeyFingerprint = jsonValue.GetString("HostKeyFingerprint");

    m_hostKeyFingerprintHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateImported"))
  {
    m_dateImported = jsonValue.GetDouble("DateImported");

    m_dateImportedHasBeenSet = true;
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

JsonValue DescribedHostKey::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_hostKeyIdHasBeenSet)
  {
   payload.WithString("HostKeyId", m_hostKeyId);

  }

  if(m_hostKeyFingerprintHasBeenSet)
  {
   payload.WithString("HostKeyFingerprint", m_hostKeyFingerprint);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_dateImportedHasBeenSet)
  {
   payload.WithDouble("DateImported", m_dateImported.SecondsWithMSPrecision());
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
