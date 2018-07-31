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
  class AWS_CONNECT_API DescribeUserResult
  {
  public:
    DescribeUserResult();
    DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>User</code> object that contains information about the user account
     * and configuration settings.</p>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>A <code>User</code> object that contains information about the user account
     * and configuration settings.</p>
     */
    inline void SetUser(const User& value) { m_user = value; }

    /**
     * <p>A <code>User</code> object that contains information about the user account
     * and configuration settings.</p>
     */
    inline void SetUser(User&& value) { m_user = std::move(value); }

    /**
     * <p>A <code>User</code> object that contains information about the user account
     * and configuration settings.</p>
     */
    inline DescribeUserResult& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>A <code>User</code> object that contains information about the user account
     * and configuration settings.</p>
     */
    inline DescribeUserResult& WithUser(User&& value) { SetUser(std::move(value)); return *this;}

  private:

    User m_user;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
