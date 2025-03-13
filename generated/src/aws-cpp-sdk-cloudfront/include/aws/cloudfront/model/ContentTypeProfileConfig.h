/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ContentTypeProfiles.h>
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
   * <p>The configuration for a field-level encryption content type-profile
   * mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ContentTypeProfileConfig">AWS
   * API Reference</a></p>
   */
  class ContentTypeProfileConfig
  {
  public:
    AWS_CLOUDFRONT_API ContentTypeProfileConfig() = default;
    AWS_CLOUDFRONT_API ContentTypeProfileConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ContentTypeProfileConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The setting in a field-level encryption content type-profile mapping that
     * specifies what to do when an unknown content type is provided for the profile.
     * If true, content is forwarded without being encrypted when the content type is
     * unknown. If false (the default), an error is returned when the content type is
     * unknown.</p>
     */
    inline bool GetForwardWhenContentTypeIsUnknown() const { return m_forwardWhenContentTypeIsUnknown; }
    inline bool ForwardWhenContentTypeIsUnknownHasBeenSet() const { return m_forwardWhenContentTypeIsUnknownHasBeenSet; }
    inline void SetForwardWhenContentTypeIsUnknown(bool value) { m_forwardWhenContentTypeIsUnknownHasBeenSet = true; m_forwardWhenContentTypeIsUnknown = value; }
    inline ContentTypeProfileConfig& WithForwardWhenContentTypeIsUnknown(bool value) { SetForwardWhenContentTypeIsUnknown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a field-level encryption content type-profile.</p>
     */
    inline const ContentTypeProfiles& GetContentTypeProfiles() const { return m_contentTypeProfiles; }
    inline bool ContentTypeProfilesHasBeenSet() const { return m_contentTypeProfilesHasBeenSet; }
    template<typename ContentTypeProfilesT = ContentTypeProfiles>
    void SetContentTypeProfiles(ContentTypeProfilesT&& value) { m_contentTypeProfilesHasBeenSet = true; m_contentTypeProfiles = std::forward<ContentTypeProfilesT>(value); }
    template<typename ContentTypeProfilesT = ContentTypeProfiles>
    ContentTypeProfileConfig& WithContentTypeProfiles(ContentTypeProfilesT&& value) { SetContentTypeProfiles(std::forward<ContentTypeProfilesT>(value)); return *this;}
    ///@}
  private:

    bool m_forwardWhenContentTypeIsUnknown{false};
    bool m_forwardWhenContentTypeIsUnknownHasBeenSet = false;

    ContentTypeProfiles m_contentTypeProfiles;
    bool m_contentTypeProfilesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
