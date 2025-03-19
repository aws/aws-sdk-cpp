/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/JobStatus.h>
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
namespace Comprehend
{
namespace Model
{
  class StartDocumentClassificationJobResult
  {
  public:
    AWS_COMPREHEND_API StartDocumentClassificationJobResult() = default;
    AWS_COMPREHEND_API StartDocumentClassificationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API StartDocumentClassificationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier generated for the job. To get the status of the job, use this
     * identifier with the <code>DescribeDocumentClassificationJob</code>
     * operation.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    StartDocumentClassificationJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the document classification job. It is a
     * unique, fully qualified identifier for the job. It includes the Amazon Web
     * Services account, Amazon Web Services Region, and the job ID. The format of the
     * ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:document-classification-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:document-classification-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    StartDocumentClassificationJobResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job:</p> <ul> <li> <p>SUBMITTED - The job has been received
     * and queued for processing.</p> </li> <li> <p>IN_PROGRESS - Amazon Comprehend is
     * processing the job.</p> </li> <li> <p>COMPLETED - The job was successfully
     * completed and the output is available.</p> </li> <li> <p>FAILED - The job did
     * not complete. For details, use the
     * <code>DescribeDocumentClassificationJob</code> operation.</p> </li> <li>
     * <p>STOP_REQUESTED - Amazon Comprehend has received a stop request for the job
     * and is processing the request.</p> </li> <li> <p>STOPPED - The job was
     * successfully stopped without completing.</p> </li> </ul>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline StartDocumentClassificationJobResult& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the custom classification model.</p>
     */
    inline const Aws::String& GetDocumentClassifierArn() const { return m_documentClassifierArn; }
    template<typename DocumentClassifierArnT = Aws::String>
    void SetDocumentClassifierArn(DocumentClassifierArnT&& value) { m_documentClassifierArnHasBeenSet = true; m_documentClassifierArn = std::forward<DocumentClassifierArnT>(value); }
    template<typename DocumentClassifierArnT = Aws::String>
    StartDocumentClassificationJobResult& WithDocumentClassifierArn(DocumentClassifierArnT&& value) { SetDocumentClassifierArn(std::forward<DocumentClassifierArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartDocumentClassificationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_documentClassifierArn;
    bool m_documentClassifierArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
