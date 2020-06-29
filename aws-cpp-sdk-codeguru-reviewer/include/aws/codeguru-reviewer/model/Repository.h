/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/CodeCommitRepository.h>
#include <aws/codeguru-reviewer/model/ThirdPartySourceRepository.h>
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


    /**
     * <p> Information about a Bitbucket Cloud repository. </p>
     */
    inline const ThirdPartySourceRepository& GetBitbucket() const{ return m_bitbucket; }

    /**
     * <p> Information about a Bitbucket Cloud repository. </p>
     */
    inline bool BitbucketHasBeenSet() const { return m_bitbucketHasBeenSet; }

    /**
     * <p> Information about a Bitbucket Cloud repository. </p>
     */
    inline void SetBitbucket(const ThirdPartySourceRepository& value) { m_bitbucketHasBeenSet = true; m_bitbucket = value; }

    /**
     * <p> Information about a Bitbucket Cloud repository. </p>
     */
    inline void SetBitbucket(ThirdPartySourceRepository&& value) { m_bitbucketHasBeenSet = true; m_bitbucket = std::move(value); }

    /**
     * <p> Information about a Bitbucket Cloud repository. </p>
     */
    inline Repository& WithBitbucket(const ThirdPartySourceRepository& value) { SetBitbucket(value); return *this;}

    /**
     * <p> Information about a Bitbucket Cloud repository. </p>
     */
    inline Repository& WithBitbucket(ThirdPartySourceRepository&& value) { SetBitbucket(std::move(value)); return *this;}

  private:

    CodeCommitRepository m_codeCommit;
    bool m_codeCommitHasBeenSet;

    ThirdPartySourceRepository m_bitbucket;
    bool m_bitbucketHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
