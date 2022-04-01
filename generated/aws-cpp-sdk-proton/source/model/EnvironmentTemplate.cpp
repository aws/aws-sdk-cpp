/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/EnvironmentTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

EnvironmentTemplate::EnvironmentTemplate() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provisioning(Provisioning::NOT_SET),
    m_provisioningHasBeenSet(false),
    m_recommendedVersionHasBeenSet(false)
{
}

EnvironmentTemplate::EnvironmentTemplate(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provisioning(Provisioning::NOT_SET),
    m_provisioningHasBeenSet(false),
    m_recommendedVersionHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentTemplate& EnvironmentTemplate::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("encryptionKey");

    m_encryptionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetDouble("lastModifiedAt");

    m_lastModifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provisioning"))
  {
    m_provisioning = ProvisioningMapper::GetProvisioningForName(jsonValue.GetString("provisioning"));

    m_provisioningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendedVersion"))
  {
    m_recommendedVersion = jsonValue.GetString("recommendedVersion");

    m_recommendedVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("encryptionKey", m_encryptionKey);

  }

  if(m_lastModifiedAtHasBeenSet)
  {
   payload.WithDouble("lastModifiedAt", m_lastModifiedAt.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_provisioningHasBeenSet)
  {
   payload.WithString("provisioning", ProvisioningMapper::GetNameForProvisioning(m_provisioning));
  }

  if(m_recommendedVersionHasBeenSet)
  {
   payload.WithString("recommendedVersion", m_recommendedVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
