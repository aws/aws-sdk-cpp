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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Run.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a schedule run request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ScheduleRunResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API ScheduleRunResult
  {
  public:
    ScheduleRunResult();
    ScheduleRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ScheduleRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the scheduled run.</p>
     */
    inline const Run& GetRun() const{ return m_run; }

    /**
     * <p>Information about the scheduled run.</p>
     */
    inline void SetRun(const Run& value) { m_run = value; }

    /**
     * <p>Information about the scheduled run.</p>
     */
    inline void SetRun(Run&& value) { m_run = std::move(value); }

    /**
     * <p>Information about the scheduled run.</p>
     */
    inline ScheduleRunResult& WithRun(const Run& value) { SetRun(value); return *this;}

    /**
     * <p>Information about the scheduled run.</p>
     */
    inline ScheduleRunResult& WithRun(Run&& value) { SetRun(std::move(value)); return *this;}

  private:

    Run m_run;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
