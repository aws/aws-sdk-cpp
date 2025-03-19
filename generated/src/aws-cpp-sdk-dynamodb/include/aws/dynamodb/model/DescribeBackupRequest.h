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
    AWS_DYNAMODB_API DescribeBackupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBackup"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline const Aws::String& GetBackupArn() const { return m_backupArn; }
    inline bool BackupArnHasBeenSet() const { return m_backupArnHasBeenSet; }
    template<typename BackupArnT = Aws::String>
    void SetBackupArn(BackupArnT&& value) { m_backupArnHasBeenSet = true; m_backupArn = std::forward<BackupArnT>(value); }
    template<typename BackupArnT = Aws::String>
    DescribeBackupRequest& WithBackupArn(BackupArnT&& value) { SetBackupArn(std::forward<BackupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupArn;
    bool m_backupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
