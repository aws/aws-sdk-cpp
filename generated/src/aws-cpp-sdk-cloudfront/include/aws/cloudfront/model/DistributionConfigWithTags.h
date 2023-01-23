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
    AWS_CLOUDFRONT_API DistributionConfigWithTags();
    AWS_CLOUDFRONT_API DistributionConfigWithTags(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DistributionConfigWithTags& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A distribution configuration.</p>
     */
    inline const DistributionConfig& GetDistributionConfig() const{ return m_distributionConfig; }

    /**
     * <p>A distribution configuration.</p>
     */
    inline bool DistributionConfigHasBeenSet() const { return m_distributionConfigHasBeenSet; }

    /**
     * <p>A distribution configuration.</p>
     */
    inline void SetDistributionConfig(const DistributionConfig& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = value; }

    /**
     * <p>A distribution configuration.</p>
     */
    inline void SetDistributionConfig(DistributionConfig&& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = std::move(value); }

    /**
     * <p>A distribution configuration.</p>
     */
    inline DistributionConfigWithTags& WithDistributionConfig(const DistributionConfig& value) { SetDistributionConfig(value); return *this;}

    /**
     * <p>A distribution configuration.</p>
     */
    inline DistributionConfigWithTags& WithDistributionConfig(DistributionConfig&& value) { SetDistributionConfig(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline const Tags& GetTags() const{ return m_tags; }

    /**
     * <p>A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline void SetTags(const Tags& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline void SetTags(Tags&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline DistributionConfigWithTags& WithTags(const Tags& value) { SetTags(value); return *this;}

    /**
     * <p>A complex type that contains zero or more <code>Tag</code> elements.</p>
     */
    inline DistributionConfigWithTags& WithTags(Tags&& value) { SetTags(std::move(value)); return *this;}

  private:

    DistributionConfig m_distributionConfig;
    bool m_distributionConfigHasBeenSet = false;

    Tags m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
