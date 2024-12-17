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
    AWS_BACKUPSEARCH_API S3ItemFilter();
    AWS_BACKUPSEARCH_API S3ItemFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API S3ItemFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one value is included, the results
     * will return only items that match the value.</p> <p>If more than one value is
     * included, the results will return all items that match any of the values.</p>
     */
    inline const Aws::Vector<StringCondition>& GetObjectKeys() const{ return m_objectKeys; }
    inline bool ObjectKeysHasBeenSet() const { return m_objectKeysHasBeenSet; }
    inline void SetObjectKeys(const Aws::Vector<StringCondition>& value) { m_objectKeysHasBeenSet = true; m_objectKeys = value; }
    inline void SetObjectKeys(Aws::Vector<StringCondition>&& value) { m_objectKeysHasBeenSet = true; m_objectKeys = std::move(value); }
    inline S3ItemFilter& WithObjectKeys(const Aws::Vector<StringCondition>& value) { SetObjectKeys(value); return *this;}
    inline S3ItemFilter& WithObjectKeys(Aws::Vector<StringCondition>&& value) { SetObjectKeys(std::move(value)); return *this;}
    inline S3ItemFilter& AddObjectKeys(const StringCondition& value) { m_objectKeysHasBeenSet = true; m_objectKeys.push_back(value); return *this; }
    inline S3ItemFilter& AddObjectKeys(StringCondition&& value) { m_objectKeysHasBeenSet = true; m_objectKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one value is included, the results
     * will return only items that match the value.</p> <p>If more than one value is
     * included, the results will return all items that match any of the values.</p>
     */
    inline const Aws::Vector<LongCondition>& GetSizes() const{ return m_sizes; }
    inline bool SizesHasBeenSet() const { return m_sizesHasBeenSet; }
    inline void SetSizes(const Aws::Vector<LongCondition>& value) { m_sizesHasBeenSet = true; m_sizes = value; }
    inline void SetSizes(Aws::Vector<LongCondition>&& value) { m_sizesHasBeenSet = true; m_sizes = std::move(value); }
    inline S3ItemFilter& WithSizes(const Aws::Vector<LongCondition>& value) { SetSizes(value); return *this;}
    inline S3ItemFilter& WithSizes(Aws::Vector<LongCondition>&& value) { SetSizes(std::move(value)); return *this;}
    inline S3ItemFilter& AddSizes(const LongCondition& value) { m_sizesHasBeenSet = true; m_sizes.push_back(value); return *this; }
    inline S3ItemFilter& AddSizes(LongCondition&& value) { m_sizesHasBeenSet = true; m_sizes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one value is included, the results
     * will return only items that match the value.</p> <p>If more than one value is
     * included, the results will return all items that match any of the values.</p>
     */
    inline const Aws::Vector<TimeCondition>& GetCreationTimes() const{ return m_creationTimes; }
    inline bool CreationTimesHasBeenSet() const { return m_creationTimesHasBeenSet; }
    inline void SetCreationTimes(const Aws::Vector<TimeCondition>& value) { m_creationTimesHasBeenSet = true; m_creationTimes = value; }
    inline void SetCreationTimes(Aws::Vector<TimeCondition>&& value) { m_creationTimesHasBeenSet = true; m_creationTimes = std::move(value); }
    inline S3ItemFilter& WithCreationTimes(const Aws::Vector<TimeCondition>& value) { SetCreationTimes(value); return *this;}
    inline S3ItemFilter& WithCreationTimes(Aws::Vector<TimeCondition>&& value) { SetCreationTimes(std::move(value)); return *this;}
    inline S3ItemFilter& AddCreationTimes(const TimeCondition& value) { m_creationTimesHasBeenSet = true; m_creationTimes.push_back(value); return *this; }
    inline S3ItemFilter& AddCreationTimes(TimeCondition&& value) { m_creationTimesHasBeenSet = true; m_creationTimes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one value is included, the results
     * will return only items that match the value.</p> <p>If more than one value is
     * included, the results will return all items that match any of the values.</p>
     */
    inline const Aws::Vector<StringCondition>& GetVersionIds() const{ return m_versionIds; }
    inline bool VersionIdsHasBeenSet() const { return m_versionIdsHasBeenSet; }
    inline void SetVersionIds(const Aws::Vector<StringCondition>& value) { m_versionIdsHasBeenSet = true; m_versionIds = value; }
    inline void SetVersionIds(Aws::Vector<StringCondition>&& value) { m_versionIdsHasBeenSet = true; m_versionIds = std::move(value); }
    inline S3ItemFilter& WithVersionIds(const Aws::Vector<StringCondition>& value) { SetVersionIds(value); return *this;}
    inline S3ItemFilter& WithVersionIds(Aws::Vector<StringCondition>&& value) { SetVersionIds(std::move(value)); return *this;}
    inline S3ItemFilter& AddVersionIds(const StringCondition& value) { m_versionIdsHasBeenSet = true; m_versionIds.push_back(value); return *this; }
    inline S3ItemFilter& AddVersionIds(StringCondition&& value) { m_versionIdsHasBeenSet = true; m_versionIds.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one value is included, the results
     * will return only items that match the value.</p> <p>If more than one value is
     * included, the results will return all items that match any of the values.</p>
     */
    inline const Aws::Vector<StringCondition>& GetETags() const{ return m_eTags; }
    inline bool ETagsHasBeenSet() const { return m_eTagsHasBeenSet; }
    inline void SetETags(const Aws::Vector<StringCondition>& value) { m_eTagsHasBeenSet = true; m_eTags = value; }
    inline void SetETags(Aws::Vector<StringCondition>&& value) { m_eTagsHasBeenSet = true; m_eTags = std::move(value); }
    inline S3ItemFilter& WithETags(const Aws::Vector<StringCondition>& value) { SetETags(value); return *this;}
    inline S3ItemFilter& WithETags(Aws::Vector<StringCondition>&& value) { SetETags(std::move(value)); return *this;}
    inline S3ItemFilter& AddETags(const StringCondition& value) { m_eTagsHasBeenSet = true; m_eTags.push_back(value); return *this; }
    inline S3ItemFilter& AddETags(StringCondition&& value) { m_eTagsHasBeenSet = true; m_eTags.push_back(std::move(value)); return *this; }
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
