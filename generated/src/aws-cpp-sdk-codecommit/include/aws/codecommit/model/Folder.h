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
   * <p>Returns information about a folder in a repository.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/Folder">AWS
   * API Reference</a></p>
   */
  class Folder
  {
  public:
    AWS_CODECOMMIT_API Folder() = default;
    AWS_CODECOMMIT_API Folder(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Folder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline const Aws::String& GetTreeId() const { return m_treeId; }
    inline bool TreeIdHasBeenSet() const { return m_treeIdHasBeenSet; }
    template<typename TreeIdT = Aws::String>
    void SetTreeId(TreeIdT&& value) { m_treeIdHasBeenSet = true; m_treeId = std::forward<TreeIdT>(value); }
    template<typename TreeIdT = Aws::String>
    Folder& WithTreeId(TreeIdT&& value) { SetTreeId(std::forward<TreeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path of the folder in the repository.</p>
     */
    inline const Aws::String& GetAbsolutePath() const { return m_absolutePath; }
    inline bool AbsolutePathHasBeenSet() const { return m_absolutePathHasBeenSet; }
    template<typename AbsolutePathT = Aws::String>
    void SetAbsolutePath(AbsolutePathT&& value) { m_absolutePathHasBeenSet = true; m_absolutePath = std::forward<AbsolutePathT>(value); }
    template<typename AbsolutePathT = Aws::String>
    Folder& WithAbsolutePath(AbsolutePathT&& value) { SetAbsolutePath(std::forward<AbsolutePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path of the specified folder from the folder where the query
     * originated.</p>
     */
    inline const Aws::String& GetRelativePath() const { return m_relativePath; }
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }
    template<typename RelativePathT = Aws::String>
    void SetRelativePath(RelativePathT&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::forward<RelativePathT>(value); }
    template<typename RelativePathT = Aws::String>
    Folder& WithRelativePath(RelativePathT&& value) { SetRelativePath(std::forward<RelativePathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_treeId;
    bool m_treeIdHasBeenSet = false;

    Aws::String m_absolutePath;
    bool m_absolutePathHasBeenSet = false;

    Aws::String m_relativePath;
    bool m_relativePathHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
