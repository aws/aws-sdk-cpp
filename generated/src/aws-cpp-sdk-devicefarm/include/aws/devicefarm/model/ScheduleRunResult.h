/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Run.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ScheduleRunResult
  {
  public:
    AWS_DEVICEFARM_API ScheduleRunResult();
    AWS_DEVICEFARM_API ScheduleRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ScheduleRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ScheduleRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ScheduleRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ScheduleRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Run m_run;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
