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
    AWS_CODECOMMIT_API MergeHunk();
    AWS_CODECOMMIT_API MergeHunk(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API MergeHunk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean value indicating whether a combination of hunks contains a
     * conflict. Conflicts occur when the same file or the same lines in a file were
     * modified in both the source and destination of a merge or pull request. Valid
     * values include true, false, and null. True when the hunk represents a conflict
     * and one or more files contains a line conflict. File mode conflicts in a merge
     * do not set this to true.</p>
     */
    inline bool GetIsConflict() const{ return m_isConflict; }

    /**
     * <p>A Boolean value indicating whether a combination of hunks contains a
     * conflict. Conflicts occur when the same file or the same lines in a file were
     * modified in both the source and destination of a merge or pull request. Valid
     * values include true, false, and null. True when the hunk represents a conflict
     * and one or more files contains a line conflict. File mode conflicts in a merge
     * do not set this to true.</p>
     */
    inline bool IsConflictHasBeenSet() const { return m_isConflictHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether a combination of hunks contains a
     * conflict. Conflicts occur when the same file or the same lines in a file were
     * modified in both the source and destination of a merge or pull request. Valid
     * values include true, false, and null. True when the hunk represents a conflict
     * and one or more files contains a line conflict. File mode conflicts in a merge
     * do not set this to true.</p>
     */
    inline void SetIsConflict(bool value) { m_isConflictHasBeenSet = true; m_isConflict = value; }

    /**
     * <p>A Boolean value indicating whether a combination of hunks contains a
     * conflict. Conflicts occur when the same file or the same lines in a file were
     * modified in both the source and destination of a merge or pull request. Valid
     * values include true, false, and null. True when the hunk represents a conflict
     * and one or more files contains a line conflict. File mode conflicts in a merge
     * do not set this to true.</p>
     */
    inline MergeHunk& WithIsConflict(bool value) { SetIsConflict(value); return *this;}


    /**
     * <p>Information about the merge hunk in the source of a merge or pull
     * request.</p>
     */
    inline const MergeHunkDetail& GetSource() const{ return m_source; }

    /**
     * <p>Information about the merge hunk in the source of a merge or pull
     * request.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Information about the merge hunk in the source of a merge or pull
     * request.</p>
     */
    inline void SetSource(const MergeHunkDetail& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information about the merge hunk in the source of a merge or pull
     * request.</p>
     */
    inline void SetSource(MergeHunkDetail&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Information about the merge hunk in the source of a merge or pull
     * request.</p>
     */
    inline MergeHunk& WithSource(const MergeHunkDetail& value) { SetSource(value); return *this;}

    /**
     * <p>Information about the merge hunk in the source of a merge or pull
     * request.</p>
     */
    inline MergeHunk& WithSource(MergeHunkDetail&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>Information about the merge hunk in the destination of a merge or pull
     * request.</p>
     */
    inline const MergeHunkDetail& GetDestination() const{ return m_destination; }

    /**
     * <p>Information about the merge hunk in the destination of a merge or pull
     * request.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>Information about the merge hunk in the destination of a merge or pull
     * request.</p>
     */
    inline void SetDestination(const MergeHunkDetail& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>Information about the merge hunk in the destination of a merge or pull
     * request.</p>
     */
    inline void SetDestination(MergeHunkDetail&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>Information about the merge hunk in the destination of a merge or pull
     * request.</p>
     */
    inline MergeHunk& WithDestination(const MergeHunkDetail& value) { SetDestination(value); return *this;}

    /**
     * <p>Information about the merge hunk in the destination of a merge or pull
     * request.</p>
     */
    inline MergeHunk& WithDestination(MergeHunkDetail&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>Information about the merge hunk in the base of a merge or pull request.</p>
     */
    inline const MergeHunkDetail& GetBase() const{ return m_base; }

    /**
     * <p>Information about the merge hunk in the base of a merge or pull request.</p>
     */
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }

    /**
     * <p>Information about the merge hunk in the base of a merge or pull request.</p>
     */
    inline void SetBase(const MergeHunkDetail& value) { m_baseHasBeenSet = true; m_base = value; }

    /**
     * <p>Information about the merge hunk in the base of a merge or pull request.</p>
     */
    inline void SetBase(MergeHunkDetail&& value) { m_baseHasBeenSet = true; m_base = std::move(value); }

    /**
     * <p>Information about the merge hunk in the base of a merge or pull request.</p>
     */
    inline MergeHunk& WithBase(const MergeHunkDetail& value) { SetBase(value); return *this;}

    /**
     * <p>Information about the merge hunk in the base of a merge or pull request.</p>
     */
    inline MergeHunk& WithBase(MergeHunkDetail&& value) { SetBase(std::move(value)); return *this;}

  private:

    bool m_isConflict;
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
