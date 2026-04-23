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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/RemediationConfiguration.h>
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
  class AWS_CONFIGSERVICE_API DescribeRemediationConfigurationsResult
  {
  public:
    DescribeRemediationConfigurationsResult();
    DescribeRemediationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRemediationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a remediation configuration object.</p>
     */
    inline const Aws::Vector<RemediationConfiguration>& GetRemediationConfigurations() const{ return m_remediationConfigurations; }

    /**
     * <p>Returns a remediation configuration object.</p>
     */
    inline void SetRemediationConfigurations(const Aws::Vector<RemediationConfiguration>& value) { m_remediationConfigurations = value; }

    /**
     * <p>Returns a remediation configuration object.</p>
     */
    inline void SetRemediationConfigurations(Aws::Vector<RemediationConfiguration>&& value) { m_remediationConfigurations = std::move(value); }

    /**
     * <p>Returns a remediation configuration object.</p>
     */
    inline DescribeRemediationConfigurationsResult& WithRemediationConfigurations(const Aws::Vector<RemediationConfiguration>& value) { SetRemediationConfigurations(value); return *this;}

    /**
     * <p>Returns a remediation configuration object.</p>
     */
    inline DescribeRemediationConfigurationsResult& WithRemediationConfigurations(Aws::Vector<RemediationConfiguration>&& value) { SetRemediationConfigurations(std::move(value)); return *this;}

    /**
     * <p>Returns a remediation configuration object.</p>
     */
    inline DescribeRemediationConfigurationsResult& AddRemediationConfigurations(const RemediationConfiguration& value) { m_remediationConfigurations.push_back(value); return *this; }

    /**
     * <p>Returns a remediation configuration object.</p>
     */
    inline DescribeRemediationConfigurationsResult& AddRemediationConfigurations(RemediationConfiguration&& value) { m_remediationConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RemediationConfiguration> m_remediationConfigurations;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
