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
   * <p>Information about an AWS CodeCommit repository. The CodeCommit repository
   * must be in the same AWS Region and AWS account where its CodeGuru Reviewer code
   * reviews are configured. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/CodeCommitRepository">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUREVIEWER_API CodeCommitRepository
  {
  public:
    CodeCommitRepository();
    CodeCommitRepository(Aws::Utils::Json::JsonView jsonValue);
    CodeCommitRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the AWS CodeCommit repository. For more information, see <a
     * href="https://docs.aws.amazon.com/codecommit/latest/APIReference/API_GetRepository.html#CodeCommit-GetRepository-request-repositoryName">repositoryName</a>
     * in the <i>AWS CodeCommit API Reference</i>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the AWS CodeCommit repository. For more information, see <a
     * href="https://docs.aws.amazon.com/codecommit/latest/APIReference/API_GetRepository.html#CodeCommit-GetRepository-request-repositoryName">repositoryName</a>
     * in the <i>AWS CodeCommit API Reference</i>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the AWS CodeCommit repository. For more information, see <a
     * href="https://docs.aws.amazon.com/codecommit/latest/APIReference/API_GetRepository.html#CodeCommit-GetRepository-request-repositoryName">repositoryName</a>
     * in the <i>AWS CodeCommit API Reference</i>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the AWS CodeCommit repository. For more information, see <a
     * href="https://docs.aws.amazon.com/codecommit/latest/APIReference/API_GetRepository.html#CodeCommit-GetRepository-request-repositoryName">repositoryName</a>
     * in the <i>AWS CodeCommit API Reference</i>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the AWS CodeCommit repository. For more information, see <a
     * href="https://docs.aws.amazon.com/codecommit/latest/APIReference/API_GetRepository.html#CodeCommit-GetRepository-request-repositoryName">repositoryName</a>
     * in the <i>AWS CodeCommit API Reference</i>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the AWS CodeCommit repository. For more information, see <a
     * href="https://docs.aws.amazon.com/codecommit/latest/APIReference/API_GetRepository.html#CodeCommit-GetRepository-request-repositoryName">repositoryName</a>
     * in the <i>AWS CodeCommit API Reference</i>.</p>
     */
    inline CodeCommitRepository& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the AWS CodeCommit repository. For more information, see <a
     * href="https://docs.aws.amazon.com/codecommit/latest/APIReference/API_GetRepository.html#CodeCommit-GetRepository-request-repositoryName">repositoryName</a>
     * in the <i>AWS CodeCommit API Reference</i>.</p>
     */
    inline CodeCommitRepository& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS CodeCommit repository. For more information, see <a
     * href="https://docs.aws.amazon.com/codecommit/latest/APIReference/API_GetRepository.html#CodeCommit-GetRepository-request-repositoryName">repositoryName</a>
     * in the <i>AWS CodeCommit API Reference</i>.</p>
     */
    inline CodeCommitRepository& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
