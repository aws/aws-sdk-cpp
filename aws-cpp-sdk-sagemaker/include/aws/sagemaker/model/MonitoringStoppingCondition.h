/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A time limit for how long the monitoring job is allowed to run before
   * stopping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringStoppingCondition">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API MonitoringStoppingCondition
  {
  public:
    MonitoringStoppingCondition();
    MonitoringStoppingCondition(Aws::Utils::Json::JsonView jsonValue);
    MonitoringStoppingCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum runtime allowed in seconds.</p>
     */
    inline int GetMaxRuntimeInSeconds() const{ return m_maxRuntimeInSeconds; }

    /**
     * <p>The maximum runtime allowed in seconds.</p>
     */
    inline bool MaxRuntimeInSecondsHasBeenSet() const { return m_maxRuntimeInSecondsHasBeenSet; }

    /**
     * <p>The maximum runtime allowed in seconds.</p>
     */
    inline void SetMaxRuntimeInSeconds(int value) { m_maxRuntimeInSecondsHasBeenSet = true; m_maxRuntimeInSeconds = value; }

    /**
     * <p>The maximum runtime allowed in seconds.</p>
     */
    inline MonitoringStoppingCondition& WithMaxRuntimeInSeconds(int value) { SetMaxRuntimeInSeconds(value); return *this;}

  private:

    int m_maxRuntimeInSeconds;
    bool m_maxRuntimeInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
