/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/MergeHunkDetail.h>
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
   * <p>Information about merge hunks in a merge or pull request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeHunk">AWS
   * API Reference</a></p>
   */
  class MergeHunk
  {
  public:
    AWS_CODECOMMIT_API MergeHunk() = default;
    AWS_CODECOMMIT_API MergeHunk(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API MergeHunk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean value indicating whether a combination of hunks contains a
     * conflict. Conflicts occur when the same file or the same lines in a file were
     * modified in both the source and destination of a merge or pull request. Valid
     * values include true, false, and null. True when the hunk represents a conflict
     * and one or more files contains a line conflict. File mode conflicts in a merge
     * do not set this to true.</p>
     */
    inline bool GetIsConflict() const { return m_isConflict; }
    inline bool IsConflictHasBeenSet() const { return m_isConflictHasBeenSet; }
    inline void SetIsConflict(bool value) { m_isConflictHasBeenSet = true; m_isConflict = value; }
    inline MergeHunk& WithIsConflict(bool value) { SetIsConflict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the merge hunk in the source of a merge or pull
     * request.</p>
     */
    inline const MergeHunkDetail& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = MergeHunkDetail>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = MergeHunkDetail>
    MergeHunk& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the merge hunk in the destination of a merge or pull
     * request.</p>
     */
    inline const MergeHunkDetail& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = MergeHunkDetail>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = MergeHunkDetail>
    MergeHunk& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the merge hunk in the base of a merge or pull request.</p>
     */
    inline const MergeHunkDetail& GetBase() const { return m_base; }
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }
    template<typename BaseT = MergeHunkDetail>
    void SetBase(BaseT&& value) { m_baseHasBeenSet = true; m_base = std::forward<BaseT>(value); }
    template<typename BaseT = MergeHunkDetail>
    MergeHunk& WithBase(BaseT&& value) { SetBase(std::forward<BaseT>(value)); return *this;}
    ///@}
  private:

    bool m_isConflict{false};
    bool m_isConflictHasBeenSet = false;

    MergeHunkDetail m_source;
    bool m_sourceHasBeenSet = false;

    MergeHunkDetail m_destination;
    bool m_destinationHasBeenSet = false;

    MergeHunkDetail m_base;
    bool m_baseHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
