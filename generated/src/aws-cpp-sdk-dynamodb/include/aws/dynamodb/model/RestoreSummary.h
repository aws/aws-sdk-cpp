/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RestoreSummary
  {
  public:
    AWS_DYNAMODB_API RestoreSummary() = default;
    AWS_DYNAMODB_API RestoreSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API RestoreSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the backup from which the table was
     * restored.</p>
     */
    inline const Aws::String& GetSourceBackupArn() const { return m_sourceBackupArn; }
    inline bool SourceBackupArnHasBeenSet() const { return m_sourceBackupArnHasBeenSet; }
    template<typename SourceBackupArnT = Aws::String>
    void SetSourceBackupArn(SourceBackupArnT&& value) { m_sourceBackupArnHasBeenSet = true; m_sourceBackupArn = std::forward<SourceBackupArnT>(value); }
    template<typename SourceBackupArnT = Aws::String>
    RestoreSummary& WithSourceBackupArn(SourceBackupArnT&& value) { SetSourceBackupArn(std::forward<SourceBackupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source table of the backup that is being restored.</p>
     */
    inline const Aws::String& GetSourceTableArn() const { return m_sourceTableArn; }
    inline bool SourceTableArnHasBeenSet() const { return m_sourceTableArnHasBeenSet; }
    template<typename SourceTableArnT = Aws::String>
    void SetSourceTableArn(SourceTableArnT&& value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn = std::forward<SourceTableArnT>(value); }
    template<typename SourceTableArnT = Aws::String>
    RestoreSummary& WithSourceTableArn(SourceTableArnT&& value) { SetSourceTableArn(std::forward<SourceTableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Point in time or source backup time.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreDateTime() const { return m_restoreDateTime; }
    inline bool RestoreDateTimeHasBeenSet() const { return m_restoreDateTimeHasBeenSet; }
    template<typename RestoreDateTimeT = Aws::Utils::DateTime>
    void SetRestoreDateTime(RestoreDateTimeT&& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = std::forward<RestoreDateTimeT>(value); }
    template<typename RestoreDateTimeT = Aws::Utils::DateTime>
    RestoreSummary& WithRestoreDateTime(RestoreDateTimeT&& value) { SetRestoreDateTime(std::forward<RestoreDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if a restore is in progress or not.</p>
     */
    inline bool GetRestoreInProgress() const { return m_restoreInProgress; }
    inline bool RestoreInProgressHasBeenSet() const { return m_restoreInProgressHasBeenSet; }
    inline void SetRestoreInProgress(bool value) { m_restoreInProgressHasBeenSet = true; m_restoreInProgress = value; }
    inline RestoreSummary& WithRestoreInProgress(bool value) { SetRestoreInProgress(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceBackupArn;
    bool m_sourceBackupArnHasBeenSet = false;

    Aws::String m_sourceTableArn;
    bool m_sourceTableArnHasBeenSet = false;

    Aws::Utils::DateTime m_restoreDateTime{};
    bool m_restoreDateTimeHasBeenSet = false;

    bool m_restoreInProgress{false};
    bool m_restoreInProgressHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
