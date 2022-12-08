/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeUserResult
  {
  public:
    AWS_MQ_API DescribeUserResult();
    AWS_MQ_API DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline DescribeUserResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline DescribeUserResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline DescribeUserResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * <p>Enables access to the the ActiveMQ Web Console for the ActiveMQ user.</p>
     */
    inline bool GetConsoleAccess() const{ return m_consoleAccess; }

    /**
     * <p>Enables access to the the ActiveMQ Web Console for the ActiveMQ user.</p>
     */
    inline void SetConsoleAccess(bool value) { m_consoleAccess = value; }

    /**
     * <p>Enables access to the the ActiveMQ Web Console for the ActiveMQ user.</p>
     */
    inline DescribeUserResult& WithConsoleAccess(bool value) { SetConsoleAccess(value); return *this;}


    /**
     * <p>The list of groups (20 maximum) to which the ActiveMQ user belongs. This
     * value can contain only alphanumeric characters, dashes, periods, underscores,
     * and tildes (- . _ ~). This value must be 2-100 characters long.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>The list of groups (20 maximum) to which the ActiveMQ user belongs. This
     * value can contain only alphanumeric characters, dashes, periods, underscores,
     * and tildes (- . _ ~). This value must be 2-100 characters long.</p>
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groups = value; }

    /**
     * <p>The list of groups (20 maximum) to which the ActiveMQ user belongs. This
     * value can contain only alphanumeric characters, dashes, periods, underscores,
     * and tildes (- . _ ~). This value must be 2-100 characters long.</p>
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groups = std::move(value); }

    /**
     * <p>The list of groups (20 maximum) to which the ActiveMQ user belongs. This
     * value can contain only alphanumeric characters, dashes, periods, underscores,
     * and tildes (- . _ ~). This value must be 2-100 characters long.</p>
     */
    inline DescribeUserResult& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>The list of groups (20 maximum) to which the ActiveMQ user belongs. This
     * value can contain only alphanumeric characters, dashes, periods, underscores,
     * and tildes (- . _ ~). This value must be 2-100 characters long.</p>
     */
    inline DescribeUserResult& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The list of groups (20 maximum) to which the ActiveMQ user belongs. This
     * value can contain only alphanumeric characters, dashes, periods, underscores,
     * and tildes (- . _ ~). This value must be 2-100 characters long.</p>
     */
    inline DescribeUserResult& AddGroups(const Aws::String& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>The list of groups (20 maximum) to which the ActiveMQ user belongs. This
     * value can contain only alphanumeric characters, dashes, periods, underscores,
     * and tildes (- . _ ~). This value must be 2-100 characters long.</p>
     */
    inline DescribeUserResult& AddGroups(Aws::String&& value) { m_groups.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of groups (20 maximum) to which the ActiveMQ user belongs. This
     * value can contain only alphanumeric characters, dashes, periods, underscores,
     * and tildes (- . _ ~). This value must be 2-100 characters long.</p>
     */
    inline DescribeUserResult& AddGroups(const char* value) { m_groups.push_back(value); return *this; }


    /**
     * <p>The status of the changes pending for the ActiveMQ user.</p>
     */
    inline const UserPendingChanges& GetPending() const{ return m_pending; }

    /**
     * <p>The status of the changes pending for the ActiveMQ user.</p>
     */
    inline void SetPending(const UserPendingChanges& value) { m_pending = value; }

    /**
     * <p>The status of the changes pending for the ActiveMQ user.</p>
     */
    inline void SetPending(UserPendingChanges&& value) { m_pending = std::move(value); }

    /**
     * <p>The status of the changes pending for the ActiveMQ user.</p>
     */
    inline DescribeUserResult& WithPending(const UserPendingChanges& value) { SetPending(value); return *this;}

    /**
     * <p>The status of the changes pending for the ActiveMQ user.</p>
     */
    inline DescribeUserResult& WithPending(UserPendingChanges&& value) { SetPending(std::move(value)); return *this;}


    /**
     * <p>Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_username = value; }

    /**
     * <p>Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_username = std::move(value); }

    /**
     * <p>Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline void SetUsername(const char* value) { m_username.assign(value); }

    /**
     * <p>Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline DescribeUserResult& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
     */
    inline DescribeUserResult& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.</p>
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
