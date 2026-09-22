/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Identifies what the credentials are for: either an existing space, or a
 * target account in a domain. Specify spaceId, or both domainId and
 * targetAccountId.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/SpaceCredentialRequestContext">AWS
 * API Reference</a></p>
 */
class SpaceCredentialRequestContext {
 public:
  AWS_CLOUDWATCHOMNI_API SpaceCredentialRequestContext() = default;
  AWS_CLOUDWATCHOMNI_API SpaceCredentialRequestContext(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API SpaceCredentialRequestContext& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ID of an existing space to return credentials for.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  SpaceCredentialRequestContext& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the domain, when returning credentials for a target account that
   * does not yet have a space.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  SpaceCredentialRequestContext& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the target member account. Required when domainId is set.</p>
   */
  inline const Aws::String& GetTargetAccountId() const { return m_targetAccountId; }
  inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }
  template <typename TargetAccountIdT = Aws::String>
  void SetTargetAccountId(TargetAccountIdT&& value) {
    m_targetAccountIdHasBeenSet = true;
    m_targetAccountId = std::forward<TargetAccountIdT>(value);
  }
  template <typename TargetAccountIdT = Aws::String>
  SpaceCredentialRequestContext& WithTargetAccountId(TargetAccountIdT&& value) {
    SetTargetAccountId(std::forward<TargetAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::String m_domainId;

  Aws::String m_targetAccountId;
  bool m_spaceIdHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_targetAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
