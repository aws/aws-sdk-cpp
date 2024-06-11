﻿/**
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
    AWS_CODECOMMIT_API PullRequestStatusChangedEventMetadata();
    AWS_CODECOMMIT_API PullRequestStatusChangedEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API PullRequestStatusChangedEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The changed status of the pull request.</p>
     */
    inline const PullRequestStatusEnum& GetPullRequestStatus() const{ return m_pullRequestStatus; }
    inline bool PullRequestStatusHasBeenSet() const { return m_pullRequestStatusHasBeenSet; }
    inline void SetPullRequestStatus(const PullRequestStatusEnum& value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = value; }
    inline void SetPullRequestStatus(PullRequestStatusEnum&& value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = std::move(value); }
    inline PullRequestStatusChangedEventMetadata& WithPullRequestStatus(const PullRequestStatusEnum& value) { SetPullRequestStatus(value); return *this;}
    inline PullRequestStatusChangedEventMetadata& WithPullRequestStatus(PullRequestStatusEnum&& value) { SetPullRequestStatus(std::move(value)); return *this;}
    ///@}
  private:

    PullRequestStatusEnum m_pullRequestStatus;
    bool m_pullRequestStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
