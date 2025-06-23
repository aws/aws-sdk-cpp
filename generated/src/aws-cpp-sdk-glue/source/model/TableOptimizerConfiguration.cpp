/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TableOptimizerConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TableOptimizerConfiguration::TableOptimizerConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TableOptimizerConfiguration& TableOptimizerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("vpcConfiguration");
    m_vpcConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("compactionConfiguration"))
  {
    m_compactionConfiguration = jsonValue.GetObject("compactionConfiguration");
    m_compactionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retentionConfiguration"))
  {
    m_retentionConfiguration = jsonValue.GetObject("retentionConfiguration");
    m_retentionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("orphanFileDeletionConfiguration"))
  {
    m_orphanFileDeletionConfiguration = jsonValue.GetObject("orphanFileDeletionConfiguration");
    m_orphanFileDeletionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue TableOptimizerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("vpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_compactionConfigurationHasBeenSet)
  {
   payload.WithObject("compactionConfiguration", m_compactionConfiguration.Jsonize());

  }

  if(m_retentionConfigurationHasBeenSet)
  {
   payload.WithObject("retentionConfiguration", m_retentionConfiguration.Jsonize());

  }

  if(m_orphanFileDeletionConfigurationHasBeenSet)
  {
   payload.WithObject("orphanFileDeletionConfiguration", m_orphanFileDeletionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
