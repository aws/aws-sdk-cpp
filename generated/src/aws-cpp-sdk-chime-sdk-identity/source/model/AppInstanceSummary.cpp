﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/AppInstanceSummary.h>
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

AppInstanceSummary::AppInstanceSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AppInstanceSummary& AppInstanceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppInstanceArn"))
  {
    m_appInstanceArn = jsonValue.GetString("AppInstanceArn");
    m_appInstanceArnHasBeenSet = true;
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

JsonValue AppInstanceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_appInstanceArnHasBeenSet)
  {
   payload.WithString("AppInstanceArn", m_appInstanceArn);

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
