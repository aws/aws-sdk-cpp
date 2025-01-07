/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backupsearch/model/BackupCreationTimeFilter.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/backupsearch/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BackupSearch
{
namespace Model
{

  /**
   * <p>The search scope is all backup properties input into a search.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/SearchScope">AWS
   * API Reference</a></p>
   */
  class SearchScope
  {
  public:
    AWS_BACKUPSEARCH_API SearchScope();
    AWS_BACKUPSEARCH_API SearchScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API SearchScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource types included in a search.</p> <p>Eligible resource types
     * include S3 and EBS.</p>
     */
    inline const Aws::Vector<ResourceType>& GetBackupResourceTypes() const{ return m_backupResourceTypes; }
    inline bool BackupResourceTypesHasBeenSet() const { return m_backupResourceTypesHasBeenSet; }
    inline void SetBackupResourceTypes(const Aws::Vector<ResourceType>& value) { m_backupResourceTypesHasBeenSet = true; m_backupResourceTypes = value; }
    inline void SetBackupResourceTypes(Aws::Vector<ResourceType>&& value) { m_backupResourceTypesHasBeenSet = true; m_backupResourceTypes = std::move(value); }
    inline SearchScope& WithBackupResourceTypes(const Aws::Vector<ResourceType>& value) { SetBackupResourceTypes(value); return *this;}
    inline SearchScope& WithBackupResourceTypes(Aws::Vector<ResourceType>&& value) { SetBackupResourceTypes(std::move(value)); return *this;}
    inline SearchScope& AddBackupResourceTypes(const ResourceType& value) { m_backupResourceTypesHasBeenSet = true; m_backupResourceTypes.push_back(value); return *this; }
    inline SearchScope& AddBackupResourceTypes(ResourceType&& value) { m_backupResourceTypesHasBeenSet = true; m_backupResourceTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is the time a backup resource was created.</p>
     */
    inline const BackupCreationTimeFilter& GetBackupResourceCreationTime() const{ return m_backupResourceCreationTime; }
    inline bool BackupResourceCreationTimeHasBeenSet() const { return m_backupResourceCreationTimeHasBeenSet; }
    inline void SetBackupResourceCreationTime(const BackupCreationTimeFilter& value) { m_backupResourceCreationTimeHasBeenSet = true; m_backupResourceCreationTime = value; }
    inline void SetBackupResourceCreationTime(BackupCreationTimeFilter&& value) { m_backupResourceCreationTimeHasBeenSet = true; m_backupResourceCreationTime = std::move(value); }
    inline SearchScope& WithBackupResourceCreationTime(const BackupCreationTimeFilter& value) { SetBackupResourceCreationTime(value); return *this;}
    inline SearchScope& WithBackupResourceCreationTime(BackupCreationTimeFilter&& value) { SetBackupResourceCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the source
     * resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceResourceArns() const{ return m_sourceResourceArns; }
    inline bool SourceResourceArnsHasBeenSet() const { return m_sourceResourceArnsHasBeenSet; }
    inline void SetSourceResourceArns(const Aws::Vector<Aws::String>& value) { m_sourceResourceArnsHasBeenSet = true; m_sourceResourceArns = value; }
    inline void SetSourceResourceArns(Aws::Vector<Aws::String>&& value) { m_sourceResourceArnsHasBeenSet = true; m_sourceResourceArns = std::move(value); }
    inline SearchScope& WithSourceResourceArns(const Aws::Vector<Aws::String>& value) { SetSourceResourceArns(value); return *this;}
    inline SearchScope& WithSourceResourceArns(Aws::Vector<Aws::String>&& value) { SetSourceResourceArns(std::move(value)); return *this;}
    inline SearchScope& AddSourceResourceArns(const Aws::String& value) { m_sourceResourceArnsHasBeenSet = true; m_sourceResourceArns.push_back(value); return *this; }
    inline SearchScope& AddSourceResourceArns(Aws::String&& value) { m_sourceResourceArnsHasBeenSet = true; m_sourceResourceArns.push_back(std::move(value)); return *this; }
    inline SearchScope& AddSourceResourceArns(const char* value) { m_sourceResourceArnsHasBeenSet = true; m_sourceResourceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the backup
     * resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBackupResourceArns() const{ return m_backupResourceArns; }
    inline bool BackupResourceArnsHasBeenSet() const { return m_backupResourceArnsHasBeenSet; }
    inline void SetBackupResourceArns(const Aws::Vector<Aws::String>& value) { m_backupResourceArnsHasBeenSet = true; m_backupResourceArns = value; }
    inline void SetBackupResourceArns(Aws::Vector<Aws::String>&& value) { m_backupResourceArnsHasBeenSet = true; m_backupResourceArns = std::move(value); }
    inline SearchScope& WithBackupResourceArns(const Aws::Vector<Aws::String>& value) { SetBackupResourceArns(value); return *this;}
    inline SearchScope& WithBackupResourceArns(Aws::Vector<Aws::String>&& value) { SetBackupResourceArns(std::move(value)); return *this;}
    inline SearchScope& AddBackupResourceArns(const Aws::String& value) { m_backupResourceArnsHasBeenSet = true; m_backupResourceArns.push_back(value); return *this; }
    inline SearchScope& AddBackupResourceArns(Aws::String&& value) { m_backupResourceArnsHasBeenSet = true; m_backupResourceArns.push_back(std::move(value)); return *this; }
    inline SearchScope& AddBackupResourceArns(const char* value) { m_backupResourceArnsHasBeenSet = true; m_backupResourceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>These are one or more tags on the backup (recovery point).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupResourceTags() const{ return m_backupResourceTags; }
    inline bool BackupResourceTagsHasBeenSet() const { return m_backupResourceTagsHasBeenSet; }
    inline void SetBackupResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { m_backupResourceTagsHasBeenSet = true; m_backupResourceTags = value; }
    inline void SetBackupResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { m_backupResourceTagsHasBeenSet = true; m_backupResourceTags = std::move(value); }
    inline SearchScope& WithBackupResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { SetBackupResourceTags(value); return *this;}
    inline SearchScope& WithBackupResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { SetBackupResourceTags(std::move(value)); return *this;}
    inline SearchScope& AddBackupResourceTags(const Aws::String& key, const Aws::String& value) { m_backupResourceTagsHasBeenSet = true; m_backupResourceTags.emplace(key, value); return *this; }
    inline SearchScope& AddBackupResourceTags(Aws::String&& key, const Aws::String& value) { m_backupResourceTagsHasBeenSet = true; m_backupResourceTags.emplace(std::move(key), value); return *this; }
    inline SearchScope& AddBackupResourceTags(const Aws::String& key, Aws::String&& value) { m_backupResourceTagsHasBeenSet = true; m_backupResourceTags.emplace(key, std::move(value)); return *this; }
    inline SearchScope& AddBackupResourceTags(Aws::String&& key, Aws::String&& value) { m_backupResourceTagsHasBeenSet = true; m_backupResourceTags.emplace(std::move(key), std::move(value)); return *this; }
    inline SearchScope& AddBackupResourceTags(const char* key, Aws::String&& value) { m_backupResourceTagsHasBeenSet = true; m_backupResourceTags.emplace(key, std::move(value)); return *this; }
    inline SearchScope& AddBackupResourceTags(Aws::String&& key, const char* value) { m_backupResourceTagsHasBeenSet = true; m_backupResourceTags.emplace(std::move(key), value); return *this; }
    inline SearchScope& AddBackupResourceTags(const char* key, const char* value) { m_backupResourceTagsHasBeenSet = true; m_backupResourceTags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Vector<ResourceType> m_backupResourceTypes;
    bool m_backupResourceTypesHasBeenSet = false;

    BackupCreationTimeFilter m_backupResourceCreationTime;
    bool m_backupResourceCreationTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceResourceArns;
    bool m_sourceResourceArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_backupResourceArns;
    bool m_backupResourceArnsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_backupResourceTags;
    bool m_backupResourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
