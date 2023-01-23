/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * Registry with Secrets Manager Sample for CodeBuild</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/RegistryCredential">AWS
   * API Reference</a></p>
   */
  class RegistryCredential
  {
  public:
    AWS_CODEBUILD_API RegistryCredential();
    AWS_CODEBUILD_API RegistryCredential(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API RegistryCredential& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using Secrets
     * Manager. </p>  <p> The <code>credential</code> can use the name of the
     * credentials only if they exist in your current Amazon Web Services Region. </p>
     * 
     */
    inline const Aws::String& GetCredential() const{ return m_credential; }

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using Secrets
     * Manager. </p>  <p> The <code>credential</code> can use the name of the
     * credentials only if they exist in your current Amazon Web Services Region. </p>
     * 
     */
    inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using Secrets
     * Manager. </p>  <p> The <code>credential</code> can use the name of the
     * credentials only if they exist in your current Amazon Web Services Region. </p>
     * 
     */
    inline void SetCredential(const Aws::String& value) { m_credentialHasBeenSet = true; m_credential = value; }

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using Secrets
     * Manager. </p>  <p> The <code>credential</code> can use the name of the
     * credentials only if they exist in your current Amazon Web Services Region. </p>
     * 
     */
    inline void SetCredential(Aws::String&& value) { m_credentialHasBeenSet = true; m_credential = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using Secrets
     * Manager. </p>  <p> The <code>credential</code> can use the name of the
     * credentials only if they exist in your current Amazon Web Services Region. </p>
     * 
     */
    inline void SetCredential(const char* value) { m_credentialHasBeenSet = true; m_credential.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using Secrets
     * Manager. </p>  <p> The <code>credential</code> can use the name of the
     * credentials only if they exist in your current Amazon Web Services Region. </p>
     * 
     */
    inline RegistryCredential& WithCredential(const Aws::String& value) { SetCredential(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using Secrets
     * Manager. </p>  <p> The <code>credential</code> can use the name of the
     * credentials only if they exist in your current Amazon Web Services Region. </p>
     * 
     */
    inline RegistryCredential& WithCredential(Aws::String&& value) { SetCredential(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) or name of credentials created using Secrets
     * Manager. </p>  <p> The <code>credential</code> can use the name of the
     * credentials only if they exist in your current Amazon Web Services Region. </p>
     * 
     */
    inline RegistryCredential& WithCredential(const char* value) { SetCredential(value); return *this;}


    /**
     * <p> The service that created the credentials to access a private Docker
     * registry. The valid value, SECRETS_MANAGER, is for Secrets Manager. </p>
     */
    inline const CredentialProviderType& GetCredentialProvider() const{ return m_credentialProvider; }

    /**
     * <p> The service that created the credentials to access a private Docker
     * registry. The valid value, SECRETS_MANAGER, is for Secrets Manager. </p>
     */
    inline bool CredentialProviderHasBeenSet() const { return m_credentialProviderHasBeenSet; }

    /**
     * <p> The service that created the credentials to access a private Docker
     * registry. The valid value, SECRETS_MANAGER, is for Secrets Manager. </p>
     */
    inline void SetCredentialProvider(const CredentialProviderType& value) { m_credentialProviderHasBeenSet = true; m_credentialProvider = value; }

    /**
     * <p> The service that created the credentials to access a private Docker
     * registry. The valid value, SECRETS_MANAGER, is for Secrets Manager. </p>
     */
    inline void SetCredentialProvider(CredentialProviderType&& value) { m_credentialProviderHasBeenSet = true; m_credentialProvider = std::move(value); }

    /**
     * <p> The service that created the credentials to access a private Docker
     * registry. The valid value, SECRETS_MANAGER, is for Secrets Manager. </p>
     */
    inline RegistryCredential& WithCredentialProvider(const CredentialProviderType& value) { SetCredentialProvider(value); return *this;}

    /**
     * <p> The service that created the credentials to access a private Docker
     * registry. The valid value, SECRETS_MANAGER, is for Secrets Manager. </p>
     */
    inline RegistryCredential& WithCredentialProvider(CredentialProviderType&& value) { SetCredentialProvider(std::move(value)); return *this;}

  private:

    Aws::String m_credential;
    bool m_credentialHasBeenSet = false;

    CredentialProviderType m_credentialProvider;
    bool m_credentialProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
