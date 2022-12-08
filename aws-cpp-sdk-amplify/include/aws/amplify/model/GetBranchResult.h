/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/Branch.h>
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
namespace Amplify
{
namespace Model
{
  class GetBranchResult
  {
  public:
    AWS_AMPLIFY_API GetBranchResult();
    AWS_AMPLIFY_API GetBranchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API GetBranchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Branch& GetBranch() const{ return m_branch; }

    
    inline void SetBranch(const Branch& value) { m_branch = value; }

    
    inline void SetBranch(Branch&& value) { m_branch = std::move(value); }

    
    inline GetBranchResult& WithBranch(const Branch& value) { SetBranch(value); return *this;}

    
    inline GetBranchResult& WithBranch(Branch&& value) { SetBranch(std::move(value)); return *this;}

  private:

    Branch m_branch;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
