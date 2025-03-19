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
   * <p>Returns information about a submodule reference in a repository
   * folder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/SubModule">AWS
   * API Reference</a></p>
   */
  class SubModule
  {
  public:
    AWS_CODECOMMIT_API SubModule() = default;
    AWS_CODECOMMIT_API SubModule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API SubModule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The commit ID that contains the reference to the submodule.</p>
     */
    inline const Aws::String& GetCommitId() const { return m_commitId; }
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }
    template<typename CommitIdT = Aws::String>
    void SetCommitId(CommitIdT&& value) { m_commitIdHasBeenSet = true; m_commitId = std::forward<CommitIdT>(value); }
    template<typename CommitIdT = Aws::String>
    SubModule& WithCommitId(CommitIdT&& value) { SetCommitId(std::forward<CommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path to the folder that contains the reference to the
     * submodule.</p>
     */
    inline const Aws::String& GetAbsolutePath() const { return m_absolutePath; }
    inline bool AbsolutePathHasBeenSet() const { return m_absolutePathHasBeenSet; }
    template<typename AbsolutePathT = Aws::String>
    void SetAbsolutePath(AbsolutePathT&& value) { m_absolutePathHasBeenSet = true; m_absolutePath = std::forward<AbsolutePathT>(value); }
    template<typename AbsolutePathT = Aws::String>
    SubModule& WithAbsolutePath(AbsolutePathT&& value) { SetAbsolutePath(std::forward<AbsolutePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path of the submodule from the folder where the query
     * originated.</p>
     */
    inline const Aws::String& GetRelativePath() const { return m_relativePath; }
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }
    template<typename RelativePathT = Aws::String>
    void SetRelativePath(RelativePathT&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::forward<RelativePathT>(value); }
    template<typename RelativePathT = Aws::String>
    SubModule& WithRelativePath(RelativePathT&& value) { SetRelativePath(std::forward<RelativePathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    Aws::String m_absolutePath;
    bool m_absolutePathHasBeenSet = false;

    Aws::String m_relativePath;
    bool m_relativePathHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
