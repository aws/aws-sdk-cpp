/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateWorkspace</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateWorkspaceRequest">AWS
   * API Reference</a></p>
   */
  class CreateWorkspaceRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API CreateWorkspaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspace"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>An alias that you assign to this workspace to help you identify it. It does
     * not need to be unique.</p> <p>Blank spaces at the beginning or end of the alias
     * that you specify will be trimmed from the value used.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>An alias that you assign to this workspace to help you identify it. It does
     * not need to be unique.</p> <p>Blank spaces at the beginning or end of the alias
     * that you specify will be trimmed from the value used.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>An alias that you assign to this workspace to help you identify it. It does
     * not need to be unique.</p> <p>Blank spaces at the beginning or end of the alias
     * that you specify will be trimmed from the value used.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>An alias that you assign to this workspace to help you identify it. It does
     * not need to be unique.</p> <p>Blank spaces at the beginning or end of the alias
     * that you specify will be trimmed from the value used.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>An alias that you assign to this workspace to help you identify it. It does
     * not need to be unique.</p> <p>Blank spaces at the beginning or end of the alias
     * that you specify will be trimmed from the value used.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>An alias that you assign to this workspace to help you identify it. It does
     * not need to be unique.</p> <p>Blank spaces at the beginning or end of the alias
     * that you specify will be trimmed from the value used.</p>
     */
    inline CreateWorkspaceRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>An alias that you assign to this workspace to help you identify it. It does
     * not need to be unique.</p> <p>Blank spaces at the beginning or end of the alias
     * that you specify will be trimmed from the value used.</p>
     */
    inline CreateWorkspaceRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>An alias that you assign to this workspace to help you identify it. It does
     * not need to be unique.</p> <p>Blank spaces at the beginning or end of the alias
     * that you specify will be trimmed from the value used.</p>
     */
    inline CreateWorkspaceRequest& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline CreateWorkspaceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline CreateWorkspaceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline CreateWorkspaceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>(optional) The ARN for a customer managed KMS key to use for encrypting data
     * within your workspace. For more information about using your own key in your
     * workspace, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/encryption-at-rest-Amazon-Service-Prometheus.html">Encryption
     * at rest</a> in the <i>Amazon Managed Service for Prometheus User Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>(optional) The ARN for a customer managed KMS key to use for encrypting data
     * within your workspace. For more information about using your own key in your
     * workspace, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/encryption-at-rest-Amazon-Service-Prometheus.html">Encryption
     * at rest</a> in the <i>Amazon Managed Service for Prometheus User Guide</i>.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>(optional) The ARN for a customer managed KMS key to use for encrypting data
     * within your workspace. For more information about using your own key in your
     * workspace, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/encryption-at-rest-Amazon-Service-Prometheus.html">Encryption
     * at rest</a> in the <i>Amazon Managed Service for Prometheus User Guide</i>.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>(optional) The ARN for a customer managed KMS key to use for encrypting data
     * within your workspace. For more information about using your own key in your
     * workspace, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/encryption-at-rest-Amazon-Service-Prometheus.html">Encryption
     * at rest</a> in the <i>Amazon Managed Service for Prometheus User Guide</i>.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>(optional) The ARN for a customer managed KMS key to use for encrypting data
     * within your workspace. For more information about using your own key in your
     * workspace, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/encryption-at-rest-Amazon-Service-Prometheus.html">Encryption
     * at rest</a> in the <i>Amazon Managed Service for Prometheus User Guide</i>.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>(optional) The ARN for a customer managed KMS key to use for encrypting data
     * within your workspace. For more information about using your own key in your
     * workspace, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/encryption-at-rest-Amazon-Service-Prometheus.html">Encryption
     * at rest</a> in the <i>Amazon Managed Service for Prometheus User Guide</i>.</p>
     */
    inline CreateWorkspaceRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>(optional) The ARN for a customer managed KMS key to use for encrypting data
     * within your workspace. For more information about using your own key in your
     * workspace, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/encryption-at-rest-Amazon-Service-Prometheus.html">Encryption
     * at rest</a> in the <i>Amazon Managed Service for Prometheus User Guide</i>.</p>
     */
    inline CreateWorkspaceRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>(optional) The ARN for a customer managed KMS key to use for encrypting data
     * within your workspace. For more information about using your own key in your
     * workspace, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/userguide/encryption-at-rest-Amazon-Service-Prometheus.html">Encryption
     * at rest</a> in the <i>Amazon Managed Service for Prometheus User Guide</i>.</p>
     */
    inline CreateWorkspaceRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline CreateWorkspaceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline CreateWorkspaceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values to associate with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
