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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
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

  /**
   * <p>Returns information about a branch.</p>
   */
  class AWS_CODECOMMIT_API BranchInfo
  {
  public:
    BranchInfo();
    BranchInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    BranchInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the branch.</p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p>The name of the branch.</p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p>The name of the branch.</p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p>The name of the branch.</p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p>The name of the branch.</p>
     */
    inline BranchInfo& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p>The name of the branch.</p>
     */
    inline BranchInfo& WithBranchName(Aws::String&& value) { SetBranchName(value); return *this;}

    /**
     * <p>The name of the branch.</p>
     */
    inline BranchInfo& WithBranchName(const char* value) { SetBranchName(value); return *this;}

    /**
     * <p>The ID of the last commit made to the branch.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p>The ID of the last commit made to the branch.</p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }

    /**
     * <p>The ID of the last commit made to the branch.</p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = value; }

    /**
     * <p>The ID of the last commit made to the branch.</p>
     */
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }

    /**
     * <p>The ID of the last commit made to the branch.</p>
     */
    inline BranchInfo& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p>The ID of the last commit made to the branch.</p>
     */
    inline BranchInfo& WithCommitId(Aws::String&& value) { SetCommitId(value); return *this;}

    /**
     * <p>The ID of the last commit made to the branch.</p>
     */
    inline BranchInfo& WithCommitId(const char* value) { SetCommitId(value); return *this;}

  private:
    Aws::String m_branchName;
    bool m_branchNameHasBeenSet;
    Aws::String m_commitId;
    bool m_commitIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
