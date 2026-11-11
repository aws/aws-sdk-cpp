/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/GenericRevisionInfo.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodeDeploy {
namespace Model {

/**
 * <p>Information about an application revision.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RevisionInfo">AWS
 * API Reference</a></p>
 */
class RevisionInfo {
 public:
  AWS_CODEDEPLOY_API RevisionInfo() = default;
  AWS_CODEDEPLOY_API RevisionInfo(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEDEPLOY_API RevisionInfo& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEDEPLOY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Information about the location and type of an application revision.</p>
   */
  inline const RevisionLocation& GetRevisionLocation() const { return m_revisionLocation; }
  inline bool RevisionLocationHasBeenSet() const { return m_revisionLocationHasBeenSet; }
  template <typename RevisionLocationT = RevisionLocation>
  void SetRevisionLocation(RevisionLocationT&& value) {
    m_revisionLocationHasBeenSet = true;
    m_revisionLocation = std::forward<RevisionLocationT>(value);
  }
  template <typename RevisionLocationT = RevisionLocation>
  RevisionInfo& WithRevisionLocation(RevisionLocationT&& value) {
    SetRevisionLocation(std::forward<RevisionLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about an application revision, including usage details and
   * associated deployment groups.</p>
   */
  inline const GenericRevisionInfo& GetGenericRevisionInfo() const { return m_genericRevisionInfo; }
  inline bool GenericRevisionInfoHasBeenSet() const { return m_genericRevisionInfoHasBeenSet; }
  template <typename GenericRevisionInfoT = GenericRevisionInfo>
  void SetGenericRevisionInfo(GenericRevisionInfoT&& value) {
    m_genericRevisionInfoHasBeenSet = true;
    m_genericRevisionInfo = std::forward<GenericRevisionInfoT>(value);
  }
  template <typename GenericRevisionInfoT = GenericRevisionInfo>
  RevisionInfo& WithGenericRevisionInfo(GenericRevisionInfoT&& value) {
    SetGenericRevisionInfo(std::forward<GenericRevisionInfoT>(value));
    return *this;
  }
  ///@}
 private:
  RevisionLocation m_revisionLocation;

  GenericRevisionInfo m_genericRevisionInfo;
  bool m_revisionLocationHasBeenSet = false;
  bool m_genericRevisionInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws
