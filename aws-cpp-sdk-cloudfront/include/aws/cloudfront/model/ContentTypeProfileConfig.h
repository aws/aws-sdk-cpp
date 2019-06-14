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
   * <p>The configuration for a field-level encryption content type-profile mapping.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ContentTypeProfileConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ContentTypeProfileConfig
  {
  public:
    ContentTypeProfileConfig();
    ContentTypeProfileConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    ContentTypeProfileConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The setting in a field-level encryption content type-profile mapping that
     * specifies what to do when an unknown content type is provided for the profile.
     * If true, content is forwarded without being encrypted when the content type is
     * unknown. If false (the default), an error is returned when the content type is
     * unknown. </p>
     */
    inline bool GetForwardWhenContentTypeIsUnknown() const{ return m_forwardWhenContentTypeIsUnknown; }

    /**
     * <p>The setting in a field-level encryption content type-profile mapping that
     * specifies what to do when an unknown content type is provided for the profile.
     * If true, content is forwarded without being encrypted when the content type is
     * unknown. If false (the default), an error is returned when the content type is
     * unknown. </p>
     */
    inline bool ForwardWhenContentTypeIsUnknownHasBeenSet() const { return m_forwardWhenContentTypeIsUnknownHasBeenSet; }

    /**
     * <p>The setting in a field-level encryption content type-profile mapping that
     * specifies what to do when an unknown content type is provided for the profile.
     * If true, content is forwarded without being encrypted when the content type is
     * unknown. If false (the default), an error is returned when the content type is
     * unknown. </p>
     */
    inline void SetForwardWhenContentTypeIsUnknown(bool value) { m_forwardWhenContentTypeIsUnknownHasBeenSet = true; m_forwardWhenContentTypeIsUnknown = value; }

    /**
     * <p>The setting in a field-level encryption content type-profile mapping that
     * specifies what to do when an unknown content type is provided for the profile.
     * If true, content is forwarded without being encrypted when the content type is
     * unknown. If false (the default), an error is returned when the content type is
     * unknown. </p>
     */
    inline ContentTypeProfileConfig& WithForwardWhenContentTypeIsUnknown(bool value) { SetForwardWhenContentTypeIsUnknown(value); return *this;}


    /**
     * <p>The configuration for a field-level encryption content type-profile. </p>
     */
    inline const ContentTypeProfiles& GetContentTypeProfiles() const{ return m_contentTypeProfiles; }

    /**
     * <p>The configuration for a field-level encryption content type-profile. </p>
     */
    inline bool ContentTypeProfilesHasBeenSet() const { return m_contentTypeProfilesHasBeenSet; }

    /**
     * <p>The configuration for a field-level encryption content type-profile. </p>
     */
    inline void SetContentTypeProfiles(const ContentTypeProfiles& value) { m_contentTypeProfilesHasBeenSet = true; m_contentTypeProfiles = value; }

    /**
     * <p>The configuration for a field-level encryption content type-profile. </p>
     */
    inline void SetContentTypeProfiles(ContentTypeProfiles&& value) { m_contentTypeProfilesHasBeenSet = true; m_contentTypeProfiles = std::move(value); }

    /**
     * <p>The configuration for a field-level encryption content type-profile. </p>
     */
    inline ContentTypeProfileConfig& WithContentTypeProfiles(const ContentTypeProfiles& value) { SetContentTypeProfiles(value); return *this;}

    /**
     * <p>The configuration for a field-level encryption content type-profile. </p>
     */
    inline ContentTypeProfileConfig& WithContentTypeProfiles(ContentTypeProfiles&& value) { SetContentTypeProfiles(std::move(value)); return *this;}

  private:

    bool m_forwardWhenContentTypeIsUnknown;
    bool m_forwardWhenContentTypeIsUnknownHasBeenSet;

    ContentTypeProfiles m_contentTypeProfiles;
    bool m_contentTypeProfilesHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
