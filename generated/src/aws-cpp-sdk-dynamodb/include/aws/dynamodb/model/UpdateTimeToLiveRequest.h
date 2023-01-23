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
    AWS_DYNAMODB_API UpdateTimeToLiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTimeToLive"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the table to be configured.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table to be configured.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table to be configured.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table to be configured.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table to be configured.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table to be configured.</p>
     */
    inline UpdateTimeToLiveRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table to be configured.</p>
     */
    inline UpdateTimeToLiveRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table to be configured.</p>
     */
    inline UpdateTimeToLiveRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>Represents the settings used to enable or disable Time to Live for the
     * specified table.</p>
     */
    inline const TimeToLiveSpecification& GetTimeToLiveSpecification() const{ return m_timeToLiveSpecification; }

    /**
     * <p>Represents the settings used to enable or disable Time to Live for the
     * specified table.</p>
     */
    inline bool TimeToLiveSpecificationHasBeenSet() const { return m_timeToLiveSpecificationHasBeenSet; }

    /**
     * <p>Represents the settings used to enable or disable Time to Live for the
     * specified table.</p>
     */
    inline void SetTimeToLiveSpecification(const TimeToLiveSpecification& value) { m_timeToLiveSpecificationHasBeenSet = true; m_timeToLiveSpecification = value; }

    /**
     * <p>Represents the settings used to enable or disable Time to Live for the
     * specified table.</p>
     */
    inline void SetTimeToLiveSpecification(TimeToLiveSpecification&& value) { m_timeToLiveSpecificationHasBeenSet = true; m_timeToLiveSpecification = std::move(value); }

    /**
     * <p>Represents the settings used to enable or disable Time to Live for the
     * specified table.</p>
     */
    inline UpdateTimeToLiveRequest& WithTimeToLiveSpecification(const TimeToLiveSpecification& value) { SetTimeToLiveSpecification(value); return *this;}

    /**
     * <p>Represents the settings used to enable or disable Time to Live for the
     * specified table.</p>
     */
    inline UpdateTimeToLiveRequest& WithTimeToLiveSpecification(TimeToLiveSpecification&& value) { SetTimeToLiveSpecification(std::move(value)); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    TimeToLiveSpecification m_timeToLiveSpecification;
    bool m_timeToLiveSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
