/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/User.h>
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
  class DescribeUserResult
  {
  public:
    AWS_CONNECT_API DescribeUserResult();
    AWS_CONNECT_API DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the user account and configuration settings.</p>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>Information about the user account and configuration settings.</p>
     */
    inline void SetUser(const User& value) { m_user = value; }

    /**
     * <p>Information about the user account and configuration settings.</p>
     */
    inline void SetUser(User&& value) { m_user = std::move(value); }

    /**
     * <p>Information about the user account and configuration settings.</p>
     */
    inline DescribeUserResult& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>Information about the user account and configuration settings.</p>
     */
    inline DescribeUserResult& WithUser(User&& value) { SetUser(std::move(value)); return *this;}

  private:

    User m_user;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
