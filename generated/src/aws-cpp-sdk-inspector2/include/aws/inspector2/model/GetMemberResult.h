/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Member.h>
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
namespace Inspector2
{
namespace Model
{
  class GetMemberResult
  {
  public:
    AWS_INSPECTOR2_API GetMemberResult();
    AWS_INSPECTOR2_API GetMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details of the retrieved member account.</p>
     */
    inline const Member& GetMember() const{ return m_member; }

    /**
     * <p>Details of the retrieved member account.</p>
     */
    inline void SetMember(const Member& value) { m_member = value; }

    /**
     * <p>Details of the retrieved member account.</p>
     */
    inline void SetMember(Member&& value) { m_member = std::move(value); }

    /**
     * <p>Details of the retrieved member account.</p>
     */
    inline GetMemberResult& WithMember(const Member& value) { SetMember(value); return *this;}

    /**
     * <p>Details of the retrieved member account.</p>
     */
    inline GetMemberResult& WithMember(Member&& value) { SetMember(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMemberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMemberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMemberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Member m_member;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
