/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/GoogleOidcConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
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
  AWS_DATASYNC_API ObjectStorageExternalIdentityConfig(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DATASYNC_API ObjectStorageExternalIdentityConfig& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DATASYNC_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

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
