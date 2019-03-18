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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/CredentialProviderType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p> Information about credentials that provide access to a private Docker
   * registry. When this is set: </p> <ul> <li> <p>
   * <code>imagePullCredentialsType</code> must be set to <code>SERVICE_ROLE</code>.
   * </p> </li> <li> <p> images cannot be curated or an Amazon ECR image.</p> </li>
   * </ul> <p> For more information, see <a
   * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-private-registry.html">Private
   * Registry with AWS Secrets Manager Sample for AWS CodeBuild</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/RegistryCredential">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API RegistryCredential
  {
  public:
    RegistryCredential();
    RegistryCredential(Aws::Utils::Json::JsonView jsonValue);
    RegistryCredential& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using AWS
     * Secrets Manager. </p> <note> <p> The <code>credential</code> can use the name of
     * the credentials only if they exist in your current region. </p> </note>
     */
    inline const Aws::String& GetCredential() const{ return m_credential; }

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using AWS
     * Secrets Manager. </p> <note> <p> The <code>credential</code> can use the name of
     * the credentials only if they exist in your current region. </p> </note>
     */
    inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using AWS
     * Secrets Manager. </p> <note> <p> The <code>credential</code> can use the name of
     * the credentials only if they exist in your current region. </p> </note>
     */
    inline void SetCredential(const Aws::String& value) { m_credentialHasBeenSet = true; m_credential = value; }

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using AWS
     * Secrets Manager. </p> <note> <p> The <code>credential</code> can use the name of
     * the credentials only if they exist in your current region. </p> </note>
     */
    inline void SetCredential(Aws::String&& value) { m_credentialHasBeenSet = true; m_credential = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using AWS
     * Secrets Manager. </p> <note> <p> The <code>credential</code> can use the name of
     * the credentials only if they exist in your current region. </p> </note>
     */
    inline void SetCredential(const char* value) { m_credentialHasBeenSet = true; m_credential.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using AWS
     * Secrets Manager. </p> <note> <p> The <code>credential</code> can use the name of
     * the credentials only if they exist in your current region. </p> </note>
     */
    inline RegistryCredential& WithCredential(const Aws::String& value) { SetCredential(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using AWS
     * Secrets Manager. </p> <note> <p> The <code>credential</code> can use the name of
     * the credentials only if they exist in your current region. </p> </note>
     */
    inline RegistryCredential& WithCredential(Aws::String&& value) { SetCredential(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using AWS
     * Secrets Manager. </p> <note> <p> The <code>credential</code> can use the name of
     * the credentials only if they exist in your current region. </p> </note>
     */
    inline RegistryCredential& WithCredential(const char* value) { SetCredential(value); return *this;}


    /**
     * <p> The service that created the credentials to access a private Docker
     * registry. The valid value, SECRETS_MANAGER, is for AWS Secrets Manager. </p>
     */
    inline const CredentialProviderType& GetCredentialProvider() const{ return m_credentialProvider; }

    /**
     * <p> The service that created the credentials to access a private Docker
     * registry. The valid value, SECRETS_MANAGER, is for AWS Secrets Manager. </p>
     */
    inline bool CredentialProviderHasBeenSet() const { return m_credentialProviderHasBeenSet; }

    /**
     * <p> The service that created the credentials to access a private Docker
     * registry. The valid value, SECRETS_MANAGER, is for AWS Secrets Manager. </p>
     */
    inline void SetCredentialProvider(const CredentialProviderType& value) { m_credentialProviderHasBeenSet = true; m_credentialProvider = value; }

    /**
     * <p> The service that created the credentials to access a private Docker
     * registry. The valid value, SECRETS_MANAGER, is for AWS Secrets Manager. </p>
     */
    inline void SetCredentialProvider(CredentialProviderType&& value) { m_credentialProviderHasBeenSet = true; m_credentialProvider = std::move(value); }

    /**
     * <p> The service that created the credentials to access a private Docker
     * registry. The valid value, SECRETS_MANAGER, is for AWS Secrets Manager. </p>
     */
    inline RegistryCredential& WithCredentialProvider(const CredentialProviderType& value) { SetCredentialProvider(value); return *this;}

    /**
     * <p> The service that created the credentials to access a private Docker
     * registry. The valid value, SECRETS_MANAGER, is for AWS Secrets Manager. </p>
     */
    inline RegistryCredential& WithCredentialProvider(CredentialProviderType&& value) { SetCredentialProvider(std::move(value)); return *this;}

  private:

    Aws::String m_credential;
    bool m_credentialHasBeenSet;

    CredentialProviderType m_credentialProvider;
    bool m_credentialProviderHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
