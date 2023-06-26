/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/AppInstanceBotSummary.h>
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

AppInstanceBotSummary::AppInstanceBotSummary() : 
    m_appInstanceBotArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

AppInstanceBotSummary::AppInstanceBotSummary(JsonView jsonValue) : 
    m_appInstanceBotArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
  *this = jsonValue;
}

AppInstanceBotSummary& AppInstanceBotSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppInstanceBotArn"))
  {
    m_appInstanceBotArn = jsonValue.GetString("AppInstanceBotArn");

    m_appInstanceBotArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetString("Metadata");

    m_metadataHasBeenSet = true;
  }

  return *this;
}

JsonValue AppInstanceBotSummary::Jsonize() const
{
  JsonValue payload;

  if(m_appInstanceBotArnHasBeenSet)
  {
   payload.WithString("AppInstanceBotArn", m_appInstanceBotArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
