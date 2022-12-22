/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents the results of your stop run attempt.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRunResult">AWS
   * API Reference</a></p>
   */
  class StopRunResult
  {
  public:
    AWS_DEVICEFARM_API StopRunResult();
    AWS_DEVICEFARM_API StopRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API StopRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The run that was stopped.</p>
     */
    inline const Run& GetRun() const{ return m_run; }

    /**
     * <p>The run that was stopped.</p>
     */
    inline void SetRun(const Run& value) { m_run = value; }

    /**
     * <p>The run that was stopped.</p>
     */
    inline void SetRun(Run&& value) { m_run = std::move(value); }

    /**
     * <p>The run that was stopped.</p>
     */
    inline StopRunResult& WithRun(const Run& value) { SetRun(value); return *this;}

    /**
     * <p>The run that was stopped.</p>
     */
    inline StopRunResult& WithRun(Run&& value) { SetRun(std::move(value)); return *this;}

  private:

    Run m_run;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
