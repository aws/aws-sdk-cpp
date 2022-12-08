/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MailboxExportJobState.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkMail
{
namespace Model
{
  class DescribeMailboxExportJobResult
  {
  public:
    AWS_WORKMAIL_API DescribeMailboxExportJobResult();
    AWS_WORKMAIL_API DescribeMailboxExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeMailboxExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityId = value; }

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityId = std::move(value); }

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline void SetEntityId(const char* value) { m_entityId.assign(value); }

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline DescribeMailboxExportJobResult& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline DescribeMailboxExportJobResult& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user or resource associated with the mailbox.</p>
     */
    inline DescribeMailboxExportJobResult& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The mailbox export job description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The mailbox export job description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The mailbox export job description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The mailbox export job description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The mailbox export job description.</p>
     */
    inline DescribeMailboxExportJobResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The mailbox export job description.</p>
     */
    inline DescribeMailboxExportJobResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The mailbox export job description.</p>
     */
    inline DescribeMailboxExportJobResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that grants
     * write permission to the Amazon Simple Storage Service (Amazon S3) bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that grants
     * write permission to the Amazon Simple Storage Service (Amazon S3) bucket.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that grants
     * write permission to the Amazon Simple Storage Service (Amazon S3) bucket.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that grants
     * write permission to the Amazon Simple Storage Service (Amazon S3) bucket.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that grants
     * write permission to the Amazon Simple Storage Service (Amazon S3) bucket.</p>
     */
    inline DescribeMailboxExportJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that grants
     * write permission to the Amazon Simple Storage Service (Amazon S3) bucket.</p>
     */
    inline DescribeMailboxExportJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that grants
     * write permission to the Amazon Simple Storage Service (Amazon S3) bucket.</p>
     */
    inline DescribeMailboxExportJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the symmetric AWS Key Management Service
     * (AWS KMS) key that encrypts the exported mailbox content.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the symmetric AWS Key Management Service
     * (AWS KMS) key that encrypts the exported mailbox content.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the symmetric AWS Key Management Service
     * (AWS KMS) key that encrypts the exported mailbox content.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the symmetric AWS Key Management Service
     * (AWS KMS) key that encrypts the exported mailbox content.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the symmetric AWS Key Management Service
     * (AWS KMS) key that encrypts the exported mailbox content.</p>
     */
    inline DescribeMailboxExportJobResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the symmetric AWS Key Management Service
     * (AWS KMS) key that encrypts the exported mailbox content.</p>
     */
    inline DescribeMailboxExportJobResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the symmetric AWS Key Management Service
     * (AWS KMS) key that encrypts the exported mailbox content.</p>
     */
    inline DescribeMailboxExportJobResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketName = value; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline DescribeMailboxExportJobResult& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline DescribeMailboxExportJobResult& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline DescribeMailboxExportJobResult& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3Prefix = value; }

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3Prefix = std::move(value); }

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline void SetS3Prefix(const char* value) { m_s3Prefix.assign(value); }

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline DescribeMailboxExportJobResult& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline DescribeMailboxExportJobResult& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline DescribeMailboxExportJobResult& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}


    /**
     * <p>The path to the S3 bucket and file that the mailbox export job is exporting
     * to.</p>
     */
    inline const Aws::String& GetS3Path() const{ return m_s3Path; }

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job is exporting
     * to.</p>
     */
    inline void SetS3Path(const Aws::String& value) { m_s3Path = value; }

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job is exporting
     * to.</p>
     */
    inline void SetS3Path(Aws::String&& value) { m_s3Path = std::move(value); }

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job is exporting
     * to.</p>
     */
    inline void SetS3Path(const char* value) { m_s3Path.assign(value); }

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job is exporting
     * to.</p>
     */
    inline DescribeMailboxExportJobResult& WithS3Path(const Aws::String& value) { SetS3Path(value); return *this;}

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job is exporting
     * to.</p>
     */
    inline DescribeMailboxExportJobResult& WithS3Path(Aws::String&& value) { SetS3Path(std::move(value)); return *this;}

    /**
     * <p>The path to the S3 bucket and file that the mailbox export job is exporting
     * to.</p>
     */
    inline DescribeMailboxExportJobResult& WithS3Path(const char* value) { SetS3Path(value); return *this;}


    /**
     * <p>The estimated progress of the mailbox export job, in percentage points.</p>
     */
    inline int GetEstimatedProgress() const{ return m_estimatedProgress; }

    /**
     * <p>The estimated progress of the mailbox export job, in percentage points.</p>
     */
    inline void SetEstimatedProgress(int value) { m_estimatedProgress = value; }

    /**
     * <p>The estimated progress of the mailbox export job, in percentage points.</p>
     */
    inline DescribeMailboxExportJobResult& WithEstimatedProgress(int value) { SetEstimatedProgress(value); return *this;}


    /**
     * <p>The state of the mailbox export job.</p>
     */
    inline const MailboxExportJobState& GetState() const{ return m_state; }

    /**
     * <p>The state of the mailbox export job.</p>
     */
    inline void SetState(const MailboxExportJobState& value) { m_state = value; }

    /**
     * <p>The state of the mailbox export job.</p>
     */
    inline void SetState(MailboxExportJobState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the mailbox export job.</p>
     */
    inline DescribeMailboxExportJobResult& WithState(const MailboxExportJobState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the mailbox export job.</p>
     */
    inline DescribeMailboxExportJobResult& WithState(MailboxExportJobState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Error information for failed mailbox export jobs.</p>
     */
    inline const Aws::String& GetErrorInfo() const{ return m_errorInfo; }

    /**
     * <p>Error information for failed mailbox export jobs.</p>
     */
    inline void SetErrorInfo(const Aws::String& value) { m_errorInfo = value; }

    /**
     * <p>Error information for failed mailbox export jobs.</p>
     */
    inline void SetErrorInfo(Aws::String&& value) { m_errorInfo = std::move(value); }

    /**
     * <p>Error information for failed mailbox export jobs.</p>
     */
    inline void SetErrorInfo(const char* value) { m_errorInfo.assign(value); }

    /**
     * <p>Error information for failed mailbox export jobs.</p>
     */
    inline DescribeMailboxExportJobResult& WithErrorInfo(const Aws::String& value) { SetErrorInfo(value); return *this;}

    /**
     * <p>Error information for failed mailbox export jobs.</p>
     */
    inline DescribeMailboxExportJobResult& WithErrorInfo(Aws::String&& value) { SetErrorInfo(std::move(value)); return *this;}

    /**
     * <p>Error information for failed mailbox export jobs.</p>
     */
    inline DescribeMailboxExportJobResult& WithErrorInfo(const char* value) { SetErrorInfo(value); return *this;}


    /**
     * <p>The mailbox export job start timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The mailbox export job start timestamp.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The mailbox export job start timestamp.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The mailbox export job start timestamp.</p>
     */
    inline DescribeMailboxExportJobResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The mailbox export job start timestamp.</p>
     */
    inline DescribeMailboxExportJobResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The mailbox export job end timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The mailbox export job end timestamp.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The mailbox export job end timestamp.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The mailbox export job end timestamp.</p>
     */
    inline DescribeMailboxExportJobResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The mailbox export job end timestamp.</p>
     */
    inline DescribeMailboxExportJobResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_entityId;

    Aws::String m_description;

    Aws::String m_roleArn;

    Aws::String m_kmsKeyArn;

    Aws::String m_s3BucketName;

    Aws::String m_s3Prefix;

    Aws::String m_s3Path;

    int m_estimatedProgress;

    MailboxExportJobState m_state;

    Aws::String m_errorInfo;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
