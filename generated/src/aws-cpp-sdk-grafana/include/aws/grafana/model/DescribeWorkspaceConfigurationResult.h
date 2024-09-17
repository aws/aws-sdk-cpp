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
    AWS_MANAGEDGRAFANA_API DescribeWorkspaceConfigurationResult();
    AWS_MANAGEDGRAFANA_API DescribeWorkspaceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API DescribeWorkspaceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration string for the workspace that you requested. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const Aws::String& value) { m_configuration = value; }
    inline void SetConfiguration(Aws::String&& value) { m_configuration = std::move(value); }
    inline void SetConfiguration(const char* value) { m_configuration.assign(value); }
    inline DescribeWorkspaceConfigurationResult& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}
    inline DescribeWorkspaceConfigurationResult& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}
    inline DescribeWorkspaceConfigurationResult& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported Grafana version for the workspace.</p>
     */
    inline const Aws::String& GetGrafanaVersion() const{ return m_grafanaVersion; }
    inline void SetGrafanaVersion(const Aws::String& value) { m_grafanaVersion = value; }
    inline void SetGrafanaVersion(Aws::String&& value) { m_grafanaVersion = std::move(value); }
    inline void SetGrafanaVersion(const char* value) { m_grafanaVersion.assign(value); }
    inline DescribeWorkspaceConfigurationResult& WithGrafanaVersion(const Aws::String& value) { SetGrafanaVersion(value); return *this;}
    inline DescribeWorkspaceConfigurationResult& WithGrafanaVersion(Aws::String&& value) { SetGrafanaVersion(std::move(value)); return *this;}
    inline DescribeWorkspaceConfigurationResult& WithGrafanaVersion(const char* value) { SetGrafanaVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWorkspaceConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWorkspaceConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWorkspaceConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_configuration;

    Aws::String m_grafanaVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
