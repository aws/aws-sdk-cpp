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
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class AWS_SECRETSMANAGER_API UpdateSecretVersionStageRequest : public SecretsManagerRequest
  {
  public:
    UpdateSecretVersionStageRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecretVersionStage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p>
     */
    inline UpdateSecretVersionStageRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p>
     */
    inline UpdateSecretVersionStageRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p>
     */
    inline UpdateSecretVersionStageRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>The list of staging labels to add to this version.</p>
     */
    inline const Aws::String& GetVersionStage() const{ return m_versionStage; }

    /**
     * <p>The list of staging labels to add to this version.</p>
     */
    inline void SetVersionStage(const Aws::String& value) { m_versionStageHasBeenSet = true; m_versionStage = value; }

    /**
     * <p>The list of staging labels to add to this version.</p>
     */
    inline void SetVersionStage(Aws::String&& value) { m_versionStageHasBeenSet = true; m_versionStage = std::move(value); }

    /**
     * <p>The list of staging labels to add to this version.</p>
     */
    inline void SetVersionStage(const char* value) { m_versionStageHasBeenSet = true; m_versionStage.assign(value); }

    /**
     * <p>The list of staging labels to add to this version.</p>
     */
    inline UpdateSecretVersionStageRequest& WithVersionStage(const Aws::String& value) { SetVersionStage(value); return *this;}

    /**
     * <p>The list of staging labels to add to this version.</p>
     */
    inline UpdateSecretVersionStageRequest& WithVersionStage(Aws::String&& value) { SetVersionStage(std::move(value)); return *this;}

    /**
     * <p>The list of staging labels to add to this version.</p>
     */
    inline UpdateSecretVersionStageRequest& WithVersionStage(const char* value) { SetVersionStage(value); return *this;}


    /**
     * <p>(Optional) Specifies the secret version ID of the version that the staging
     * labels are to be removed from.</p> <p>If you want to move a label to a new
     * version, you do not have to explicitly remove it with this parameter. Adding a
     * label using the <code>MoveToVersionId</code> parameter automatically removes it
     * from the old version. However, if you do include both the "MoveTo" and
     * "RemoveFrom" parameters, then the move is successful only if the staging labels
     * are actually present on the "RemoveFrom" version. If a staging label was on a
     * different version than "RemoveFrom", then the request fails.</p>
     */
    inline const Aws::String& GetRemoveFromVersionId() const{ return m_removeFromVersionId; }

    /**
     * <p>(Optional) Specifies the secret version ID of the version that the staging
     * labels are to be removed from.</p> <p>If you want to move a label to a new
     * version, you do not have to explicitly remove it with this parameter. Adding a
     * label using the <code>MoveToVersionId</code> parameter automatically removes it
     * from the old version. However, if you do include both the "MoveTo" and
     * "RemoveFrom" parameters, then the move is successful only if the staging labels
     * are actually present on the "RemoveFrom" version. If a staging label was on a
     * different version than "RemoveFrom", then the request fails.</p>
     */
    inline void SetRemoveFromVersionId(const Aws::String& value) { m_removeFromVersionIdHasBeenSet = true; m_removeFromVersionId = value; }

    /**
     * <p>(Optional) Specifies the secret version ID of the version that the staging
     * labels are to be removed from.</p> <p>If you want to move a label to a new
     * version, you do not have to explicitly remove it with this parameter. Adding a
     * label using the <code>MoveToVersionId</code> parameter automatically removes it
     * from the old version. However, if you do include both the "MoveTo" and
     * "RemoveFrom" parameters, then the move is successful only if the staging labels
     * are actually present on the "RemoveFrom" version. If a staging label was on a
     * different version than "RemoveFrom", then the request fails.</p>
     */
    inline void SetRemoveFromVersionId(Aws::String&& value) { m_removeFromVersionIdHasBeenSet = true; m_removeFromVersionId = std::move(value); }

    /**
     * <p>(Optional) Specifies the secret version ID of the version that the staging
     * labels are to be removed from.</p> <p>If you want to move a label to a new
     * version, you do not have to explicitly remove it with this parameter. Adding a
     * label using the <code>MoveToVersionId</code> parameter automatically removes it
     * from the old version. However, if you do include both the "MoveTo" and
     * "RemoveFrom" parameters, then the move is successful only if the staging labels
     * are actually present on the "RemoveFrom" version. If a staging label was on a
     * different version than "RemoveFrom", then the request fails.</p>
     */
    inline void SetRemoveFromVersionId(const char* value) { m_removeFromVersionIdHasBeenSet = true; m_removeFromVersionId.assign(value); }

    /**
     * <p>(Optional) Specifies the secret version ID of the version that the staging
     * labels are to be removed from.</p> <p>If you want to move a label to a new
     * version, you do not have to explicitly remove it with this parameter. Adding a
     * label using the <code>MoveToVersionId</code> parameter automatically removes it
     * from the old version. However, if you do include both the "MoveTo" and
     * "RemoveFrom" parameters, then the move is successful only if the staging labels
     * are actually present on the "RemoveFrom" version. If a staging label was on a
     * different version than "RemoveFrom", then the request fails.</p>
     */
    inline UpdateSecretVersionStageRequest& WithRemoveFromVersionId(const Aws::String& value) { SetRemoveFromVersionId(value); return *this;}

    /**
     * <p>(Optional) Specifies the secret version ID of the version that the staging
     * labels are to be removed from.</p> <p>If you want to move a label to a new
     * version, you do not have to explicitly remove it with this parameter. Adding a
     * label using the <code>MoveToVersionId</code> parameter automatically removes it
     * from the old version. However, if you do include both the "MoveTo" and
     * "RemoveFrom" parameters, then the move is successful only if the staging labels
     * are actually present on the "RemoveFrom" version. If a staging label was on a
     * different version than "RemoveFrom", then the request fails.</p>
     */
    inline UpdateSecretVersionStageRequest& WithRemoveFromVersionId(Aws::String&& value) { SetRemoveFromVersionId(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies the secret version ID of the version that the staging
     * labels are to be removed from.</p> <p>If you want to move a label to a new
     * version, you do not have to explicitly remove it with this parameter. Adding a
     * label using the <code>MoveToVersionId</code> parameter automatically removes it
     * from the old version. However, if you do include both the "MoveTo" and
     * "RemoveFrom" parameters, then the move is successful only if the staging labels
     * are actually present on the "RemoveFrom" version. If a staging label was on a
     * different version than "RemoveFrom", then the request fails.</p>
     */
    inline UpdateSecretVersionStageRequest& WithRemoveFromVersionId(const char* value) { SetRemoveFromVersionId(value); return *this;}


    /**
     * <p>(Optional) The secret version ID that you want to add the staging labels
     * to.</p> <p>If any of the staging labels are already attached to a different
     * version of the secret, then they are removed from that version before adding
     * them to this version.</p>
     */
    inline const Aws::String& GetMoveToVersionId() const{ return m_moveToVersionId; }

    /**
     * <p>(Optional) The secret version ID that you want to add the staging labels
     * to.</p> <p>If any of the staging labels are already attached to a different
     * version of the secret, then they are removed from that version before adding
     * them to this version.</p>
     */
    inline void SetMoveToVersionId(const Aws::String& value) { m_moveToVersionIdHasBeenSet = true; m_moveToVersionId = value; }

    /**
     * <p>(Optional) The secret version ID that you want to add the staging labels
     * to.</p> <p>If any of the staging labels are already attached to a different
     * version of the secret, then they are removed from that version before adding
     * them to this version.</p>
     */
    inline void SetMoveToVersionId(Aws::String&& value) { m_moveToVersionIdHasBeenSet = true; m_moveToVersionId = std::move(value); }

    /**
     * <p>(Optional) The secret version ID that you want to add the staging labels
     * to.</p> <p>If any of the staging labels are already attached to a different
     * version of the secret, then they are removed from that version before adding
     * them to this version.</p>
     */
    inline void SetMoveToVersionId(const char* value) { m_moveToVersionIdHasBeenSet = true; m_moveToVersionId.assign(value); }

    /**
     * <p>(Optional) The secret version ID that you want to add the staging labels
     * to.</p> <p>If any of the staging labels are already attached to a different
     * version of the secret, then they are removed from that version before adding
     * them to this version.</p>
     */
    inline UpdateSecretVersionStageRequest& WithMoveToVersionId(const Aws::String& value) { SetMoveToVersionId(value); return *this;}

    /**
     * <p>(Optional) The secret version ID that you want to add the staging labels
     * to.</p> <p>If any of the staging labels are already attached to a different
     * version of the secret, then they are removed from that version before adding
     * them to this version.</p>
     */
    inline UpdateSecretVersionStageRequest& WithMoveToVersionId(Aws::String&& value) { SetMoveToVersionId(std::move(value)); return *this;}

    /**
     * <p>(Optional) The secret version ID that you want to add the staging labels
     * to.</p> <p>If any of the staging labels are already attached to a different
     * version of the secret, then they are removed from that version before adding
     * them to this version.</p>
     */
    inline UpdateSecretVersionStageRequest& WithMoveToVersionId(const char* value) { SetMoveToVersionId(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;

    Aws::String m_versionStage;
    bool m_versionStageHasBeenSet;

    Aws::String m_removeFromVersionId;
    bool m_removeFromVersionIdHasBeenSet;

    Aws::String m_moveToVersionId;
    bool m_moveToVersionIdHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
