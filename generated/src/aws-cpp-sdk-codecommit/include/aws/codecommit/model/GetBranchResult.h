/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/BranchInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetBranchResult
  {
  public:
    AWS_CODECOMMIT_API GetBranchResult();
    AWS_CODECOMMIT_API GetBranchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetBranchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetBranchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetBranchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetBranchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BranchInfo m_branch;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
