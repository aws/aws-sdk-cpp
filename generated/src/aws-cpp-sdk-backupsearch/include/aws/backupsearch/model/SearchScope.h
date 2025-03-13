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
    AWS_BACKUPSEARCH_API SearchScope() = default;
    AWS_BACKUPSEARCH_API SearchScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API SearchScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource types included in a search.</p> <p>Eligible resource types
     * include S3 and EBS.</p>
     */
    inline const Aws::Vector<ResourceType>& GetBackupResourceTypes() const { return m_backupResourceTypes; }
    inline bool BackupResourceTypesHasBeenSet() const { return m_backupResourceTypesHasBeenSet; }
    template<typename BackupResourceTypesT = Aws::Vector<ResourceType>>
    void SetBackupResourceTypes(BackupResourceTypesT&& value) { m_backupResourceTypesHasBeenSet = true; m_backupResourceTypes = std::forward<BackupResourceTypesT>(value); }
    template<typename BackupResourceTypesT = Aws::Vector<ResourceType>>
    SearchScope& WithBackupResourceTypes(BackupResourceTypesT&& value) { SetBackupResourceTypes(std::forward<BackupResourceTypesT>(value)); return *this;}
    inline SearchScope& AddBackupResourceTypes(ResourceType value) { m_backupResourceTypesHasBeenSet = true; m_backupResourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is the time a backup resource was created.</p>
     */
    inline const BackupCreationTimeFilter& GetBackupResourceCreationTime() const { return m_backupResourceCreationTime; }
    inline bool BackupResourceCreationTimeHasBeenSet() const { return m_backupResourceCreationTimeHasBeenSet; }
    template<typename BackupResourceCreationTimeT = BackupCreationTimeFilter>
    void SetBackupResourceCreationTime(BackupResourceCreationTimeT&& value) { m_backupResourceCreationTimeHasBeenSet = true; m_backupResourceCreationTime = std::forward<BackupResourceCreationTimeT>(value); }
    template<typename BackupResourceCreationTimeT = BackupCreationTimeFilter>
    SearchScope& WithBackupResourceCreationTime(BackupResourceCreationTimeT&& value) { SetBackupResourceCreationTime(std::forward<BackupResourceCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the source
     * resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceResourceArns() const { return m_sourceResourceArns; }
    inline bool SourceResourceArnsHasBeenSet() const { return m_sourceResourceArnsHasBeenSet; }
    template<typename SourceResourceArnsT = Aws::Vector<Aws::String>>
    void SetSourceResourceArns(SourceResourceArnsT&& value) { m_sourceResourceArnsHasBeenSet = true; m_sourceResourceArns = std::forward<SourceResourceArnsT>(value); }
    template<typename SourceResourceArnsT = Aws::Vector<Aws::String>>
    SearchScope& WithSourceResourceArns(SourceResourceArnsT&& value) { SetSourceResourceArns(std::forward<SourceResourceArnsT>(value)); return *this;}
    template<typename SourceResourceArnsT = Aws::String>
    SearchScope& AddSourceResourceArns(SourceResourceArnsT&& value) { m_sourceResourceArnsHasBeenSet = true; m_sourceResourceArns.emplace_back(std::forward<SourceResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the backup
     * resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBackupResourceArns() const { return m_backupResourceArns; }
    inline bool BackupResourceArnsHasBeenSet() const { return m_backupResourceArnsHasBeenSet; }
    template<typename BackupResourceArnsT = Aws::Vector<Aws::String>>
    void SetBackupResourceArns(BackupResourceArnsT&& value) { m_backupResourceArnsHasBeenSet = true; m_backupResourceArns = std::forward<BackupResourceArnsT>(value); }
    template<typename BackupResourceArnsT = Aws::Vector<Aws::String>>
    SearchScope& WithBackupResourceArns(BackupResourceArnsT&& value) { SetBackupResourceArns(std::forward<BackupResourceArnsT>(value)); return *this;}
    template<typename BackupResourceArnsT = Aws::String>
    SearchScope& AddBackupResourceArns(BackupResourceArnsT&& value) { m_backupResourceArnsHasBeenSet = true; m_backupResourceArns.emplace_back(std::forward<BackupResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>These are one or more tags on the backup (recovery point).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupResourceTags() const { return m_backupResourceTags; }
    inline bool BackupResourceTagsHasBeenSet() const { return m_backupResourceTagsHasBeenSet; }
    template<typename BackupResourceTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetBackupResourceTags(BackupResourceTagsT&& value) { m_backupResourceTagsHasBeenSet = true; m_backupResourceTags = std::forward<BackupResourceTagsT>(value); }
    template<typename BackupResourceTagsT = Aws::Map<Aws::String, Aws::String>>
    SearchScope& WithBackupResourceTags(BackupResourceTagsT&& value) { SetBackupResourceTags(std::forward<BackupResourceTagsT>(value)); return *this;}
    template<typename BackupResourceTagsKeyT = Aws::String, typename BackupResourceTagsValueT = Aws::String>
    SearchScope& AddBackupResourceTags(BackupResourceTagsKeyT&& key, BackupResourceTagsValueT&& value) {
      m_backupResourceTagsHasBeenSet = true; m_backupResourceTags.emplace(std::forward<BackupResourceTagsKeyT>(key), std::forward<BackupResourceTagsValueT>(value)); return *this;
    }
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
