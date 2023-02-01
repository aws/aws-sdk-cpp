/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/WorkspaceDescription.h>
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
  /**
   * <p>Represents the output of a DescribeWorkspace operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeWorkspaceResponse">AWS
   * API Reference</a></p>
   */
  class DescribeWorkspaceResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API DescribeWorkspaceResult();
    AWS_PROMETHEUSSERVICE_API DescribeWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DescribeWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of the selected workspace.</p>
     */
    inline const WorkspaceDescription& GetWorkspace() const{ return m_workspace; }

    /**
     * <p>The properties of the selected workspace.</p>
     */
    inline void SetWorkspace(const WorkspaceDescription& value) { m_workspace = value; }

    /**
     * <p>The properties of the selected workspace.</p>
     */
    inline void SetWorkspace(WorkspaceDescription&& value) { m_workspace = std::move(value); }

    /**
     * <p>The properties of the selected workspace.</p>
     */
    inline DescribeWorkspaceResult& WithWorkspace(const WorkspaceDescription& value) { SetWorkspace(value); return *this;}

    /**
     * <p>The properties of the selected workspace.</p>
     */
    inline DescribeWorkspaceResult& WithWorkspace(WorkspaceDescription&& value) { SetWorkspace(std::move(value)); return *this;}

  private:

    WorkspaceDescription m_workspace;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
