/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ClusterSettingName.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The settings to use when creating a cluster. This parameter is used to turn
   * on CloudWatch Container Insights with enhanced observability or CloudWatch
   * Container Insights for a cluster.</p> <p>Container Insights with enhanced
   * observability provides all the Container Insights metrics, plus additional task
   * and container metrics. This version supports enhanced observability for Amazon
   * ECS clusters using the Amazon EC2 and Fargate launch types. After you configure
   * Container Insights with enhanced observability on Amazon ECS, Container Insights
   * auto-collects detailed infrastructure telemetry from the cluster level down to
   * the container level in your environment and displays these critical performance
   * data in curated dashboards removing the heavy lifting in observability set-up.
   * </p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cloudwatch-container-insights.html">Monitor
   * Amazon ECS containers using Container Insights with enhanced observability</a>
   * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ClusterSetting">AWS
   * API Reference</a></p>
   */
  class ClusterSetting
  {
  public:
    AWS_ECS_API ClusterSetting() = default;
    AWS_ECS_API ClusterSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ClusterSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the cluster setting. The value is
     * <code>containerInsights</code>.</p>
     */
    inline ClusterSettingName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ClusterSettingName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ClusterSetting& WithName(ClusterSettingName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to set for the cluster setting. The supported values are
     * <code>enhanced</code>, <code>enabled</code>, and <code>disabled</code>. </p>
     * <p>To use Container Insights with enhanced observability, set the
     * <code>containerInsights</code> account setting to <code>enhanced</code>.</p>
     * <p>To use Container Insights, set the <code>containerInsights</code> account
     * setting to <code>enabled</code>.</p> <p>If a cluster value is specified, it will
     * override the <code>containerInsights</code> value set with <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutAccountSetting.html">PutAccountSetting</a>
     * or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutAccountSettingDefault.html">PutAccountSettingDefault</a>.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ClusterSetting& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    ClusterSettingName m_name{ClusterSettingName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
