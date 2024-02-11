/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteVolumeOntapConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

DeleteVolumeOntapConfiguration::DeleteVolumeOntapConfiguration() : 
    m_skipFinalBackup(false),
    m_skipFinalBackupHasBeenSet(false),
    m_finalBackupTagsHasBeenSet(false),
    m_bypassSnaplockEnterpriseRetention(false),
    m_bypassSnaplockEnterpriseRetentionHasBeenSet(false)
{
}

DeleteVolumeOntapConfiguration::DeleteVolumeOntapConfiguration(JsonView jsonValue) : 
    m_skipFinalBackup(false),
    m_skipFinalBackupHasBeenSet(false),
    m_finalBackupTagsHasBeenSet(false),
    m_bypassSnaplockEnterpriseRetention(false),
    m_bypassSnaplockEnterpriseRetentionHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteVolumeOntapConfiguration& DeleteVolumeOntapConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SkipFinalBackup"))
  {
    m_skipFinalBackup = jsonValue.GetBool("SkipFinalBackup");

    m_skipFinalBackupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FinalBackupTags"))
  {
    Aws::Utils::Array<JsonView> finalBackupTagsJsonList = jsonValue.GetArray("FinalBackupTags");
    for(unsigned finalBackupTagsIndex = 0; finalBackupTagsIndex < finalBackupTagsJsonList.GetLength(); ++finalBackupTagsIndex)
    {
      m_finalBackupTags.push_back(finalBackupTagsJsonList[finalBackupTagsIndex].AsObject());
    }
    m_finalBackupTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BypassSnaplockEnterpriseRetention"))
  {
    m_bypassSnaplockEnterpriseRetention = jsonValue.GetBool("BypassSnaplockEnterpriseRetention");

    m_bypassSnaplockEnterpriseRetentionHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteVolumeOntapConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_skipFinalBackupHasBeenSet)
  {
   payload.WithBool("SkipFinalBackup", m_skipFinalBackup);

  }

  if(m_finalBackupTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> finalBackupTagsJsonList(m_finalBackupTags.size());
   for(unsigned finalBackupTagsIndex = 0; finalBackupTagsIndex < finalBackupTagsJsonList.GetLength(); ++finalBackupTagsIndex)
   {
     finalBackupTagsJsonList[finalBackupTagsIndex].AsObject(m_finalBackupTags[finalBackupTagsIndex].Jsonize());
   }
   payload.WithArray("FinalBackupTags", std::move(finalBackupTagsJsonList));

  }

  if(m_bypassSnaplockEnterpriseRetentionHasBeenSet)
  {
   payload.WithBool("BypassSnaplockEnterpriseRetention", m_bypassSnaplockEnterpriseRetention);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
