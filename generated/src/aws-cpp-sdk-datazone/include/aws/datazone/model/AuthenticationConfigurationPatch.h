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
    AWS_DATAZONE_API AuthenticationConfigurationPatch();
    AWS_DATAZONE_API AuthenticationConfigurationPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AuthenticationConfigurationPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The basic authentication credentials of a connection.</p>
     */
    inline const BasicAuthenticationCredentials& GetBasicAuthenticationCredentials() const{ return m_basicAuthenticationCredentials; }
    inline bool BasicAuthenticationCredentialsHasBeenSet() const { return m_basicAuthenticationCredentialsHasBeenSet; }
    inline void SetBasicAuthenticationCredentials(const BasicAuthenticationCredentials& value) { m_basicAuthenticationCredentialsHasBeenSet = true; m_basicAuthenticationCredentials = value; }
    inline void SetBasicAuthenticationCredentials(BasicAuthenticationCredentials&& value) { m_basicAuthenticationCredentialsHasBeenSet = true; m_basicAuthenticationCredentials = std::move(value); }
    inline AuthenticationConfigurationPatch& WithBasicAuthenticationCredentials(const BasicAuthenticationCredentials& value) { SetBasicAuthenticationCredentials(value); return *this;}
    inline AuthenticationConfigurationPatch& WithBasicAuthenticationCredentials(BasicAuthenticationCredentials&& value) { SetBasicAuthenticationCredentials(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret ARN of a connection.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline AuthenticationConfigurationPatch& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline AuthenticationConfigurationPatch& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline AuthenticationConfigurationPatch& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
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
