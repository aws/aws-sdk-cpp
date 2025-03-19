/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/CloudWatchAlarmDefinition.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The conditions that trigger an automatic scaling activity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ScalingTrigger">AWS
   * API Reference</a></p>
   */
  class ScalingTrigger
  {
  public:
    AWS_EMR_API ScalingTrigger() = default;
    AWS_EMR_API ScalingTrigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ScalingTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The definition of a CloudWatch metric alarm. When the defined alarm
     * conditions are met along with other trigger parameters, scaling activity
     * begins.</p>
     */
    inline const CloudWatchAlarmDefinition& GetCloudWatchAlarmDefinition() const { return m_cloudWatchAlarmDefinition; }
    inline bool CloudWatchAlarmDefinitionHasBeenSet() const { return m_cloudWatchAlarmDefinitionHasBeenSet; }
    template<typename CloudWatchAlarmDefinitionT = CloudWatchAlarmDefinition>
    void SetCloudWatchAlarmDefinition(CloudWatchAlarmDefinitionT&& value) { m_cloudWatchAlarmDefinitionHasBeenSet = true; m_cloudWatchAlarmDefinition = std::forward<CloudWatchAlarmDefinitionT>(value); }
    template<typename CloudWatchAlarmDefinitionT = CloudWatchAlarmDefinition>
    ScalingTrigger& WithCloudWatchAlarmDefinition(CloudWatchAlarmDefinitionT&& value) { SetCloudWatchAlarmDefinition(std::forward<CloudWatchAlarmDefinitionT>(value)); return *this;}
    ///@}
  private:

    CloudWatchAlarmDefinition m_cloudWatchAlarmDefinition;
    bool m_cloudWatchAlarmDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
