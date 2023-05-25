/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ReportTaskRunnerHeartbeatResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ReportTaskRunnerHeartbeatResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ReportTaskRunnerHeartbeatResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_terminate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
