/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/UsernamePassword.h>
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
   * <p>Amazon Redshift credentials of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RedshiftCredentials">AWS
   * API Reference</a></p>
   */
  class RedshiftCredentials
  {
  public:
    AWS_DATAZONE_API RedshiftCredentials() = default;
    AWS_DATAZONE_API RedshiftCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The secret ARN of the Amazon Redshift credentials of a connection.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    RedshiftCredentials& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username and password of the Amazon Redshift credentials of a
     * connection.</p>
     */
    inline const UsernamePassword& GetUsernamePassword() const { return m_usernamePassword; }
    inline bool UsernamePasswordHasBeenSet() const { return m_usernamePasswordHasBeenSet; }
    template<typename UsernamePasswordT = UsernamePassword>
    void SetUsernamePassword(UsernamePasswordT&& value) { m_usernamePasswordHasBeenSet = true; m_usernamePassword = std::forward<UsernamePasswordT>(value); }
    template<typename UsernamePasswordT = UsernamePassword>
    RedshiftCredentials& WithUsernamePassword(UsernamePasswordT&& value) { SetUsernamePassword(std::forward<UsernamePasswordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    UsernamePassword m_usernamePassword;
    bool m_usernamePasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
