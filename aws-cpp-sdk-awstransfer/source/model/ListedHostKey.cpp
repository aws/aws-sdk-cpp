/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListedHostKey.h>
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

ListedHostKey::ListedHostKey() : 
    m_arnHasBeenSet(false),
    m_hostKeyIdHasBeenSet(false),
    m_fingerprintHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dateImportedHasBeenSet(false)
{
}

ListedHostKey::ListedHostKey(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_hostKeyIdHasBeenSet(false),
    m_fingerprintHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dateImportedHasBeenSet(false)
{
  *this = jsonValue;
}

ListedHostKey& ListedHostKey::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Fingerprint"))
  {
    m_fingerprint = jsonValue.GetString("Fingerprint");

    m_fingerprintHasBeenSet = true;
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

  return *this;
}

JsonValue ListedHostKey::Jsonize() const
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

  if(m_fingerprintHasBeenSet)
  {
   payload.WithString("Fingerprint", m_fingerprint);

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

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
