/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/TimeToLiveSpecification.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of an <code>UpdateTimeToLive</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateTimeToLiveInput">AWS
   * API Reference</a></p>
   */
  class UpdateTimeToLiveRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API UpdateTimeToLiveRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTimeToLive"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the table to be configured. You can also provide the Amazon
     * Resource Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    UpdateTimeToLiveRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the settings used to enable or disable Time to Live for the
     * specified table.</p>
     */
    inline const TimeToLiveSpecification& GetTimeToLiveSpecification() const { return m_timeToLiveSpecification; }
    inline bool TimeToLiveSpecificationHasBeenSet() const { return m_timeToLiveSpecificationHasBeenSet; }
    template<typename TimeToLiveSpecificationT = TimeToLiveSpecification>
    void SetTimeToLiveSpecification(TimeToLiveSpecificationT&& value) { m_timeToLiveSpecificationHasBeenSet = true; m_timeToLiveSpecification = std::forward<TimeToLiveSpecificationT>(value); }
    template<typename TimeToLiveSpecificationT = TimeToLiveSpecification>
    UpdateTimeToLiveRequest& WithTimeToLiveSpecification(TimeToLiveSpecificationT&& value) { SetTimeToLiveSpecification(std::forward<TimeToLiveSpecificationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    TimeToLiveSpecification m_timeToLiveSpecification;
    bool m_timeToLiveSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
