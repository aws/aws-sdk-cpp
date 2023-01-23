/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/AppInstanceUserEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

AppInstanceUserEndpoint::AppInstanceUserEndpoint() : 
    m_appInstanceUserArnHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(AppInstanceUserEndpointType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_endpointAttributesHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_allowMessages(AllowMessages::NOT_SET),
    m_allowMessagesHasBeenSet(false),
    m_endpointStateHasBeenSet(false)
{
}

AppInstanceUserEndpoint::AppInstanceUserEndpoint(JsonView jsonValue) : 
    m_appInstanceUserArnHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(AppInstanceUserEndpointType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_endpointAttributesHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_allowMessages(AllowMessages::NOT_SET),
    m_allowMessagesHasBeenSet(false),
    m_endpointStateHasBeenSet(false)
{
  *this = jsonValue;
}

AppInstanceUserEndpoint& AppInstanceUserEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppInstanceUserArn"))
  {
    m_appInstanceUserArn = jsonValue.GetString("AppInstanceUserArn");

    m_appInstanceUserArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointId"))
  {
    m_endpointId = jsonValue.GetString("EndpointId");

    m_endpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = AppInstanceUserEndpointTypeMapper::GetAppInstanceUserEndpointTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointAttributes"))
  {
    m_endpointAttributes = jsonValue.GetObject("EndpointAttributes");

    m_endpointAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowMessages"))
  {
    m_allowMessages = AllowMessagesMapper::GetAllowMessagesForName(jsonValue.GetString("AllowMessages"));

    m_allowMessagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointState"))
  {
    m_endpointState = jsonValue.GetObject("EndpointState");

    m_endpointStateHasBeenSet = true;
  }

  return *this;
}

JsonValue AppInstanceUserEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_appInstanceUserArnHasBeenSet)
  {
   payload.WithString("AppInstanceUserArn", m_appInstanceUserArn);

  }

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AppInstanceUserEndpointTypeMapper::GetNameForAppInstanceUserEndpointType(m_type));
  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_endpointAttributesHasBeenSet)
  {
   payload.WithObject("EndpointAttributes", m_endpointAttributes.Jsonize());

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_allowMessagesHasBeenSet)
  {
   payload.WithString("AllowMessages", AllowMessagesMapper::GetNameForAllowMessages(m_allowMessages));
  }

  if(m_endpointStateHasBeenSet)
  {
   payload.WithObject("EndpointState", m_endpointState.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
