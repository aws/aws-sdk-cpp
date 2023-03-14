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
   * <p>Contains the output of ReportTaskProgress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ReportTaskProgressOutput">AWS
   * API Reference</a></p>
   */
  class ReportTaskProgressResult
  {
  public:
    AWS_DATAPIPELINE_API ReportTaskProgressResult();
    AWS_DATAPIPELINE_API ReportTaskProgressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API ReportTaskProgressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If true, the calling task runner should cancel processing of the task. The
     * task runner does not need to call <a>SetTaskStatus</a> for canceled tasks.</p>
     */
    inline bool GetCanceled() const{ return m_canceled; }

    /**
     * <p>If true, the calling task runner should cancel processing of the task. The
     * task runner does not need to call <a>SetTaskStatus</a> for canceled tasks.</p>
     */
    inline void SetCanceled(bool value) { m_canceled = value; }

    /**
     * <p>If true, the calling task runner should cancel processing of the task. The
     * task runner does not need to call <a>SetTaskStatus</a> for canceled tasks.</p>
     */
    inline ReportTaskProgressResult& WithCanceled(bool value) { SetCanceled(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ReportTaskProgressResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ReportTaskProgressResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ReportTaskProgressResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_canceled;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
