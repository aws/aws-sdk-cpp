/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the DynamoActionVS action that specifies the DynamoDB table to
   * which the message data will be written.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PutItemInput">AWS
   * API Reference</a></p>
   */
  class PutItemInput
  {
  public:
    AWS_IOT_API PutItemInput();
    AWS_IOT_API PutItemInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PutItemInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The table where the message data will be written.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The table where the message data will be written.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The table where the message data will be written.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The table where the message data will be written.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The table where the message data will be written.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The table where the message data will be written.</p>
     */
    inline PutItemInput& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The table where the message data will be written.</p>
     */
    inline PutItemInput& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The table where the message data will be written.</p>
     */
    inline PutItemInput& WithTableName(const char* value) { SetTableName(value); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
