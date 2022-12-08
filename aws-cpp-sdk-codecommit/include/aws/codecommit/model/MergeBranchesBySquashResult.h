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
  class MergeBranchesBySquashResult
  {
  public:
    AWS_CODECOMMIT_API MergeBranchesBySquashResult();
    AWS_CODECOMMIT_API MergeBranchesBySquashResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API MergeBranchesBySquashResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The commit ID of the merge in the destination or target branch.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p>The commit ID of the merge in the destination or target branch.</p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitId = value; }

    /**
     * <p>The commit ID of the merge in the destination or target branch.</p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitId = std::move(value); }

    /**
     * <p>The commit ID of the merge in the destination or target branch.</p>
     */
    inline void SetCommitId(const char* value) { m_commitId.assign(value); }

    /**
     * <p>The commit ID of the merge in the destination or target branch.</p>
     */
    inline MergeBranchesBySquashResult& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p>The commit ID of the merge in the destination or target branch.</p>
     */
    inline MergeBranchesBySquashResult& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the merge in the destination or target branch.</p>
     */
    inline MergeBranchesBySquashResult& WithCommitId(const char* value) { SetCommitId(value); return *this;}


    /**
     * <p>The tree ID of the merge in the destination or target branch.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }

    /**
     * <p>The tree ID of the merge in the destination or target branch.</p>
     */
    inline void SetTreeId(const Aws::String& value) { m_treeId = value; }

    /**
     * <p>The tree ID of the merge in the destination or target branch.</p>
     */
    inline void SetTreeId(Aws::String&& value) { m_treeId = std::move(value); }

    /**
     * <p>The tree ID of the merge in the destination or target branch.</p>
     */
    inline void SetTreeId(const char* value) { m_treeId.assign(value); }

    /**
     * <p>The tree ID of the merge in the destination or target branch.</p>
     */
    inline MergeBranchesBySquashResult& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}

    /**
     * <p>The tree ID of the merge in the destination or target branch.</p>
     */
    inline MergeBranchesBySquashResult& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}

    /**
     * <p>The tree ID of the merge in the destination or target branch.</p>
     */
    inline MergeBranchesBySquashResult& WithTreeId(const char* value) { SetTreeId(value); return *this;}

  private:

    Aws::String m_commitId;

    Aws::String m_treeId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
