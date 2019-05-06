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
     * name of the secret.</p> <note> <p>If you specify an ARN, we generally recommend
     * that you specify a complete ARN. You can specify a partial ARN too—for example,
     * if you don’t include the final hyphen and six random characters that Secrets
     * Manager adds at the end of the ARN when you created the secret. A partial ARN
     * match can work as long as it uniquely matches only one secret. However, if your
     * secret has a name that ends in a hyphen followed by six characters (before
     * Secrets Manager adds the hyphen and six characters to the ARN) and you try to
     * use that as a partial ARN, then those characters cause Secrets Manager to assume
     * that you’re specifying a complete ARN. This confusion can cause unexpected
     * results. To avoid this situation, we recommend that you don’t create secret
     * names that end with a hyphen followed by six characters.</p> </note>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p> <note> <p>If you specify an ARN, we generally recommend
     * that you specify a complete ARN. You can specify a partial ARN too—for example,
     * if you don’t include the final hyphen and six random characters that Secrets
     * Manager adds at the end of the ARN when you created the secret. A partial ARN
     * match can work as long as it uniquely matches only one secret. However, if your
     * secret has a name that ends in a hyphen followed by six characters (before
     * Secrets Manager adds the hyphen and six characters to the ARN) and you try to
     * use that as a partial ARN, then those characters cause Secrets Manager to assume
     * that you’re specifying a complete ARN. This confusion can cause unexpected
     * results. To avoid this situation, we recommend that you don’t create secret
     * names that end with a hyphen followed by six characters.</p> </note>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p> <note> <p>If you specify an ARN, we generally recommend
     * that you specify a complete ARN. You can specify a partial ARN too—for example,
     * if you don’t include the final hyphen and six random characters that Secrets
     * Manager adds at the end of the ARN when you created the secret. A partial ARN
     * match can work as long as it uniquely matches only one secret. However, if your
     * secret has a name that ends in a hyphen followed by six characters (before
     * Secrets Manager adds the hyphen and six characters to the ARN) and you try to
     * use that as a partial ARN, then those characters cause Secrets Manager to assume
     * that you’re specifying a complete ARN. This confusion can cause unexpected
     * results. To avoid this situation, we recommend that you don’t create secret
     * names that end with a hyphen followed by six characters.</p> </note>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p> <note> <p>If you specify an ARN, we generally recommend
     * that you specify a complete ARN. You can specify a partial ARN too—for example,
     * if you don’t include the final hyphen and six random characters that Secrets
     * Manager adds at the end of the ARN when you created the secret. A partial ARN
     * match can work as long as it uniquely matches only one secret. However, if your
     * secret has a name that ends in a hyphen followed by six characters (before
     * Secrets Manager adds the hyphen and six characters to the ARN) and you try to
     * use that as a partial ARN, then those characters cause Secrets Manager to assume
     * that you’re specifying a complete ARN. This confusion can cause unexpected
     * results. To avoid this situation, we recommend that you don’t create secret
     * names that end with a hyphen followed by six characters.</p> </note>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p> <note> <p>If you specify an ARN, we generally recommend
     * that you specify a complete ARN. You can specify a partial ARN too—for example,
     * if you don’t include the final hyphen and six random characters that Secrets
     * Manager adds at the end of the ARN when you created the secret. A partial ARN
     * match can work as long as it uniquely matches only one secret. However, if your
     * secret has a name that ends in a hyphen followed by six characters (before
     * Secrets Manager adds the hyphen and six characters to the ARN) and you try to
     * use that as a partial ARN, then those characters cause Secrets Manager to assume
     * that you’re specifying a complete ARN. This confusion can cause unexpected
     * results. To avoid this situation, we recommend that you don’t create secret
     * names that end with a hyphen followed by six characters.</p> </note>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p> <note> <p>If you specify an ARN, we generally recommend
     * that you specify a complete ARN. You can specify a partial ARN too—for example,
     * if you don’t include the final hyphen and six random characters that Secrets
     * Manager adds at the end of the ARN when you created the secret. A partial ARN
     * match can work as long as it uniquely matches only one secret. However, if your
     * secret has a name that ends in a hyphen followed by six characters (before
     * Secrets Manager adds the hyphen and six characters to the ARN) and you try to
     * use that as a partial ARN, then those characters cause Secrets Manager to assume
     * that you’re specifying a complete ARN. This confusion can cause unexpected
     * results. To avoid this situation, we recommend that you don’t create secret
     * names that end with a hyphen followed by six characters.</p> </note>
     */
    inline UpdateSecretVersionStageRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p> <note> <p>If you specify an ARN, we generally recommend
     * that you specify a complete ARN. You can specify a partial ARN too—for example,
     * if you don’t include the final hyphen and six random characters that Secrets
     * Manager adds at the end of the ARN when you created the secret. A partial ARN
     * match can work as long as it uniquely matches only one secret. However, if your
     * secret has a name that ends in a hyphen followed by six characters (before
     * Secrets Manager adds the hyphen and six characters to the ARN) and you try to
     * use that as a partial ARN, then those characters cause Secrets Manager to assume
     * that you’re specifying a complete ARN. This confusion can cause unexpected
     * results. To avoid this situation, we recommend that you don’t create secret
     * names that end with a hyphen followed by six characters.</p> </note>
     */
    inline UpdateSecretVersionStageRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret with the version whose list of staging labels you want
     * to modify. You can specify either the Amazon Resource Name (ARN) or the friendly
     * name of the secret.</p> <note> <p>If you specify an ARN, we generally recommend
     * that you specify a complete ARN. You can specify a partial ARN too—for example,
     * if you don’t include the final hyphen and six random characters that Secrets
     * Manager adds at the end of the ARN when you created the secret. A partial ARN
     * match can work as long as it uniquely matches only one secret. However, if your
     * secret has a name that ends in a hyphen followed by six characters (before
     * Secrets Manager adds the hyphen and six characters to the ARN) and you try to
     * use that as a partial ARN, then those characters cause Secrets Manager to assume
     * that you’re specifying a complete ARN. This confusion can cause unexpected
     * results. To avoid this situation, we recommend that you don’t create secret
     * names that end with a hyphen followed by six characters.</p> </note>
     */
    inline UpdateSecretVersionStageRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>The staging label to add to this version.</p>
     */
    inline const Aws::String& GetVersionStage() const{ return m_versionStage; }

    /**
     * <p>The staging label to add to this version.</p>
     */
    inline bool VersionStageHasBeenSet() const { return m_versionStageHasBeenSet; }

    /**
     * <p>The staging label to add to this version.</p>
     */
    inline void SetVersionStage(const Aws::String& value) { m_versionStageHasBeenSet = true; m_versionStage = value; }

    /**
     * <p>The staging label to add to this version.</p>
     */
    inline void SetVersionStage(Aws::String&& value) { m_versionStageHasBeenSet = true; m_versionStage = std::move(value); }

    /**
     * <p>The staging label to add to this version.</p>
     */
    inline void SetVersionStage(const char* value) { m_versionStageHasBeenSet = true; m_versionStage.assign(value); }

    /**
     * <p>The staging label to add to this version.</p>
     */
    inline UpdateSecretVersionStageRequest& WithVersionStage(const Aws::String& value) { SetVersionStage(value); return *this;}

    /**
     * <p>The staging label to add to this version.</p>
     */
    inline UpdateSecretVersionStageRequest& WithVersionStage(Aws::String&& value) { SetVersionStage(std::move(value)); return *this;}

    /**
     * <p>The staging label to add to this version.</p>
     */
    inline UpdateSecretVersionStageRequest& WithVersionStage(const char* value) { SetVersionStage(value); return *this;}


    /**
     * <p>Specifies the secret version ID of the version that the staging label is to
     * be removed from. If the staging label you are trying to attach to one version is
     * already attached to a different version, then you must include this parameter
     * and specify the version that the label is to be removed from. If the label is
     * attached and you either do not specify this parameter, or the version ID does
     * not match, then the operation fails.</p>
     */
    inline const Aws::String& GetRemoveFromVersionId() const{ return m_removeFromVersionId; }

    /**
     * <p>Specifies the secret version ID of the version that the staging label is to
     * be removed from. If the staging label you are trying to attach to one version is
     * already attached to a different version, then you must include this parameter
     * and specify the version that the label is to be removed from. If the label is
     * attached and you either do not specify this parameter, or the version ID does
     * not match, then the operation fails.</p>
     */
    inline bool RemoveFromVersionIdHasBeenSet() const { return m_removeFromVersionIdHasBeenSet; }

    /**
     * <p>Specifies the secret version ID of the version that the staging label is to
     * be removed from. If the staging label you are trying to attach to one version is
     * already attached to a different version, then you must include this parameter
     * and specify the version that the label is to be removed from. If the label is
     * attached and you either do not specify this parameter, or the version ID does
     * not match, then the operation fails.</p>
     */
    inline void SetRemoveFromVersionId(const Aws::String& value) { m_removeFromVersionIdHasBeenSet = true; m_removeFromVersionId = value; }

    /**
     * <p>Specifies the secret version ID of the version that the staging label is to
     * be removed from. If the staging label you are trying to attach to one version is
     * already attached to a different version, then you must include this parameter
     * and specify the version that the label is to be removed from. If the label is
     * attached and you either do not specify this parameter, or the version ID does
     * not match, then the operation fails.</p>
     */
    inline void SetRemoveFromVersionId(Aws::String&& value) { m_removeFromVersionIdHasBeenSet = true; m_removeFromVersionId = std::move(value); }

    /**
     * <p>Specifies the secret version ID of the version that the staging label is to
     * be removed from. If the staging label you are trying to attach to one version is
     * already attached to a different version, then you must include this parameter
     * and specify the version that the label is to be removed from. If the label is
     * attached and you either do not specify this parameter, or the version ID does
     * not match, then the operation fails.</p>
     */
    inline void SetRemoveFromVersionId(const char* value) { m_removeFromVersionIdHasBeenSet = true; m_removeFromVersionId.assign(value); }

    /**
     * <p>Specifies the secret version ID of the version that the staging label is to
     * be removed from. If the staging label you are trying to attach to one version is
     * already attached to a different version, then you must include this parameter
     * and specify the version that the label is to be removed from. If the label is
     * attached and you either do not specify this parameter, or the version ID does
     * not match, then the operation fails.</p>
     */
    inline UpdateSecretVersionStageRequest& WithRemoveFromVersionId(const Aws::String& value) { SetRemoveFromVersionId(value); return *this;}

    /**
     * <p>Specifies the secret version ID of the version that the staging label is to
     * be removed from. If the staging label you are trying to attach to one version is
     * already attached to a different version, then you must include this parameter
     * and specify the version that the label is to be removed from. If the label is
     * attached and you either do not specify this parameter, or the version ID does
     * not match, then the operation fails.</p>
     */
    inline UpdateSecretVersionStageRequest& WithRemoveFromVersionId(Aws::String&& value) { SetRemoveFromVersionId(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret version ID of the version that the staging label is to
     * be removed from. If the staging label you are trying to attach to one version is
     * already attached to a different version, then you must include this parameter
     * and specify the version that the label is to be removed from. If the label is
     * attached and you either do not specify this parameter, or the version ID does
     * not match, then the operation fails.</p>
     */
    inline UpdateSecretVersionStageRequest& WithRemoveFromVersionId(const char* value) { SetRemoveFromVersionId(value); return *this;}


    /**
     * <p>(Optional) The secret version ID that you want to add the staging label to.
     * If you want to remove a label from a version, then do not specify this
     * parameter.</p> <p>If the staging label is already attached to a different
     * version of the secret, then you must also specify the
     * <code>RemoveFromVersionId</code> parameter. </p>
     */
    inline const Aws::String& GetMoveToVersionId() const{ return m_moveToVersionId; }

    /**
     * <p>(Optional) The secret version ID that you want to add the staging label to.
     * If you want to remove a label from a version, then do not specify this
     * parameter.</p> <p>If the staging label is already attached to a different
     * version of the secret, then you must also specify the
     * <code>RemoveFromVersionId</code> parameter. </p>
     */
    inline bool MoveToVersionIdHasBeenSet() const { return m_moveToVersionIdHasBeenSet; }

    /**
     * <p>(Optional) The secret version ID that you want to add the staging label to.
     * If you want to remove a label from a version, then do not specify this
     * parameter.</p> <p>If the staging label is already attached to a different
     * version of the secret, then you must also specify the
     * <code>RemoveFromVersionId</code> parameter. </p>
     */
    inline void SetMoveToVersionId(const Aws::String& value) { m_moveToVersionIdHasBeenSet = true; m_moveToVersionId = value; }

    /**
     * <p>(Optional) The secret version ID that you want to add the staging label to.
     * If you want to remove a label from a version, then do not specify this
     * parameter.</p> <p>If the staging label is already attached to a different
     * version of the secret, then you must also specify the
     * <code>RemoveFromVersionId</code> parameter. </p>
     */
    inline void SetMoveToVersionId(Aws::String&& value) { m_moveToVersionIdHasBeenSet = true; m_moveToVersionId = std::move(value); }

    /**
     * <p>(Optional) The secret version ID that you want to add the staging label to.
     * If you want to remove a label from a version, then do not specify this
     * parameter.</p> <p>If the staging label is already attached to a different
     * version of the secret, then you must also specify the
     * <code>RemoveFromVersionId</code> parameter. </p>
     */
    inline void SetMoveToVersionId(const char* value) { m_moveToVersionIdHasBeenSet = true; m_moveToVersionId.assign(value); }

    /**
     * <p>(Optional) The secret version ID that you want to add the staging label to.
     * If you want to remove a label from a version, then do not specify this
     * parameter.</p> <p>If the staging label is already attached to a different
     * version of the secret, then you must also specify the
     * <code>RemoveFromVersionId</code> parameter. </p>
     */
    inline UpdateSecretVersionStageRequest& WithMoveToVersionId(const Aws::String& value) { SetMoveToVersionId(value); return *this;}

    /**
     * <p>(Optional) The secret version ID that you want to add the staging label to.
     * If you want to remove a label from a version, then do not specify this
     * parameter.</p> <p>If the staging label is already attached to a different
     * version of the secret, then you must also specify the
     * <code>RemoveFromVersionId</code> parameter. </p>
     */
    inline UpdateSecretVersionStageRequest& WithMoveToVersionId(Aws::String&& value) { SetMoveToVersionId(std::move(value)); return *this;}

    /**
     * <p>(Optional) The secret version ID that you want to add the staging label to.
     * If you want to remove a label from a version, then do not specify this
     * parameter.</p> <p>If the staging label is already attached to a different
     * version of the secret, then you must also specify the
     * <code>RemoveFromVersionId</code> parameter. </p>
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
