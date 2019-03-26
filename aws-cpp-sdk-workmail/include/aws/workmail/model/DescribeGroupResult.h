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
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/EntityState.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkMail
{
namespace Model
{
  class AWS_WORKMAIL_API DescribeGroupResult
  {
  public:
    DescribeGroupResult();
    DescribeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the described group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier of the described group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }

    /**
     * <p>The identifier of the described group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }

    /**
     * <p>The identifier of the described group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }

    /**
     * <p>The identifier of the described group.</p>
     */
    inline DescribeGroupResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier of the described group.</p>
     */
    inline DescribeGroupResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the described group.</p>
     */
    inline DescribeGroupResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The name of the described group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the described group.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the described group.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the described group.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the described group.</p>
     */
    inline DescribeGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the described group.</p>
     */
    inline DescribeGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the described group.</p>
     */
    inline DescribeGroupResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The email of the described group.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email of the described group.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_email = value; }

    /**
     * <p>The email of the described group.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_email = std::move(value); }

    /**
     * <p>The email of the described group.</p>
     */
    inline void SetEmail(const char* value) { m_email.assign(value); }

    /**
     * <p>The email of the described group.</p>
     */
    inline DescribeGroupResult& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email of the described group.</p>
     */
    inline DescribeGroupResult& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email of the described group.</p>
     */
    inline DescribeGroupResult& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The state of the user: enabled (registered to Amazon WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline const EntityState& GetState() const{ return m_state; }

    /**
     * <p>The state of the user: enabled (registered to Amazon WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline void SetState(const EntityState& value) { m_state = value; }

    /**
     * <p>The state of the user: enabled (registered to Amazon WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline void SetState(EntityState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the user: enabled (registered to Amazon WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline DescribeGroupResult& WithState(const EntityState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the user: enabled (registered to Amazon WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline DescribeGroupResult& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date and time when a user was registered to WorkMail, in UNIX epoch time
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const{ return m_enabledDate; }

    /**
     * <p>The date and time when a user was registered to WorkMail, in UNIX epoch time
     * format.</p>
     */
    inline void SetEnabledDate(const Aws::Utils::DateTime& value) { m_enabledDate = value; }

    /**
     * <p>The date and time when a user was registered to WorkMail, in UNIX epoch time
     * format.</p>
     */
    inline void SetEnabledDate(Aws::Utils::DateTime&& value) { m_enabledDate = std::move(value); }

    /**
     * <p>The date and time when a user was registered to WorkMail, in UNIX epoch time
     * format.</p>
     */
    inline DescribeGroupResult& WithEnabledDate(const Aws::Utils::DateTime& value) { SetEnabledDate(value); return *this;}

    /**
     * <p>The date and time when a user was registered to WorkMail, in UNIX epoch time
     * format.</p>
     */
    inline DescribeGroupResult& WithEnabledDate(Aws::Utils::DateTime&& value) { SetEnabledDate(std::move(value)); return *this;}


    /**
     * <p>The date and time when a user was deregistered from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const{ return m_disabledDate; }

    /**
     * <p>The date and time when a user was deregistered from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline void SetDisabledDate(const Aws::Utils::DateTime& value) { m_disabledDate = value; }

    /**
     * <p>The date and time when a user was deregistered from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline void SetDisabledDate(Aws::Utils::DateTime&& value) { m_disabledDate = std::move(value); }

    /**
     * <p>The date and time when a user was deregistered from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline DescribeGroupResult& WithDisabledDate(const Aws::Utils::DateTime& value) { SetDisabledDate(value); return *this;}

    /**
     * <p>The date and time when a user was deregistered from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline DescribeGroupResult& WithDisabledDate(Aws::Utils::DateTime&& value) { SetDisabledDate(std::move(value)); return *this;}

  private:

    Aws::String m_groupId;

    Aws::String m_name;

    Aws::String m_email;

    EntityState m_state;

    Aws::Utils::DateTime m_enabledDate;

    Aws::Utils::DateTime m_disabledDate;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
