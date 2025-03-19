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
   * <p>To configure roles that allows users to write to an Amazon Managed Service
   * for Prometheus workspace in a different account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/RoleConfiguration">AWS
   * API Reference</a></p>
   */
  class RoleConfiguration
  {
  public:
    AWS_PROMETHEUSSERVICE_API RoleConfiguration() = default;
    AWS_PROMETHEUSSERVICE_API RoleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API RoleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A ARN identifying the source role configuration.</p>
     */
    inline const Aws::String& GetSourceRoleArn() const { return m_sourceRoleArn; }
    inline bool SourceRoleArnHasBeenSet() const { return m_sourceRoleArnHasBeenSet; }
    template<typename SourceRoleArnT = Aws::String>
    void SetSourceRoleArn(SourceRoleArnT&& value) { m_sourceRoleArnHasBeenSet = true; m_sourceRoleArn = std::forward<SourceRoleArnT>(value); }
    template<typename SourceRoleArnT = Aws::String>
    RoleConfiguration& WithSourceRoleArn(SourceRoleArnT&& value) { SetSourceRoleArn(std::forward<SourceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A ARN identifying the target role configuration.</p>
     */
    inline const Aws::String& GetTargetRoleArn() const { return m_targetRoleArn; }
    inline bool TargetRoleArnHasBeenSet() const { return m_targetRoleArnHasBeenSet; }
    template<typename TargetRoleArnT = Aws::String>
    void SetTargetRoleArn(TargetRoleArnT&& value) { m_targetRoleArnHasBeenSet = true; m_targetRoleArn = std::forward<TargetRoleArnT>(value); }
    template<typename TargetRoleArnT = Aws::String>
    RoleConfiguration& WithTargetRoleArn(TargetRoleArnT&& value) { SetTargetRoleArn(std::forward<TargetRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceRoleArn;
    bool m_sourceRoleArnHasBeenSet = false;

    Aws::String m_targetRoleArn;
    bool m_targetRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
