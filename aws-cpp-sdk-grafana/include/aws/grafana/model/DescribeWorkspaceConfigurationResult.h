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


    /**
     * <p>The configuration string for the workspace that you requested. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration string for the workspace that you requested. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline void SetConfiguration(const Aws::String& value) { m_configuration = value; }

    /**
     * <p>The configuration string for the workspace that you requested. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline void SetConfiguration(Aws::String&& value) { m_configuration = std::move(value); }

    /**
     * <p>The configuration string for the workspace that you requested. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline void SetConfiguration(const char* value) { m_configuration.assign(value); }

    /**
     * <p>The configuration string for the workspace that you requested. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline DescribeWorkspaceConfigurationResult& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration string for the workspace that you requested. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline DescribeWorkspaceConfigurationResult& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>The configuration string for the workspace that you requested. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline DescribeWorkspaceConfigurationResult& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}

  private:

    Aws::String m_configuration;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
