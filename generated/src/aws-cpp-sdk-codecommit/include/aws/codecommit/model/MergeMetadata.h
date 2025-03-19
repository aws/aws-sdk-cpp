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
    AWS_CODECOMMIT_API MergeMetadata() = default;
    AWS_CODECOMMIT_API MergeMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API MergeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean value indicating whether the merge has been made.</p>
     */
    inline bool GetIsMerged() const { return m_isMerged; }
    inline bool IsMergedHasBeenSet() const { return m_isMergedHasBeenSet; }
    inline void SetIsMerged(bool value) { m_isMergedHasBeenSet = true; m_isMerged = value; }
    inline MergeMetadata& WithIsMerged(bool value) { SetIsMerged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who merged the branches.</p>
     */
    inline const Aws::String& GetMergedBy() const { return m_mergedBy; }
    inline bool MergedByHasBeenSet() const { return m_mergedByHasBeenSet; }
    template<typename MergedByT = Aws::String>
    void SetMergedBy(MergedByT&& value) { m_mergedByHasBeenSet = true; m_mergedBy = std::forward<MergedByT>(value); }
    template<typename MergedByT = Aws::String>
    MergeMetadata& WithMergedBy(MergedByT&& value) { SetMergedBy(std::forward<MergedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID for the merge commit, if any.</p>
     */
    inline const Aws::String& GetMergeCommitId() const { return m_mergeCommitId; }
    inline bool MergeCommitIdHasBeenSet() const { return m_mergeCommitIdHasBeenSet; }
    template<typename MergeCommitIdT = Aws::String>
    void SetMergeCommitId(MergeCommitIdT&& value) { m_mergeCommitIdHasBeenSet = true; m_mergeCommitId = std::forward<MergeCommitIdT>(value); }
    template<typename MergeCommitIdT = Aws::String>
    MergeMetadata& WithMergeCommitId(MergeCommitIdT&& value) { SetMergeCommitId(std::forward<MergeCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The merge strategy used in the merge.</p>
     */
    inline MergeOptionTypeEnum GetMergeOption() const { return m_mergeOption; }
    inline bool MergeOptionHasBeenSet() const { return m_mergeOptionHasBeenSet; }
    inline void SetMergeOption(MergeOptionTypeEnum value) { m_mergeOptionHasBeenSet = true; m_mergeOption = value; }
    inline MergeMetadata& WithMergeOption(MergeOptionTypeEnum value) { SetMergeOption(value); return *this;}
    ///@}
  private:

    bool m_isMerged{false};
    bool m_isMergedHasBeenSet = false;

    Aws::String m_mergedBy;
    bool m_mergedByHasBeenSet = false;

    Aws::String m_mergeCommitId;
    bool m_mergeCommitIdHasBeenSet = false;

    MergeOptionTypeEnum m_mergeOption{MergeOptionTypeEnum::NOT_SET};
    bool m_mergeOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
