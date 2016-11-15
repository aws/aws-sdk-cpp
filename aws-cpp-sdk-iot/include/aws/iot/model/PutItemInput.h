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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the DynamoActionVS action that specifies the DynamoDB table to
   * which the message data will be written.</p>
   */
  class AWS_IOT_API PutItemInput
  {
  public:
    PutItemInput();
    PutItemInput(const Aws::Utils::Json::JsonValue& jsonValue);
    PutItemInput& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The table where the message data will be written</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The table where the message data will be written</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The table where the message data will be written</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The table where the message data will be written</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The table where the message data will be written</p>
     */
    inline PutItemInput& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The table where the message data will be written</p>
     */
    inline PutItemInput& WithTableName(Aws::String&& value) { SetTableName(value); return *this;}

    /**
     * <p>The table where the message data will be written</p>
     */
    inline PutItemInput& WithTableName(const char* value) { SetTableName(value); return *this;}

  private:
    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
