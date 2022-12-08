/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qldb/model/StreamStatus.h>
#include <aws/qldb/model/KinesisConfiguration.h>
#include <aws/qldb/model/ErrorCause.h>
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
namespace QLDB
{
namespace Model
{

  /**
   * <p>Information about an Amazon QLDB journal stream, including the Amazon
   * Resource Name (ARN), stream name, creation time, current status, and the
   * parameters of the original stream creation request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/JournalKinesisStreamDescription">AWS
   * API Reference</a></p>
   */
  class JournalKinesisStreamDescription
  {
  public:
    AWS_QLDB_API JournalKinesisStreamDescription();
    AWS_QLDB_API JournalKinesisStreamDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API JournalKinesisStreamDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetLedgerName() const{ return m_ledgerName; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline bool LedgerNameHasBeenSet() const { return m_ledgerNameHasBeenSet; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetLedgerName(const Aws::String& value) { m_ledgerNameHasBeenSet = true; m_ledgerName = value; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetLedgerName(Aws::String&& value) { m_ledgerNameHasBeenSet = true; m_ledgerName = std::move(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetLedgerName(const char* value) { m_ledgerNameHasBeenSet = true; m_ledgerName.assign(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline JournalKinesisStreamDescription& WithLedgerName(const Aws::String& value) { SetLedgerName(value); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline JournalKinesisStreamDescription& WithLedgerName(Aws::String&& value) { SetLedgerName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline JournalKinesisStreamDescription& WithLedgerName(const char* value) { SetLedgerName(value); return *this;}


    /**
     * <p>The date and time, in epoch time format, when the QLDB journal stream was
     * created. (Epoch time format is the number of seconds elapsed since 12:00:00 AM
     * January 1, 1970 UTC.)</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time, in epoch time format, when the QLDB journal stream was
     * created. (Epoch time format is the number of seconds elapsed since 12:00:00 AM
     * January 1, 1970 UTC.)</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time, in epoch time format, when the QLDB journal stream was
     * created. (Epoch time format is the number of seconds elapsed since 12:00:00 AM
     * January 1, 1970 UTC.)</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time, in epoch time format, when the QLDB journal stream was
     * created. (Epoch time format is the number of seconds elapsed since 12:00:00 AM
     * January 1, 1970 UTC.)</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time, in epoch time format, when the QLDB journal stream was
     * created. (Epoch time format is the number of seconds elapsed since 12:00:00 AM
     * January 1, 1970 UTC.)</p>
     */
    inline JournalKinesisStreamDescription& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time, in epoch time format, when the QLDB journal stream was
     * created. (Epoch time format is the number of seconds elapsed since 12:00:00 AM
     * January 1, 1970 UTC.)</p>
     */
    inline JournalKinesisStreamDescription& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The inclusive start date and time from which to start streaming journal
     * data.</p>
     */
    inline const Aws::Utils::DateTime& GetInclusiveStartTime() const{ return m_inclusiveStartTime; }

    /**
     * <p>The inclusive start date and time from which to start streaming journal
     * data.</p>
     */
    inline bool InclusiveStartTimeHasBeenSet() const { return m_inclusiveStartTimeHasBeenSet; }

    /**
     * <p>The inclusive start date and time from which to start streaming journal
     * data.</p>
     */
    inline void SetInclusiveStartTime(const Aws::Utils::DateTime& value) { m_inclusiveStartTimeHasBeenSet = true; m_inclusiveStartTime = value; }

    /**
     * <p>The inclusive start date and time from which to start streaming journal
     * data.</p>
     */
    inline void SetInclusiveStartTime(Aws::Utils::DateTime&& value) { m_inclusiveStartTimeHasBeenSet = true; m_inclusiveStartTime = std::move(value); }

    /**
     * <p>The inclusive start date and time from which to start streaming journal
     * data.</p>
     */
    inline JournalKinesisStreamDescription& WithInclusiveStartTime(const Aws::Utils::DateTime& value) { SetInclusiveStartTime(value); return *this;}

    /**
     * <p>The inclusive start date and time from which to start streaming journal
     * data.</p>
     */
    inline JournalKinesisStreamDescription& WithInclusiveStartTime(Aws::Utils::DateTime&& value) { SetInclusiveStartTime(std::move(value)); return *this;}


    /**
     * <p>The exclusive date and time that specifies when the stream ends. If this
     * parameter is undefined, the stream runs indefinitely until you cancel it.</p>
     */
    inline const Aws::Utils::DateTime& GetExclusiveEndTime() const{ return m_exclusiveEndTime; }

    /**
     * <p>The exclusive date and time that specifies when the stream ends. If this
     * parameter is undefined, the stream runs indefinitely until you cancel it.</p>
     */
    inline bool ExclusiveEndTimeHasBeenSet() const { return m_exclusiveEndTimeHasBeenSet; }

    /**
     * <p>The exclusive date and time that specifies when the stream ends. If this
     * parameter is undefined, the stream runs indefinitely until you cancel it.</p>
     */
    inline void SetExclusiveEndTime(const Aws::Utils::DateTime& value) { m_exclusiveEndTimeHasBeenSet = true; m_exclusiveEndTime = value; }

    /**
     * <p>The exclusive date and time that specifies when the stream ends. If this
     * parameter is undefined, the stream runs indefinitely until you cancel it.</p>
     */
    inline void SetExclusiveEndTime(Aws::Utils::DateTime&& value) { m_exclusiveEndTimeHasBeenSet = true; m_exclusiveEndTime = std::move(value); }

    /**
     * <p>The exclusive date and time that specifies when the stream ends. If this
     * parameter is undefined, the stream runs indefinitely until you cancel it.</p>
     */
    inline JournalKinesisStreamDescription& WithExclusiveEndTime(const Aws::Utils::DateTime& value) { SetExclusiveEndTime(value); return *this;}

    /**
     * <p>The exclusive date and time that specifies when the stream ends. If this
     * parameter is undefined, the stream runs indefinitely until you cancel it.</p>
     */
    inline JournalKinesisStreamDescription& WithExclusiveEndTime(Aws::Utils::DateTime&& value) { SetExclusiveEndTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p>
     */
    inline JournalKinesisStreamDescription& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p>
     */
    inline JournalKinesisStreamDescription& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p>
     */
    inline JournalKinesisStreamDescription& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The UUID (represented in Base62-encoded text) of the QLDB journal stream.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the QLDB journal stream.</p>
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the QLDB journal stream.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the QLDB journal stream.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the QLDB journal stream.</p>
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * <p>The UUID (represented in Base62-encoded text) of the QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>The UUID (represented in Base62-encoded text) of the QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>The UUID (represented in Base62-encoded text) of the QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the QLDB journal stream.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the QLDB journal stream.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the QLDB journal stream.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the QLDB journal stream.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the QLDB journal stream.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The current state of the QLDB journal stream.</p>
     */
    inline const StreamStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the QLDB journal stream.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the QLDB journal stream.</p>
     */
    inline void SetStatus(const StreamStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the QLDB journal stream.</p>
     */
    inline void SetStatus(StreamStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithStatus(const StreamStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithStatus(StreamStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The configuration settings of the Amazon Kinesis Data Streams destination for
     * a QLDB journal stream.</p>
     */
    inline const KinesisConfiguration& GetKinesisConfiguration() const{ return m_kinesisConfiguration; }

    /**
     * <p>The configuration settings of the Amazon Kinesis Data Streams destination for
     * a QLDB journal stream.</p>
     */
    inline bool KinesisConfigurationHasBeenSet() const { return m_kinesisConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings of the Amazon Kinesis Data Streams destination for
     * a QLDB journal stream.</p>
     */
    inline void SetKinesisConfiguration(const KinesisConfiguration& value) { m_kinesisConfigurationHasBeenSet = true; m_kinesisConfiguration = value; }

    /**
     * <p>The configuration settings of the Amazon Kinesis Data Streams destination for
     * a QLDB journal stream.</p>
     */
    inline void SetKinesisConfiguration(KinesisConfiguration&& value) { m_kinesisConfigurationHasBeenSet = true; m_kinesisConfiguration = std::move(value); }

    /**
     * <p>The configuration settings of the Amazon Kinesis Data Streams destination for
     * a QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithKinesisConfiguration(const KinesisConfiguration& value) { SetKinesisConfiguration(value); return *this;}

    /**
     * <p>The configuration settings of the Amazon Kinesis Data Streams destination for
     * a QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithKinesisConfiguration(KinesisConfiguration&& value) { SetKinesisConfiguration(std::move(value)); return *this;}


    /**
     * <p>The error message that describes the reason that a stream has a status of
     * <code>IMPAIRED</code> or <code>FAILED</code>. This is not applicable to streams
     * that have other status values.</p>
     */
    inline const ErrorCause& GetErrorCause() const{ return m_errorCause; }

    /**
     * <p>The error message that describes the reason that a stream has a status of
     * <code>IMPAIRED</code> or <code>FAILED</code>. This is not applicable to streams
     * that have other status values.</p>
     */
    inline bool ErrorCauseHasBeenSet() const { return m_errorCauseHasBeenSet; }

    /**
     * <p>The error message that describes the reason that a stream has a status of
     * <code>IMPAIRED</code> or <code>FAILED</code>. This is not applicable to streams
     * that have other status values.</p>
     */
    inline void SetErrorCause(const ErrorCause& value) { m_errorCauseHasBeenSet = true; m_errorCause = value; }

    /**
     * <p>The error message that describes the reason that a stream has a status of
     * <code>IMPAIRED</code> or <code>FAILED</code>. This is not applicable to streams
     * that have other status values.</p>
     */
    inline void SetErrorCause(ErrorCause&& value) { m_errorCauseHasBeenSet = true; m_errorCause = std::move(value); }

    /**
     * <p>The error message that describes the reason that a stream has a status of
     * <code>IMPAIRED</code> or <code>FAILED</code>. This is not applicable to streams
     * that have other status values.</p>
     */
    inline JournalKinesisStreamDescription& WithErrorCause(const ErrorCause& value) { SetErrorCause(value); return *this;}

    /**
     * <p>The error message that describes the reason that a stream has a status of
     * <code>IMPAIRED</code> or <code>FAILED</code>. This is not applicable to streams
     * that have other status values.</p>
     */
    inline JournalKinesisStreamDescription& WithErrorCause(ErrorCause&& value) { SetErrorCause(std::move(value)); return *this;}


    /**
     * <p>The user-defined name of the QLDB journal stream.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The user-defined name of the QLDB journal stream.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The user-defined name of the QLDB journal stream.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The user-defined name of the QLDB journal stream.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The user-defined name of the QLDB journal stream.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The user-defined name of the QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The user-defined name of the QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The user-defined name of the QLDB journal stream.</p>
     */
    inline JournalKinesisStreamDescription& WithStreamName(const char* value) { SetStreamName(value); return *this;}

  private:

    Aws::String m_ledgerName;
    bool m_ledgerNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_inclusiveStartTime;
    bool m_inclusiveStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_exclusiveEndTime;
    bool m_exclusiveEndTimeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    StreamStatus m_status;
    bool m_statusHasBeenSet = false;

    KinesisConfiguration m_kinesisConfiguration;
    bool m_kinesisConfigurationHasBeenSet = false;

    ErrorCause m_errorCause;
    bool m_errorCauseHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
