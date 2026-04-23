/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

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
namespace IoT
{
namespace Model
{

  /**
   * <p>Configuration for the rollout of OTA updates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AwsJobExecutionsRolloutConfig">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API AwsJobExecutionsRolloutConfig
  {
  public:
    AwsJobExecutionsRolloutConfig();
    AwsJobExecutionsRolloutConfig(Aws::Utils::Json::JsonView jsonValue);
    AwsJobExecutionsRolloutConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of OTA update job executions started per minute.</p>
     */
    inline int GetMaximumPerMinute() const{ return m_maximumPerMinute; }

    /**
     * <p>The maximum number of OTA update job executions started per minute.</p>
     */
    inline bool MaximumPerMinuteHasBeenSet() const { return m_maximumPerMinuteHasBeenSet; }

    /**
     * <p>The maximum number of OTA update job executions started per minute.</p>
     */
    inline void SetMaximumPerMinute(int value) { m_maximumPerMinuteHasBeenSet = true; m_maximumPerMinute = value; }

    /**
     * <p>The maximum number of OTA update job executions started per minute.</p>
     */
    inline AwsJobExecutionsRolloutConfig& WithMaximumPerMinute(int value) { SetMaximumPerMinute(value); return *this;}

  private:

    int m_maximumPerMinute;
    bool m_maximumPerMinuteHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
