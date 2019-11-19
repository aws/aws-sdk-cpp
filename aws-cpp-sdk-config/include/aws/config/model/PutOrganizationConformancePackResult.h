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
  class AWS_CONFIGSERVICE_API PutOrganizationConformancePackResult
  {
  public:
    PutOrganizationConformancePackResult();
    PutOrganizationConformancePackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutOrganizationConformancePackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
