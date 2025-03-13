/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backupsearch/model/StringCondition.h>
#include <aws/backupsearch/model/LongCondition.h>
#include <aws/backupsearch/model/TimeCondition.h>
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
   * <p>This contains arrays of objects, which may include ObjectKeys, Sizes,
   * CreationTimes, VersionIds, and/or Etags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/S3ItemFilter">AWS
   * API Reference</a></p>
   */
  class S3ItemFilter
  {
  public:
    AWS_BACKUPSEARCH_API S3ItemFilter() = default;
    AWS_BACKUPSEARCH_API S3ItemFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API S3ItemFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one value is included, the results
     * will return only items that match the value.</p> <p>If more than one value is
     * included, the results will return all items that match any of the values.</p>
     */
    inline const Aws::Vector<StringCondition>& GetObjectKeys() const { return m_objectKeys; }
    inline bool ObjectKeysHasBeenSet() const { return m_objectKeysHasBeenSet; }
    template<typename ObjectKeysT = Aws::Vector<StringCondition>>
    void SetObjectKeys(ObjectKeysT&& value) { m_objectKeysHasBeenSet = true; m_objectKeys = std::forward<ObjectKeysT>(value); }
    template<typename ObjectKeysT = Aws::Vector<StringCondition>>
    S3ItemFilter& WithObjectKeys(ObjectKeysT&& value) { SetObjectKeys(std::forward<ObjectKeysT>(value)); return *this;}
    template<typename ObjectKeysT = StringCondition>
    S3ItemFilter& AddObjectKeys(ObjectKeysT&& value) { m_objectKeysHasBeenSet = true; m_objectKeys.emplace_back(std::forward<ObjectKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one value is included, the results
     * will return only items that match the value.</p> <p>If more than one value is
     * included, the results will return all items that match any of the values.</p>
     */
    inline const Aws::Vector<LongCondition>& GetSizes() const { return m_sizes; }
    inline bool SizesHasBeenSet() const { return m_sizesHasBeenSet; }
    template<typename SizesT = Aws::Vector<LongCondition>>
    void SetSizes(SizesT&& value) { m_sizesHasBeenSet = true; m_sizes = std::forward<SizesT>(value); }
    template<typename SizesT = Aws::Vector<LongCondition>>
    S3ItemFilter& WithSizes(SizesT&& value) { SetSizes(std::forward<SizesT>(value)); return *this;}
    template<typename SizesT = LongCondition>
    S3ItemFilter& AddSizes(SizesT&& value) { m_sizesHasBeenSet = true; m_sizes.emplace_back(std::forward<SizesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one value is included, the results
     * will return only items that match the value.</p> <p>If more than one value is
     * included, the results will return all items that match any of the values.</p>
     */
    inline const Aws::Vector<TimeCondition>& GetCreationTimes() const { return m_creationTimes; }
    inline bool CreationTimesHasBeenSet() const { return m_creationTimesHasBeenSet; }
    template<typename CreationTimesT = Aws::Vector<TimeCondition>>
    void SetCreationTimes(CreationTimesT&& value) { m_creationTimesHasBeenSet = true; m_creationTimes = std::forward<CreationTimesT>(value); }
    template<typename CreationTimesT = Aws::Vector<TimeCondition>>
    S3ItemFilter& WithCreationTimes(CreationTimesT&& value) { SetCreationTimes(std::forward<CreationTimesT>(value)); return *this;}
    template<typename CreationTimesT = TimeCondition>
    S3ItemFilter& AddCreationTimes(CreationTimesT&& value) { m_creationTimesHasBeenSet = true; m_creationTimes.emplace_back(std::forward<CreationTimesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one value is included, the results
     * will return only items that match the value.</p> <p>If more than one value is
     * included, the results will return all items that match any of the values.</p>
     */
    inline const Aws::Vector<StringCondition>& GetVersionIds() const { return m_versionIds; }
    inline bool VersionIdsHasBeenSet() const { return m_versionIdsHasBeenSet; }
    template<typename VersionIdsT = Aws::Vector<StringCondition>>
    void SetVersionIds(VersionIdsT&& value) { m_versionIdsHasBeenSet = true; m_versionIds = std::forward<VersionIdsT>(value); }
    template<typename VersionIdsT = Aws::Vector<StringCondition>>
    S3ItemFilter& WithVersionIds(VersionIdsT&& value) { SetVersionIds(std::forward<VersionIdsT>(value)); return *this;}
    template<typename VersionIdsT = StringCondition>
    S3ItemFilter& AddVersionIds(VersionIdsT&& value) { m_versionIdsHasBeenSet = true; m_versionIds.emplace_back(std::forward<VersionIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one value is included, the results
     * will return only items that match the value.</p> <p>If more than one value is
     * included, the results will return all items that match any of the values.</p>
     */
    inline const Aws::Vector<StringCondition>& GetETags() const { return m_eTags; }
    inline bool ETagsHasBeenSet() const { return m_eTagsHasBeenSet; }
    template<typename ETagsT = Aws::Vector<StringCondition>>
    void SetETags(ETagsT&& value) { m_eTagsHasBeenSet = true; m_eTags = std::forward<ETagsT>(value); }
    template<typename ETagsT = Aws::Vector<StringCondition>>
    S3ItemFilter& WithETags(ETagsT&& value) { SetETags(std::forward<ETagsT>(value)); return *this;}
    template<typename ETagsT = StringCondition>
    S3ItemFilter& AddETags(ETagsT&& value) { m_eTagsHasBeenSet = true; m_eTags.emplace_back(std::forward<ETagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StringCondition> m_objectKeys;
    bool m_objectKeysHasBeenSet = false;

    Aws::Vector<LongCondition> m_sizes;
    bool m_sizesHasBeenSet = false;

    Aws::Vector<TimeCondition> m_creationTimes;
    bool m_creationTimesHasBeenSet = false;

    Aws::Vector<StringCondition> m_versionIds;
    bool m_versionIdsHasBeenSet = false;

    Aws::Vector<StringCondition> m_eTags;
    bool m_eTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
