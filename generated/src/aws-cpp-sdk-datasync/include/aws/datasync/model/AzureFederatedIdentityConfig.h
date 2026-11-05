/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/AzureOidcConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataSync {
namespace Model {

/**
 * <p>Specifies federated identity parameters that allow DataSync to obtain an
 * OpenID Connect token for access to customer Azure Blob Storage. The token allows
 * for temporary, short-term access to the storage. DataSync automatically
 * refreshes the token to assure uninterrupted access to the storage.</p>
 * <p>Federated identity parameters are an alternative to the
 * <code>SasConfiguration</code> credentials that are expected to be valid
 * long-term (e.g. at least for the duration of DataSync task execution). Do not
 * specify federated identity and the SAS configuration for the same Azure Blob
 * location. </p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/AzureFederatedIdentityConfig">AWS
 * API Reference</a></p>
 */
class AzureFederatedIdentityConfig {
 public:
  AWS_DATASYNC_API AzureFederatedIdentityConfig() = default;
  AWS_DATASYNC_API AzureFederatedIdentityConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATASYNC_API AzureFederatedIdentityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the ARN for an Amazon Web Services role that allows DataSync to
   * invoke STS GetWebIdentityToken API on behalf of the customer account and to
   * obtain Amazon Web Services STS JWT (web token).</p>
   */
  inline const Aws::String& GetAwsIamRole() const { return m_awsIamRole; }
  inline bool AwsIamRoleHasBeenSet() const { return m_awsIamRoleHasBeenSet; }
  template <typename AwsIamRoleT = Aws::String>
  void SetAwsIamRole(AwsIamRoleT&& value) {
    m_awsIamRoleHasBeenSet = true;
    m_awsIamRole = std::forward<AwsIamRoleT>(value);
  }
  template <typename AwsIamRoleT = Aws::String>
  AzureFederatedIdentityConfig& WithAwsIamRole(AwsIamRoleT&& value) {
    SetAwsIamRole(std::forward<AwsIamRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>External identity parameters for Azure Blob Storage.</p>
   */
  inline const AzureOidcConfig& GetAzureOidc() const { return m_azureOidc; }
  inline bool AzureOidcHasBeenSet() const { return m_azureOidcHasBeenSet; }
  template <typename AzureOidcT = AzureOidcConfig>
  void SetAzureOidc(AzureOidcT&& value) {
    m_azureOidcHasBeenSet = true;
    m_azureOidc = std::forward<AzureOidcT>(value);
  }
  template <typename AzureOidcT = AzureOidcConfig>
  AzureFederatedIdentityConfig& WithAzureOidc(AzureOidcT&& value) {
    SetAzureOidc(std::forward<AzureOidcT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsIamRole;

  AzureOidcConfig m_azureOidc;
  bool m_awsIamRoleHasBeenSet = false;
  bool m_azureOidcHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
