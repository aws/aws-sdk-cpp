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


    /**
     * <p>The identifier of the user account.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline CreateUserResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier of the user account.</p>
     */
    inline CreateUserResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user account.</p>
     */
    inline CreateUserResult& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline void SetUserArn(const char* value) { m_userArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline CreateUserResult& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline CreateUserResult& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline CreateUserResult& WithUserArn(const char* value) { SetUserArn(value); return *this;}

  private:

    Aws::String m_userId;

    Aws::String m_userArn;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
