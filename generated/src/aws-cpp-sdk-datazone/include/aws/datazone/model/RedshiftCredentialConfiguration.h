/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
   * <p>The details of the credentials required to access an Amazon Redshift
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RedshiftCredentialConfiguration">AWS
   * API Reference</a></p>
   */
  class RedshiftCredentialConfiguration
  {
  public:
    AWS_DATAZONE_API RedshiftCredentialConfiguration() = default;
    AWS_DATAZONE_API RedshiftCredentialConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftCredentialConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of a secret manager for an Amazon Redshift cluster.</p>
     */
    inline const Aws::String& GetSecretManagerArn() const { return m_secretManagerArn; }
    inline bool SecretManagerArnHasBeenSet() const { return m_secretManagerArnHasBeenSet; }
    template<typename SecretManagerArnT = Aws::String>
    void SetSecretManagerArn(SecretManagerArnT&& value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn = std::forward<SecretManagerArnT>(value); }
    template<typename SecretManagerArnT = Aws::String>
    RedshiftCredentialConfiguration& WithSecretManagerArn(SecretManagerArnT&& value) { SetSecretManagerArn(std::forward<SecretManagerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretManagerArn;
    bool m_secretManagerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
