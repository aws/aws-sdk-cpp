/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/ObjectStorageExternalIdentityConfig.h>

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
 * <p>Specifies federated identity parameters that allow DataSync to obtain OpenID
 * Connect token for access to customer object storage. The token allows for
 * temporary, short-term access to the storage. DataSync automatically refreshes
 * the token to assure uninterrupted access to the storage.</p>  <p>Federated
 * identity parameters are an alternative to the
 * <code>AccessKey</code>/<code>SecretKey</code> credentials that are expected to
 * be valid long-term (e.g. at least for the duration of DataSync task execution).
 * Do not specify federated identity and the key parameters for the same object
 * storage location. </p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ObjectStorageFederatedIdentityConfig">AWS
 * API Reference</a></p>
 */
class ObjectStorageFederatedIdentityConfig {
 public:
  AWS_DATASYNC_API ObjectStorageFederatedIdentityConfig() = default;
  AWS_DATASYNC_API ObjectStorageFederatedIdentityConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATASYNC_API ObjectStorageFederatedIdentityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ObjectStorageFederatedIdentityConfig& WithAwsIamRole(AwsIamRoleT&& value) {
    SetAwsIamRole(std::forward<AwsIamRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies cloud-provider-specific external identity parameters used when
   * exchanging the Amazon Web Services web token for an OpenID Connect token at the
   * object storage provider.</p>
   */
  inline const ObjectStorageExternalIdentityConfig& GetExternalIdentity() const { return m_externalIdentity; }
  inline bool ExternalIdentityHasBeenSet() const { return m_externalIdentityHasBeenSet; }
  template <typename ExternalIdentityT = ObjectStorageExternalIdentityConfig>
  void SetExternalIdentity(ExternalIdentityT&& value) {
    m_externalIdentityHasBeenSet = true;
    m_externalIdentity = std::forward<ExternalIdentityT>(value);
  }
  template <typename ExternalIdentityT = ObjectStorageExternalIdentityConfig>
  ObjectStorageFederatedIdentityConfig& WithExternalIdentity(ExternalIdentityT&& value) {
    SetExternalIdentity(std::forward<ExternalIdentityT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsIamRole;

  ObjectStorageExternalIdentityConfig m_externalIdentity;
  bool m_awsIamRoleHasBeenSet = false;
  bool m_externalIdentityHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
