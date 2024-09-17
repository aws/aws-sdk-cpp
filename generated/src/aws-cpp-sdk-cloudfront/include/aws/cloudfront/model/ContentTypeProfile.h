/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/Format.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A field-level encryption content type profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ContentTypeProfile">AWS
   * API Reference</a></p>
   */
  class ContentTypeProfile
  {
  public:
    AWS_CLOUDFRONT_API ContentTypeProfile();
    AWS_CLOUDFRONT_API ContentTypeProfile(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ContentTypeProfile& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The format for a field-level encryption content type-profile mapping.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline ContentTypeProfile& WithFormat(const Format& value) { SetFormat(value); return *this;}
    inline ContentTypeProfile& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile ID for a field-level encryption content type-profile mapping.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline ContentTypeProfile& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline ContentTypeProfile& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline ContentTypeProfile& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type for a field-level encryption content type-profile
     * mapping.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline ContentTypeProfile& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline ContentTypeProfile& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline ContentTypeProfile& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}
  private:

    Format m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
