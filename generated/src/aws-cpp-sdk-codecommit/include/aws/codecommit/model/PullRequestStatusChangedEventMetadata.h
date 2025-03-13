/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/PullRequestStatusEnum.h>
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
   * <p>Information about a change to the status of a pull request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PullRequestStatusChangedEventMetadata">AWS
   * API Reference</a></p>
   */
  class PullRequestStatusChangedEventMetadata
  {
  public:
    AWS_CODECOMMIT_API PullRequestStatusChangedEventMetadata() = default;
    AWS_CODECOMMIT_API PullRequestStatusChangedEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API PullRequestStatusChangedEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The changed status of the pull request.</p>
     */
    inline PullRequestStatusEnum GetPullRequestStatus() const { return m_pullRequestStatus; }
    inline bool PullRequestStatusHasBeenSet() const { return m_pullRequestStatusHasBeenSet; }
    inline void SetPullRequestStatus(PullRequestStatusEnum value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = value; }
    inline PullRequestStatusChangedEventMetadata& WithPullRequestStatus(PullRequestStatusEnum value) { SetPullRequestStatus(value); return *this;}
    ///@}
  private:

    PullRequestStatusEnum m_pullRequestStatus{PullRequestStatusEnum::NOT_SET};
    bool m_pullRequestStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
