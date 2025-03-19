/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BackupDetails.h>
#include <aws/dynamodb/model/SourceTableDetails.h>
#include <aws/dynamodb/model/SourceTableFeatureDetails.h>
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
   * <p>Contains the description of the backup created for the table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BackupDescription">AWS
   * API Reference</a></p>
   */
  class BackupDescription
  {
  public:
    AWS_DYNAMODB_API BackupDescription() = default;
    AWS_DYNAMODB_API BackupDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BackupDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the details of the backup created for the table. </p>
     */
    inline const BackupDetails& GetBackupDetails() const { return m_backupDetails; }
    inline bool BackupDetailsHasBeenSet() const { return m_backupDetailsHasBeenSet; }
    template<typename BackupDetailsT = BackupDetails>
    void SetBackupDetails(BackupDetailsT&& value) { m_backupDetailsHasBeenSet = true; m_backupDetails = std::forward<BackupDetailsT>(value); }
    template<typename BackupDetailsT = BackupDetails>
    BackupDescription& WithBackupDetails(BackupDetailsT&& value) { SetBackupDetails(std::forward<BackupDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the table when the backup was created. </p>
     */
    inline const SourceTableDetails& GetSourceTableDetails() const { return m_sourceTableDetails; }
    inline bool SourceTableDetailsHasBeenSet() const { return m_sourceTableDetailsHasBeenSet; }
    template<typename SourceTableDetailsT = SourceTableDetails>
    void SetSourceTableDetails(SourceTableDetailsT&& value) { m_sourceTableDetailsHasBeenSet = true; m_sourceTableDetails = std::forward<SourceTableDetailsT>(value); }
    template<typename SourceTableDetailsT = SourceTableDetails>
    BackupDescription& WithSourceTableDetails(SourceTableDetailsT&& value) { SetSourceTableDetails(std::forward<SourceTableDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the features enabled on the table when the backup was
     * created. For example, LSIs, GSIs, streams, TTL.</p>
     */
    inline const SourceTableFeatureDetails& GetSourceTableFeatureDetails() const { return m_sourceTableFeatureDetails; }
    inline bool SourceTableFeatureDetailsHasBeenSet() const { return m_sourceTableFeatureDetailsHasBeenSet; }
    template<typename SourceTableFeatureDetailsT = SourceTableFeatureDetails>
    void SetSourceTableFeatureDetails(SourceTableFeatureDetailsT&& value) { m_sourceTableFeatureDetailsHasBeenSet = true; m_sourceTableFeatureDetails = std::forward<SourceTableFeatureDetailsT>(value); }
    template<typename SourceTableFeatureDetailsT = SourceTableFeatureDetails>
    BackupDescription& WithSourceTableFeatureDetails(SourceTableFeatureDetailsT&& value) { SetSourceTableFeatureDetails(std::forward<SourceTableFeatureDetailsT>(value)); return *this;}
    ///@}
  private:

    BackupDetails m_backupDetails;
    bool m_backupDetailsHasBeenSet = false;

    SourceTableDetails m_sourceTableDetails;
    bool m_sourceTableDetailsHasBeenSet = false;

    SourceTableFeatureDetails m_sourceTableFeatureDetails;
    bool m_sourceTableFeatureDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
