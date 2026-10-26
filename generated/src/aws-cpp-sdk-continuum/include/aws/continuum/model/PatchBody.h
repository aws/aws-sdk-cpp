/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/PatchDelivery.h>
#include <aws/continuum/model/PatchFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Projected content for a PATCH artifact: the remediation patch for one
 * repository, with the descriptors needed to verify and apply it and the state of
 * its delivery to the customer's own bucket or repository.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/PatchBody">AWS
 * API Reference</a></p>
 */
class PatchBody {
 public:
  AWS_CONTINUUM_API PatchBody() = default;
  AWS_CONTINUUM_API PatchBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API PatchBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The patch exactly as stored, unmodified. Control Plane accepted it only as a
   * text unified diff, so <code>git apply</code> applies it.</p>
   */
  inline const Aws::String& GetPatch() const { return m_patch; }
  inline bool PatchHasBeenSet() const { return m_patchHasBeenSet; }
  template <typename PatchT = Aws::String>
  void SetPatch(PatchT&& value) {
    m_patchHasBeenSet = true;
    m_patch = std::forward<PatchT>(value);
  }
  template <typename PatchT = Aws::String>
  PatchBody& WithPatch(PatchT&& value) {
    SetPatch(std::forward<PatchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The patch's wire format, read from the patch itself, which determines how to
   * apply it. Absent when the patch starts with neither a git mailbox header nor a
   * <code>diff --git</code> header.</p>
   */
  inline PatchFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(PatchFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline PatchBody& WithFormat(PatchFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The repository the patch applies to, as named in the source snapshot it was
   * generated against.</p>
   */
  inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
  inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
  template <typename RepositoryNameT = Aws::String>
  void SetRepositoryName(RepositoryNameT&& value) {
    m_repositoryNameHasBeenSet = true;
    m_repositoryName = std::forward<RepositoryNameT>(value);
  }
  template <typename RepositoryNameT = Aws::String>
  PatchBody& WithRepositoryName(RepositoryNameT&& value) {
    SetRepositoryName(std::forward<RepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SHA-256 of the patch's UTF-8 bytes in lowercase hex, computed by Control
   * Plane when it stored the patch.</p> <p>Lets a caller confirm the patch it
   * applies is byte-for-byte the one that was reviewed. Computed over the patch
   * bytes, so it is verifiable against <code>patch</code> without trusting this
   * value.</p>
   */
  inline const Aws::String& GetPatchSha256() const { return m_patchSha256; }
  inline bool PatchSha256HasBeenSet() const { return m_patchSha256HasBeenSet; }
  template <typename PatchSha256T = Aws::String>
  void SetPatchSha256(PatchSha256T&& value) {
    m_patchSha256HasBeenSet = true;
    m_patchSha256 = std::forward<PatchSha256T>(value);
  }
  template <typename PatchSha256T = Aws::String>
  PatchBody& WithPatchSha256(PatchSha256T&& value) {
    SetPatchSha256(std::forward<PatchSha256T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Size of the patch in UTF-8 bytes, the unit the digest is computed over.</p>
   */
  inline long long GetSizeBytes() const { return m_sizeBytes; }
  inline bool SizeBytesHasBeenSet() const { return m_sizeBytesHasBeenSet; }
  inline void SetSizeBytes(long long value) {
    m_sizeBytesHasBeenSet = true;
    m_sizeBytes = value;
  }
  inline PatchBody& WithSizeBytes(long long value) {
    SetSizeBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Delivery of the patch to the customer's bucket or repository. Absent when the
   * artifact has no delivery destination.</p>
   */
  inline const PatchDelivery& GetDelivery() const { return m_delivery; }
  inline bool DeliveryHasBeenSet() const { return m_deliveryHasBeenSet; }
  template <typename DeliveryT = PatchDelivery>
  void SetDelivery(DeliveryT&& value) {
    m_deliveryHasBeenSet = true;
    m_delivery = std::forward<DeliveryT>(value);
  }
  template <typename DeliveryT = PatchDelivery>
  PatchBody& WithDelivery(DeliveryT&& value) {
    SetDelivery(std::forward<DeliveryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_patch;

  PatchFormat m_format{PatchFormat::NOT_SET};

  Aws::String m_repositoryName;

  Aws::String m_patchSha256;

  long long m_sizeBytes{0};

  PatchDelivery m_delivery;
  bool m_patchHasBeenSet = false;
  bool m_formatHasBeenSet = false;
  bool m_repositoryNameHasBeenSet = false;
  bool m_patchSha256HasBeenSet = false;
  bool m_sizeBytesHasBeenSet = false;
  bool m_deliveryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
