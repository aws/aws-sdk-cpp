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
    AWS_DYNAMODB_API UpdateContinuousBackupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContinuousBackups"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the table. You can also provide the Amazon Resource Name (ARN) of
     * the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    UpdateContinuousBackupsRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the settings used to enable point in time recovery.</p>
     */
    inline const PointInTimeRecoverySpecification& GetPointInTimeRecoverySpecification() const { return m_pointInTimeRecoverySpecification; }
    inline bool PointInTimeRecoverySpecificationHasBeenSet() const { return m_pointInTimeRecoverySpecificationHasBeenSet; }
    template<typename PointInTimeRecoverySpecificationT = PointInTimeRecoverySpecification>
    void SetPointInTimeRecoverySpecification(PointInTimeRecoverySpecificationT&& value) { m_pointInTimeRecoverySpecificationHasBeenSet = true; m_pointInTimeRecoverySpecification = std::forward<PointInTimeRecoverySpecificationT>(value); }
    template<typename PointInTimeRecoverySpecificationT = PointInTimeRecoverySpecification>
    UpdateContinuousBackupsRequest& WithPointInTimeRecoverySpecification(PointInTimeRecoverySpecificationT&& value) { SetPointInTimeRecoverySpecification(std::forward<PointInTimeRecoverySpecificationT>(value)); return *this;}
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
