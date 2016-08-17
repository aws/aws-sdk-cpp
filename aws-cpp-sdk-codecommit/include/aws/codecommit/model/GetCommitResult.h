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
#include <aws/codecommit/model/Commit.h>

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
   * <p>Represents the output of a get commit operation.</p>
   */
  class AWS_CODECOMMIT_API GetCommitResult
  {
  public:
    GetCommitResult();
    GetCommitResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCommitResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the specified commit.</p>
     */
    inline const Commit& GetCommit() const{ return m_commit; }

    /**
     * <p>Information about the specified commit.</p>
     */
    inline void SetCommit(const Commit& value) { m_commit = value; }

    /**
     * <p>Information about the specified commit.</p>
     */
    inline void SetCommit(Commit&& value) { m_commit = value; }

    /**
     * <p>Information about the specified commit.</p>
     */
    inline GetCommitResult& WithCommit(const Commit& value) { SetCommit(value); return *this;}

    /**
     * <p>Information about the specified commit.</p>
     */
    inline GetCommitResult& WithCommit(Commit&& value) { SetCommit(value); return *this;}

  private:
    Commit m_commit;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
