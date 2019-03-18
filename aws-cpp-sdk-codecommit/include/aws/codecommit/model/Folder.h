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
  class AWS_CODECOMMIT_API Folder
  {
  public:
    Folder();
    Folder(Aws::Utils::Json::JsonView jsonValue);
    Folder& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline bool TreeIdHasBeenSet() const { return m_treeIdHasBeenSet; }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline void SetTreeId(const Aws::String& value) { m_treeIdHasBeenSet = true; m_treeId = value; }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline void SetTreeId(Aws::String&& value) { m_treeIdHasBeenSet = true; m_treeId = std::move(value); }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline void SetTreeId(const char* value) { m_treeIdHasBeenSet = true; m_treeId.assign(value); }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline Folder& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline Folder& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the folder.</p>
     */
    inline Folder& WithTreeId(const char* value) { SetTreeId(value); return *this;}


    /**
     * <p>The fully-qualified path of the folder in the repository.</p>
     */
    inline const Aws::String& GetAbsolutePath() const{ return m_absolutePath; }

    /**
     * <p>The fully-qualified path of the folder in the repository.</p>
     */
    inline bool AbsolutePathHasBeenSet() const { return m_absolutePathHasBeenSet; }

    /**
     * <p>The fully-qualified path of the folder in the repository.</p>
     */
    inline void SetAbsolutePath(const Aws::String& value) { m_absolutePathHasBeenSet = true; m_absolutePath = value; }

    /**
     * <p>The fully-qualified path of the folder in the repository.</p>
     */
    inline void SetAbsolutePath(Aws::String&& value) { m_absolutePathHasBeenSet = true; m_absolutePath = std::move(value); }

    /**
     * <p>The fully-qualified path of the folder in the repository.</p>
     */
    inline void SetAbsolutePath(const char* value) { m_absolutePathHasBeenSet = true; m_absolutePath.assign(value); }

    /**
     * <p>The fully-qualified path of the folder in the repository.</p>
     */
    inline Folder& WithAbsolutePath(const Aws::String& value) { SetAbsolutePath(value); return *this;}

    /**
     * <p>The fully-qualified path of the folder in the repository.</p>
     */
    inline Folder& WithAbsolutePath(Aws::String&& value) { SetAbsolutePath(std::move(value)); return *this;}

    /**
     * <p>The fully-qualified path of the folder in the repository.</p>
     */
    inline Folder& WithAbsolutePath(const char* value) { SetAbsolutePath(value); return *this;}


    /**
     * <p>The relative path of the specified folder from the folder where the query
     * originated.</p>
     */
    inline const Aws::String& GetRelativePath() const{ return m_relativePath; }

    /**
     * <p>The relative path of the specified folder from the folder where the query
     * originated.</p>
     */
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }

    /**
     * <p>The relative path of the specified folder from the folder where the query
     * originated.</p>
     */
    inline void SetRelativePath(const Aws::String& value) { m_relativePathHasBeenSet = true; m_relativePath = value; }

    /**
     * <p>The relative path of the specified folder from the folder where the query
     * originated.</p>
     */
    inline void SetRelativePath(Aws::String&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::move(value); }

    /**
     * <p>The relative path of the specified folder from the folder where the query
     * originated.</p>
     */
    inline void SetRelativePath(const char* value) { m_relativePathHasBeenSet = true; m_relativePath.assign(value); }

    /**
     * <p>The relative path of the specified folder from the folder where the query
     * originated.</p>
     */
    inline Folder& WithRelativePath(const Aws::String& value) { SetRelativePath(value); return *this;}

    /**
     * <p>The relative path of the specified folder from the folder where the query
     * originated.</p>
     */
    inline Folder& WithRelativePath(Aws::String&& value) { SetRelativePath(std::move(value)); return *this;}

    /**
     * <p>The relative path of the specified folder from the folder where the query
     * originated.</p>
     */
    inline Folder& WithRelativePath(const char* value) { SetRelativePath(value); return *this;}

  private:

    Aws::String m_treeId;
    bool m_treeIdHasBeenSet;

    Aws::String m_absolutePath;
    bool m_absolutePathHasBeenSet;

    Aws::String m_relativePath;
    bool m_relativePathHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
