/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/TrustStoreStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {

/**
 * <p>A trust store summary.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/TrustStoreSummary">AWS
 * API Reference</a></p>
 */
class TrustStoreSummary {
 public:
  AWS_CLOUDFRONT_API TrustStoreSummary() = default;
  AWS_CLOUDFRONT_API TrustStoreSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API TrustStoreSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The trust store's ID.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  TrustStoreSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust store's Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  TrustStoreSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust store's name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TrustStoreSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust store's status.</p>
   */
  inline TrustStoreStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TrustStoreStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TrustStoreSummary& WithStatus(TrustStoreStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust store's number of CA certificates.</p>
   */
  inline int GetNumberOfCaCertificates() const { return m_numberOfCaCertificates; }
  inline bool NumberOfCaCertificatesHasBeenSet() const { return m_numberOfCaCertificatesHasBeenSet; }
  inline void SetNumberOfCaCertificates(int value) {
    m_numberOfCaCertificatesHasBeenSet = true;
    m_numberOfCaCertificates = value;
  }
  inline TrustStoreSummary& WithNumberOfCaCertificates(int value) {
    SetNumberOfCaCertificates(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust store's last modified time.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  TrustStoreSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust store's reason.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  TrustStoreSummary& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier for the current version of the trust store.</p>
   */
  inline const Aws::String& GetETag() const { return m_eTag; }
  inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
  template <typename ETagT = Aws::String>
  void SetETag(ETagT&& value) {
    m_eTagHasBeenSet = true;
    m_eTag = std::forward<ETagT>(value);
  }
  template <typename ETagT = Aws::String>
  TrustStoreSummary& WithETag(ETagT&& value) {
    SetETag(std::forward<ETagT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_name;

  TrustStoreStatus m_status{TrustStoreStatus::NOT_SET};

  int m_numberOfCaCertificates{0};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_reason;

  Aws::String m_eTag;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_numberOfCaCertificatesHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_eTagHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
