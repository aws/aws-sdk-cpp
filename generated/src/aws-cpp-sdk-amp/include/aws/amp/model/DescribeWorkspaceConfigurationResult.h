/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/WorkspaceConfigurationDescription.h>
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
namespace PrometheusService
{
namespace Model
{
  class DescribeWorkspaceConfigurationResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API DescribeWorkspaceConfigurationResult() = default;
    AWS_PROMETHEUSSERVICE_API DescribeWorkspaceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DescribeWorkspaceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This structure contains the information about the workspace
     * configuration.</p>
     */
    inline const WorkspaceConfigurationDescription& GetWorkspaceConfiguration() const { return m_workspaceConfiguration; }
    template<typename WorkspaceConfigurationT = WorkspaceConfigurationDescription>
    void SetWorkspaceConfiguration(WorkspaceConfigurationT&& value) { m_workspaceConfigurationHasBeenSet = true; m_workspaceConfiguration = std::forward<WorkspaceConfigurationT>(value); }
    template<typename WorkspaceConfigurationT = WorkspaceConfigurationDescription>
    DescribeWorkspaceConfigurationResult& WithWorkspaceConfiguration(WorkspaceConfigurationT&& value) { SetWorkspaceConfiguration(std::forward<WorkspaceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkspaceConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WorkspaceConfigurationDescription m_workspaceConfiguration;
    bool m_workspaceConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
