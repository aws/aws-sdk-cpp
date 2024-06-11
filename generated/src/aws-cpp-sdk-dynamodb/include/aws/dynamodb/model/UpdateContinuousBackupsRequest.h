/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/PointInTimeRecoverySpecification.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class UpdateContinuousBackupsRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API UpdateContinuousBackupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContinuousBackups"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the table. You can also provide the Amazon Resource Name (ARN) of
     * the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline UpdateContinuousBackupsRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline UpdateContinuousBackupsRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline UpdateContinuousBackupsRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the settings used to enable point in time recovery.</p>
     */
    inline const PointInTimeRecoverySpecification& GetPointInTimeRecoverySpecification() const{ return m_pointInTimeRecoverySpecification; }
    inline bool PointInTimeRecoverySpecificationHasBeenSet() const { return m_pointInTimeRecoverySpecificationHasBeenSet; }
    inline void SetPointInTimeRecoverySpecification(const PointInTimeRecoverySpecification& value) { m_pointInTimeRecoverySpecificationHasBeenSet = true; m_pointInTimeRecoverySpecification = value; }
    inline void SetPointInTimeRecoverySpecification(PointInTimeRecoverySpecification&& value) { m_pointInTimeRecoverySpecificationHasBeenSet = true; m_pointInTimeRecoverySpecification = std::move(value); }
    inline UpdateContinuousBackupsRequest& WithPointInTimeRecoverySpecification(const PointInTimeRecoverySpecification& value) { SetPointInTimeRecoverySpecification(value); return *this;}
    inline UpdateContinuousBackupsRequest& WithPointInTimeRecoverySpecification(PointInTimeRecoverySpecification&& value) { SetPointInTimeRecoverySpecification(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    PointInTimeRecoverySpecification m_pointInTimeRecoverySpecification;
    bool m_pointInTimeRecoverySpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
