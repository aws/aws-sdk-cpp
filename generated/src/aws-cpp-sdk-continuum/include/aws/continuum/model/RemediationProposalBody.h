/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
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
 * <p>Projected content for a REMEDIATION_PROPOSAL artifact: the patch the
 * remediation agent produced, with the descriptors needed to apply and verify
 * it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/RemediationProposalBody">AWS
 * API Reference</a></p>
 */
class RemediationProposalBody {
 public:
  AWS_CONTINUUM_API RemediationProposalBody() = default;
  AWS_CONTINUUM_API RemediationProposalBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API RemediationProposalBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The patch exactly as the remediation agent produced it, unmodified.</p>
   */
  inline const Aws::String& GetPatch() const { return m_patch; }
  inline bool PatchHasBeenSet() const { return m_patchHasBeenSet; }
  template <typename PatchT = Aws::String>
  void SetPatch(PatchT&& value) {
    m_patchHasBeenSet = true;
    m_patch = std::forward<PatchT>(value);
  }
  template <typename PatchT = Aws::String>
  RemediationProposalBody& WithPatch(PatchT&& value) {
    SetPatch(std::forward<PatchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The patch's wire format, which determines how to apply it. Absent when the
   * producer recorded a format with no mapping yet.</p>
   */
  inline PatchFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(PatchFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline RemediationProposalBody& WithFormat(PatchFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filename the producer suggests for the patch, when it named one.</p>
   */
  inline const Aws::String& GetFilename() const { return m_filename; }
  inline bool FilenameHasBeenSet() const { return m_filenameHasBeenSet; }
  template <typename FilenameT = Aws::String>
  void SetFilename(FilenameT&& value) {
    m_filenameHasBeenSet = true;
    m_filename = std::forward<FilenameT>(value);
  }
  template <typename FilenameT = Aws::String>
  RemediationProposalBody& WithFilename(FilenameT&& value) {
    SetFilename(std::forward<FilenameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SHA-256 of the patch bytes in lowercase hex, as recorded by the producer.</p>
   * <p>Lets a caller confirm the patch it applies is byte-for-byte the one that was
   * reviewed. Computed over the patch bytes, so it is verifiable against
   * <code>patch</code> without trusting this value.</p>
   */
  inline const Aws::String& GetPatchSha256() const { return m_patchSha256; }
  inline bool PatchSha256HasBeenSet() const { return m_patchSha256HasBeenSet; }
  template <typename PatchSha256T = Aws::String>
  void SetPatchSha256(PatchSha256T&& value) {
    m_patchSha256HasBeenSet = true;
    m_patchSha256 = std::forward<PatchSha256T>(value);
  }
  template <typename PatchSha256T = Aws::String>
  RemediationProposalBody& WithPatchSha256(PatchSha256T&& value) {
    SetPatchSha256(std::forward<PatchSha256T>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_patch;

  PatchFormat m_format{PatchFormat::NOT_SET};

  Aws::String m_filename;

  Aws::String m_patchSha256;
  bool m_patchHasBeenSet = false;
  bool m_formatHasBeenSet = false;
  bool m_filenameHasBeenSet = false;
  bool m_patchSha256HasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
