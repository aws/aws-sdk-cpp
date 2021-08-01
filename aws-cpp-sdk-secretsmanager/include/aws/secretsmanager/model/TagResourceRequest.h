﻿/**
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
  class AWS_SECRETSMANAGER_API TagResourceRequest : public SecretsManagerRequest
  {
  public:
    TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier for the secret that you want to attach tags to. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>  <p>If you specify an ARN, we generally recommend that you
     * specify a complete ARN. You can specify a partial ARN too—for example, if you
     * don’t include the final hyphen and six random characters that Secrets Manager
     * adds at the end of the ARN when you created the secret. A partial ARN match can
     * work as long as it uniquely matches only one secret. However, if your secret has
     * a name that ends in a hyphen followed by six characters (before Secrets Manager
     * adds the hyphen and six characters to the ARN) and you try to use that as a
     * partial ARN, then those characters cause Secrets Manager to assume that you’re
     * specifying a complete ARN. This confusion can cause unexpected results. To avoid
     * this situation, we recommend that you don’t create secret names ending with a
     * hyphen followed by six characters.</p> <p>If you specify an incomplete ARN
     * without the random suffix, and instead provide the 'friendly name', you
     * <i>must</i> not include the random suffix. If you do include the random suffix
     * added by Secrets Manager, you receive either a <i>ResourceNotFoundException</i>
     * or an <i>AccessDeniedException</i> error, depending on your permissions.</p>
     * 
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>The identifier for the secret that you want to attach tags to. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>  <p>If you specify an ARN, we generally recommend that you
     * specify a complete ARN. You can specify a partial ARN too—for example, if you
     * don’t include the final hyphen and six random characters that Secrets Manager
     * adds at the end of the ARN when you created the secret. A partial ARN match can
     * work as long as it uniquely matches only one secret. However, if your secret has
     * a name that ends in a hyphen followed by six characters (before Secrets Manager
     * adds the hyphen and six characters to the ARN) and you try to use that as a
     * partial ARN, then those characters cause Secrets Manager to assume that you’re
     * specifying a complete ARN. This confusion can cause unexpected results. To avoid
     * this situation, we recommend that you don’t create secret names ending with a
     * hyphen followed by six characters.</p> <p>If you specify an incomplete ARN
     * without the random suffix, and instead provide the 'friendly name', you
     * <i>must</i> not include the random suffix. If you do include the random suffix
     * added by Secrets Manager, you receive either a <i>ResourceNotFoundException</i>
     * or an <i>AccessDeniedException</i> error, depending on your permissions.</p>
     * 
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>The identifier for the secret that you want to attach tags to. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>  <p>If you specify an ARN, we generally recommend that you
     * specify a complete ARN. You can specify a partial ARN too—for example, if you
     * don’t include the final hyphen and six random characters that Secrets Manager
     * adds at the end of the ARN when you created the secret. A partial ARN match can
     * work as long as it uniquely matches only one secret. However, if your secret has
     * a name that ends in a hyphen followed by six characters (before Secrets Manager
     * adds the hyphen and six characters to the ARN) and you try to use that as a
     * partial ARN, then those characters cause Secrets Manager to assume that you’re
     * specifying a complete ARN. This confusion can cause unexpected results. To avoid
     * this situation, we recommend that you don’t create secret names ending with a
     * hyphen followed by six characters.</p> <p>If you specify an incomplete ARN
     * without the random suffix, and instead provide the 'friendly name', you
     * <i>must</i> not include the random suffix. If you do include the random suffix
     * added by Secrets Manager, you receive either a <i>ResourceNotFoundException</i>
     * or an <i>AccessDeniedException</i> error, depending on your permissions.</p>
     * 
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>The identifier for the secret that you want to attach tags to. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>  <p>If you specify an ARN, we generally recommend that you
     * specify a complete ARN. You can specify a partial ARN too—for example, if you
     * don’t include the final hyphen and six random characters that Secrets Manager
     * adds at the end of the ARN when you created the secret. A partial ARN match can
     * work as long as it uniquely matches only one secret. However, if your secret has
     * a name that ends in a hyphen followed by six characters (before Secrets Manager
     * adds the hyphen and six characters to the ARN) and you try to use that as a
     * partial ARN, then those characters cause Secrets Manager to assume that you’re
     * specifying a complete ARN. This confusion can cause unexpected results. To avoid
     * this situation, we recommend that you don’t create secret names ending with a
     * hyphen followed by six characters.</p> <p>If you specify an incomplete ARN
     * without the random suffix, and instead provide the 'friendly name', you
     * <i>must</i> not include the random suffix. If you do include the random suffix
     * added by Secrets Manager, you receive either a <i>ResourceNotFoundException</i>
     * or an <i>AccessDeniedException</i> error, depending on your permissions.</p>
     * 
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>The identifier for the secret that you want to attach tags to. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>  <p>If you specify an ARN, we generally recommend that you
     * specify a complete ARN. You can specify a partial ARN too—for example, if you
     * don’t include the final hyphen and six random characters that Secrets Manager
     * adds at the end of the ARN when you created the secret. A partial ARN match can
     * work as long as it uniquely matches only one secret. However, if your secret has
     * a name that ends in a hyphen followed by six characters (before Secrets Manager
     * adds the hyphen and six characters to the ARN) and you try to use that as a
     * partial ARN, then those characters cause Secrets Manager to assume that you’re
     * specifying a complete ARN. This confusion can cause unexpected results. To avoid
     * this situation, we recommend that you don’t create secret names ending with a
     * hyphen followed by six characters.</p> <p>If you specify an incomplete ARN
     * without the random suffix, and instead provide the 'friendly name', you
     * <i>must</i> not include the random suffix. If you do include the random suffix
     * added by Secrets Manager, you receive either a <i>ResourceNotFoundException</i>
     * or an <i>AccessDeniedException</i> error, depending on your permissions.</p>
     * 
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>The identifier for the secret that you want to attach tags to. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>  <p>If you specify an ARN, we generally recommend that you
     * specify a complete ARN. You can specify a partial ARN too—for example, if you
     * don’t include the final hyphen and six random characters that Secrets Manager
     * adds at the end of the ARN when you created the secret. A partial ARN match can
     * work as long as it uniquely matches only one secret. However, if your secret has
     * a name that ends in a hyphen followed by six characters (before Secrets Manager
     * adds the hyphen and six characters to the ARN) and you try to use that as a
     * partial ARN, then those characters cause Secrets Manager to assume that you’re
     * specifying a complete ARN. This confusion can cause unexpected results. To avoid
     * this situation, we recommend that you don’t create secret names ending with a
     * hyphen followed by six characters.</p> <p>If you specify an incomplete ARN
     * without the random suffix, and instead provide the 'friendly name', you
     * <i>must</i> not include the random suffix. If you do include the random suffix
     * added by Secrets Manager, you receive either a <i>ResourceNotFoundException</i>
     * or an <i>AccessDeniedException</i> error, depending on your permissions.</p>
     * 
     */
    inline TagResourceRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>The identifier for the secret that you want to attach tags to. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>  <p>If you specify an ARN, we generally recommend that you
     * specify a complete ARN. You can specify a partial ARN too—for example, if you
     * don’t include the final hyphen and six random characters that Secrets Manager
     * adds at the end of the ARN when you created the secret. A partial ARN match can
     * work as long as it uniquely matches only one secret. However, if your secret has
     * a name that ends in a hyphen followed by six characters (before Secrets Manager
     * adds the hyphen and six characters to the ARN) and you try to use that as a
     * partial ARN, then those characters cause Secrets Manager to assume that you’re
     * specifying a complete ARN. This confusion can cause unexpected results. To avoid
     * this situation, we recommend that you don’t create secret names ending with a
     * hyphen followed by six characters.</p> <p>If you specify an incomplete ARN
     * without the random suffix, and instead provide the 'friendly name', you
     * <i>must</i> not include the random suffix. If you do include the random suffix
     * added by Secrets Manager, you receive either a <i>ResourceNotFoundException</i>
     * or an <i>AccessDeniedException</i> error, depending on your permissions.</p>
     * 
     */
    inline TagResourceRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the secret that you want to attach tags to. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>  <p>If you specify an ARN, we generally recommend that you
     * specify a complete ARN. You can specify a partial ARN too—for example, if you
     * don’t include the final hyphen and six random characters that Secrets Manager
     * adds at the end of the ARN when you created the secret. A partial ARN match can
     * work as long as it uniquely matches only one secret. However, if your secret has
     * a name that ends in a hyphen followed by six characters (before Secrets Manager
     * adds the hyphen and six characters to the ARN) and you try to use that as a
     * partial ARN, then those characters cause Secrets Manager to assume that you’re
     * specifying a complete ARN. This confusion can cause unexpected results. To avoid
     * this situation, we recommend that you don’t create secret names ending with a
     * hyphen followed by six characters.</p> <p>If you specify an incomplete ARN
     * without the random suffix, and instead provide the 'friendly name', you
     * <i>must</i> not include the random suffix. If you do include the random suffix
     * added by Secrets Manager, you receive either a <i>ResourceNotFoundException</i>
     * or an <i>AccessDeniedException</i> error, depending on your permissions.</p>
     * 
     */
    inline TagResourceRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>The tags to attach to the secret. Each element in the list consists of a
     * <code>Key</code> and a <code>Value</code>.</p> <p>This parameter to the API
     * requires a JSON text string argument. For information on how to format a JSON
     * parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>. For the CLI, you can also
     * use the syntax: <code>--Tags Key="Key1",Value="Value1"
     * Key="Key2",Value="Value2"[,…]</code> </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to attach to the secret. Each element in the list consists of a
     * <code>Key</code> and a <code>Value</code>.</p> <p>This parameter to the API
     * requires a JSON text string argument. For information on how to format a JSON
     * parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>. For the CLI, you can also
     * use the syntax: <code>--Tags Key="Key1",Value="Value1"
     * Key="Key2",Value="Value2"[,…]</code> </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to attach to the secret. Each element in the list consists of a
     * <code>Key</code> and a <code>Value</code>.</p> <p>This parameter to the API
     * requires a JSON text string argument. For information on how to format a JSON
     * parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>. For the CLI, you can also
     * use the syntax: <code>--Tags Key="Key1",Value="Value1"
     * Key="Key2",Value="Value2"[,…]</code> </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to attach to the secret. Each element in the list consists of a
     * <code>Key</code> and a <code>Value</code>.</p> <p>This parameter to the API
     * requires a JSON text string argument. For information on how to format a JSON
     * parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>. For the CLI, you can also
     * use the syntax: <code>--Tags Key="Key1",Value="Value1"
     * Key="Key2",Value="Value2"[,…]</code> </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to attach to the secret. Each element in the list consists of a
     * <code>Key</code> and a <code>Value</code>.</p> <p>This parameter to the API
     * requires a JSON text string argument. For information on how to format a JSON
     * parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>. For the CLI, you can also
     * use the syntax: <code>--Tags Key="Key1",Value="Value1"
     * Key="Key2",Value="Value2"[,…]</code> </p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to attach to the secret. Each element in the list consists of a
     * <code>Key</code> and a <code>Value</code>.</p> <p>This parameter to the API
     * requires a JSON text string argument. For information on how to format a JSON
     * parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>. For the CLI, you can also
     * use the syntax: <code>--Tags Key="Key1",Value="Value1"
     * Key="Key2",Value="Value2"[,…]</code> </p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to attach to the secret. Each element in the list consists of a
     * <code>Key</code> and a <code>Value</code>.</p> <p>This parameter to the API
     * requires a JSON text string argument. For information on how to format a JSON
     * parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>. For the CLI, you can also
     * use the syntax: <code>--Tags Key="Key1",Value="Value1"
     * Key="Key2",Value="Value2"[,…]</code> </p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to attach to the secret. Each element in the list consists of a
     * <code>Key</code> and a <code>Value</code>.</p> <p>This parameter to the API
     * requires a JSON text string argument. For information on how to format a JSON
     * parameter for the various command line tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>. For the CLI, you can also
     * use the syntax: <code>--Tags Key="Key1",Value="Value1"
     * Key="Key2",Value="Value2"[,…]</code> </p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
