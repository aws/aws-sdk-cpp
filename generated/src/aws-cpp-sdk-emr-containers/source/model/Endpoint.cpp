/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/Endpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

Endpoint::Endpoint() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_virtualClusterIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_state(EndpointState::NOT_SET),
    m_stateHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_certificateAuthorityHasBeenSet(false),
    m_configurationOverridesHasBeenSet(false),
    m_serverUrlHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_stateDetailsHasBeenSet(false),
    m_failureReason(FailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Endpoint::Endpoint(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_virtualClusterIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_state(EndpointState::NOT_SET),
    m_stateHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_certificateAuthorityHasBeenSet(false),
    m_configurationOverridesHasBeenSet(false),
    m_serverUrlHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_stateDetailsHasBeenSet(false),
    m_failureReason(FailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Endpoint& Endpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualClusterId"))
  {
    m_virtualClusterId = jsonValue.GetString("virtualClusterId");

    m_virtualClusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = EndpointStateMapper::GetEndpointStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("releaseLabel"))
  {
    m_releaseLabel = jsonValue.GetString("releaseLabel");

    m_releaseLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateAuthority"))
  {
    m_certificateAuthority = jsonValue.GetObject("certificateAuthority");

    m_certificateAuthorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationOverrides"))
  {
    m_configurationOverrides = jsonValue.GetObject("configurationOverrides");

    m_configurationOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverUrl"))
  {
    m_serverUrl = jsonValue.GetString("serverUrl");

    m_serverUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroup"))
  {
    m_securityGroup = jsonValue.GetString("securityGroup");

    m_securityGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateDetails"))
  {
    m_stateDetails = jsonValue.GetString("stateDetails");

    m_stateDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = FailureReasonMapper::GetFailureReasonForName(jsonValue.GetString("failureReason"));

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Endpoint::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_virtualClusterIdHasBeenSet)
  {
   payload.WithString("virtualClusterId", m_virtualClusterId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", EndpointStateMapper::GetNameForEndpointState(m_state));
  }

  if(m_releaseLabelHasBeenSet)
  {
   payload.WithString("releaseLabel", m_releaseLabel);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  if(m_certificateAuthorityHasBeenSet)
  {
   payload.WithObject("certificateAuthority", m_certificateAuthority.Jsonize());

  }

  if(m_configurationOverridesHasBeenSet)
  {
   payload.WithObject("configurationOverrides", m_configurationOverrides.Jsonize());

  }

  if(m_serverUrlHasBeenSet)
  {
   payload.WithString("serverUrl", m_serverUrl);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_securityGroupHasBeenSet)
  {
   payload.WithString("securityGroup", m_securityGroup);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("subnetIds", std::move(subnetIdsJsonList));

  }

  if(m_stateDetailsHasBeenSet)
  {
   payload.WithString("stateDetails", m_stateDetails);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", FailureReasonMapper::GetNameForFailureReason(m_failureReason));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
