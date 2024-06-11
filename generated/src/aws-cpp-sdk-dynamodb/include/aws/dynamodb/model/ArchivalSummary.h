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


    ///@{
    /**
     * <p>The date and time when table archival was initiated by DynamoDB, in UNIX
     * epoch time format.</p>
     */
    inline const Aws::Utils::DateTime& GetArchivalDateTime() const{ return m_archivalDateTime; }
    inline bool ArchivalDateTimeHasBeenSet() const { return m_archivalDateTimeHasBeenSet; }
    inline void SetArchivalDateTime(const Aws::Utils::DateTime& value) { m_archivalDateTimeHasBeenSet = true; m_archivalDateTime = value; }
    inline void SetArchivalDateTime(Aws::Utils::DateTime&& value) { m_archivalDateTimeHasBeenSet = true; m_archivalDateTime = std::move(value); }
    inline ArchivalSummary& WithArchivalDateTime(const Aws::Utils::DateTime& value) { SetArchivalDateTime(value); return *this;}
    inline ArchivalSummary& WithArchivalDateTime(Aws::Utils::DateTime&& value) { SetArchivalDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason DynamoDB archived the table. Currently, the only possible value
     * is:</p> <ul> <li> <p> <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> - The
     * table was archived due to the table's KMS key being inaccessible for more than
     * seven days. An On-Demand backup was created at the archival time.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetArchivalReason() const{ return m_archivalReason; }
    inline bool ArchivalReasonHasBeenSet() const { return m_archivalReasonHasBeenSet; }
    inline void SetArchivalReason(const Aws::String& value) { m_archivalReasonHasBeenSet = true; m_archivalReason = value; }
    inline void SetArchivalReason(Aws::String&& value) { m_archivalReasonHasBeenSet = true; m_archivalReason = std::move(value); }
    inline void SetArchivalReason(const char* value) { m_archivalReasonHasBeenSet = true; m_archivalReason.assign(value); }
    inline ArchivalSummary& WithArchivalReason(const Aws::String& value) { SetArchivalReason(value); return *this;}
    inline ArchivalSummary& WithArchivalReason(Aws::String&& value) { SetArchivalReason(std::move(value)); return *this;}
    inline ArchivalSummary& WithArchivalReason(const char* value) { SetArchivalReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the backup the table was archived to, when
     * applicable in the archival reason. If you wish to restore this backup to the
     * same table name, you will need to delete the original table.</p>
     */
    inline const Aws::String& GetArchivalBackupArn() const{ return m_archivalBackupArn; }
    inline bool ArchivalBackupArnHasBeenSet() const { return m_archivalBackupArnHasBeenSet; }
    inline void SetArchivalBackupArn(const Aws::String& value) { m_archivalBackupArnHasBeenSet = true; m_archivalBackupArn = value; }
    inline void SetArchivalBackupArn(Aws::String&& value) { m_archivalBackupArnHasBeenSet = true; m_archivalBackupArn = std::move(value); }
    inline void SetArchivalBackupArn(const char* value) { m_archivalBackupArnHasBeenSet = true; m_archivalBackupArn.assign(value); }
    inline ArchivalSummary& WithArchivalBackupArn(const Aws::String& value) { SetArchivalBackupArn(value); return *this;}
    inline ArchivalSummary& WithArchivalBackupArn(Aws::String&& value) { SetArchivalBackupArn(std::move(value)); return *this;}
    inline ArchivalSummary& WithArchivalBackupArn(const char* value) { SetArchivalBackupArn(value); return *this;}
    ///@}
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
