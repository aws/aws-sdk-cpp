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
 * <p>Semantic description of the service a context graph node
 * represents.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/NodeSemantics">AWS
 * API Reference</a></p>
 */
class NodeSemantics {
 public:
  AWS_CLOUDWATCHOMNI_API NodeSemantics() = default;
  AWS_CLOUDWATCHOMNI_API NodeSemantics(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API NodeSemantics& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>What the service does.</p>
   */
  inline const Aws::String& GetPurpose() const { return m_purpose; }
  inline bool PurposeHasBeenSet() const { return m_purposeHasBeenSet; }
  template <typename PurposeT = Aws::String>
  void SetPurpose(PurposeT&& value) {
    m_purposeHasBeenSet = true;
    m_purpose = std::forward<PurposeT>(value);
  }
  template <typename PurposeT = Aws::String>
  NodeSemantics& WithPurpose(PurposeT&& value) {
    SetPurpose(std::forward<PurposeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary programming language the service is written in.</p>
   */
  inline const Aws::String& GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  template <typename LanguageT = Aws::String>
  void SetLanguage(LanguageT&& value) {
    m_languageHasBeenSet = true;
    m_language = std::forward<LanguageT>(value);
  }
  template <typename LanguageT = Aws::String>
  NodeSemantics& WithLanguage(LanguageT&& value) {
    SetLanguage(std::forward<LanguageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The application framework the service is built on.</p>
   */
  inline const Aws::String& GetFramework() const { return m_framework; }
  inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
  template <typename FrameworkT = Aws::String>
  void SetFramework(FrameworkT&& value) {
    m_frameworkHasBeenSet = true;
    m_framework = std::forward<FrameworkT>(value);
  }
  template <typename FrameworkT = Aws::String>
  NodeSemantics& WithFramework(FrameworkT&& value) {
    SetFramework(std::forward<FrameworkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The kind of workload the service is.</p>
   */
  inline const Aws::String& GetKind() const { return m_kind; }
  inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }
  template <typename KindT = Aws::String>
  void SetKind(KindT&& value) {
    m_kindHasBeenSet = true;
    m_kind = std::forward<KindT>(value);
  }
  template <typename KindT = Aws::String>
  NodeSemantics& WithKind(KindT&& value) {
    SetKind(std::forward<KindT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source repository the service is built from.</p>
   */
  inline const Aws::String& GetRepository() const { return m_repository; }
  inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
  template <typename RepositoryT = Aws::String>
  void SetRepository(RepositoryT&& value) {
    m_repositoryHasBeenSet = true;
    m_repository = std::forward<RepositoryT>(value);
  }
  template <typename RepositoryT = Aws::String>
  NodeSemantics& WithRepository(RepositoryT&& value) {
    SetRepository(std::forward<RepositoryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_purpose;

  Aws::String m_language;

  Aws::String m_framework;

  Aws::String m_kind;

  Aws::String m_repository;
  bool m_purposeHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_frameworkHasBeenSet = false;
  bool m_kindHasBeenSet = false;
  bool m_repositoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
