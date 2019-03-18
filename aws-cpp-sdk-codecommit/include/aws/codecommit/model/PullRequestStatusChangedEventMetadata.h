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
  class AWS_CODECOMMIT_API PullRequestStatusChangedEventMetadata
  {
  public:
    PullRequestStatusChangedEventMetadata();
    PullRequestStatusChangedEventMetadata(Aws::Utils::Json::JsonView jsonValue);
    PullRequestStatusChangedEventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The changed status of the pull request.</p>
     */
    inline const PullRequestStatusEnum& GetPullRequestStatus() const{ return m_pullRequestStatus; }

    /**
     * <p>The changed status of the pull request.</p>
     */
    inline bool PullRequestStatusHasBeenSet() const { return m_pullRequestStatusHasBeenSet; }

    /**
     * <p>The changed status of the pull request.</p>
     */
    inline void SetPullRequestStatus(const PullRequestStatusEnum& value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = value; }

    /**
     * <p>The changed status of the pull request.</p>
     */
    inline void SetPullRequestStatus(PullRequestStatusEnum&& value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = std::move(value); }

    /**
     * <p>The changed status of the pull request.</p>
     */
    inline PullRequestStatusChangedEventMetadata& WithPullRequestStatus(const PullRequestStatusEnum& value) { SetPullRequestStatus(value); return *this;}

    /**
     * <p>The changed status of the pull request.</p>
     */
    inline PullRequestStatusChangedEventMetadata& WithPullRequestStatus(PullRequestStatusEnum&& value) { SetPullRequestStatus(std::move(value)); return *this;}

  private:

    PullRequestStatusEnum m_pullRequestStatus;
    bool m_pullRequestStatusHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
