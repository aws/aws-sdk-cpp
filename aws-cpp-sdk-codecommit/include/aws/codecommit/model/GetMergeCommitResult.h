/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{
  class GetMergeCommitResult
  {
  public:
    AWS_CODECOMMIT_API GetMergeCommitResult();
    AWS_CODECOMMIT_API GetMergeCommitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetMergeCommitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetSourceCommitId() const{ return m_sourceCommitId; }

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetSourceCommitId(const Aws::String& value) { m_sourceCommitId = value; }

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetSourceCommitId(Aws::String&& value) { m_sourceCommitId = std::move(value); }

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetSourceCommitId(const char* value) { m_sourceCommitId.assign(value); }

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeCommitResult& WithSourceCommitId(const Aws::String& value) { SetSourceCommitId(value); return *this;}

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeCommitResult& WithSourceCommitId(Aws::String&& value) { SetSourceCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeCommitResult& WithSourceCommitId(const char* value) { SetSourceCommitId(value); return *this;}


    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetDestinationCommitId() const{ return m_destinationCommitId; }

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetDestinationCommitId(const Aws::String& value) { m_destinationCommitId = value; }

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetDestinationCommitId(Aws::String&& value) { m_destinationCommitId = std::move(value); }

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetDestinationCommitId(const char* value) { m_destinationCommitId.assign(value); }

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeCommitResult& WithDestinationCommitId(const Aws::String& value) { SetDestinationCommitId(value); return *this;}

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeCommitResult& WithDestinationCommitId(Aws::String&& value) { SetDestinationCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeCommitResult& WithDestinationCommitId(const char* value) { SetDestinationCommitId(value); return *this;}


    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline const Aws::String& GetBaseCommitId() const{ return m_baseCommitId; }

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline void SetBaseCommitId(const Aws::String& value) { m_baseCommitId = value; }

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline void SetBaseCommitId(Aws::String&& value) { m_baseCommitId = std::move(value); }

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline void SetBaseCommitId(const char* value) { m_baseCommitId.assign(value); }

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline GetMergeCommitResult& WithBaseCommitId(const Aws::String& value) { SetBaseCommitId(value); return *this;}

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline GetMergeCommitResult& WithBaseCommitId(Aws::String&& value) { SetBaseCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline GetMergeCommitResult& WithBaseCommitId(const char* value) { SetBaseCommitId(value); return *this;}


    /**
     * <p>The commit ID for the merge commit created when the source branch was merged
     * into the destination branch. If the fast-forward merge strategy was used, there
     * is no merge commit.</p>
     */
    inline const Aws::String& GetMergedCommitId() const{ return m_mergedCommitId; }

    /**
     * <p>The commit ID for the merge commit created when the source branch was merged
     * into the destination branch. If the fast-forward merge strategy was used, there
     * is no merge commit.</p>
     */
    inline void SetMergedCommitId(const Aws::String& value) { m_mergedCommitId = value; }

    /**
     * <p>The commit ID for the merge commit created when the source branch was merged
     * into the destination branch. If the fast-forward merge strategy was used, there
     * is no merge commit.</p>
     */
    inline void SetMergedCommitId(Aws::String&& value) { m_mergedCommitId = std::move(value); }

    /**
     * <p>The commit ID for the merge commit created when the source branch was merged
     * into the destination branch. If the fast-forward merge strategy was used, there
     * is no merge commit.</p>
     */
    inline void SetMergedCommitId(const char* value) { m_mergedCommitId.assign(value); }

    /**
     * <p>The commit ID for the merge commit created when the source branch was merged
     * into the destination branch. If the fast-forward merge strategy was used, there
     * is no merge commit.</p>
     */
    inline GetMergeCommitResult& WithMergedCommitId(const Aws::String& value) { SetMergedCommitId(value); return *this;}

    /**
     * <p>The commit ID for the merge commit created when the source branch was merged
     * into the destination branch. If the fast-forward merge strategy was used, there
     * is no merge commit.</p>
     */
    inline GetMergeCommitResult& WithMergedCommitId(Aws::String&& value) { SetMergedCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID for the merge commit created when the source branch was merged
     * into the destination branch. If the fast-forward merge strategy was used, there
     * is no merge commit.</p>
     */
    inline GetMergeCommitResult& WithMergedCommitId(const char* value) { SetMergedCommitId(value); return *this;}

  private:

    Aws::String m_sourceCommitId;

    Aws::String m_destinationCommitId;

    Aws::String m_baseCommitId;

    Aws::String m_mergedCommitId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
