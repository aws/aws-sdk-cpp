/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/model/DynamoKeyType.h>
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
   * <p>Describes an action to write to a DynamoDB table.</p> <p>The
   * <code>tableName</code>, <code>hashKeyField</code>, and
   * <code>rangeKeyField</code> values must match the values used when you created
   * the table.</p> <p>The <code>hashKeyValue</code> and <code>rangeKeyvalue</code>
   * fields use a substitution template syntax. These templates provide data at
   * runtime. The syntax is as follows: ${<i>sql-expression</i>}.</p> <p>You can
   * specify any valid expression in a WHERE or SELECT clause, including JSON
   * properties, comparisons, calculations, and functions. For example, the following
   * field uses the third level of the topic:</p> <p> <code>"hashKeyValue":
   * "${topic(3)}"</code> </p> <p>The following field uses the timestamp:</p> <p>
   * <code>"rangeKeyValue": "${timestamp()}"</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DynamoDBAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API DynamoDBAction
  {
  public:
    DynamoDBAction();
    DynamoDBAction(Aws::Utils::Json::JsonView jsonValue);
    DynamoDBAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline DynamoDBAction& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline DynamoDBAction& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline DynamoDBAction& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline DynamoDBAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline DynamoDBAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline DynamoDBAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The type of operation to be performed. This follows the substitution
     * template, so it can be <code>${operation}</code>, but the substitution must
     * result in one of the following: <code>INSERT</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }

    /**
     * <p>The type of operation to be performed. This follows the substitution
     * template, so it can be <code>${operation}</code>, but the substitution must
     * result in one of the following: <code>INSERT</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The type of operation to be performed. This follows the substitution
     * template, so it can be <code>${operation}</code>, but the substitution must
     * result in one of the following: <code>INSERT</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>.</p>
     */
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The type of operation to be performed. This follows the substitution
     * template, so it can be <code>${operation}</code>, but the substitution must
     * result in one of the following: <code>INSERT</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>.</p>
     */
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The type of operation to be performed. This follows the substitution
     * template, so it can be <code>${operation}</code>, but the substitution must
     * result in one of the following: <code>INSERT</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>.</p>
     */
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }

    /**
     * <p>The type of operation to be performed. This follows the substitution
     * template, so it can be <code>${operation}</code>, but the substitution must
     * result in one of the following: <code>INSERT</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>.</p>
     */
    inline DynamoDBAction& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}

    /**
     * <p>The type of operation to be performed. This follows the substitution
     * template, so it can be <code>${operation}</code>, but the substitution must
     * result in one of the following: <code>INSERT</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>.</p>
     */
    inline DynamoDBAction& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}

    /**
     * <p>The type of operation to be performed. This follows the substitution
     * template, so it can be <code>${operation}</code>, but the substitution must
     * result in one of the following: <code>INSERT</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>.</p>
     */
    inline DynamoDBAction& WithOperation(const char* value) { SetOperation(value); return *this;}


    /**
     * <p>The hash key name.</p>
     */
    inline const Aws::String& GetHashKeyField() const{ return m_hashKeyField; }

    /**
     * <p>The hash key name.</p>
     */
    inline bool HashKeyFieldHasBeenSet() const { return m_hashKeyFieldHasBeenSet; }

    /**
     * <p>The hash key name.</p>
     */
    inline void SetHashKeyField(const Aws::String& value) { m_hashKeyFieldHasBeenSet = true; m_hashKeyField = value; }

    /**
     * <p>The hash key name.</p>
     */
    inline void SetHashKeyField(Aws::String&& value) { m_hashKeyFieldHasBeenSet = true; m_hashKeyField = std::move(value); }

    /**
     * <p>The hash key name.</p>
     */
    inline void SetHashKeyField(const char* value) { m_hashKeyFieldHasBeenSet = true; m_hashKeyField.assign(value); }

    /**
     * <p>The hash key name.</p>
     */
    inline DynamoDBAction& WithHashKeyField(const Aws::String& value) { SetHashKeyField(value); return *this;}

    /**
     * <p>The hash key name.</p>
     */
    inline DynamoDBAction& WithHashKeyField(Aws::String&& value) { SetHashKeyField(std::move(value)); return *this;}

    /**
     * <p>The hash key name.</p>
     */
    inline DynamoDBAction& WithHashKeyField(const char* value) { SetHashKeyField(value); return *this;}


    /**
     * <p>The hash key value.</p>
     */
    inline const Aws::String& GetHashKeyValue() const{ return m_hashKeyValue; }

    /**
     * <p>The hash key value.</p>
     */
    inline bool HashKeyValueHasBeenSet() const { return m_hashKeyValueHasBeenSet; }

    /**
     * <p>The hash key value.</p>
     */
    inline void SetHashKeyValue(const Aws::String& value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue = value; }

    /**
     * <p>The hash key value.</p>
     */
    inline void SetHashKeyValue(Aws::String&& value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue = std::move(value); }

    /**
     * <p>The hash key value.</p>
     */
    inline void SetHashKeyValue(const char* value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue.assign(value); }

    /**
     * <p>The hash key value.</p>
     */
    inline DynamoDBAction& WithHashKeyValue(const Aws::String& value) { SetHashKeyValue(value); return *this;}

    /**
     * <p>The hash key value.</p>
     */
    inline DynamoDBAction& WithHashKeyValue(Aws::String&& value) { SetHashKeyValue(std::move(value)); return *this;}

    /**
     * <p>The hash key value.</p>
     */
    inline DynamoDBAction& WithHashKeyValue(const char* value) { SetHashKeyValue(value); return *this;}


    /**
     * <p>The hash key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline const DynamoKeyType& GetHashKeyType() const{ return m_hashKeyType; }

    /**
     * <p>The hash key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline bool HashKeyTypeHasBeenSet() const { return m_hashKeyTypeHasBeenSet; }

    /**
     * <p>The hash key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline void SetHashKeyType(const DynamoKeyType& value) { m_hashKeyTypeHasBeenSet = true; m_hashKeyType = value; }

    /**
     * <p>The hash key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline void SetHashKeyType(DynamoKeyType&& value) { m_hashKeyTypeHasBeenSet = true; m_hashKeyType = std::move(value); }

    /**
     * <p>The hash key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline DynamoDBAction& WithHashKeyType(const DynamoKeyType& value) { SetHashKeyType(value); return *this;}

    /**
     * <p>The hash key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline DynamoDBAction& WithHashKeyType(DynamoKeyType&& value) { SetHashKeyType(std::move(value)); return *this;}


    /**
     * <p>The range key name.</p>
     */
    inline const Aws::String& GetRangeKeyField() const{ return m_rangeKeyField; }

    /**
     * <p>The range key name.</p>
     */
    inline bool RangeKeyFieldHasBeenSet() const { return m_rangeKeyFieldHasBeenSet; }

    /**
     * <p>The range key name.</p>
     */
    inline void SetRangeKeyField(const Aws::String& value) { m_rangeKeyFieldHasBeenSet = true; m_rangeKeyField = value; }

    /**
     * <p>The range key name.</p>
     */
    inline void SetRangeKeyField(Aws::String&& value) { m_rangeKeyFieldHasBeenSet = true; m_rangeKeyField = std::move(value); }

    /**
     * <p>The range key name.</p>
     */
    inline void SetRangeKeyField(const char* value) { m_rangeKeyFieldHasBeenSet = true; m_rangeKeyField.assign(value); }

    /**
     * <p>The range key name.</p>
     */
    inline DynamoDBAction& WithRangeKeyField(const Aws::String& value) { SetRangeKeyField(value); return *this;}

    /**
     * <p>The range key name.</p>
     */
    inline DynamoDBAction& WithRangeKeyField(Aws::String&& value) { SetRangeKeyField(std::move(value)); return *this;}

    /**
     * <p>The range key name.</p>
     */
    inline DynamoDBAction& WithRangeKeyField(const char* value) { SetRangeKeyField(value); return *this;}


    /**
     * <p>The range key value.</p>
     */
    inline const Aws::String& GetRangeKeyValue() const{ return m_rangeKeyValue; }

    /**
     * <p>The range key value.</p>
     */
    inline bool RangeKeyValueHasBeenSet() const { return m_rangeKeyValueHasBeenSet; }

    /**
     * <p>The range key value.</p>
     */
    inline void SetRangeKeyValue(const Aws::String& value) { m_rangeKeyValueHasBeenSet = true; m_rangeKeyValue = value; }

    /**
     * <p>The range key value.</p>
     */
    inline void SetRangeKeyValue(Aws::String&& value) { m_rangeKeyValueHasBeenSet = true; m_rangeKeyValue = std::move(value); }

    /**
     * <p>The range key value.</p>
     */
    inline void SetRangeKeyValue(const char* value) { m_rangeKeyValueHasBeenSet = true; m_rangeKeyValue.assign(value); }

    /**
     * <p>The range key value.</p>
     */
    inline DynamoDBAction& WithRangeKeyValue(const Aws::String& value) { SetRangeKeyValue(value); return *this;}

    /**
     * <p>The range key value.</p>
     */
    inline DynamoDBAction& WithRangeKeyValue(Aws::String&& value) { SetRangeKeyValue(std::move(value)); return *this;}

    /**
     * <p>The range key value.</p>
     */
    inline DynamoDBAction& WithRangeKeyValue(const char* value) { SetRangeKeyValue(value); return *this;}


    /**
     * <p>The range key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline const DynamoKeyType& GetRangeKeyType() const{ return m_rangeKeyType; }

    /**
     * <p>The range key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline bool RangeKeyTypeHasBeenSet() const { return m_rangeKeyTypeHasBeenSet; }

    /**
     * <p>The range key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline void SetRangeKeyType(const DynamoKeyType& value) { m_rangeKeyTypeHasBeenSet = true; m_rangeKeyType = value; }

    /**
     * <p>The range key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline void SetRangeKeyType(DynamoKeyType&& value) { m_rangeKeyTypeHasBeenSet = true; m_rangeKeyType = std::move(value); }

    /**
     * <p>The range key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline DynamoDBAction& WithRangeKeyType(const DynamoKeyType& value) { SetRangeKeyType(value); return *this;}

    /**
     * <p>The range key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline DynamoDBAction& WithRangeKeyType(DynamoKeyType&& value) { SetRangeKeyType(std::move(value)); return *this;}


    /**
     * <p>The action payload. This name can be customized.</p>
     */
    inline const Aws::String& GetPayloadField() const{ return m_payloadField; }

    /**
     * <p>The action payload. This name can be customized.</p>
     */
    inline bool PayloadFieldHasBeenSet() const { return m_payloadFieldHasBeenSet; }

    /**
     * <p>The action payload. This name can be customized.</p>
     */
    inline void SetPayloadField(const Aws::String& value) { m_payloadFieldHasBeenSet = true; m_payloadField = value; }

    /**
     * <p>The action payload. This name can be customized.</p>
     */
    inline void SetPayloadField(Aws::String&& value) { m_payloadFieldHasBeenSet = true; m_payloadField = std::move(value); }

    /**
     * <p>The action payload. This name can be customized.</p>
     */
    inline void SetPayloadField(const char* value) { m_payloadFieldHasBeenSet = true; m_payloadField.assign(value); }

    /**
     * <p>The action payload. This name can be customized.</p>
     */
    inline DynamoDBAction& WithPayloadField(const Aws::String& value) { SetPayloadField(value); return *this;}

    /**
     * <p>The action payload. This name can be customized.</p>
     */
    inline DynamoDBAction& WithPayloadField(Aws::String&& value) { SetPayloadField(std::move(value)); return *this;}

    /**
     * <p>The action payload. This name can be customized.</p>
     */
    inline DynamoDBAction& WithPayloadField(const char* value) { SetPayloadField(value); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_operation;
    bool m_operationHasBeenSet;

    Aws::String m_hashKeyField;
    bool m_hashKeyFieldHasBeenSet;

    Aws::String m_hashKeyValue;
    bool m_hashKeyValueHasBeenSet;

    DynamoKeyType m_hashKeyType;
    bool m_hashKeyTypeHasBeenSet;

    Aws::String m_rangeKeyField;
    bool m_rangeKeyFieldHasBeenSet;

    Aws::String m_rangeKeyValue;
    bool m_rangeKeyValueHasBeenSet;

    DynamoKeyType m_rangeKeyType;
    bool m_rangeKeyTypeHasBeenSet;

    Aws::String m_payloadField;
    bool m_payloadFieldHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
