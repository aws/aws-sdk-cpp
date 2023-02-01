/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
namespace AuditManager
{
namespace Model
{
  class RegisterOrganizationAdminAccountResult
  {
  public:
    AWS_AUDITMANAGER_API RegisterOrganizationAdminAccountResult();
    AWS_AUDITMANAGER_API RegisterOrganizationAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API RegisterOrganizationAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The identifier for the delegated administrator account. </p>
     */
    inline const Aws::String& GetAdminAccountId() const{ return m_adminAccountId; }

    /**
     * <p> The identifier for the delegated administrator account. </p>
     */
    inline void SetAdminAccountId(const Aws::String& value) { m_adminAccountId = value; }

    /**
     * <p> The identifier for the delegated administrator account. </p>
     */
    inline void SetAdminAccountId(Aws::String&& value) { m_adminAccountId = std::move(value); }

    /**
     * <p> The identifier for the delegated administrator account. </p>
     */
    inline void SetAdminAccountId(const char* value) { m_adminAccountId.assign(value); }

    /**
     * <p> The identifier for the delegated administrator account. </p>
     */
    inline RegisterOrganizationAdminAccountResult& WithAdminAccountId(const Aws::String& value) { SetAdminAccountId(value); return *this;}

    /**
     * <p> The identifier for the delegated administrator account. </p>
     */
    inline RegisterOrganizationAdminAccountResult& WithAdminAccountId(Aws::String&& value) { SetAdminAccountId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the delegated administrator account. </p>
     */
    inline RegisterOrganizationAdminAccountResult& WithAdminAccountId(const char* value) { SetAdminAccountId(value); return *this;}


    /**
     * <p> The identifier for the organization. </p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p> The identifier for the organization. </p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationId = value; }

    /**
     * <p> The identifier for the organization. </p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationId = std::move(value); }

    /**
     * <p> The identifier for the organization. </p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationId.assign(value); }

    /**
     * <p> The identifier for the organization. </p>
     */
    inline RegisterOrganizationAdminAccountResult& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p> The identifier for the organization. </p>
     */
    inline RegisterOrganizationAdminAccountResult& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the organization. </p>
     */
    inline RegisterOrganizationAdminAccountResult& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}

  private:

    Aws::String m_adminAccountId;

    Aws::String m_organizationId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
