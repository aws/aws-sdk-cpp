/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeRemediationConfigurationsResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeRemediationConfigurationsResult();
    AWS_CONFIGSERVICE_API DescribeRemediationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeRemediationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
