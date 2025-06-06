﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/StreamingDistributionConfig.h>
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
   * <p>A streaming distribution Configuration and a list of tags to be associated
   * with the streaming distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/StreamingDistributionConfigWithTags">AWS
   * API Reference</a></p>
   */
  class StreamingDistributionConfigWithTags
  {
  public:
    AWS_CLOUDFRONT_API StreamingDistributionConfigWithTags() = default;
    AWS_CLOUDFRONT_API StreamingDistributionConfigWithTags(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API StreamingDistributionConfigWithTags& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A streaming distribution Configuration.</p>
     */
    inline const StreamingDistributionConfig& GetStreamingDistributionConfig() const { return m_streamingDistributionConfig; }
    inline bool StreamingDistributionConfigHasBeenSet() const { return m_streamingDistributionConfigHasBeenSet; }
    template<typename StreamingDistributionConfigT = StreamingDistributionConfig>
    void SetStreamingDistributionConfig(StreamingDistributionConfigT&& value) { m_streamingDistributionConfigHasBeenSet = true; m_streamingDistributionConfig = std::forward<StreamingDistributionConfigT>(value); }
    template<typename StreamingDistributionConfigT = StreamingDistributionConfig>
    StreamingDistributionConfigWithTags& WithStreamingDistributionConfig(StreamingDistributionConfigT&& value) { SetStreamingDistributionConfig(std::forward<StreamingDistributionConfigT>(value)); return *this;}
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
    StreamingDistributionConfigWithTags& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    ///@}
  private:

    StreamingDistributionConfig m_streamingDistributionConfig;
    bool m_streamingDistributionConfigHasBeenSet = false;

    Tags m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
