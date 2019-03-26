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
  class AWS_WORKMAIL_API DescribeOrganizationResult
  {
  public:
    DescribeOrganizationResult();
    DescribeOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of an organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier of an organization.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationId = value; }

    /**
     * <p>The identifier of an organization.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationId = std::move(value); }

    /**
     * <p>The identifier of an organization.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationId.assign(value); }

    /**
     * <p>The identifier of an organization.</p>
     */
    inline DescribeOrganizationResult& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier of an organization.</p>
     */
    inline DescribeOrganizationResult& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an organization.</p>
     */
    inline DescribeOrganizationResult& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The alias for an organization.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias for an organization.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_alias = value; }

    /**
     * <p>The alias for an organization.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_alias = std::move(value); }

    /**
     * <p>The alias for an organization.</p>
     */
    inline void SetAlias(const char* value) { m_alias.assign(value); }

    /**
     * <p>The alias for an organization.</p>
     */
    inline DescribeOrganizationResult& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias for an organization.</p>
     */
    inline DescribeOrganizationResult& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias for an organization.</p>
     */
    inline DescribeOrganizationResult& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>The state of an organization.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of an organization.</p>
     */
    inline void SetState(const Aws::String& value) { m_state = value; }

    /**
     * <p>The state of an organization.</p>
     */
    inline void SetState(Aws::String&& value) { m_state = std::move(value); }

    /**
     * <p>The state of an organization.</p>
     */
    inline void SetState(const char* value) { m_state.assign(value); }

    /**
     * <p>The state of an organization.</p>
     */
    inline DescribeOrganizationResult& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of an organization.</p>
     */
    inline DescribeOrganizationResult& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of an organization.</p>
     */
    inline DescribeOrganizationResult& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The identifier for the directory associated with an Amazon WorkMail
     * organization.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier for the directory associated with an Amazon WorkMail
     * organization.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }

    /**
     * <p>The identifier for the directory associated with an Amazon WorkMail
     * organization.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = std::move(value); }

    /**
     * <p>The identifier for the directory associated with an Amazon WorkMail
     * organization.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }

    /**
     * <p>The identifier for the directory associated with an Amazon WorkMail
     * organization.</p>
     */
    inline DescribeOrganizationResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier for the directory associated with an Amazon WorkMail
     * organization.</p>
     */
    inline DescribeOrganizationResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the directory associated with an Amazon WorkMail
     * organization.</p>
     */
    inline DescribeOrganizationResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The type of directory associated with the WorkMail organization.</p>
     */
    inline const Aws::String& GetDirectoryType() const{ return m_directoryType; }

    /**
     * <p>The type of directory associated with the WorkMail organization.</p>
     */
    inline void SetDirectoryType(const Aws::String& value) { m_directoryType = value; }

    /**
     * <p>The type of directory associated with the WorkMail organization.</p>
     */
    inline void SetDirectoryType(Aws::String&& value) { m_directoryType = std::move(value); }

    /**
     * <p>The type of directory associated with the WorkMail organization.</p>
     */
    inline void SetDirectoryType(const char* value) { m_directoryType.assign(value); }

    /**
     * <p>The type of directory associated with the WorkMail organization.</p>
     */
    inline DescribeOrganizationResult& WithDirectoryType(const Aws::String& value) { SetDirectoryType(value); return *this;}

    /**
     * <p>The type of directory associated with the WorkMail organization.</p>
     */
    inline DescribeOrganizationResult& WithDirectoryType(Aws::String&& value) { SetDirectoryType(std::move(value)); return *this;}

    /**
     * <p>The type of directory associated with the WorkMail organization.</p>
     */
    inline DescribeOrganizationResult& WithDirectoryType(const char* value) { SetDirectoryType(value); return *this;}


    /**
     * <p>The default mail domain associated with the organization.</p>
     */
    inline const Aws::String& GetDefaultMailDomain() const{ return m_defaultMailDomain; }

    /**
     * <p>The default mail domain associated with the organization.</p>
     */
    inline void SetDefaultMailDomain(const Aws::String& value) { m_defaultMailDomain = value; }

    /**
     * <p>The default mail domain associated with the organization.</p>
     */
    inline void SetDefaultMailDomain(Aws::String&& value) { m_defaultMailDomain = std::move(value); }

    /**
     * <p>The default mail domain associated with the organization.</p>
     */
    inline void SetDefaultMailDomain(const char* value) { m_defaultMailDomain.assign(value); }

    /**
     * <p>The default mail domain associated with the organization.</p>
     */
    inline DescribeOrganizationResult& WithDefaultMailDomain(const Aws::String& value) { SetDefaultMailDomain(value); return *this;}

    /**
     * <p>The default mail domain associated with the organization.</p>
     */
    inline DescribeOrganizationResult& WithDefaultMailDomain(Aws::String&& value) { SetDefaultMailDomain(std::move(value)); return *this;}

    /**
     * <p>The default mail domain associated with the organization.</p>
     */
    inline DescribeOrganizationResult& WithDefaultMailDomain(const char* value) { SetDefaultMailDomain(value); return *this;}


    /**
     * <p>The date at which the organization became usable in the WorkMail context, in
     * UNIX epoch time format.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedDate() const{ return m_completedDate; }

    /**
     * <p>The date at which the organization became usable in the WorkMail context, in
     * UNIX epoch time format.</p>
     */
    inline void SetCompletedDate(const Aws::Utils::DateTime& value) { m_completedDate = value; }

    /**
     * <p>The date at which the organization became usable in the WorkMail context, in
     * UNIX epoch time format.</p>
     */
    inline void SetCompletedDate(Aws::Utils::DateTime&& value) { m_completedDate = std::move(value); }

    /**
     * <p>The date at which the organization became usable in the WorkMail context, in
     * UNIX epoch time format.</p>
     */
    inline DescribeOrganizationResult& WithCompletedDate(const Aws::Utils::DateTime& value) { SetCompletedDate(value); return *this;}

    /**
     * <p>The date at which the organization became usable in the WorkMail context, in
     * UNIX epoch time format.</p>
     */
    inline DescribeOrganizationResult& WithCompletedDate(Aws::Utils::DateTime&& value) { SetCompletedDate(std::move(value)); return *this;}


    /**
     * <p>(Optional) The error message indicating if unexpected behavior was
     * encountered with regards to the organization.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>(Optional) The error message indicating if unexpected behavior was
     * encountered with regards to the organization.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>(Optional) The error message indicating if unexpected behavior was
     * encountered with regards to the organization.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>(Optional) The error message indicating if unexpected behavior was
     * encountered with regards to the organization.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>(Optional) The error message indicating if unexpected behavior was
     * encountered with regards to the organization.</p>
     */
    inline DescribeOrganizationResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>(Optional) The error message indicating if unexpected behavior was
     * encountered with regards to the organization.</p>
     */
    inline DescribeOrganizationResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>(Optional) The error message indicating if unexpected behavior was
     * encountered with regards to the organization.</p>
     */
    inline DescribeOrganizationResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_organizationId;

    Aws::String m_alias;

    Aws::String m_state;

    Aws::String m_directoryId;

    Aws::String m_directoryType;

    Aws::String m_defaultMailDomain;

    Aws::Utils::DateTime m_completedDate;

    Aws::String m_errorMessage;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
