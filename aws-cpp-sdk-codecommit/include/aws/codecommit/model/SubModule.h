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
   * <p>Returns information about a submodule reference in a repository
   * folder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/SubModule">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API SubModule
  {
  public:
    SubModule();
    SubModule(Aws::Utils::Json::JsonView jsonValue);
    SubModule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The commit ID that contains the reference to the submodule.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p>The commit ID that contains the reference to the submodule.</p>
     */
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }

    /**
     * <p>The commit ID that contains the reference to the submodule.</p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }

    /**
     * <p>The commit ID that contains the reference to the submodule.</p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = std::move(value); }

    /**
     * <p>The commit ID that contains the reference to the submodule.</p>
     */
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }

    /**
     * <p>The commit ID that contains the reference to the submodule.</p>
     */
    inline SubModule& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p>The commit ID that contains the reference to the submodule.</p>
     */
    inline SubModule& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID that contains the reference to the submodule.</p>
     */
    inline SubModule& WithCommitId(const char* value) { SetCommitId(value); return *this;}


    /**
     * <p>The fully qualified path to the folder that contains the reference to the
     * submodule.</p>
     */
    inline const Aws::String& GetAbsolutePath() const{ return m_absolutePath; }

    /**
     * <p>The fully qualified path to the folder that contains the reference to the
     * submodule.</p>
     */
    inline bool AbsolutePathHasBeenSet() const { return m_absolutePathHasBeenSet; }

    /**
     * <p>The fully qualified path to the folder that contains the reference to the
     * submodule.</p>
     */
    inline void SetAbsolutePath(const Aws::String& value) { m_absolutePathHasBeenSet = true; m_absolutePath = value; }

    /**
     * <p>The fully qualified path to the folder that contains the reference to the
     * submodule.</p>
     */
    inline void SetAbsolutePath(Aws::String&& value) { m_absolutePathHasBeenSet = true; m_absolutePath = std::move(value); }

    /**
     * <p>The fully qualified path to the folder that contains the reference to the
     * submodule.</p>
     */
    inline void SetAbsolutePath(const char* value) { m_absolutePathHasBeenSet = true; m_absolutePath.assign(value); }

    /**
     * <p>The fully qualified path to the folder that contains the reference to the
     * submodule.</p>
     */
    inline SubModule& WithAbsolutePath(const Aws::String& value) { SetAbsolutePath(value); return *this;}

    /**
     * <p>The fully qualified path to the folder that contains the reference to the
     * submodule.</p>
     */
    inline SubModule& WithAbsolutePath(Aws::String&& value) { SetAbsolutePath(std::move(value)); return *this;}

    /**
     * <p>The fully qualified path to the folder that contains the reference to the
     * submodule.</p>
     */
    inline SubModule& WithAbsolutePath(const char* value) { SetAbsolutePath(value); return *this;}


    /**
     * <p>The relative path of the submodule from the folder where the query
     * originated.</p>
     */
    inline const Aws::String& GetRelativePath() const{ return m_relativePath; }

    /**
     * <p>The relative path of the submodule from the folder where the query
     * originated.</p>
     */
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }

    /**
     * <p>The relative path of the submodule from the folder where the query
     * originated.</p>
     */
    inline void SetRelativePath(const Aws::String& value) { m_relativePathHasBeenSet = true; m_relativePath = value; }

    /**
     * <p>The relative path of the submodule from the folder where the query
     * originated.</p>
     */
    inline void SetRelativePath(Aws::String&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::move(value); }

    /**
     * <p>The relative path of the submodule from the folder where the query
     * originated.</p>
     */
    inline void SetRelativePath(const char* value) { m_relativePathHasBeenSet = true; m_relativePath.assign(value); }

    /**
     * <p>The relative path of the submodule from the folder where the query
     * originated.</p>
     */
    inline SubModule& WithRelativePath(const Aws::String& value) { SetRelativePath(value); return *this;}

    /**
     * <p>The relative path of the submodule from the folder where the query
     * originated.</p>
     */
    inline SubModule& WithRelativePath(Aws::String&& value) { SetRelativePath(std::move(value)); return *this;}

    /**
     * <p>The relative path of the submodule from the folder where the query
     * originated.</p>
     */
    inline SubModule& WithRelativePath(const char* value) { SetRelativePath(value); return *this;}

  private:

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet;

    Aws::String m_absolutePath;
    bool m_absolutePathHasBeenSet;

    Aws::String m_relativePath;
    bool m_relativePathHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
