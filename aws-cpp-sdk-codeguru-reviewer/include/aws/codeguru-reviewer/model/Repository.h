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
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/CodeCommitRepository.h>
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
   * <p>Information about a repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/Repository">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUREVIEWER_API Repository
  {
  public:
    Repository();
    Repository(Aws::Utils::Json::JsonView jsonValue);
    Repository& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about an AWS CodeCommit repository.</p>
     */
    inline const CodeCommitRepository& GetCodeCommit() const{ return m_codeCommit; }

    /**
     * <p>Information about an AWS CodeCommit repository.</p>
     */
    inline bool CodeCommitHasBeenSet() const { return m_codeCommitHasBeenSet; }

    /**
     * <p>Information about an AWS CodeCommit repository.</p>
     */
    inline void SetCodeCommit(const CodeCommitRepository& value) { m_codeCommitHasBeenSet = true; m_codeCommit = value; }

    /**
     * <p>Information about an AWS CodeCommit repository.</p>
     */
    inline void SetCodeCommit(CodeCommitRepository&& value) { m_codeCommitHasBeenSet = true; m_codeCommit = std::move(value); }

    /**
     * <p>Information about an AWS CodeCommit repository.</p>
     */
    inline Repository& WithCodeCommit(const CodeCommitRepository& value) { SetCodeCommit(value); return *this;}

    /**
     * <p>Information about an AWS CodeCommit repository.</p>
     */
    inline Repository& WithCodeCommit(CodeCommitRepository&& value) { SetCodeCommit(std::move(value)); return *this;}

  private:

    CodeCommitRepository m_codeCommit;
    bool m_codeCommitHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
