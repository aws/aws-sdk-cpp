/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/BasicAuthenticationCredentials.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The authentication configuration patch of a connection. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AuthenticationConfigurationPatch">AWS
   * API Reference</a></p>
   */
  class AuthenticationConfigurationPatch
  {
  public:
    AWS_DATAZONE_API AuthenticationConfigurationPatch() = default;
    AWS_DATAZONE_API AuthenticationConfigurationPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AuthenticationConfigurationPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The basic authentication credentials of a connection.</p>
     */
    inline const BasicAuthenticationCredentials& GetBasicAuthenticationCredentials() const { return m_basicAuthenticationCredentials; }
    inline bool BasicAuthenticationCredentialsHasBeenSet() const { return m_basicAuthenticationCredentialsHasBeenSet; }
    template<typename BasicAuthenticationCredentialsT = BasicAuthenticationCredentials>
    void SetBasicAuthenticationCredentials(BasicAuthenticationCredentialsT&& value) { m_basicAuthenticationCredentialsHasBeenSet = true; m_basicAuthenticationCredentials = std::forward<BasicAuthenticationCredentialsT>(value); }
    template<typename BasicAuthenticationCredentialsT = BasicAuthenticationCredentials>
    AuthenticationConfigurationPatch& WithBasicAuthenticationCredentials(BasicAuthenticationCredentialsT&& value) { SetBasicAuthenticationCredentials(std::forward<BasicAuthenticationCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret ARN of a connection.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    AuthenticationConfigurationPatch& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}
  private:

    BasicAuthenticationCredentials m_basicAuthenticationCredentials;
    bool m_basicAuthenticationCredentialsHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
