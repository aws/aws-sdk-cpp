/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{
  class PutOrganizationConformancePackResult
  {
  public:
    AWS_CONFIGSERVICE_API PutOrganizationConformancePackResult();
    AWS_CONFIGSERVICE_API PutOrganizationConformancePackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutOrganizationConformancePackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ARN of the organization conformance pack.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackArn() const{ return m_organizationConformancePackArn; }

    /**
     * <p>ARN of the organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackArn(const Aws::String& value) { m_organizationConformancePackArn = value; }

    /**
     * <p>ARN of the organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackArn(Aws::String&& value) { m_organizationConformancePackArn = std::move(value); }

    /**
     * <p>ARN of the organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackArn(const char* value) { m_organizationConformancePackArn.assign(value); }

    /**
     * <p>ARN of the organization conformance pack.</p>
     */
    inline PutOrganizationConformancePackResult& WithOrganizationConformancePackArn(const Aws::String& value) { SetOrganizationConformancePackArn(value); return *this;}

    /**
     * <p>ARN of the organization conformance pack.</p>
     */
    inline PutOrganizationConformancePackResult& WithOrganizationConformancePackArn(Aws::String&& value) { SetOrganizationConformancePackArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the organization conformance pack.</p>
     */
    inline PutOrganizationConformancePackResult& WithOrganizationConformancePackArn(const char* value) { SetOrganizationConformancePackArn(value); return *this;}

  private:

    Aws::String m_organizationConformancePackArn;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
