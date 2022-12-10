/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>

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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of ReportTaskRunnerHeartbeat.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ReportTaskRunnerHeartbeatOutput">AWS
   * API Reference</a></p>
   */
  class ReportTaskRunnerHeartbeatResult
  {
  public:
    AWS_DATAPIPELINE_API ReportTaskRunnerHeartbeatResult();
    AWS_DATAPIPELINE_API ReportTaskRunnerHeartbeatResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API ReportTaskRunnerHeartbeatResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether the calling task runner should terminate.</p>
     */
    inline bool GetTerminate() const{ return m_terminate; }

    /**
     * <p>Indicates whether the calling task runner should terminate.</p>
     */
    inline void SetTerminate(bool value) { m_terminate = value; }

    /**
     * <p>Indicates whether the calling task runner should terminate.</p>
     */
    inline ReportTaskRunnerHeartbeatResult& WithTerminate(bool value) { SetTerminate(value); return *this;}

  private:

    bool m_terminate;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
