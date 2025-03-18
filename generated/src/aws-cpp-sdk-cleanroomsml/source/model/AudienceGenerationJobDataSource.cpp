/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceGenerationJobDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

AudienceGenerationJobDataSource::AudienceGenerationJobDataSource(JsonView jsonValue)
{
  *this = jsonValue;
}

AudienceGenerationJobDataSource& AudienceGenerationJobDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = jsonValue.GetObject("dataSource");
    m_dataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sqlParameters"))
  {
    m_sqlParameters = jsonValue.GetObject("sqlParameters");
    m_sqlParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sqlComputeConfiguration"))
  {
    m_sqlComputeConfiguration = jsonValue.GetObject("sqlComputeConfiguration");
    m_sqlComputeConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AudienceGenerationJobDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("dataSource", m_dataSource.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_sqlParametersHasBeenSet)
  {
   payload.WithObject("sqlParameters", m_sqlParameters.Jsonize());

  }

  if(m_sqlComputeConfigurationHasBeenSet)
  {
   payload.WithObject("sqlComputeConfiguration", m_sqlComputeConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
