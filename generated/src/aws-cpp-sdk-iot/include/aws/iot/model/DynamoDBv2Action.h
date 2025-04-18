﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PutItemInput.h>
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
   * <p>Describes an action to write to a DynamoDB table.</p> <p>This DynamoDB action
   * writes each attribute in the message payload into it's own column in the
   * DynamoDB table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DynamoDBv2Action">AWS
   * API Reference</a></p>
   */
  class DynamoDBv2Action
  {
  public:
    AWS_IOT_API DynamoDBv2Action() = default;
    AWS_IOT_API DynamoDBv2Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DynamoDBv2Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DynamoDBv2Action& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DynamoDB table to which the message data will be written. For
     * example:</p> <p> <code>{ "dynamoDBv2": { "roleArn": "aws:iam:12341251:my-role"
     * "putItem": { "tableName": "my-table" } } }</code> </p> <p>Each attribute in the
     * message payload will be written to a separate column in the DynamoDB
     * database.</p>
     */
    inline const PutItemInput& GetPutItem() const { return m_putItem; }
    inline bool PutItemHasBeenSet() const { return m_putItemHasBeenSet; }
    template<typename PutItemT = PutItemInput>
    void SetPutItem(PutItemT&& value) { m_putItemHasBeenSet = true; m_putItem = std::forward<PutItemT>(value); }
    template<typename PutItemT = PutItemInput>
    DynamoDBv2Action& WithPutItem(PutItemT&& value) { SetPutItem(std::forward<PutItemT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    PutItemInput m_putItem;
    bool m_putItemHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
