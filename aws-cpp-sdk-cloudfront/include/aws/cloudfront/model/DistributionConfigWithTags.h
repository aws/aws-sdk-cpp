/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DistributionConfigWithTags">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API DistributionConfigWithTags
  {
  public:
    DistributionConfigWithTags();
    DistributionConfigWithTags(const Aws::Utils::Xml::XmlNode& xmlNode);
    DistributionConfigWithTags& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


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
    bool m_distributionConfigHasBeenSet;

    Tags m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
