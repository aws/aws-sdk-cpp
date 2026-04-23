/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains details for the restore.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/RestoreSummary">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API RestoreSummary
  {
  public:
    RestoreSummary();
    RestoreSummary(Aws::Utils::Json::JsonView jsonValue);
    RestoreSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN of the backup from which the table was restored.</p>
     */
    inline const Aws::String& GetSourceBackupArn() const{ return m_sourceBackupArn; }

    /**
     * <p>ARN of the backup from which the table was restored.</p>
     */
    inline bool SourceBackupArnHasBeenSet() const { return m_sourceBackupArnHasBeenSet; }

    /**
     * <p>ARN of the backup from which the table was restored.</p>
     */
    inline void SetSourceBackupArn(const Aws::String& value) { m_sourceBackupArnHasBeenSet = true; m_sourceBackupArn = value; }

    /**
     * <p>ARN of the backup from which the table was restored.</p>
     */
    inline void SetSourceBackupArn(Aws::String&& value) { m_sourceBackupArnHasBeenSet = true; m_sourceBackupArn = std::move(value); }

    /**
     * <p>ARN of the backup from which the table was restored.</p>
     */
    inline void SetSourceBackupArn(const char* value) { m_sourceBackupArnHasBeenSet = true; m_sourceBackupArn.assign(value); }

    /**
     * <p>ARN of the backup from which the table was restored.</p>
     */
    inline RestoreSummary& WithSourceBackupArn(const Aws::String& value) { SetSourceBackupArn(value); return *this;}

    /**
     * <p>ARN of the backup from which the table was restored.</p>
     */
    inline RestoreSummary& WithSourceBackupArn(Aws::String&& value) { SetSourceBackupArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the backup from which the table was restored.</p>
     */
    inline RestoreSummary& WithSourceBackupArn(const char* value) { SetSourceBackupArn(value); return *this;}


    /**
     * <p>ARN of the source table of the backup that is being restored.</p>
     */
    inline const Aws::String& GetSourceTableArn() const{ return m_sourceTableArn; }

    /**
     * <p>ARN of the source table of the backup that is being restored.</p>
     */
    inline bool SourceTableArnHasBeenSet() const { return m_sourceTableArnHasBeenSet; }

    /**
     * <p>ARN of the source table of the backup that is being restored.</p>
     */
    inline void SetSourceTableArn(const Aws::String& value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn = value; }

    /**
     * <p>ARN of the source table of the backup that is being restored.</p>
     */
    inline void SetSourceTableArn(Aws::String&& value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn = std::move(value); }

    /**
     * <p>ARN of the source table of the backup that is being restored.</p>
     */
    inline void SetSourceTableArn(const char* value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn.assign(value); }

    /**
     * <p>ARN of the source table of the backup that is being restored.</p>
     */
    inline RestoreSummary& WithSourceTableArn(const Aws::String& value) { SetSourceTableArn(value); return *this;}

    /**
     * <p>ARN of the source table of the backup that is being restored.</p>
     */
    inline RestoreSummary& WithSourceTableArn(Aws::String&& value) { SetSourceTableArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the source table of the backup that is being restored.</p>
     */
    inline RestoreSummary& WithSourceTableArn(const char* value) { SetSourceTableArn(value); return *this;}


    /**
     * <p>Point in time or source backup time.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreDateTime() const{ return m_restoreDateTime; }

    /**
     * <p>Point in time or source backup time.</p>
     */
    inline bool RestoreDateTimeHasBeenSet() const { return m_restoreDateTimeHasBeenSet; }

    /**
     * <p>Point in time or source backup time.</p>
     */
    inline void SetRestoreDateTime(const Aws::Utils::DateTime& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = value; }

    /**
     * <p>Point in time or source backup time.</p>
     */
    inline void SetRestoreDateTime(Aws::Utils::DateTime&& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = std::move(value); }

    /**
     * <p>Point in time or source backup time.</p>
     */
    inline RestoreSummary& WithRestoreDateTime(const Aws::Utils::DateTime& value) { SetRestoreDateTime(value); return *this;}

    /**
     * <p>Point in time or source backup time.</p>
     */
    inline RestoreSummary& WithRestoreDateTime(Aws::Utils::DateTime&& value) { SetRestoreDateTime(std::move(value)); return *this;}


    /**
     * <p>Indicates if a restore is in progress or not.</p>
     */
    inline bool GetRestoreInProgress() const{ return m_restoreInProgress; }

    /**
     * <p>Indicates if a restore is in progress or not.</p>
     */
    inline bool RestoreInProgressHasBeenSet() const { return m_restoreInProgressHasBeenSet; }

    /**
     * <p>Indicates if a restore is in progress or not.</p>
     */
    inline void SetRestoreInProgress(bool value) { m_restoreInProgressHasBeenSet = true; m_restoreInProgress = value; }

    /**
     * <p>Indicates if a restore is in progress or not.</p>
     */
    inline RestoreSummary& WithRestoreInProgress(bool value) { SetRestoreInProgress(value); return *this;}

  private:

    Aws::String m_sourceBackupArn;
    bool m_sourceBackupArnHasBeenSet;

    Aws::String m_sourceTableArn;
    bool m_sourceTableArnHasBeenSet;

    Aws::Utils::DateTime m_restoreDateTime;
    bool m_restoreDateTimeHasBeenSet;

    bool m_restoreInProgress;
    bool m_restoreInProgressHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
