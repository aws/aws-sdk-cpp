/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents configuration information about a test run, such as the execution
   * timeout (in minutes).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ExecutionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API ExecutionConfiguration
  {
  public:
    ExecutionConfiguration();
    ExecutionConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    ExecutionConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The number of minutes a test run will execute before it times out.</p>
     */
    inline int GetJobTimeoutMinutes() const{ return m_jobTimeoutMinutes; }

    /**
     * <p>The number of minutes a test run will execute before it times out.</p>
     */
    inline void SetJobTimeoutMinutes(int value) { m_jobTimeoutMinutesHasBeenSet = true; m_jobTimeoutMinutes = value; }

    /**
     * <p>The number of minutes a test run will execute before it times out.</p>
     */
    inline ExecutionConfiguration& WithJobTimeoutMinutes(int value) { SetJobTimeoutMinutes(value); return *this;}

  private:
    int m_jobTimeoutMinutes;
    bool m_jobTimeoutMinutesHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
