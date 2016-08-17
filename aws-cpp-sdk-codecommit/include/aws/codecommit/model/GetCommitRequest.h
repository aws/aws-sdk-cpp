/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Represents the input of a get commit operation.</p>
   */
  class AWS_CODECOMMIT_API GetCommitRequest : public CodeCommitRequest
  {
  public:
    GetCommitRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the repository to which the commit was made.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository to which the commit was made.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository to which the commit was made.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository to which the commit was made.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository to which the commit was made.</p>
     */
    inline GetCommitRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository to which the commit was made.</p>
     */
    inline GetCommitRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository to which the commit was made.</p>
     */
    inline GetCommitRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The commit ID.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p>The commit ID.</p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }

    /**
     * <p>The commit ID.</p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = value; }

    /**
     * <p>The commit ID.</p>
     */
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }

    /**
     * <p>The commit ID.</p>
     */
    inline GetCommitRequest& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p>The commit ID.</p>
     */
    inline GetCommitRequest& WithCommitId(Aws::String&& value) { SetCommitId(value); return *this;}

    /**
     * <p>The commit ID.</p>
     */
    inline GetCommitRequest& WithCommitId(const char* value) { SetCommitId(value); return *this;}

  private:
    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;
    Aws::String m_commitId;
    bool m_commitIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
