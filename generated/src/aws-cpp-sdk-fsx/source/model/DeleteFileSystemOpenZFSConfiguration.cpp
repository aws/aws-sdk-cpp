/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DeleteFileSystemOpenZFSConfiguration.h>
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

DeleteFileSystemOpenZFSConfiguration::DeleteFileSystemOpenZFSConfiguration() : 
    m_skipFinalBackup(false),
    m_skipFinalBackupHasBeenSet(false),
    m_finalBackupTagsHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

DeleteFileSystemOpenZFSConfiguration::DeleteFileSystemOpenZFSConfiguration(JsonView jsonValue) : 
    m_skipFinalBackup(false),
    m_skipFinalBackupHasBeenSet(false),
    m_finalBackupTagsHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteFileSystemOpenZFSConfiguration& DeleteFileSystemOpenZFSConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Options"))
  {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("Options");
    for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
    {
      m_options.push_back(DeleteFileSystemOpenZFSOptionMapper::GetDeleteFileSystemOpenZFSOptionForName(optionsJsonList[optionsIndex].AsString()));
    }
    m_optionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteFileSystemOpenZFSConfiguration::Jsonize() const
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

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsString(DeleteFileSystemOpenZFSOptionMapper::GetNameForDeleteFileSystemOpenZFSOption(m_options[optionsIndex]));
   }
   payload.WithArray("Options", std::move(optionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
