/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>The <code>AmpConfiguration</code> structure defines the Amazon Managed
   * Service for Prometheus instance a scraper should send metrics to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/AmpConfiguration">AWS
   * API Reference</a></p>
   */
  class AmpConfiguration
  {
  public:
    AWS_PROMETHEUSSERVICE_API AmpConfiguration() = default;
    AWS_PROMETHEUSSERVICE_API AmpConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API AmpConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the Amazon Managed Service for Prometheus workspace.</p>
     */
    inline const Aws::String& GetWorkspaceArn() const { return m_workspaceArn; }
    inline bool WorkspaceArnHasBeenSet() const { return m_workspaceArnHasBeenSet; }
    template<typename WorkspaceArnT = Aws::String>
    void SetWorkspaceArn(WorkspaceArnT&& value) { m_workspaceArnHasBeenSet = true; m_workspaceArn = std::forward<WorkspaceArnT>(value); }
    template<typename WorkspaceArnT = Aws::String>
    AmpConfiguration& WithWorkspaceArn(WorkspaceArnT&& value) { SetWorkspaceArn(std::forward<WorkspaceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceArn;
    bool m_workspaceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
