/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/GoogleOidcConfig.h>

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
 * <p>Specifies cloud-provider-specific external identity parameters used when
 * exchanging the Amazon Web Services web token for an OpenID Connect token at the
 * object storage provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ObjectStorageExternalIdentityConfig">AWS
 * API Reference</a></p>
 */
class ObjectStorageExternalIdentityConfig {
 public:
  AWS_DATASYNC_API ObjectStorageExternalIdentityConfig() = default;
  AWS_DATASYNC_API ObjectStorageExternalIdentityConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATASYNC_API ObjectStorageExternalIdentityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>External identity parameters for Google Cloud Storage.</p>
   */
  inline const GoogleOidcConfig& GetGoogleOidc() const { return m_googleOidc; }
  inline bool GoogleOidcHasBeenSet() const { return m_googleOidcHasBeenSet; }
  template <typename GoogleOidcT = GoogleOidcConfig>
  void SetGoogleOidc(GoogleOidcT&& value) {
    m_googleOidcHasBeenSet = true;
    m_googleOidc = std::forward<GoogleOidcT>(value);
  }
  template <typename GoogleOidcT = GoogleOidcConfig>
  ObjectStorageExternalIdentityConfig& WithGoogleOidc(GoogleOidcT&& value) {
    SetGoogleOidc(std::forward<GoogleOidcT>(value));
    return *this;
  }
  ///@}
 private:
  GoogleOidcConfig m_googleOidc;
  bool m_googleOidcHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
