/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/User.h>
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
namespace Chime
{
namespace Model
{
  class CreateUserResult
  {
  public:
    AWS_CHIME_API CreateUserResult();
    AWS_CHIME_API CreateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user on the Amazon Chime account.</p>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>The user on the Amazon Chime account.</p>
     */
    inline void SetUser(const User& value) { m_user = value; }

    /**
     * <p>The user on the Amazon Chime account.</p>
     */
    inline void SetUser(User&& value) { m_user = std::move(value); }

    /**
     * <p>The user on the Amazon Chime account.</p>
     */
    inline CreateUserResult& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>The user on the Amazon Chime account.</p>
     */
    inline CreateUserResult& WithUser(User&& value) { SetUser(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    User m_user;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
