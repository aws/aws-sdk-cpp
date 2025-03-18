/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/Status.h>
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
  class DescribeThingRegistrationTaskResult
  {
  public:
    AWS_IOT_API DescribeThingRegistrationTaskResult() = default;
    AWS_IOT_API DescribeThingRegistrationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeThingRegistrationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The task ID.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    DescribeThingRegistrationTaskResult& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task creation date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    DescribeThingRegistrationTaskResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the task was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    DescribeThingRegistrationTaskResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's template.</p>
     */
    inline const Aws::String& GetTemplateBody() const { return m_templateBody; }
    template<typename TemplateBodyT = Aws::String>
    void SetTemplateBody(TemplateBodyT&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::forward<TemplateBodyT>(value); }
    template<typename TemplateBodyT = Aws::String>
    DescribeThingRegistrationTaskResult& WithTemplateBody(TemplateBodyT&& value) { SetTemplateBody(std::forward<TemplateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket that contains the input file.</p>
     */
    inline const Aws::String& GetInputFileBucket() const { return m_inputFileBucket; }
    template<typename InputFileBucketT = Aws::String>
    void SetInputFileBucket(InputFileBucketT&& value) { m_inputFileBucketHasBeenSet = true; m_inputFileBucket = std::forward<InputFileBucketT>(value); }
    template<typename InputFileBucketT = Aws::String>
    DescribeThingRegistrationTaskResult& WithInputFileBucket(InputFileBucketT&& value) { SetInputFileBucket(std::forward<InputFileBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input file key.</p>
     */
    inline const Aws::String& GetInputFileKey() const { return m_inputFileKey; }
    template<typename InputFileKeyT = Aws::String>
    void SetInputFileKey(InputFileKeyT&& value) { m_inputFileKeyHasBeenSet = true; m_inputFileKey = std::forward<InputFileKeyT>(value); }
    template<typename InputFileKeyT = Aws::String>
    DescribeThingRegistrationTaskResult& WithInputFileKey(InputFileKeyT&& value) { SetInputFileKey(std::forward<InputFileKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role ARN that grants access to the input file bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeThingRegistrationTaskResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the bulk thing provisioning task.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeThingRegistrationTaskResult& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DescribeThingRegistrationTaskResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of things successfully provisioned.</p>
     */
    inline int GetSuccessCount() const { return m_successCount; }
    inline void SetSuccessCount(int value) { m_successCountHasBeenSet = true; m_successCount = value; }
    inline DescribeThingRegistrationTaskResult& WithSuccessCount(int value) { SetSuccessCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of things that failed to be provisioned.</p>
     */
    inline int GetFailureCount() const { return m_failureCount; }
    inline void SetFailureCount(int value) { m_failureCountHasBeenSet = true; m_failureCount = value; }
    inline DescribeThingRegistrationTaskResult& WithFailureCount(int value) { SetFailureCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the bulk provisioning task expressed as a percentage.</p>
     */
    inline int GetPercentageProgress() const { return m_percentageProgress; }
    inline void SetPercentageProgress(int value) { m_percentageProgressHasBeenSet = true; m_percentageProgress = value; }
    inline DescribeThingRegistrationTaskResult& WithPercentageProgress(int value) { SetPercentageProgress(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeThingRegistrationTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::String m_inputFileBucket;
    bool m_inputFileBucketHasBeenSet = false;

    Aws::String m_inputFileKey;
    bool m_inputFileKeyHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_successCount{0};
    bool m_successCountHasBeenSet = false;

    int m_failureCount{0};
    bool m_failureCountHasBeenSet = false;

    int m_percentageProgress{0};
    bool m_percentageProgressHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
