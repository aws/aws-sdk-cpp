/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
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
namespace Health
{
namespace Model
{
  class DescribeHealthServiceStatusForOrganizationResult
  {
  public:
    AWS_HEALTH_API DescribeHealthServiceStatusForOrganizationResult();
    AWS_HEALTH_API DescribeHealthServiceStatusForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeHealthServiceStatusForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the status of enabling or disabling the Health
     * organizational view feature in your organization.</p> <p>Valid values are
     * <code>ENABLED | DISABLED | PENDING</code>. </p>
     */
    inline const Aws::String& GetHealthServiceAccessStatusForOrganization() const{ return m_healthServiceAccessStatusForOrganization; }

    /**
     * <p>Information about the status of enabling or disabling the Health
     * organizational view feature in your organization.</p> <p>Valid values are
     * <code>ENABLED | DISABLED | PENDING</code>. </p>
     */
    inline void SetHealthServiceAccessStatusForOrganization(const Aws::String& value) { m_healthServiceAccessStatusForOrganization = value; }

    /**
     * <p>Information about the status of enabling or disabling the Health
     * organizational view feature in your organization.</p> <p>Valid values are
     * <code>ENABLED | DISABLED | PENDING</code>. </p>
     */
    inline void SetHealthServiceAccessStatusForOrganization(Aws::String&& value) { m_healthServiceAccessStatusForOrganization = std::move(value); }

    /**
     * <p>Information about the status of enabling or disabling the Health
     * organizational view feature in your organization.</p> <p>Valid values are
     * <code>ENABLED | DISABLED | PENDING</code>. </p>
     */
    inline void SetHealthServiceAccessStatusForOrganization(const char* value) { m_healthServiceAccessStatusForOrganization.assign(value); }

    /**
     * <p>Information about the status of enabling or disabling the Health
     * organizational view feature in your organization.</p> <p>Valid values are
     * <code>ENABLED | DISABLED | PENDING</code>. </p>
     */
    inline DescribeHealthServiceStatusForOrganizationResult& WithHealthServiceAccessStatusForOrganization(const Aws::String& value) { SetHealthServiceAccessStatusForOrganization(value); return *this;}

    /**
     * <p>Information about the status of enabling or disabling the Health
     * organizational view feature in your organization.</p> <p>Valid values are
     * <code>ENABLED | DISABLED | PENDING</code>. </p>
     */
    inline DescribeHealthServiceStatusForOrganizationResult& WithHealthServiceAccessStatusForOrganization(Aws::String&& value) { SetHealthServiceAccessStatusForOrganization(std::move(value)); return *this;}

    /**
     * <p>Information about the status of enabling or disabling the Health
     * organizational view feature in your organization.</p> <p>Valid values are
     * <code>ENABLED | DISABLED | PENDING</code>. </p>
     */
    inline DescribeHealthServiceStatusForOrganizationResult& WithHealthServiceAccessStatusForOrganization(const char* value) { SetHealthServiceAccessStatusForOrganization(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeHealthServiceStatusForOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeHealthServiceStatusForOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeHealthServiceStatusForOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_healthServiceAccessStatusForOrganization;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
