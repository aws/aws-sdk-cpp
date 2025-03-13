/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CONFIGSERVICE_API DescribeRemediationConfigurationsResult() = default;
    AWS_CONFIGSERVICE_API DescribeRemediationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeRemediationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a remediation configuration object.</p>
     */
    inline const Aws::Vector<RemediationConfiguration>& GetRemediationConfigurations() const { return m_remediationConfigurations; }
    template<typename RemediationConfigurationsT = Aws::Vector<RemediationConfiguration>>
    void SetRemediationConfigurations(RemediationConfigurationsT&& value) { m_remediationConfigurationsHasBeenSet = true; m_remediationConfigurations = std::forward<RemediationConfigurationsT>(value); }
    template<typename RemediationConfigurationsT = Aws::Vector<RemediationConfiguration>>
    DescribeRemediationConfigurationsResult& WithRemediationConfigurations(RemediationConfigurationsT&& value) { SetRemediationConfigurations(std::forward<RemediationConfigurationsT>(value)); return *this;}
    template<typename RemediationConfigurationsT = RemediationConfiguration>
    DescribeRemediationConfigurationsResult& AddRemediationConfigurations(RemediationConfigurationsT&& value) { m_remediationConfigurationsHasBeenSet = true; m_remediationConfigurations.emplace_back(std::forward<RemediationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRemediationConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RemediationConfiguration> m_remediationConfigurations;
    bool m_remediationConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
