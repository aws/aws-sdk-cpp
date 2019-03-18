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
  class AWS_IOT_API DynamoDBv2Action
  {
  public:
    DynamoDBv2Action();
    DynamoDBv2Action(Aws::Utils::Json::JsonView jsonValue);
    DynamoDBv2Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline DynamoDBv2Action& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline DynamoDBv2Action& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access to the DynamoDB table.</p>
     */
    inline DynamoDBv2Action& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Specifies the DynamoDB table to which the message data will be written. For
     * example:</p> <p> <code>{ "dynamoDBv2": { "roleArn": "aws:iam:12341251:my-role"
     * "putItem": { "tableName": "my-table" } } }</code> </p> <p>Each attribute in the
     * message payload will be written to a separate column in the DynamoDB
     * database.</p>
     */
    inline const PutItemInput& GetPutItem() const{ return m_putItem; }

    /**
     * <p>Specifies the DynamoDB table to which the message data will be written. For
     * example:</p> <p> <code>{ "dynamoDBv2": { "roleArn": "aws:iam:12341251:my-role"
     * "putItem": { "tableName": "my-table" } } }</code> </p> <p>Each attribute in the
     * message payload will be written to a separate column in the DynamoDB
     * database.</p>
     */
    inline bool PutItemHasBeenSet() const { return m_putItemHasBeenSet; }

    /**
     * <p>Specifies the DynamoDB table to which the message data will be written. For
     * example:</p> <p> <code>{ "dynamoDBv2": { "roleArn": "aws:iam:12341251:my-role"
     * "putItem": { "tableName": "my-table" } } }</code> </p> <p>Each attribute in the
     * message payload will be written to a separate column in the DynamoDB
     * database.</p>
     */
    inline void SetPutItem(const PutItemInput& value) { m_putItemHasBeenSet = true; m_putItem = value; }

    /**
     * <p>Specifies the DynamoDB table to which the message data will be written. For
     * example:</p> <p> <code>{ "dynamoDBv2": { "roleArn": "aws:iam:12341251:my-role"
     * "putItem": { "tableName": "my-table" } } }</code> </p> <p>Each attribute in the
     * message payload will be written to a separate column in the DynamoDB
     * database.</p>
     */
    inline void SetPutItem(PutItemInput&& value) { m_putItemHasBeenSet = true; m_putItem = std::move(value); }

    /**
     * <p>Specifies the DynamoDB table to which the message data will be written. For
     * example:</p> <p> <code>{ "dynamoDBv2": { "roleArn": "aws:iam:12341251:my-role"
     * "putItem": { "tableName": "my-table" } } }</code> </p> <p>Each attribute in the
     * message payload will be written to a separate column in the DynamoDB
     * database.</p>
     */
    inline DynamoDBv2Action& WithPutItem(const PutItemInput& value) { SetPutItem(value); return *this;}

    /**
     * <p>Specifies the DynamoDB table to which the message data will be written. For
     * example:</p> <p> <code>{ "dynamoDBv2": { "roleArn": "aws:iam:12341251:my-role"
     * "putItem": { "tableName": "my-table" } } }</code> </p> <p>Each attribute in the
     * message payload will be written to a separate column in the DynamoDB
     * database.</p>
     */
    inline DynamoDBv2Action& WithPutItem(PutItemInput&& value) { SetPutItem(std::move(value)); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    PutItemInput m_putItem;
    bool m_putItemHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
