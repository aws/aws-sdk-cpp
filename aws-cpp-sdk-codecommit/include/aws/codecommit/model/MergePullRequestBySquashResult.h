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
#include <aws/codecommit/model/PullRequest.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class AWS_CODECOMMIT_API MergePullRequestBySquashResult
  {
  public:
    MergePullRequestBySquashResult();
    MergePullRequestBySquashResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    MergePullRequestBySquashResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const PullRequest& GetPullRequest() const{ return m_pullRequest; }

    
    inline void SetPullRequest(const PullRequest& value) { m_pullRequest = value; }

    
    inline void SetPullRequest(PullRequest&& value) { m_pullRequest = std::move(value); }

    
    inline MergePullRequestBySquashResult& WithPullRequest(const PullRequest& value) { SetPullRequest(value); return *this;}

    
    inline MergePullRequestBySquashResult& WithPullRequest(PullRequest&& value) { SetPullRequest(std::move(value)); return *this;}

  private:

    PullRequest m_pullRequest;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
