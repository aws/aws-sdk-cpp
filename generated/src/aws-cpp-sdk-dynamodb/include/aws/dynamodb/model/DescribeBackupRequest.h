/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeBackupRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API DescribeBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBackup"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline const Aws::String& GetBackupArn() const{ return m_backupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline bool BackupArnHasBeenSet() const { return m_backupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline void SetBackupArn(const Aws::String& value) { m_backupArnHasBeenSet = true; m_backupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline void SetBackupArn(Aws::String&& value) { m_backupArnHasBeenSet = true; m_backupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline void SetBackupArn(const char* value) { m_backupArnHasBeenSet = true; m_backupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline DescribeBackupRequest& WithBackupArn(const Aws::String& value) { SetBackupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline DescribeBackupRequest& WithBackupArn(Aws::String&& value) { SetBackupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline DescribeBackupRequest& WithBackupArn(const char* value) { SetBackupArn(value); return *this;}

  private:

    Aws::String m_backupArn;
    bool m_backupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
