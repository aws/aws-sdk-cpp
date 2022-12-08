/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier for the secret to attach tags to. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>The identifier for the secret to attach tags to. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>The identifier for the secret to attach tags to. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>The identifier for the secret to attach tags to. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>The identifier for the secret to attach tags to. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>The identifier for the secret to attach tags to. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline TagResourceRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>The identifier for the secret to attach tags to. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline TagResourceRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the secret to attach tags to. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <p>For an
     * ARN, we recommend that you specify a complete ARN rather than a partial ARN. See
     * <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline TagResourceRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>The tags to attach to the secret as a JSON text string argument. Each element
     * in the list consists of a <code>Key</code> and a <code>Value</code>.</p> <p>For
     * storing multiple values, we recommend that you use a JSON text string argument
     * and specify key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to attach to the secret as a JSON text string argument. Each element
     * in the list consists of a <code>Key</code> and a <code>Value</code>.</p> <p>For
     * storing multiple values, we recommend that you use a JSON text string argument
     * and specify key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to attach to the secret as a JSON text string argument. Each element
     * in the list consists of a <code>Key</code> and a <code>Value</code>.</p> <p>For
     * storing multiple values, we recommend that you use a JSON text string argument
     * and specify key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to attach to the secret as a JSON text string argument. Each element
     * in the list consists of a <code>Key</code> and a <code>Value</code>.</p> <p>For
     * storing multiple values, we recommend that you use a JSON text string argument
     * and specify key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to attach to the secret as a JSON text string argument. Each element
     * in the list consists of a <code>Key</code> and a <code>Value</code>.</p> <p>For
     * storing multiple values, we recommend that you use a JSON text string argument
     * and specify key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to attach to the secret as a JSON text string argument. Each element
     * in the list consists of a <code>Key</code> and a <code>Value</code>.</p> <p>For
     * storing multiple values, we recommend that you use a JSON text string argument
     * and specify key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to attach to the secret as a JSON text string argument. Each element
     * in the list consists of a <code>Key</code> and a <code>Value</code>.</p> <p>For
     * storing multiple values, we recommend that you use a JSON text string argument
     * and specify key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to attach to the secret as a JSON text string argument. Each element
     * in the list consists of a <code>Key</code> and a <code>Value</code>.</p> <p>For
     * storing multiple values, we recommend that you use a JSON text string argument
     * and specify key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters.html">Specifying
     * parameter values for the Amazon Web Services CLI</a> in the Amazon Web Services
     * CLI User Guide.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
