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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class AWS_MANAGEDBLOCKCHAIN_API CreateMemberResult
  {
  public:
    CreateMemberResult();
    CreateMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the member.</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline void SetMemberId(const Aws::String& value) { m_memberId = value; }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline void SetMemberId(Aws::String&& value) { m_memberId = std::move(value); }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline void SetMemberId(const char* value) { m_memberId.assign(value); }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline CreateMemberResult& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline CreateMemberResult& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline CreateMemberResult& WithMemberId(const char* value) { SetMemberId(value); return *this;}

  private:

    Aws::String m_memberId;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
