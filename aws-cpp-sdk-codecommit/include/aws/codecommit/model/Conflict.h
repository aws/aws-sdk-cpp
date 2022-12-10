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
    AWS_CODECOMMIT_API Conflict();
    AWS_CODECOMMIT_API Conflict(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Conflict& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Metadata about a conflict in a merge operation.</p>
     */
    inline const ConflictMetadata& GetConflictMetadata() const{ return m_conflictMetadata; }

    /**
     * <p>Metadata about a conflict in a merge operation.</p>
     */
    inline bool ConflictMetadataHasBeenSet() const { return m_conflictMetadataHasBeenSet; }

    /**
     * <p>Metadata about a conflict in a merge operation.</p>
     */
    inline void SetConflictMetadata(const ConflictMetadata& value) { m_conflictMetadataHasBeenSet = true; m_conflictMetadata = value; }

    /**
     * <p>Metadata about a conflict in a merge operation.</p>
     */
    inline void SetConflictMetadata(ConflictMetadata&& value) { m_conflictMetadataHasBeenSet = true; m_conflictMetadata = std::move(value); }

    /**
     * <p>Metadata about a conflict in a merge operation.</p>
     */
    inline Conflict& WithConflictMetadata(const ConflictMetadata& value) { SetConflictMetadata(value); return *this;}

    /**
     * <p>Metadata about a conflict in a merge operation.</p>
     */
    inline Conflict& WithConflictMetadata(ConflictMetadata&& value) { SetConflictMetadata(std::move(value)); return *this;}


    /**
     * <p>A list of hunks that contain the differences between files or lines causing
     * the conflict.</p>
     */
    inline const Aws::Vector<MergeHunk>& GetMergeHunks() const{ return m_mergeHunks; }

    /**
     * <p>A list of hunks that contain the differences between files or lines causing
     * the conflict.</p>
     */
    inline bool MergeHunksHasBeenSet() const { return m_mergeHunksHasBeenSet; }

    /**
     * <p>A list of hunks that contain the differences between files or lines causing
     * the conflict.</p>
     */
    inline void SetMergeHunks(const Aws::Vector<MergeHunk>& value) { m_mergeHunksHasBeenSet = true; m_mergeHunks = value; }

    /**
     * <p>A list of hunks that contain the differences between files or lines causing
     * the conflict.</p>
     */
    inline void SetMergeHunks(Aws::Vector<MergeHunk>&& value) { m_mergeHunksHasBeenSet = true; m_mergeHunks = std::move(value); }

    /**
     * <p>A list of hunks that contain the differences between files or lines causing
     * the conflict.</p>
     */
    inline Conflict& WithMergeHunks(const Aws::Vector<MergeHunk>& value) { SetMergeHunks(value); return *this;}

    /**
     * <p>A list of hunks that contain the differences between files or lines causing
     * the conflict.</p>
     */
    inline Conflict& WithMergeHunks(Aws::Vector<MergeHunk>&& value) { SetMergeHunks(std::move(value)); return *this;}

    /**
     * <p>A list of hunks that contain the differences between files or lines causing
     * the conflict.</p>
     */
    inline Conflict& AddMergeHunks(const MergeHunk& value) { m_mergeHunksHasBeenSet = true; m_mergeHunks.push_back(value); return *this; }

    /**
     * <p>A list of hunks that contain the differences between files or lines causing
     * the conflict.</p>
     */
    inline Conflict& AddMergeHunks(MergeHunk&& value) { m_mergeHunksHasBeenSet = true; m_mergeHunks.push_back(std::move(value)); return *this; }

  private:

    ConflictMetadata m_conflictMetadata;
    bool m_conflictMetadataHasBeenSet = false;

    Aws::Vector<MergeHunk> m_mergeHunks;
    bool m_mergeHunksHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
