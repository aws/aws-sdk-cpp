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
  class AWS_AMPLIFY_API GetBranchResult
  {
  public:
    GetBranchResult();
    GetBranchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBranchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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
