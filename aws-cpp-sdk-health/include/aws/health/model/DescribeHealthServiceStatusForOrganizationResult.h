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
  class AWS_HEALTH_API DescribeHealthServiceStatusForOrganizationResult
  {
  public:
    DescribeHealthServiceStatusForOrganizationResult();
    DescribeHealthServiceStatusForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeHealthServiceStatusForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the status of enabling or disabling AWS Health
     * Organizational View in your organization.</p> <p>Valid values are <code>ENABLED
     * | DISABLED | PENDING</code>. </p>
     */
    inline const Aws::String& GetHealthServiceAccessStatusForOrganization() const{ return m_healthServiceAccessStatusForOrganization; }

    /**
     * <p>Information about the status of enabling or disabling AWS Health
     * Organizational View in your organization.</p> <p>Valid values are <code>ENABLED
     * | DISABLED | PENDING</code>. </p>
     */
    inline void SetHealthServiceAccessStatusForOrganization(const Aws::String& value) { m_healthServiceAccessStatusForOrganization = value; }

    /**
     * <p>Information about the status of enabling or disabling AWS Health
     * Organizational View in your organization.</p> <p>Valid values are <code>ENABLED
     * | DISABLED | PENDING</code>. </p>
     */
    inline void SetHealthServiceAccessStatusForOrganization(Aws::String&& value) { m_healthServiceAccessStatusForOrganization = std::move(value); }

    /**
     * <p>Information about the status of enabling or disabling AWS Health
     * Organizational View in your organization.</p> <p>Valid values are <code>ENABLED
     * | DISABLED | PENDING</code>. </p>
     */
    inline void SetHealthServiceAccessStatusForOrganization(const char* value) { m_healthServiceAccessStatusForOrganization.assign(value); }

    /**
     * <p>Information about the status of enabling or disabling AWS Health
     * Organizational View in your organization.</p> <p>Valid values are <code>ENABLED
     * | DISABLED | PENDING</code>. </p>
     */
    inline DescribeHealthServiceStatusForOrganizationResult& WithHealthServiceAccessStatusForOrganization(const Aws::String& value) { SetHealthServiceAccessStatusForOrganization(value); return *this;}

    /**
     * <p>Information about the status of enabling or disabling AWS Health
     * Organizational View in your organization.</p> <p>Valid values are <code>ENABLED
     * | DISABLED | PENDING</code>. </p>
     */
    inline DescribeHealthServiceStatusForOrganizationResult& WithHealthServiceAccessStatusForOrganization(Aws::String&& value) { SetHealthServiceAccessStatusForOrganization(std::move(value)); return *this;}

    /**
     * <p>Information about the status of enabling or disabling AWS Health
     * Organizational View in your organization.</p> <p>Valid values are <code>ENABLED
     * | DISABLED | PENDING</code>. </p>
     */
    inline DescribeHealthServiceStatusForOrganizationResult& WithHealthServiceAccessStatusForOrganization(const char* value) { SetHealthServiceAccessStatusForOrganization(value); return *this;}

  private:

    Aws::String m_healthServiceAccessStatusForOrganization;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
