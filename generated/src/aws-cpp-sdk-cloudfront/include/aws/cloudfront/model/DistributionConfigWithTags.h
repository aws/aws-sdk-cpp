/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/DistributionConfig.h>
#include <aws/cloudfront/model/Tags.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A distribution Configuration and a list of tags to be associated with the
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DistributionConfigWithTags">AWS
   * API Reference</a></p>
   */
  class DistributionConfigWithTags
  {
  public:
    AWS_CLOUDFRONT_API DistributionConfigWithTags() = default;
    AWS_CLOUDFRONT_API DistributionConfigWithTags(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DistributionConfigWithTags& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A distribution configuration.</p>
     */
    inline const DistributionConfig& GetDistributionConfig() const { return m_distributionConfig; }
    inline bool DistributionConfigHasBeenSet() const { return m_distributionConfigHasBeenSet; }
    template<typename DistributionConfigT = DistributionConfig>
    void SetDistributionConfig(DistributionConfigT&& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = std::forward<DistributionConfigT>(value); }
    template<typename DistributionConfigT = DistributionConfig>
    DistributionConfigWithTags& WithDistributionConfig(DistributionConfigT&& value) { SetDistributionConfig(std::forward<DistributionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline const Tags& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Tags>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Tags>
    DistributionConfigWithTags& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    ///@}
  private:

    DistributionConfig m_distributionConfig;
    bool m_distributionConfigHasBeenSet = false;

    Tags m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
