﻿/**
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
   * <p>Represents the output of a delete branch operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteBranchOutput">AWS
   * API Reference</a></p>
   */
  class DeleteBranchResult
  {
  public:
    AWS_CODECOMMIT_API DeleteBranchResult();
    AWS_CODECOMMIT_API DeleteBranchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API DeleteBranchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the branch deleted by the operation, including the branch
     * name and the commit ID that was the tip of the branch.</p>
     */
    inline const BranchInfo& GetDeletedBranch() const{ return m_deletedBranch; }
    inline void SetDeletedBranch(const BranchInfo& value) { m_deletedBranch = value; }
    inline void SetDeletedBranch(BranchInfo&& value) { m_deletedBranch = std::move(value); }
    inline DeleteBranchResult& WithDeletedBranch(const BranchInfo& value) { SetDeletedBranch(value); return *this;}
    inline DeleteBranchResult& WithDeletedBranch(BranchInfo&& value) { SetDeletedBranch(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteBranchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteBranchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteBranchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    BranchInfo m_deletedBranch;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
