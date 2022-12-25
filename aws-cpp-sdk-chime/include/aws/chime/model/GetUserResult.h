/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/User.h>
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
  class GetUserResult
  {
  public:
    AWS_CHIME_API GetUserResult();
    AWS_CHIME_API GetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user details.</p>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>The user details.</p>
     */
    inline void SetUser(const User& value) { m_user = value; }

    /**
     * <p>The user details.</p>
     */
    inline void SetUser(User&& value) { m_user = std::move(value); }

    /**
     * <p>The user details.</p>
     */
    inline GetUserResult& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>The user details.</p>
     */
    inline GetUserResult& WithUser(User&& value) { SetUser(std::move(value)); return *this;}

  private:

    User m_user;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
