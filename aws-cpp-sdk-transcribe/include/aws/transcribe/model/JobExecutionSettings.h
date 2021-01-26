/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Provides information about when a transcription job should be
   * executed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/JobExecutionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API JobExecutionSettings
  {
  public:
    JobExecutionSettings();
    JobExecutionSettings(Aws::Utils::Json::JsonView jsonValue);
    JobExecutionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether a job should be queued by Amazon Transcribe when the
     * concurrent execution limit is exceeded. When the
     * <code>AllowDeferredExecution</code> field is true, jobs are queued and executed
     * when the number of executing jobs falls below the concurrent execution limit. If
     * the field is false, Amazon Transcribe returns a
     * <code>LimitExceededException</code> exception.</p> <p>If you specify the
     * <code>AllowDeferredExecution</code> field, you must specify the
     * <code>DataAccessRoleArn</code> field.</p>
     */
    inline bool GetAllowDeferredExecution() const{ return m_allowDeferredExecution; }

    /**
     * <p>Indicates whether a job should be queued by Amazon Transcribe when the
     * concurrent execution limit is exceeded. When the
     * <code>AllowDeferredExecution</code> field is true, jobs are queued and executed
     * when the number of executing jobs falls below the concurrent execution limit. If
     * the field is false, Amazon Transcribe returns a
     * <code>LimitExceededException</code> exception.</p> <p>If you specify the
     * <code>AllowDeferredExecution</code> field, you must specify the
     * <code>DataAccessRoleArn</code> field.</p>
     */
    inline bool AllowDeferredExecutionHasBeenSet() const { return m_allowDeferredExecutionHasBeenSet; }

    /**
     * <p>Indicates whether a job should be queued by Amazon Transcribe when the
     * concurrent execution limit is exceeded. When the
     * <code>AllowDeferredExecution</code> field is true, jobs are queued and executed
     * when the number of executing jobs falls below the concurrent execution limit. If
     * the field is false, Amazon Transcribe returns a
     * <code>LimitExceededException</code> exception.</p> <p>If you specify the
     * <code>AllowDeferredExecution</code> field, you must specify the
     * <code>DataAccessRoleArn</code> field.</p>
     */
    inline void SetAllowDeferredExecution(bool value) { m_allowDeferredExecutionHasBeenSet = true; m_allowDeferredExecution = value; }

    /**
     * <p>Indicates whether a job should be queued by Amazon Transcribe when the
     * concurrent execution limit is exceeded. When the
     * <code>AllowDeferredExecution</code> field is true, jobs are queued and executed
     * when the number of executing jobs falls below the concurrent execution limit. If
     * the field is false, Amazon Transcribe returns a
     * <code>LimitExceededException</code> exception.</p> <p>If you specify the
     * <code>AllowDeferredExecution</code> field, you must specify the
     * <code>DataAccessRoleArn</code> field.</p>
     */
    inline JobExecutionSettings& WithAllowDeferredExecution(bool value) { SetAllowDeferredExecution(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains the input files. Amazon Transcribe assumes this role to read
     * queued media files. If you have specified an output S3 bucket for the
     * transcription results, this role should have access to the output bucket as
     * well.</p> <p>If you specify the <code>AllowDeferredExecution</code> field, you
     * must specify the <code>DataAccessRoleArn</code> field.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains the input files. Amazon Transcribe assumes this role to read
     * queued media files. If you have specified an output S3 bucket for the
     * transcription results, this role should have access to the output bucket as
     * well.</p> <p>If you specify the <code>AllowDeferredExecution</code> field, you
     * must specify the <code>DataAccessRoleArn</code> field.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains the input files. Amazon Transcribe assumes this role to read
     * queued media files. If you have specified an output S3 bucket for the
     * transcription results, this role should have access to the output bucket as
     * well.</p> <p>If you specify the <code>AllowDeferredExecution</code> field, you
     * must specify the <code>DataAccessRoleArn</code> field.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains the input files. Amazon Transcribe assumes this role to read
     * queued media files. If you have specified an output S3 bucket for the
     * transcription results, this role should have access to the output bucket as
     * well.</p> <p>If you specify the <code>AllowDeferredExecution</code> field, you
     * must specify the <code>DataAccessRoleArn</code> field.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains the input files. Amazon Transcribe assumes this role to read
     * queued media files. If you have specified an output S3 bucket for the
     * transcription results, this role should have access to the output bucket as
     * well.</p> <p>If you specify the <code>AllowDeferredExecution</code> field, you
     * must specify the <code>DataAccessRoleArn</code> field.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains the input files. Amazon Transcribe assumes this role to read
     * queued media files. If you have specified an output S3 bucket for the
     * transcription results, this role should have access to the output bucket as
     * well.</p> <p>If you specify the <code>AllowDeferredExecution</code> field, you
     * must specify the <code>DataAccessRoleArn</code> field.</p>
     */
    inline JobExecutionSettings& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains the input files. Amazon Transcribe assumes this role to read
     * queued media files. If you have specified an output S3 bucket for the
     * transcription results, this role should have access to the output bucket as
     * well.</p> <p>If you specify the <code>AllowDeferredExecution</code> field, you
     * must specify the <code>DataAccessRoleArn</code> field.</p>
     */
    inline JobExecutionSettings& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role that has access to the S3 bucket
     * that contains the input files. Amazon Transcribe assumes this role to read
     * queued media files. If you have specified an output S3 bucket for the
     * transcription results, this role should have access to the output bucket as
     * well.</p> <p>If you specify the <code>AllowDeferredExecution</code> field, you
     * must specify the <code>DataAccessRoleArn</code> field.</p>
     */
    inline JobExecutionSettings& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}

  private:

    bool m_allowDeferredExecution;
    bool m_allowDeferredExecutionHasBeenSet;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
