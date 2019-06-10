/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODECOMMIT_API Conflict
  {
  public:
    Conflict();
    Conflict(Aws::Utils::Json::JsonView jsonValue);
    Conflict& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_conflictMetadataHasBeenSet;

    Aws::Vector<MergeHunk> m_mergeHunks;
    bool m_mergeHunksHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
