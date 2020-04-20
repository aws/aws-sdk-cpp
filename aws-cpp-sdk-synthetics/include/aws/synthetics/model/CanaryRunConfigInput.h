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
#include <aws/synthetics/Synthetics_EXPORTS.h>

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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>A structure that contains input information for a canary run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryRunConfigInput">AWS
   * API Reference</a></p>
   */
  class AWS_SYNTHETICS_API CanaryRunConfigInput
  {
  public:
    CanaryRunConfigInput();
    CanaryRunConfigInput(Aws::Utils::Json::JsonView jsonValue);
    CanaryRunConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How long the canary is allowed to run before it must stop. If you omit this
     * field, the frequency of the canary is used as this value, up to a maximum of 14
     * minutes.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>How long the canary is allowed to run before it must stop. If you omit this
     * field, the frequency of the canary is used as this value, up to a maximum of 14
     * minutes.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>How long the canary is allowed to run before it must stop. If you omit this
     * field, the frequency of the canary is used as this value, up to a maximum of 14
     * minutes.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>How long the canary is allowed to run before it must stop. If you omit this
     * field, the frequency of the canary is used as this value, up to a maximum of 14
     * minutes.</p>
     */
    inline CanaryRunConfigInput& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}

  private:

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
