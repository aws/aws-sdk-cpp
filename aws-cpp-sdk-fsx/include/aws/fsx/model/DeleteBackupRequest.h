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
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   * <p>The request object for <code>DeleteBackup</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteBackupRequest">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API DeleteBackupRequest : public FSxRequest
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
     * <p>The ID of the backup you want to delete.</p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p>The ID of the backup you want to delete.</p>
     */
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    /**
     * <p>The ID of the backup you want to delete.</p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    /**
     * <p>The ID of the backup you want to delete.</p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    /**
     * <p>The ID of the backup you want to delete.</p>
     */
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    /**
     * <p>The ID of the backup you want to delete.</p>
     */
    inline DeleteBackupRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p>The ID of the backup you want to delete.</p>
     */
    inline DeleteBackupRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the backup you want to delete.</p>
     */
    inline DeleteBackupRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline DeleteBackupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline DeleteBackupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent deletion. This is automatically filled on your behalf when
     * using the AWS CLI or SDK.</p>
     */
    inline DeleteBackupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
