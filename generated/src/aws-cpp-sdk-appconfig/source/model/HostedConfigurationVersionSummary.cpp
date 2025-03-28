﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/HostedConfigurationVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

HostedConfigurationVersionSummary::HostedConfigurationVersionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

HostedConfigurationVersionSummary& HostedConfigurationVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationProfileId"))
  {
    m_configurationProfileId = jsonValue.GetString("ConfigurationProfileId");
    m_configurationProfileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInteger("VersionNumber");
    m_versionNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");
    m_contentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionLabel"))
  {
    m_versionLabel = jsonValue.GetString("VersionLabel");
    m_versionLabelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue HostedConfigurationVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_configurationProfileIdHasBeenSet)
  {
   payload.WithString("ConfigurationProfileId", m_configurationProfileId);

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInteger("VersionNumber", m_versionNumber);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_versionLabelHasBeenSet)
  {
   payload.WithString("VersionLabel", m_versionLabel);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
