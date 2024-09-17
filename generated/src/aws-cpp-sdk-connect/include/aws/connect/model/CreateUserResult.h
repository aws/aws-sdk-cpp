/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateUserResult
  {
  public:
    AWS_CONNECT_API CreateUserResult();
    AWS_CONNECT_API CreateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the user account.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline void SetUserId(const Aws::String& value) { m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userId.assign(value); }
    inline CreateUserResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline CreateUserResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline CreateUserResult& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }
    inline void SetUserArn(const Aws::String& value) { m_userArn = value; }
    inline void SetUserArn(Aws::String&& value) { m_userArn = std::move(value); }
    inline void SetUserArn(const char* value) { m_userArn.assign(value); }
    inline CreateUserResult& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}
    inline CreateUserResult& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}
    inline CreateUserResult& WithUserArn(const char* value) { SetUserArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_userId;

    Aws::String m_userArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
