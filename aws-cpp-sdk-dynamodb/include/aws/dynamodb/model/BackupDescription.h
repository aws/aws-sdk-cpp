﻿/**
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
    AWS_DYNAMODB_API BackupDescription();
    AWS_DYNAMODB_API BackupDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BackupDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the details of the backup created for the table. </p>
     */
    inline const BackupDetails& GetBackupDetails() const{ return m_backupDetails; }

    /**
     * <p>Contains the details of the backup created for the table. </p>
     */
    inline bool BackupDetailsHasBeenSet() const { return m_backupDetailsHasBeenSet; }

    /**
     * <p>Contains the details of the backup created for the table. </p>
     */
    inline void SetBackupDetails(const BackupDetails& value) { m_backupDetailsHasBeenSet = true; m_backupDetails = value; }

    /**
     * <p>Contains the details of the backup created for the table. </p>
     */
    inline void SetBackupDetails(BackupDetails&& value) { m_backupDetailsHasBeenSet = true; m_backupDetails = std::move(value); }

    /**
     * <p>Contains the details of the backup created for the table. </p>
     */
    inline BackupDescription& WithBackupDetails(const BackupDetails& value) { SetBackupDetails(value); return *this;}

    /**
     * <p>Contains the details of the backup created for the table. </p>
     */
    inline BackupDescription& WithBackupDetails(BackupDetails&& value) { SetBackupDetails(std::move(value)); return *this;}


    /**
     * <p>Contains the details of the table when the backup was created. </p>
     */
    inline const SourceTableDetails& GetSourceTableDetails() const{ return m_sourceTableDetails; }

    /**
     * <p>Contains the details of the table when the backup was created. </p>
     */
    inline bool SourceTableDetailsHasBeenSet() const { return m_sourceTableDetailsHasBeenSet; }

    /**
     * <p>Contains the details of the table when the backup was created. </p>
     */
    inline void SetSourceTableDetails(const SourceTableDetails& value) { m_sourceTableDetailsHasBeenSet = true; m_sourceTableDetails = value; }

    /**
     * <p>Contains the details of the table when the backup was created. </p>
     */
    inline void SetSourceTableDetails(SourceTableDetails&& value) { m_sourceTableDetailsHasBeenSet = true; m_sourceTableDetails = std::move(value); }

    /**
     * <p>Contains the details of the table when the backup was created. </p>
     */
    inline BackupDescription& WithSourceTableDetails(const SourceTableDetails& value) { SetSourceTableDetails(value); return *this;}

    /**
     * <p>Contains the details of the table when the backup was created. </p>
     */
    inline BackupDescription& WithSourceTableDetails(SourceTableDetails&& value) { SetSourceTableDetails(std::move(value)); return *this;}


    /**
     * <p>Contains the details of the features enabled on the table when the backup was
     * created. For example, LSIs, GSIs, streams, TTL.</p>
     */
    inline const SourceTableFeatureDetails& GetSourceTableFeatureDetails() const{ return m_sourceTableFeatureDetails; }

    /**
     * <p>Contains the details of the features enabled on the table when the backup was
     * created. For example, LSIs, GSIs, streams, TTL.</p>
     */
    inline bool SourceTableFeatureDetailsHasBeenSet() const { return m_sourceTableFeatureDetailsHasBeenSet; }

    /**
     * <p>Contains the details of the features enabled on the table when the backup was
     * created. For example, LSIs, GSIs, streams, TTL.</p>
     */
    inline void SetSourceTableFeatureDetails(const SourceTableFeatureDetails& value) { m_sourceTableFeatureDetailsHasBeenSet = true; m_sourceTableFeatureDetails = value; }

    /**
     * <p>Contains the details of the features enabled on the table when the backup was
     * created. For example, LSIs, GSIs, streams, TTL.</p>
     */
    inline void SetSourceTableFeatureDetails(SourceTableFeatureDetails&& value) { m_sourceTableFeatureDetailsHasBeenSet = true; m_sourceTableFeatureDetails = std::move(value); }

    /**
     * <p>Contains the details of the features enabled on the table when the backup was
     * created. For example, LSIs, GSIs, streams, TTL.</p>
     */
    inline BackupDescription& WithSourceTableFeatureDetails(const SourceTableFeatureDetails& value) { SetSourceTableFeatureDetails(value); return *this;}

    /**
     * <p>Contains the details of the features enabled on the table when the backup was
     * created. For example, LSIs, GSIs, streams, TTL.</p>
     */
    inline BackupDescription& WithSourceTableFeatureDetails(SourceTableFeatureDetails&& value) { SetSourceTableFeatureDetails(std::move(value)); return *this;}

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
