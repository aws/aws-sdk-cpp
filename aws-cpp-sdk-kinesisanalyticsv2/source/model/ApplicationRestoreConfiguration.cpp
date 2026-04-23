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

#include <aws/kinesisanalyticsv2/model/ApplicationRestoreConfiguration.h>
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

ApplicationRestoreConfiguration::ApplicationRestoreConfiguration() : 
    m_applicationRestoreType(ApplicationRestoreType::NOT_SET),
    m_applicationRestoreTypeHasBeenSet(false),
    m_snapshotNameHasBeenSet(false)
{
}

ApplicationRestoreConfiguration::ApplicationRestoreConfiguration(JsonView jsonValue) : 
    m_applicationRestoreType(ApplicationRestoreType::NOT_SET),
    m_applicationRestoreTypeHasBeenSet(false),
    m_snapshotNameHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationRestoreConfiguration& ApplicationRestoreConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationRestoreType"))
  {
    m_applicationRestoreType = ApplicationRestoreTypeMapper::GetApplicationRestoreTypeForName(jsonValue.GetString("ApplicationRestoreType"));

    m_applicationRestoreTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotName"))
  {
    m_snapshotName = jsonValue.GetString("SnapshotName");

    m_snapshotNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationRestoreConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_applicationRestoreTypeHasBeenSet)
  {
   payload.WithString("ApplicationRestoreType", ApplicationRestoreTypeMapper::GetNameForApplicationRestoreType(m_applicationRestoreType));
  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("SnapshotName", m_snapshotName);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
