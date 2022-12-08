/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/VersionControlInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

VersionControlInfo::VersionControlInfo() : 
    m_versionControlConfigurationTimeStampHasBeenSet(false),
    m_versionControlType(VersionControlType::NOT_SET),
    m_versionControlTypeHasBeenSet(false)
{
}

VersionControlInfo::VersionControlInfo(JsonView jsonValue) : 
    m_versionControlConfigurationTimeStampHasBeenSet(false),
    m_versionControlType(VersionControlType::NOT_SET),
    m_versionControlTypeHasBeenSet(false)
{
  *this = jsonValue;
}

VersionControlInfo& VersionControlInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("versionControlConfigurationTimeStamp"))
  {
    m_versionControlConfigurationTimeStamp = jsonValue.GetString("versionControlConfigurationTimeStamp");

    m_versionControlConfigurationTimeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionControlType"))
  {
    m_versionControlType = VersionControlTypeMapper::GetVersionControlTypeForName(jsonValue.GetString("versionControlType"));

    m_versionControlTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue VersionControlInfo::Jsonize() const
{
  JsonValue payload;

  if(m_versionControlConfigurationTimeStampHasBeenSet)
  {
   payload.WithString("versionControlConfigurationTimeStamp", m_versionControlConfigurationTimeStamp);

  }

  if(m_versionControlTypeHasBeenSet)
  {
   payload.WithString("versionControlType", VersionControlTypeMapper::GetNameForVersionControlType(m_versionControlType));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
