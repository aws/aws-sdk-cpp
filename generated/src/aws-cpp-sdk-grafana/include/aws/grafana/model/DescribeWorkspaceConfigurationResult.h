/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
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
namespace ManagedGrafana
{
namespace Model
{
  class DescribeWorkspaceConfigurationResult
  {
  public:
    AWS_MANAGEDGRAFANA_API DescribeWorkspaceConfigurationResult() = default;
    AWS_MANAGEDGRAFANA_API DescribeWorkspaceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API DescribeWorkspaceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration string for the workspace that you requested. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline const Aws::String& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = Aws::String>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::String>
    DescribeWorkspaceConfigurationResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported Grafana version for the workspace.</p>
     */
    inline const Aws::String& GetGrafanaVersion() const { return m_grafanaVersion; }
    template<typename GrafanaVersionT = Aws::String>
    void SetGrafanaVersion(GrafanaVersionT&& value) { m_grafanaVersionHasBeenSet = true; m_grafanaVersion = std::forward<GrafanaVersionT>(value); }
    template<typename GrafanaVersionT = Aws::String>
    DescribeWorkspaceConfigurationResult& WithGrafanaVersion(GrafanaVersionT&& value) { SetGrafanaVersion(std::forward<GrafanaVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkspaceConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_grafanaVersion;
    bool m_grafanaVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
