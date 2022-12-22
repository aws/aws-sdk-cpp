/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>A <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
   * that specifies the tip of a branch in an associated repository.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/RepositoryHeadSourceCodeType">AWS
   * API Reference</a></p>
   */
  class RepositoryHeadSourceCodeType
  {
  public:
    AWS_CODEGURUREVIEWER_API RepositoryHeadSourceCodeType();
    AWS_CODEGURUREVIEWER_API RepositoryHeadSourceCodeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API RepositoryHeadSourceCodeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the branch in an associated repository. The
     * <code>RepositoryHeadSourceCodeType</code> specifies the tip of this branch.</p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p>The name of the branch in an associated repository. The
     * <code>RepositoryHeadSourceCodeType</code> specifies the tip of this branch.</p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p>The name of the branch in an associated repository. The
     * <code>RepositoryHeadSourceCodeType</code> specifies the tip of this branch.</p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p>The name of the branch in an associated repository. The
     * <code>RepositoryHeadSourceCodeType</code> specifies the tip of this branch.</p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p>The name of the branch in an associated repository. The
     * <code>RepositoryHeadSourceCodeType</code> specifies the tip of this branch.</p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p>The name of the branch in an associated repository. The
     * <code>RepositoryHeadSourceCodeType</code> specifies the tip of this branch.</p>
     */
    inline RepositoryHeadSourceCodeType& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p>The name of the branch in an associated repository. The
     * <code>RepositoryHeadSourceCodeType</code> specifies the tip of this branch.</p>
     */
    inline RepositoryHeadSourceCodeType& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p>The name of the branch in an associated repository. The
     * <code>RepositoryHeadSourceCodeType</code> specifies the tip of this branch.</p>
     */
    inline RepositoryHeadSourceCodeType& WithBranchName(const char* value) { SetBranchName(value); return *this;}

  private:

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
