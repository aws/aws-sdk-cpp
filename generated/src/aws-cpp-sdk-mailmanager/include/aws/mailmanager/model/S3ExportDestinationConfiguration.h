/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace MailManager {
namespace Model {

/**
 * <p>The configuration for exporting email data to an Amazon S3
 * bucket.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/S3ExportDestinationConfiguration">AWS
 * API Reference</a></p>
 */
class S3ExportDestinationConfiguration {
 public:
  AWS_MAILMANAGER_API S3ExportDestinationConfiguration() = default;
  AWS_MAILMANAGER_API S3ExportDestinationConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MAILMANAGER_API S3ExportDestinationConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MAILMANAGER_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The S3 location to deliver the exported email data.</p>
   */
  inline const Aws::String& GetS3Location() const { return m_s3Location; }
  inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
  template <typename S3LocationT = Aws::String>
  void SetS3Location(S3LocationT&& value) {
    m_s3LocationHasBeenSet = true;
    m_s3Location = std::forward<S3LocationT>(value);
  }
  template <typename S3LocationT = Aws::String>
  S3ExportDestinationConfiguration& WithS3Location(S3LocationT&& value) {
    SetS3Location(std::forward<S3LocationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3Location;
  bool m_s3LocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
