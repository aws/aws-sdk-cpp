/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/Commit.h>
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
   * <p>Represents the output of a get commit operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommitOutput">AWS
   * API Reference</a></p>
   */
  class GetCommitResult
  {
  public:
    AWS_CODECOMMIT_API GetCommitResult();
    AWS_CODECOMMIT_API GetCommitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetCommitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A commit data type object that contains information about the specified
     * commit.</p>
     */
    inline const Commit& GetCommit() const{ return m_commit; }

    /**
     * <p>A commit data type object that contains information about the specified
     * commit.</p>
     */
    inline void SetCommit(const Commit& value) { m_commit = value; }

    /**
     * <p>A commit data type object that contains information about the specified
     * commit.</p>
     */
    inline void SetCommit(Commit&& value) { m_commit = std::move(value); }

    /**
     * <p>A commit data type object that contains information about the specified
     * commit.</p>
     */
    inline GetCommitResult& WithCommit(const Commit& value) { SetCommit(value); return *this;}

    /**
     * <p>A commit data type object that contains information about the specified
     * commit.</p>
     */
    inline GetCommitResult& WithCommit(Commit&& value) { SetCommit(std::move(value)); return *this;}

  private:

    Commit m_commit;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
