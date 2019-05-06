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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class AWS_DYNAMODB_API DeleteBackupRequest : public DynamoDBRequest
  {
  public:
    DeleteBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBackup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN associated with the backup.</p>
     */
    inline const Aws::String& GetBackupArn() const{ return m_backupArn; }

    /**
     * <p>The ARN associated with the backup.</p>
     */
    inline bool BackupArnHasBeenSet() const { return m_backupArnHasBeenSet; }

    /**
     * <p>The ARN associated with the backup.</p>
     */
    inline void SetBackupArn(const Aws::String& value) { m_backupArnHasBeenSet = true; m_backupArn = value; }

    /**
     * <p>The ARN associated with the backup.</p>
     */
    inline void SetBackupArn(Aws::String&& value) { m_backupArnHasBeenSet = true; m_backupArn = std::move(value); }

    /**
     * <p>The ARN associated with the backup.</p>
     */
    inline void SetBackupArn(const char* value) { m_backupArnHasBeenSet = true; m_backupArn.assign(value); }

    /**
     * <p>The ARN associated with the backup.</p>
     */
    inline DeleteBackupRequest& WithBackupArn(const Aws::String& value) { SetBackupArn(value); return *this;}

    /**
     * <p>The ARN associated with the backup.</p>
     */
    inline DeleteBackupRequest& WithBackupArn(Aws::String&& value) { SetBackupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN associated with the backup.</p>
     */
    inline DeleteBackupRequest& WithBackupArn(const char* value) { SetBackupArn(value); return *this;}

  private:

    Aws::String m_backupArn;
    bool m_backupArnHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
