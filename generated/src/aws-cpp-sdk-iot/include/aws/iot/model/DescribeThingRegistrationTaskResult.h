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
    AWS_IOT_API DescribeThingRegistrationTaskResult();
    AWS_IOT_API DescribeThingRegistrationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeThingRegistrationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The task ID.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }
    inline DescribeThingRegistrationTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline DescribeThingRegistrationTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline DescribeThingRegistrationTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task creation date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline DescribeThingRegistrationTaskResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline DescribeThingRegistrationTaskResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the task was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline DescribeThingRegistrationTaskResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline DescribeThingRegistrationTaskResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task's template.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }
    inline void SetTemplateBody(const Aws::String& value) { m_templateBody = value; }
    inline void SetTemplateBody(Aws::String&& value) { m_templateBody = std::move(value); }
    inline void SetTemplateBody(const char* value) { m_templateBody.assign(value); }
    inline DescribeThingRegistrationTaskResult& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}
    inline DescribeThingRegistrationTaskResult& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}
    inline DescribeThingRegistrationTaskResult& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket that contains the input file.</p>
     */
    inline const Aws::String& GetInputFileBucket() const{ return m_inputFileBucket; }
    inline void SetInputFileBucket(const Aws::String& value) { m_inputFileBucket = value; }
    inline void SetInputFileBucket(Aws::String&& value) { m_inputFileBucket = std::move(value); }
    inline void SetInputFileBucket(const char* value) { m_inputFileBucket.assign(value); }
    inline DescribeThingRegistrationTaskResult& WithInputFileBucket(const Aws::String& value) { SetInputFileBucket(value); return *this;}
    inline DescribeThingRegistrationTaskResult& WithInputFileBucket(Aws::String&& value) { SetInputFileBucket(std::move(value)); return *this;}
    inline DescribeThingRegistrationTaskResult& WithInputFileBucket(const char* value) { SetInputFileBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input file key.</p>
     */
    inline const Aws::String& GetInputFileKey() const{ return m_inputFileKey; }
    inline void SetInputFileKey(const Aws::String& value) { m_inputFileKey = value; }
    inline void SetInputFileKey(Aws::String&& value) { m_inputFileKey = std::move(value); }
    inline void SetInputFileKey(const char* value) { m_inputFileKey.assign(value); }
    inline DescribeThingRegistrationTaskResult& WithInputFileKey(const Aws::String& value) { SetInputFileKey(value); return *this;}
    inline DescribeThingRegistrationTaskResult& WithInputFileKey(Aws::String&& value) { SetInputFileKey(std::move(value)); return *this;}
    inline DescribeThingRegistrationTaskResult& WithInputFileKey(const char* value) { SetInputFileKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role ARN that grants access to the input file bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeThingRegistrationTaskResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeThingRegistrationTaskResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeThingRegistrationTaskResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the bulk thing provisioning task.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline DescribeThingRegistrationTaskResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline DescribeThingRegistrationTaskResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline DescribeThingRegistrationTaskResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DescribeThingRegistrationTaskResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DescribeThingRegistrationTaskResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of things successfully provisioned.</p>
     */
    inline int GetSuccessCount() const{ return m_successCount; }
    inline void SetSuccessCount(int value) { m_successCount = value; }
    inline DescribeThingRegistrationTaskResult& WithSuccessCount(int value) { SetSuccessCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of things that failed to be provisioned.</p>
     */
    inline int GetFailureCount() const{ return m_failureCount; }
    inline void SetFailureCount(int value) { m_failureCount = value; }
    inline DescribeThingRegistrationTaskResult& WithFailureCount(int value) { SetFailureCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the bulk provisioning task expressed as a percentage.</p>
     */
    inline int GetPercentageProgress() const{ return m_percentageProgress; }
    inline void SetPercentageProgress(int value) { m_percentageProgress = value; }
    inline DescribeThingRegistrationTaskResult& WithPercentageProgress(int value) { SetPercentageProgress(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeThingRegistrationTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeThingRegistrationTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeThingRegistrationTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_templateBody;

    Aws::String m_inputFileBucket;

    Aws::String m_inputFileKey;

    Aws::String m_roleArn;

    Status m_status;

    Aws::String m_message;

    int m_successCount;

    int m_failureCount;

    int m_percentageProgress;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
