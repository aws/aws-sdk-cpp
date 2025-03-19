/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/OpenSearchIntegrationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

OpenSearchIntegrationDetails::OpenSearchIntegrationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenSearchIntegrationDetails& OpenSearchIntegrationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = jsonValue.GetObject("dataSource");
    m_dataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("application"))
  {
    m_application = jsonValue.GetObject("application");
    m_applicationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collection"))
  {
    m_collection = jsonValue.GetObject("collection");
    m_collectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workspace"))
  {
    m_workspace = jsonValue.GetObject("workspace");
    m_workspaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionPolicy"))
  {
    m_encryptionPolicy = jsonValue.GetObject("encryptionPolicy");
    m_encryptionPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkPolicy"))
  {
    m_networkPolicy = jsonValue.GetObject("networkPolicy");
    m_networkPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessPolicy"))
  {
    m_accessPolicy = jsonValue.GetObject("accessPolicy");
    m_accessPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifecyclePolicy"))
  {
    m_lifecyclePolicy = jsonValue.GetObject("lifecyclePolicy");
    m_lifecyclePolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenSearchIntegrationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("dataSource", m_dataSource.Jsonize());

  }

  if(m_applicationHasBeenSet)
  {
   payload.WithObject("application", m_application.Jsonize());

  }

  if(m_collectionHasBeenSet)
  {
   payload.WithObject("collection", m_collection.Jsonize());

  }

  if(m_workspaceHasBeenSet)
  {
   payload.WithObject("workspace", m_workspace.Jsonize());

  }

  if(m_encryptionPolicyHasBeenSet)
  {
   payload.WithObject("encryptionPolicy", m_encryptionPolicy.Jsonize());

  }

  if(m_networkPolicyHasBeenSet)
  {
   payload.WithObject("networkPolicy", m_networkPolicy.Jsonize());

  }

  if(m_accessPolicyHasBeenSet)
  {
   payload.WithObject("accessPolicy", m_accessPolicy.Jsonize());

  }

  if(m_lifecyclePolicyHasBeenSet)
  {
   payload.WithObject("lifecyclePolicy", m_lifecyclePolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
