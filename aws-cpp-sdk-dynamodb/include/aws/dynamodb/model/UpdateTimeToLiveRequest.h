/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/TimeToLiveSpecification.h>

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
  class AWS_DYNAMODB_API UpdateTimeToLiveRequest : public DynamoDBRequest
  {
  public:
    UpdateTimeToLiveRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the table to be configured.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table to be configured.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table to be configured.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

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
    inline UpdateTimeToLiveRequest& WithTableName(Aws::String&& value) { SetTableName(value); return *this;}

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
    inline void SetTimeToLiveSpecification(const TimeToLiveSpecification& value) { m_timeToLiveSpecificationHasBeenSet = true; m_timeToLiveSpecification = value; }

    /**
     * <p>Represents the settings used to enable or disable Time to Live for the
     * specified table.</p>
     */
    inline void SetTimeToLiveSpecification(TimeToLiveSpecification&& value) { m_timeToLiveSpecificationHasBeenSet = true; m_timeToLiveSpecification = value; }

    /**
     * <p>Represents the settings used to enable or disable Time to Live for the
     * specified table.</p>
     */
    inline UpdateTimeToLiveRequest& WithTimeToLiveSpecification(const TimeToLiveSpecification& value) { SetTimeToLiveSpecification(value); return *this;}

    /**
     * <p>Represents the settings used to enable or disable Time to Live for the
     * specified table.</p>
     */
    inline UpdateTimeToLiveRequest& WithTimeToLiveSpecification(TimeToLiveSpecification&& value) { SetTimeToLiveSpecification(value); return *this;}

  private:
    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;
    TimeToLiveSpecification m_timeToLiveSpecification;
    bool m_timeToLiveSpecificationHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
