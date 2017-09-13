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
#include <aws/codecommit/model/BranchInfo.h>
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
  /**
   * <p>Represents the output of a get branch operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBranchOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API GetBranchResult
  {
  public:
    GetBranchResult();
    GetBranchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBranchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the branch.</p>
     */
    inline const BranchInfo& GetBranch() const{ return m_branch; }

    /**
     * <p>The name of the branch.</p>
     */
    inline void SetBranch(const BranchInfo& value) { m_branch = value; }

    /**
     * <p>The name of the branch.</p>
     */
    inline void SetBranch(BranchInfo&& value) { m_branch = std::move(value); }

    /**
     * <p>The name of the branch.</p>
     */
    inline GetBranchResult& WithBranch(const BranchInfo& value) { SetBranch(value); return *this;}

    /**
     * <p>The name of the branch.</p>
     */
    inline GetBranchResult& WithBranch(BranchInfo&& value) { SetBranch(std::move(value)); return *this;}

  private:

    BranchInfo m_branch;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
