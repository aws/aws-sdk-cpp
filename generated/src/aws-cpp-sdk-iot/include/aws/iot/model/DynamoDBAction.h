/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DynamoDBAction
  {
  public:
    AWS_IOT_API DynamoDBAction();
    AWS_IOT_API DynamoDBAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DynamoDBAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline DynamoDBAction& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline DynamoDBAction& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline DynamoDBAction& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline DynamoDBAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DynamoDBAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DynamoDBAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operation to be performed. This follows the substitution
     * template, so it can be <code>${operation}</code>, but the substitution must
     * result in one of the following: <code>INSERT</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }
    inline DynamoDBAction& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline DynamoDBAction& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline DynamoDBAction& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash key name.</p>
     */
    inline const Aws::String& GetHashKeyField() const{ return m_hashKeyField; }
    inline bool HashKeyFieldHasBeenSet() const { return m_hashKeyFieldHasBeenSet; }
    inline void SetHashKeyField(const Aws::String& value) { m_hashKeyFieldHasBeenSet = true; m_hashKeyField = value; }
    inline void SetHashKeyField(Aws::String&& value) { m_hashKeyFieldHasBeenSet = true; m_hashKeyField = std::move(value); }
    inline void SetHashKeyField(const char* value) { m_hashKeyFieldHasBeenSet = true; m_hashKeyField.assign(value); }
    inline DynamoDBAction& WithHashKeyField(const Aws::String& value) { SetHashKeyField(value); return *this;}
    inline DynamoDBAction& WithHashKeyField(Aws::String&& value) { SetHashKeyField(std::move(value)); return *this;}
    inline DynamoDBAction& WithHashKeyField(const char* value) { SetHashKeyField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash key value.</p>
     */
    inline const Aws::String& GetHashKeyValue() const{ return m_hashKeyValue; }
    inline bool HashKeyValueHasBeenSet() const { return m_hashKeyValueHasBeenSet; }
    inline void SetHashKeyValue(const Aws::String& value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue = value; }
    inline void SetHashKeyValue(Aws::String&& value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue = std::move(value); }
    inline void SetHashKeyValue(const char* value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue.assign(value); }
    inline DynamoDBAction& WithHashKeyValue(const Aws::String& value) { SetHashKeyValue(value); return *this;}
    inline DynamoDBAction& WithHashKeyValue(Aws::String&& value) { SetHashKeyValue(std::move(value)); return *this;}
    inline DynamoDBAction& WithHashKeyValue(const char* value) { SetHashKeyValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline const DynamoKeyType& GetHashKeyType() const{ return m_hashKeyType; }
    inline bool HashKeyTypeHasBeenSet() const { return m_hashKeyTypeHasBeenSet; }
    inline void SetHashKeyType(const DynamoKeyType& value) { m_hashKeyTypeHasBeenSet = true; m_hashKeyType = value; }
    inline void SetHashKeyType(DynamoKeyType&& value) { m_hashKeyTypeHasBeenSet = true; m_hashKeyType = std::move(value); }
    inline DynamoDBAction& WithHashKeyType(const DynamoKeyType& value) { SetHashKeyType(value); return *this;}
    inline DynamoDBAction& WithHashKeyType(DynamoKeyType&& value) { SetHashKeyType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range key name.</p>
     */
    inline const Aws::String& GetRangeKeyField() const{ return m_rangeKeyField; }
    inline bool RangeKeyFieldHasBeenSet() const { return m_rangeKeyFieldHasBeenSet; }
    inline void SetRangeKeyField(const Aws::String& value) { m_rangeKeyFieldHasBeenSet = true; m_rangeKeyField = value; }
    inline void SetRangeKeyField(Aws::String&& value) { m_rangeKeyFieldHasBeenSet = true; m_rangeKeyField = std::move(value); }
    inline void SetRangeKeyField(const char* value) { m_rangeKeyFieldHasBeenSet = true; m_rangeKeyField.assign(value); }
    inline DynamoDBAction& WithRangeKeyField(const Aws::String& value) { SetRangeKeyField(value); return *this;}
    inline DynamoDBAction& WithRangeKeyField(Aws::String&& value) { SetRangeKeyField(std::move(value)); return *this;}
    inline DynamoDBAction& WithRangeKeyField(const char* value) { SetRangeKeyField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range key value.</p>
     */
    inline const Aws::String& GetRangeKeyValue() const{ return m_rangeKeyValue; }
    inline bool RangeKeyValueHasBeenSet() const { return m_rangeKeyValueHasBeenSet; }
    inline void SetRangeKeyValue(const Aws::String& value) { m_rangeKeyValueHasBeenSet = true; m_rangeKeyValue = value; }
    inline void SetRangeKeyValue(Aws::String&& value) { m_rangeKeyValueHasBeenSet = true; m_rangeKeyValue = std::move(value); }
    inline void SetRangeKeyValue(const char* value) { m_rangeKeyValueHasBeenSet = true; m_rangeKeyValue.assign(value); }
    inline DynamoDBAction& WithRangeKeyValue(const Aws::String& value) { SetRangeKeyValue(value); return *this;}
    inline DynamoDBAction& WithRangeKeyValue(Aws::String&& value) { SetRangeKeyValue(std::move(value)); return *this;}
    inline DynamoDBAction& WithRangeKeyValue(const char* value) { SetRangeKeyValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline const DynamoKeyType& GetRangeKeyType() const{ return m_rangeKeyType; }
    inline bool RangeKeyTypeHasBeenSet() const { return m_rangeKeyTypeHasBeenSet; }
    inline void SetRangeKeyType(const DynamoKeyType& value) { m_rangeKeyTypeHasBeenSet = true; m_rangeKeyType = value; }
    inline void SetRangeKeyType(DynamoKeyType&& value) { m_rangeKeyTypeHasBeenSet = true; m_rangeKeyType = std::move(value); }
    inline DynamoDBAction& WithRangeKeyType(const DynamoKeyType& value) { SetRangeKeyType(value); return *this;}
    inline DynamoDBAction& WithRangeKeyType(DynamoKeyType&& value) { SetRangeKeyType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action payload. This name can be customized.</p>
     */
    inline const Aws::String& GetPayloadField() const{ return m_payloadField; }
    inline bool PayloadFieldHasBeenSet() const { return m_payloadFieldHasBeenSet; }
    inline void SetPayloadField(const Aws::String& value) { m_payloadFieldHasBeenSet = true; m_payloadField = value; }
    inline void SetPayloadField(Aws::String&& value) { m_payloadFieldHasBeenSet = true; m_payloadField = std::move(value); }
    inline void SetPayloadField(const char* value) { m_payloadFieldHasBeenSet = true; m_payloadField.assign(value); }
    inline DynamoDBAction& WithPayloadField(const Aws::String& value) { SetPayloadField(value); return *this;}
    inline DynamoDBAction& WithPayloadField(Aws::String&& value) { SetPayloadField(std::move(value)); return *this;}
    inline DynamoDBAction& WithPayloadField(const char* value) { SetPayloadField(value); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_hashKeyField;
    bool m_hashKeyFieldHasBeenSet = false;

    Aws::String m_hashKeyValue;
    bool m_hashKeyValueHasBeenSet = false;

    DynamoKeyType m_hashKeyType;
    bool m_hashKeyTypeHasBeenSet = false;

    Aws::String m_rangeKeyField;
    bool m_rangeKeyFieldHasBeenSet = false;

    Aws::String m_rangeKeyValue;
    bool m_rangeKeyValueHasBeenSet = false;

    DynamoKeyType m_rangeKeyType;
    bool m_rangeKeyTypeHasBeenSet = false;

    Aws::String m_payloadField;
    bool m_payloadFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
