/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CaCertificatesBundleSource.h>
#include <aws/cloudfront/model/Tags.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudFront {
namespace Model {

/**
 */
class CreateTrustStore2020_05_31Request : public CloudFrontRequest {
 public:
  AWS_CLOUDFRONT_API CreateTrustStore2020_05_31Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTrustStore"; }

  AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A name for the trust store.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateTrustStore2020_05_31Request& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CA certificates bundle source for the trust store.</p>
   */
  inline const CaCertificatesBundleSource& GetCaCertificatesBundleSource() const { return m_caCertificatesBundleSource; }
  inline bool CaCertificatesBundleSourceHasBeenSet() const { return m_caCertificatesBundleSourceHasBeenSet; }
  template <typename CaCertificatesBundleSourceT = CaCertificatesBundleSource>
  void SetCaCertificatesBundleSource(CaCertificatesBundleSourceT&& value) {
    m_caCertificatesBundleSourceHasBeenSet = true;
    m_caCertificatesBundleSource = std::forward<CaCertificatesBundleSourceT>(value);
  }
  template <typename CaCertificatesBundleSourceT = CaCertificatesBundleSource>
  CreateTrustStore2020_05_31Request& WithCaCertificatesBundleSource(CaCertificatesBundleSourceT&& value) {
    SetCaCertificatesBundleSource(std::forward<CaCertificatesBundleSourceT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Tags& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Tags>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Tags>
  CreateTrustStore2020_05_31Request& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  CaCertificatesBundleSource m_caCertificatesBundleSource;

  Tags m_tags;
  bool m_nameHasBeenSet = false;
  bool m_caCertificatesBundleSourceHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
