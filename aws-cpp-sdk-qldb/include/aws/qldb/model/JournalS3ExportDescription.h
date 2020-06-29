/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qldb/model/ExportStatus.h>
#include <aws/qldb/model/S3ExportConfiguration.h>
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
   * <p>The information about a journal export job, including the ledger name, export
   * ID, when it was created, current status, and its start and end time export
   * parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/JournalS3ExportDescription">AWS
   * API Reference</a></p>
   */
  class AWS_QLDB_API JournalS3ExportDescription
  {
  public:
    JournalS3ExportDescription();
    JournalS3ExportDescription(Aws::Utils::Json::JsonView jsonValue);
    JournalS3ExportDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline JournalS3ExportDescription& WithLedgerName(const Aws::String& value) { SetLedgerName(value); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline JournalS3ExportDescription& WithLedgerName(Aws::String&& value) { SetLedgerName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline JournalS3ExportDescription& WithLedgerName(const char* value) { SetLedgerName(value); return *this;}


    /**
     * <p>The unique ID of the journal export job.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>The unique ID of the journal export job.</p>
     */
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }

    /**
     * <p>The unique ID of the journal export job.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportIdHasBeenSet = true; m_exportId = value; }

    /**
     * <p>The unique ID of the journal export job.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportIdHasBeenSet = true; m_exportId = std::move(value); }

    /**
     * <p>The unique ID of the journal export job.</p>
     */
    inline void SetExportId(const char* value) { m_exportIdHasBeenSet = true; m_exportId.assign(value); }

    /**
     * <p>The unique ID of the journal export job.</p>
     */
    inline JournalS3ExportDescription& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>The unique ID of the journal export job.</p>
     */
    inline JournalS3ExportDescription& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the journal export job.</p>
     */
    inline JournalS3ExportDescription& WithExportId(const char* value) { SetExportId(value); return *this;}


    /**
     * <p>The date and time, in epoch time format, when the export job was created.
     * (Epoch time format is the number of seconds elapsed since 12:00:00 AM January 1,
     * 1970 UTC.)</p>
     */
    inline const Aws::Utils::DateTime& GetExportCreationTime() const{ return m_exportCreationTime; }

    /**
     * <p>The date and time, in epoch time format, when the export job was created.
     * (Epoch time format is the number of seconds elapsed since 12:00:00 AM January 1,
     * 1970 UTC.)</p>
     */
    inline bool ExportCreationTimeHasBeenSet() const { return m_exportCreationTimeHasBeenSet; }

    /**
     * <p>The date and time, in epoch time format, when the export job was created.
     * (Epoch time format is the number of seconds elapsed since 12:00:00 AM January 1,
     * 1970 UTC.)</p>
     */
    inline void SetExportCreationTime(const Aws::Utils::DateTime& value) { m_exportCreationTimeHasBeenSet = true; m_exportCreationTime = value; }

    /**
     * <p>The date and time, in epoch time format, when the export job was created.
     * (Epoch time format is the number of seconds elapsed since 12:00:00 AM January 1,
     * 1970 UTC.)</p>
     */
    inline void SetExportCreationTime(Aws::Utils::DateTime&& value) { m_exportCreationTimeHasBeenSet = true; m_exportCreationTime = std::move(value); }

    /**
     * <p>The date and time, in epoch time format, when the export job was created.
     * (Epoch time format is the number of seconds elapsed since 12:00:00 AM January 1,
     * 1970 UTC.)</p>
     */
    inline JournalS3ExportDescription& WithExportCreationTime(const Aws::Utils::DateTime& value) { SetExportCreationTime(value); return *this;}

    /**
     * <p>The date and time, in epoch time format, when the export job was created.
     * (Epoch time format is the number of seconds elapsed since 12:00:00 AM January 1,
     * 1970 UTC.)</p>
     */
    inline JournalS3ExportDescription& WithExportCreationTime(Aws::Utils::DateTime&& value) { SetExportCreationTime(std::move(value)); return *this;}


    /**
     * <p>The current state of the journal export job.</p>
     */
    inline const ExportStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the journal export job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the journal export job.</p>
     */
    inline void SetStatus(const ExportStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the journal export job.</p>
     */
    inline void SetStatus(ExportStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the journal export job.</p>
     */
    inline JournalS3ExportDescription& WithStatus(const ExportStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the journal export job.</p>
     */
    inline JournalS3ExportDescription& WithStatus(ExportStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The inclusive start date and time for the range of journal contents that are
     * specified in the original export request.</p>
     */
    inline const Aws::Utils::DateTime& GetInclusiveStartTime() const{ return m_inclusiveStartTime; }

    /**
     * <p>The inclusive start date and time for the range of journal contents that are
     * specified in the original export request.</p>
     */
    inline bool InclusiveStartTimeHasBeenSet() const { return m_inclusiveStartTimeHasBeenSet; }

    /**
     * <p>The inclusive start date and time for the range of journal contents that are
     * specified in the original export request.</p>
     */
    inline void SetInclusiveStartTime(const Aws::Utils::DateTime& value) { m_inclusiveStartTimeHasBeenSet = true; m_inclusiveStartTime = value; }

    /**
     * <p>The inclusive start date and time for the range of journal contents that are
     * specified in the original export request.</p>
     */
    inline void SetInclusiveStartTime(Aws::Utils::DateTime&& value) { m_inclusiveStartTimeHasBeenSet = true; m_inclusiveStartTime = std::move(value); }

    /**
     * <p>The inclusive start date and time for the range of journal contents that are
     * specified in the original export request.</p>
     */
    inline JournalS3ExportDescription& WithInclusiveStartTime(const Aws::Utils::DateTime& value) { SetInclusiveStartTime(value); return *this;}

    /**
     * <p>The inclusive start date and time for the range of journal contents that are
     * specified in the original export request.</p>
     */
    inline JournalS3ExportDescription& WithInclusiveStartTime(Aws::Utils::DateTime&& value) { SetInclusiveStartTime(std::move(value)); return *this;}


    /**
     * <p>The exclusive end date and time for the range of journal contents that are
     * specified in the original export request.</p>
     */
    inline const Aws::Utils::DateTime& GetExclusiveEndTime() const{ return m_exclusiveEndTime; }

    /**
     * <p>The exclusive end date and time for the range of journal contents that are
     * specified in the original export request.</p>
     */
    inline bool ExclusiveEndTimeHasBeenSet() const { return m_exclusiveEndTimeHasBeenSet; }

    /**
     * <p>The exclusive end date and time for the range of journal contents that are
     * specified in the original export request.</p>
     */
    inline void SetExclusiveEndTime(const Aws::Utils::DateTime& value) { m_exclusiveEndTimeHasBeenSet = true; m_exclusiveEndTime = value; }

    /**
     * <p>The exclusive end date and time for the range of journal contents that are
     * specified in the original export request.</p>
     */
    inline void SetExclusiveEndTime(Aws::Utils::DateTime&& value) { m_exclusiveEndTimeHasBeenSet = true; m_exclusiveEndTime = std::move(value); }

    /**
     * <p>The exclusive end date and time for the range of journal contents that are
     * specified in the original export request.</p>
     */
    inline JournalS3ExportDescription& WithExclusiveEndTime(const Aws::Utils::DateTime& value) { SetExclusiveEndTime(value); return *this;}

    /**
     * <p>The exclusive end date and time for the range of journal contents that are
     * specified in the original export request.</p>
     */
    inline JournalS3ExportDescription& WithExclusiveEndTime(Aws::Utils::DateTime&& value) { SetExclusiveEndTime(std::move(value)); return *this;}


    
    inline const S3ExportConfiguration& GetS3ExportConfiguration() const{ return m_s3ExportConfiguration; }

    
    inline bool S3ExportConfigurationHasBeenSet() const { return m_s3ExportConfigurationHasBeenSet; }

    
    inline void SetS3ExportConfiguration(const S3ExportConfiguration& value) { m_s3ExportConfigurationHasBeenSet = true; m_s3ExportConfiguration = value; }

    
    inline void SetS3ExportConfiguration(S3ExportConfiguration&& value) { m_s3ExportConfigurationHasBeenSet = true; m_s3ExportConfiguration = std::move(value); }

    
    inline JournalS3ExportDescription& WithS3ExportConfiguration(const S3ExportConfiguration& value) { SetS3ExportConfiguration(value); return *this;}

    
    inline JournalS3ExportDescription& WithS3ExportConfiguration(S3ExportConfiguration&& value) { SetS3ExportConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal export job to do the following:</p> <ul> <li> <p>Write objects
     * into your Amazon Simple Storage Service (Amazon S3) bucket.</p> </li> <li>
     * <p>(Optional) Use your customer master key (CMK) in AWS Key Management Service
     * (AWS KMS) for server-side encryption of your exported data.</p> </li> </ul>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal export job to do the following:</p> <ul> <li> <p>Write objects
     * into your Amazon Simple Storage Service (Amazon S3) bucket.</p> </li> <li>
     * <p>(Optional) Use your customer master key (CMK) in AWS Key Management Service
     * (AWS KMS) for server-side encryption of your exported data.</p> </li> </ul>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal export job to do the following:</p> <ul> <li> <p>Write objects
     * into your Amazon Simple Storage Service (Amazon S3) bucket.</p> </li> <li>
     * <p>(Optional) Use your customer master key (CMK) in AWS Key Management Service
     * (AWS KMS) for server-side encryption of your exported data.</p> </li> </ul>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal export job to do the following:</p> <ul> <li> <p>Write objects
     * into your Amazon Simple Storage Service (Amazon S3) bucket.</p> </li> <li>
     * <p>(Optional) Use your customer master key (CMK) in AWS Key Management Service
     * (AWS KMS) for server-side encryption of your exported data.</p> </li> </ul>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal export job to do the following:</p> <ul> <li> <p>Write objects
     * into your Amazon Simple Storage Service (Amazon S3) bucket.</p> </li> <li>
     * <p>(Optional) Use your customer master key (CMK) in AWS Key Management Service
     * (AWS KMS) for server-side encryption of your exported data.</p> </li> </ul>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal export job to do the following:</p> <ul> <li> <p>Write objects
     * into your Amazon Simple Storage Service (Amazon S3) bucket.</p> </li> <li>
     * <p>(Optional) Use your customer master key (CMK) in AWS Key Management Service
     * (AWS KMS) for server-side encryption of your exported data.</p> </li> </ul>
     */
    inline JournalS3ExportDescription& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal export job to do the following:</p> <ul> <li> <p>Write objects
     * into your Amazon Simple Storage Service (Amazon S3) bucket.</p> </li> <li>
     * <p>(Optional) Use your customer master key (CMK) in AWS Key Management Service
     * (AWS KMS) for server-side encryption of your exported data.</p> </li> </ul>
     */
    inline JournalS3ExportDescription& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal export job to do the following:</p> <ul> <li> <p>Write objects
     * into your Amazon Simple Storage Service (Amazon S3) bucket.</p> </li> <li>
     * <p>(Optional) Use your customer master key (CMK) in AWS Key Management Service
     * (AWS KMS) for server-side encryption of your exported data.</p> </li> </ul>
     */
    inline JournalS3ExportDescription& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_ledgerName;
    bool m_ledgerNameHasBeenSet;

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet;

    Aws::Utils::DateTime m_exportCreationTime;
    bool m_exportCreationTimeHasBeenSet;

    ExportStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_inclusiveStartTime;
    bool m_inclusiveStartTimeHasBeenSet;

    Aws::Utils::DateTime m_exclusiveEndTime;
    bool m_exclusiveEndTimeHasBeenSet;

    S3ExportConfiguration m_s3ExportConfiguration;
    bool m_s3ExportConfigurationHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
