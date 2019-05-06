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
  class AWS_SECRETSMANAGER_API GetResourcePolicyRequest : public SecretsManagerRequest
  {
  public:
    GetResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourcePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline GetResourcePolicyRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline GetResourcePolicyRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret that you want to retrieve the attached resource-based
     * policy for. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline GetResourcePolicyRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
