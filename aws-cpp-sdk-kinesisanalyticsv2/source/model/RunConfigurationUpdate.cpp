/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kinesisanalyticsv2/model/RunConfigurationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

RunConfigurationUpdate::RunConfigurationUpdate() : 
    m_flinkRunConfigurationHasBeenSet(false),
    m_applicationRestoreConfigurationHasBeenSet(false)
{
}

RunConfigurationUpdate::RunConfigurationUpdate(JsonView jsonValue) : 
    m_flinkRunConfigurationHasBeenSet(false),
    m_applicationRestoreConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

RunConfigurationUpdate& RunConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FlinkRunConfiguration"))
  {
    m_flinkRunConfiguration = jsonValue.GetObject("FlinkRunConfiguration");

    m_flinkRunConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationRestoreConfiguration"))
  {
    m_applicationRestoreConfiguration = jsonValue.GetObject("ApplicationRestoreConfiguration");

    m_applicationRestoreConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RunConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_flinkRunConfigurationHasBeenSet)
  {
   payload.WithObject("FlinkRunConfiguration", m_flinkRunConfiguration.Jsonize());

  }

  if(m_applicationRestoreConfigurationHasBeenSet)
  {
   payload.WithObject("ApplicationRestoreConfiguration", m_applicationRestoreConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
