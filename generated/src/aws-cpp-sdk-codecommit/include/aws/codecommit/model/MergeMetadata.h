/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/MergeOptionTypeEnum.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about a merge or potential merge between a source
   * reference and a destination reference in a pull request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeMetadata">AWS
   * API Reference</a></p>
   */
  class MergeMetadata
  {
  public:
    AWS_CODECOMMIT_API MergeMetadata();
    AWS_CODECOMMIT_API MergeMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API MergeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean value indicating whether the merge has been made.</p>
     */
    inline bool GetIsMerged() const{ return m_isMerged; }
    inline bool IsMergedHasBeenSet() const { return m_isMergedHasBeenSet; }
    inline void SetIsMerged(bool value) { m_isMergedHasBeenSet = true; m_isMerged = value; }
    inline MergeMetadata& WithIsMerged(bool value) { SetIsMerged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who merged the branches.</p>
     */
    inline const Aws::String& GetMergedBy() const{ return m_mergedBy; }
    inline bool MergedByHasBeenSet() const { return m_mergedByHasBeenSet; }
    inline void SetMergedBy(const Aws::String& value) { m_mergedByHasBeenSet = true; m_mergedBy = value; }
    inline void SetMergedBy(Aws::String&& value) { m_mergedByHasBeenSet = true; m_mergedBy = std::move(value); }
    inline void SetMergedBy(const char* value) { m_mergedByHasBeenSet = true; m_mergedBy.assign(value); }
    inline MergeMetadata& WithMergedBy(const Aws::String& value) { SetMergedBy(value); return *this;}
    inline MergeMetadata& WithMergedBy(Aws::String&& value) { SetMergedBy(std::move(value)); return *this;}
    inline MergeMetadata& WithMergedBy(const char* value) { SetMergedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID for the merge commit, if any.</p>
     */
    inline const Aws::String& GetMergeCommitId() const{ return m_mergeCommitId; }
    inline bool MergeCommitIdHasBeenSet() const { return m_mergeCommitIdHasBeenSet; }
    inline void SetMergeCommitId(const Aws::String& value) { m_mergeCommitIdHasBeenSet = true; m_mergeCommitId = value; }
    inline void SetMergeCommitId(Aws::String&& value) { m_mergeCommitIdHasBeenSet = true; m_mergeCommitId = std::move(value); }
    inline void SetMergeCommitId(const char* value) { m_mergeCommitIdHasBeenSet = true; m_mergeCommitId.assign(value); }
    inline MergeMetadata& WithMergeCommitId(const Aws::String& value) { SetMergeCommitId(value); return *this;}
    inline MergeMetadata& WithMergeCommitId(Aws::String&& value) { SetMergeCommitId(std::move(value)); return *this;}
    inline MergeMetadata& WithMergeCommitId(const char* value) { SetMergeCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The merge strategy used in the merge.</p>
     */
    inline const MergeOptionTypeEnum& GetMergeOption() const{ return m_mergeOption; }
    inline bool MergeOptionHasBeenSet() const { return m_mergeOptionHasBeenSet; }
    inline void SetMergeOption(const MergeOptionTypeEnum& value) { m_mergeOptionHasBeenSet = true; m_mergeOption = value; }
    inline void SetMergeOption(MergeOptionTypeEnum&& value) { m_mergeOptionHasBeenSet = true; m_mergeOption = std::move(value); }
    inline MergeMetadata& WithMergeOption(const MergeOptionTypeEnum& value) { SetMergeOption(value); return *this;}
    inline MergeMetadata& WithMergeOption(MergeOptionTypeEnum&& value) { SetMergeOption(std::move(value)); return *this;}
    ///@}
  private:

    bool m_isMerged;
    bool m_isMergedHasBeenSet = false;

    Aws::String m_mergedBy;
    bool m_mergedByHasBeenSet = false;

    Aws::String m_mergeCommitId;
    bool m_mergeCommitIdHasBeenSet = false;

    MergeOptionTypeEnum m_mergeOption;
    bool m_mergeOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
