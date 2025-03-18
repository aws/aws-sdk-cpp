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
    AWS_IOT_API DynamoDBAction() = default;
    AWS_IOT_API DynamoDBAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DynamoDBAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    DynamoDBAction& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DynamoDBAction& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operation to be performed. This follows the substitution
     * template, so it can be <code>${operation}</code>, but the substitution must
     * result in one of the following: <code>INSERT</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>.</p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    DynamoDBAction& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash key name.</p>
     */
    inline const Aws::String& GetHashKeyField() const { return m_hashKeyField; }
    inline bool HashKeyFieldHasBeenSet() const { return m_hashKeyFieldHasBeenSet; }
    template<typename HashKeyFieldT = Aws::String>
    void SetHashKeyField(HashKeyFieldT&& value) { m_hashKeyFieldHasBeenSet = true; m_hashKeyField = std::forward<HashKeyFieldT>(value); }
    template<typename HashKeyFieldT = Aws::String>
    DynamoDBAction& WithHashKeyField(HashKeyFieldT&& value) { SetHashKeyField(std::forward<HashKeyFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash key value.</p>
     */
    inline const Aws::String& GetHashKeyValue() const { return m_hashKeyValue; }
    inline bool HashKeyValueHasBeenSet() const { return m_hashKeyValueHasBeenSet; }
    template<typename HashKeyValueT = Aws::String>
    void SetHashKeyValue(HashKeyValueT&& value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue = std::forward<HashKeyValueT>(value); }
    template<typename HashKeyValueT = Aws::String>
    DynamoDBAction& WithHashKeyValue(HashKeyValueT&& value) { SetHashKeyValue(std::forward<HashKeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline DynamoKeyType GetHashKeyType() const { return m_hashKeyType; }
    inline bool HashKeyTypeHasBeenSet() const { return m_hashKeyTypeHasBeenSet; }
    inline void SetHashKeyType(DynamoKeyType value) { m_hashKeyTypeHasBeenSet = true; m_hashKeyType = value; }
    inline DynamoDBAction& WithHashKeyType(DynamoKeyType value) { SetHashKeyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range key name.</p>
     */
    inline const Aws::String& GetRangeKeyField() const { return m_rangeKeyField; }
    inline bool RangeKeyFieldHasBeenSet() const { return m_rangeKeyFieldHasBeenSet; }
    template<typename RangeKeyFieldT = Aws::String>
    void SetRangeKeyField(RangeKeyFieldT&& value) { m_rangeKeyFieldHasBeenSet = true; m_rangeKeyField = std::forward<RangeKeyFieldT>(value); }
    template<typename RangeKeyFieldT = Aws::String>
    DynamoDBAction& WithRangeKeyField(RangeKeyFieldT&& value) { SetRangeKeyField(std::forward<RangeKeyFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range key value.</p>
     */
    inline const Aws::String& GetRangeKeyValue() const { return m_rangeKeyValue; }
    inline bool RangeKeyValueHasBeenSet() const { return m_rangeKeyValueHasBeenSet; }
    template<typename RangeKeyValueT = Aws::String>
    void SetRangeKeyValue(RangeKeyValueT&& value) { m_rangeKeyValueHasBeenSet = true; m_rangeKeyValue = std::forward<RangeKeyValueT>(value); }
    template<typename RangeKeyValueT = Aws::String>
    DynamoDBAction& WithRangeKeyValue(RangeKeyValueT&& value) { SetRangeKeyValue(std::forward<RangeKeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range key type. Valid values are "STRING" or "NUMBER"</p>
     */
    inline DynamoKeyType GetRangeKeyType() const { return m_rangeKeyType; }
    inline bool RangeKeyTypeHasBeenSet() const { return m_rangeKeyTypeHasBeenSet; }
    inline void SetRangeKeyType(DynamoKeyType value) { m_rangeKeyTypeHasBeenSet = true; m_rangeKeyType = value; }
    inline DynamoDBAction& WithRangeKeyType(DynamoKeyType value) { SetRangeKeyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action payload. This name can be customized.</p>
     */
    inline const Aws::String& GetPayloadField() const { return m_payloadField; }
    inline bool PayloadFieldHasBeenSet() const { return m_payloadFieldHasBeenSet; }
    template<typename PayloadFieldT = Aws::String>
    void SetPayloadField(PayloadFieldT&& value) { m_payloadFieldHasBeenSet = true; m_payloadField = std::forward<PayloadFieldT>(value); }
    template<typename PayloadFieldT = Aws::String>
    DynamoDBAction& WithPayloadField(PayloadFieldT&& value) { SetPayloadField(std::forward<PayloadFieldT>(value)); return *this;}
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

    DynamoKeyType m_hashKeyType{DynamoKeyType::NOT_SET};
    bool m_hashKeyTypeHasBeenSet = false;

    Aws::String m_rangeKeyField;
    bool m_rangeKeyFieldHasBeenSet = false;

    Aws::String m_rangeKeyValue;
    bool m_rangeKeyValueHasBeenSet = false;

    DynamoKeyType m_rangeKeyType{DynamoKeyType::NOT_SET};
    bool m_rangeKeyTypeHasBeenSet = false;

    Aws::String m_payloadField;
    bool m_payloadFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
