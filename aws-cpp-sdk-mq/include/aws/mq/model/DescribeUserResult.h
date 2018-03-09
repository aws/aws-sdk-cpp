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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/UserPendingChanges.h>
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
namespace MQ
{
namespace Model
{
  class AWS_MQ_API DescribeUserResult
  {
  public:
    DescribeUserResult();
    DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline DescribeUserResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline DescribeUserResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline DescribeUserResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * Enables access to the the ActiveMQ Web Console for the ActiveMQ user.
     */
    inline bool GetConsoleAccess() const{ return m_consoleAccess; }

    /**
     * Enables access to the the ActiveMQ Web Console for the ActiveMQ user.
     */
    inline void SetConsoleAccess(bool value) { m_consoleAccess = value; }

    /**
     * Enables access to the the ActiveMQ Web Console for the ActiveMQ user.
     */
    inline DescribeUserResult& WithConsoleAccess(bool value) { SetConsoleAccess(value); return *this;}


    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groups = value; }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groups = std::move(value); }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline DescribeUserResult& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline DescribeUserResult& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline DescribeUserResult& AddGroups(const Aws::String& value) { m_groups.push_back(value); return *this; }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline DescribeUserResult& AddGroups(Aws::String&& value) { m_groups.push_back(std::move(value)); return *this; }

    /**
     * The list of groups (20 maximum) to which the ActiveMQ user belongs. This value
     * can contain only alphanumeric characters, dashes, periods, underscores, and
     * tildes (- . _ ~). This value must be 2-100 characters long.
     */
    inline DescribeUserResult& AddGroups(const char* value) { m_groups.push_back(value); return *this; }


    /**
     * The status of the changes pending for the ActiveMQ user.
     */
    inline const UserPendingChanges& GetPending() const{ return m_pending; }

    /**
     * The status of the changes pending for the ActiveMQ user.
     */
    inline void SetPending(const UserPendingChanges& value) { m_pending = value; }

    /**
     * The status of the changes pending for the ActiveMQ user.
     */
    inline void SetPending(UserPendingChanges&& value) { m_pending = std::move(value); }

    /**
     * The status of the changes pending for the ActiveMQ user.
     */
    inline DescribeUserResult& WithPending(const UserPendingChanges& value) { SetPending(value); return *this;}

    /**
     * The status of the changes pending for the ActiveMQ user.
     */
    inline DescribeUserResult& WithPending(UserPendingChanges&& value) { SetPending(std::move(value)); return *this;}


    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline void SetUsername(const Aws::String& value) { m_username = value; }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline void SetUsername(Aws::String&& value) { m_username = std::move(value); }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline void SetUsername(const char* value) { m_username.assign(value); }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline DescribeUserResult& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline DescribeUserResult& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline DescribeUserResult& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_brokerId;

    bool m_consoleAccess;

    Aws::Vector<Aws::String> m_groups;

    UserPendingChanges m_pending;

    Aws::String m_username;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
