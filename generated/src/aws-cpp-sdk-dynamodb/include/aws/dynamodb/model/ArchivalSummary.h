/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Contains details of a table archival operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ArchivalSummary">AWS
   * API Reference</a></p>
   */
  class ArchivalSummary
  {
  public:
    AWS_DYNAMODB_API ArchivalSummary();
    AWS_DYNAMODB_API ArchivalSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ArchivalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time when table archival was initiated by DynamoDB, in UNIX
     * epoch time format.</p>
     */
    inline const Aws::Utils::DateTime& GetArchivalDateTime() const{ return m_archivalDateTime; }

    /**
     * <p>The date and time when table archival was initiated by DynamoDB, in UNIX
     * epoch time format.</p>
     */
    inline bool ArchivalDateTimeHasBeenSet() const { return m_archivalDateTimeHasBeenSet; }

    /**
     * <p>The date and time when table archival was initiated by DynamoDB, in UNIX
     * epoch time format.</p>
     */
    inline void SetArchivalDateTime(const Aws::Utils::DateTime& value) { m_archivalDateTimeHasBeenSet = true; m_archivalDateTime = value; }

    /**
     * <p>The date and time when table archival was initiated by DynamoDB, in UNIX
     * epoch time format.</p>
     */
    inline void SetArchivalDateTime(Aws::Utils::DateTime&& value) { m_archivalDateTimeHasBeenSet = true; m_archivalDateTime = std::move(value); }

    /**
     * <p>The date and time when table archival was initiated by DynamoDB, in UNIX
     * epoch time format.</p>
     */
    inline ArchivalSummary& WithArchivalDateTime(const Aws::Utils::DateTime& value) { SetArchivalDateTime(value); return *this;}

    /**
     * <p>The date and time when table archival was initiated by DynamoDB, in UNIX
     * epoch time format.</p>
     */
    inline ArchivalSummary& WithArchivalDateTime(Aws::Utils::DateTime&& value) { SetArchivalDateTime(std::move(value)); return *this;}


    /**
     * <p>The reason DynamoDB archived the table. Currently, the only possible value
     * is:</p> <ul> <li> <p> <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> - The
     * table was archived due to the table's KMS key being inaccessible for more than
     * seven days. An On-Demand backup was created at the archival time.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetArchivalReason() const{ return m_archivalReason; }

    /**
     * <p>The reason DynamoDB archived the table. Currently, the only possible value
     * is:</p> <ul> <li> <p> <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> - The
     * table was archived due to the table's KMS key being inaccessible for more than
     * seven days. An On-Demand backup was created at the archival time.</p> </li>
     * </ul>
     */
    inline bool ArchivalReasonHasBeenSet() const { return m_archivalReasonHasBeenSet; }

    /**
     * <p>The reason DynamoDB archived the table. Currently, the only possible value
     * is:</p> <ul> <li> <p> <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> - The
     * table was archived due to the table's KMS key being inaccessible for more than
     * seven days. An On-Demand backup was created at the archival time.</p> </li>
     * </ul>
     */
    inline void SetArchivalReason(const Aws::String& value) { m_archivalReasonHasBeenSet = true; m_archivalReason = value; }

    /**
     * <p>The reason DynamoDB archived the table. Currently, the only possible value
     * is:</p> <ul> <li> <p> <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> - The
     * table was archived due to the table's KMS key being inaccessible for more than
     * seven days. An On-Demand backup was created at the archival time.</p> </li>
     * </ul>
     */
    inline void SetArchivalReason(Aws::String&& value) { m_archivalReasonHasBeenSet = true; m_archivalReason = std::move(value); }

    /**
     * <p>The reason DynamoDB archived the table. Currently, the only possible value
     * is:</p> <ul> <li> <p> <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> - The
     * table was archived due to the table's KMS key being inaccessible for more than
     * seven days. An On-Demand backup was created at the archival time.</p> </li>
     * </ul>
     */
    inline void SetArchivalReason(const char* value) { m_archivalReasonHasBeenSet = true; m_archivalReason.assign(value); }

    /**
     * <p>The reason DynamoDB archived the table. Currently, the only possible value
     * is:</p> <ul> <li> <p> <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> - The
     * table was archived due to the table's KMS key being inaccessible for more than
     * seven days. An On-Demand backup was created at the archival time.</p> </li>
     * </ul>
     */
    inline ArchivalSummary& WithArchivalReason(const Aws::String& value) { SetArchivalReason(value); return *this;}

    /**
     * <p>The reason DynamoDB archived the table. Currently, the only possible value
     * is:</p> <ul> <li> <p> <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> - The
     * table was archived due to the table's KMS key being inaccessible for more than
     * seven days. An On-Demand backup was created at the archival time.</p> </li>
     * </ul>
     */
    inline ArchivalSummary& WithArchivalReason(Aws::String&& value) { SetArchivalReason(std::move(value)); return *this;}

    /**
     * <p>The reason DynamoDB archived the table. Currently, the only possible value
     * is:</p> <ul> <li> <p> <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> - The
     * table was archived due to the table's KMS key being inaccessible for more than
     * seven days. An On-Demand backup was created at the archival time.</p> </li>
     * </ul>
     */
    inline ArchivalSummary& WithArchivalReason(const char* value) { SetArchivalReason(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the backup the table was archived to, when
     * applicable in the archival reason. If you wish to restore this backup to the
     * same table name, you will need to delete the original table.</p>
     */
    inline const Aws::String& GetArchivalBackupArn() const{ return m_archivalBackupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the backup the table was archived to, when
     * applicable in the archival reason. If you wish to restore this backup to the
     * same table name, you will need to delete the original table.</p>
     */
    inline bool ArchivalBackupArnHasBeenSet() const { return m_archivalBackupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the backup the table was archived to, when
     * applicable in the archival reason. If you wish to restore this backup to the
     * same table name, you will need to delete the original table.</p>
     */
    inline void SetArchivalBackupArn(const Aws::String& value) { m_archivalBackupArnHasBeenSet = true; m_archivalBackupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the backup the table was archived to, when
     * applicable in the archival reason. If you wish to restore this backup to the
     * same table name, you will need to delete the original table.</p>
     */
    inline void SetArchivalBackupArn(Aws::String&& value) { m_archivalBackupArnHasBeenSet = true; m_archivalBackupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the backup the table was archived to, when
     * applicable in the archival reason. If you wish to restore this backup to the
     * same table name, you will need to delete the original table.</p>
     */
    inline void SetArchivalBackupArn(const char* value) { m_archivalBackupArnHasBeenSet = true; m_archivalBackupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the backup the table was archived to, when
     * applicable in the archival reason. If you wish to restore this backup to the
     * same table name, you will need to delete the original table.</p>
     */
    inline ArchivalSummary& WithArchivalBackupArn(const Aws::String& value) { SetArchivalBackupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the backup the table was archived to, when
     * applicable in the archival reason. If you wish to restore this backup to the
     * same table name, you will need to delete the original table.</p>
     */
    inline ArchivalSummary& WithArchivalBackupArn(Aws::String&& value) { SetArchivalBackupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the backup the table was archived to, when
     * applicable in the archival reason. If you wish to restore this backup to the
     * same table name, you will need to delete the original table.</p>
     */
    inline ArchivalSummary& WithArchivalBackupArn(const char* value) { SetArchivalBackupArn(value); return *this;}

  private:

    Aws::Utils::DateTime m_archivalDateTime;
    bool m_archivalDateTimeHasBeenSet = false;

    Aws::String m_archivalReason;
    bool m_archivalReasonHasBeenSet = false;

    Aws::String m_archivalBackupArn;
    bool m_archivalBackupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
