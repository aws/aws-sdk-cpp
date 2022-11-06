/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/Studio.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

Studio::Studio() : 
    m_studioIdHasBeenSet(false),
    m_studioArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_authMode(AuthMode::NOT_SET),
    m_authModeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_userRoleHasBeenSet(false),
    m_workspaceSecurityGroupIdHasBeenSet(false),
    m_engineSecurityGroupIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_defaultS3LocationHasBeenSet(false),
    m_idpAuthUrlHasBeenSet(false),
    m_idpRelayStateParameterNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Studio::Studio(JsonView jsonValue) : 
    m_studioIdHasBeenSet(false),
    m_studioArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_authMode(AuthMode::NOT_SET),
    m_authModeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_userRoleHasBeenSet(false),
    m_workspaceSecurityGroupIdHasBeenSet(false),
    m_engineSecurityGroupIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_defaultS3LocationHasBeenSet(false),
    m_idpAuthUrlHasBeenSet(false),
    m_idpRelayStateParameterNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Studio& Studio::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StudioId"))
  {
    m_studioId = jsonValue.GetString("StudioId");

    m_studioIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StudioArn"))
  {
    m_studioArn = jsonValue.GetString("StudioArn");

    m_studioArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthMode"))
  {
    m_authMode = AuthModeMapper::GetAuthModeForName(jsonValue.GetString("AuthMode"));

    m_authModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRole"))
  {
    m_serviceRole = jsonValue.GetString("ServiceRole");

    m_serviceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserRole"))
  {
    m_userRole = jsonValue.GetString("UserRole");

    m_userRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkspaceSecurityGroupId"))
  {
    m_workspaceSecurityGroupId = jsonValue.GetString("WorkspaceSecurityGroupId");

    m_workspaceSecurityGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineSecurityGroupId"))
  {
    m_engineSecurityGroupId = jsonValue.GetString("EngineSecurityGroupId");

    m_engineSecurityGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultS3Location"))
  {
    m_defaultS3Location = jsonValue.GetString("DefaultS3Location");

    m_defaultS3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdpAuthUrl"))
  {
    m_idpAuthUrl = jsonValue.GetString("IdpAuthUrl");

    m_idpAuthUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdpRelayStateParameterName"))
  {
    m_idpRelayStateParameterName = jsonValue.GetString("IdpRelayStateParameterName");

    m_idpRelayStateParameterNameHasBeenSet = true;
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

JsonValue Studio::Jsonize() const
{
  JsonValue payload;

  if(m_studioIdHasBeenSet)
  {
   payload.WithString("StudioId", m_studioId);

  }

  if(m_studioArnHasBeenSet)
  {
   payload.WithString("StudioArn", m_studioArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_authModeHasBeenSet)
  {
   payload.WithString("AuthMode", AuthModeMapper::GetNameForAuthMode(m_authMode));
  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

  }

  if(m_userRoleHasBeenSet)
  {
   payload.WithString("UserRole", m_userRole);

  }

  if(m_workspaceSecurityGroupIdHasBeenSet)
  {
   payload.WithString("WorkspaceSecurityGroupId", m_workspaceSecurityGroupId);

  }

  if(m_engineSecurityGroupIdHasBeenSet)
  {
   payload.WithString("EngineSecurityGroupId", m_engineSecurityGroupId);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_defaultS3LocationHasBeenSet)
  {
   payload.WithString("DefaultS3Location", m_defaultS3Location);

  }

  if(m_idpAuthUrlHasBeenSet)
  {
   payload.WithString("IdpAuthUrl", m_idpAuthUrl);

  }

  if(m_idpRelayStateParameterNameHasBeenSet)
  {
   payload.WithString("IdpRelayStateParameterName", m_idpRelayStateParameterName);

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
} // namespace EMR
} // namespace Aws
