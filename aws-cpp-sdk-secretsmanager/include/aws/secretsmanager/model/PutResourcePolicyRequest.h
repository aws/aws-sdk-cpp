﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_SECRETSMANAGER_API PutResourcePolicyRequest : public SecretsManagerRequest
  {
  public:
    PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the secret that you want to attach the resource-based policy. You
     * can specify either the ARN or the friendly name of the secret.</p>  <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>Specifies the secret that you want to attach the resource-based policy. You
     * can specify either the ARN or the friendly name of the secret.</p>  <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>Specifies the secret that you want to attach the resource-based policy. You
     * can specify either the ARN or the friendly name of the secret.</p>  <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>Specifies the secret that you want to attach the resource-based policy. You
     * can specify either the ARN or the friendly name of the secret.</p>  <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>Specifies the secret that you want to attach the resource-based policy. You
     * can specify either the ARN or the friendly name of the secret.</p>  <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>Specifies the secret that you want to attach the resource-based policy. You
     * can specify either the ARN or the friendly name of the secret.</p>  <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline PutResourcePolicyRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Specifies the secret that you want to attach the resource-based policy. You
     * can specify either the ARN or the friendly name of the secret.</p>  <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline PutResourcePolicyRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret that you want to attach the resource-based policy. You
     * can specify either the ARN or the friendly name of the secret.</p>  <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline PutResourcePolicyRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>A JSON-formatted string constructed according to the grammar and syntax for
     * an Amazon Web Services resource-based policy. The policy in the string
     * identifies who can access or manage this secret and its versions. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>.</p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>A JSON-formatted string constructed according to the grammar and syntax for
     * an Amazon Web Services resource-based policy. The policy in the string
     * identifies who can access or manage this secret and its versions. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>.</p>
     */
    inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }

    /**
     * <p>A JSON-formatted string constructed according to the grammar and syntax for
     * an Amazon Web Services resource-based policy. The policy in the string
     * identifies who can access or manage this secret and its versions. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>.</p>
     */
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = value; }

    /**
     * <p>A JSON-formatted string constructed according to the grammar and syntax for
     * an Amazon Web Services resource-based policy. The policy in the string
     * identifies who can access or manage this secret and its versions. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>.</p>
     */
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::move(value); }

    /**
     * <p>A JSON-formatted string constructed according to the grammar and syntax for
     * an Amazon Web Services resource-based policy. The policy in the string
     * identifies who can access or manage this secret and its versions. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>.</p>
     */
    inline void SetResourcePolicy(const char* value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy.assign(value); }

    /**
     * <p>A JSON-formatted string constructed according to the grammar and syntax for
     * an Amazon Web Services resource-based policy. The policy in the string
     * identifies who can access or manage this secret and its versions. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>.</p>
     */
    inline PutResourcePolicyRequest& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>A JSON-formatted string constructed according to the grammar and syntax for
     * an Amazon Web Services resource-based policy. The policy in the string
     * identifies who can access or manage this secret and its versions. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>.</p>
     */
    inline PutResourcePolicyRequest& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}

    /**
     * <p>A JSON-formatted string constructed according to the grammar and syntax for
     * an Amazon Web Services resource-based policy. The policy in the string
     * identifies who can access or manage this secret and its versions. For
     * information on how to format a JSON parameter for the various command line tool
     * environments, see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>CLI User Guide</i>.</p>
     */
    inline PutResourcePolicyRequest& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}


    /**
     * <p>(Optional) If you set the parameter, <code>BlockPublicPolicy</code> to true,
     * then you block resource-based policies that allow broad access to the
     * secret.</p>
     */
    inline bool GetBlockPublicPolicy() const{ return m_blockPublicPolicy; }

    /**
     * <p>(Optional) If you set the parameter, <code>BlockPublicPolicy</code> to true,
     * then you block resource-based policies that allow broad access to the
     * secret.</p>
     */
    inline bool BlockPublicPolicyHasBeenSet() const { return m_blockPublicPolicyHasBeenSet; }

    /**
     * <p>(Optional) If you set the parameter, <code>BlockPublicPolicy</code> to true,
     * then you block resource-based policies that allow broad access to the
     * secret.</p>
     */
    inline void SetBlockPublicPolicy(bool value) { m_blockPublicPolicyHasBeenSet = true; m_blockPublicPolicy = value; }

    /**
     * <p>(Optional) If you set the parameter, <code>BlockPublicPolicy</code> to true,
     * then you block resource-based policies that allow broad access to the
     * secret.</p>
     */
    inline PutResourcePolicyRequest& WithBlockPublicPolicy(bool value) { SetBlockPublicPolicy(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;

    Aws::String m_resourcePolicy;
    bool m_resourcePolicyHasBeenSet;

    bool m_blockPublicPolicy;
    bool m_blockPublicPolicyHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
