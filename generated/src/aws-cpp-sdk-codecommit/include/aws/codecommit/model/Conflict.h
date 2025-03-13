/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/ConflictMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/MergeHunk.h>
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
   * <p>Information about conflicts in a merge operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/Conflict">AWS
   * API Reference</a></p>
   */
  class Conflict
  {
  public:
    AWS_CODECOMMIT_API Conflict() = default;
    AWS_CODECOMMIT_API Conflict(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Conflict& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Metadata about a conflict in a merge operation.</p>
     */
    inline const ConflictMetadata& GetConflictMetadata() const { return m_conflictMetadata; }
    inline bool ConflictMetadataHasBeenSet() const { return m_conflictMetadataHasBeenSet; }
    template<typename ConflictMetadataT = ConflictMetadata>
    void SetConflictMetadata(ConflictMetadataT&& value) { m_conflictMetadataHasBeenSet = true; m_conflictMetadata = std::forward<ConflictMetadataT>(value); }
    template<typename ConflictMetadataT = ConflictMetadata>
    Conflict& WithConflictMetadata(ConflictMetadataT&& value) { SetConflictMetadata(std::forward<ConflictMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of hunks that contain the differences between files or lines causing
     * the conflict.</p>
     */
    inline const Aws::Vector<MergeHunk>& GetMergeHunks() const { return m_mergeHunks; }
    inline bool MergeHunksHasBeenSet() const { return m_mergeHunksHasBeenSet; }
    template<typename MergeHunksT = Aws::Vector<MergeHunk>>
    void SetMergeHunks(MergeHunksT&& value) { m_mergeHunksHasBeenSet = true; m_mergeHunks = std::forward<MergeHunksT>(value); }
    template<typename MergeHunksT = Aws::Vector<MergeHunk>>
    Conflict& WithMergeHunks(MergeHunksT&& value) { SetMergeHunks(std::forward<MergeHunksT>(value)); return *this;}
    template<typename MergeHunksT = MergeHunk>
    Conflict& AddMergeHunks(MergeHunksT&& value) { m_mergeHunksHasBeenSet = true; m_mergeHunks.emplace_back(std::forward<MergeHunksT>(value)); return *this; }
    ///@}
  private:

    ConflictMetadata m_conflictMetadata;
    bool m_conflictMetadataHasBeenSet = false;

    Aws::Vector<MergeHunk> m_mergeHunks;
    bool m_mergeHunksHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
