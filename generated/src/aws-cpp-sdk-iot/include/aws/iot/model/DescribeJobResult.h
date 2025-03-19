/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/Job.h>
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
namespace IoT
{
namespace Model
{
  class DescribeJobResult
  {
  public:
    AWS_IOT_API DescribeJobResult() = default;
    AWS_IOT_API DescribeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An S3 link to the job document.</p>
     */
    inline const Aws::String& GetDocumentSource() const { return m_documentSource; }
    template<typename DocumentSourceT = Aws::String>
    void SetDocumentSource(DocumentSourceT&& value) { m_documentSourceHasBeenSet = true; m_documentSource = std::forward<DocumentSourceT>(value); }
    template<typename DocumentSourceT = Aws::String>
    DescribeJobResult& WithDocumentSource(DocumentSourceT&& value) { SetDocumentSource(std::forward<DocumentSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the job.</p>
     */
    inline const Job& GetJob() const { return m_job; }
    template<typename JobT = Job>
    void SetJob(JobT&& value) { m_jobHasBeenSet = true; m_job = std::forward<JobT>(value); }
    template<typename JobT = Job>
    DescribeJobResult& WithJob(JobT&& value) { SetJob(std::forward<JobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_documentSource;
    bool m_documentSourceHasBeenSet = false;

    Job m_job;
    bool m_jobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
