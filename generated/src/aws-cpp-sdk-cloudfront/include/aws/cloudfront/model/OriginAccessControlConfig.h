/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/OriginAccessControlSigningProtocols.h>
#include <aws/cloudfront/model/OriginAccessControlSigningBehaviors.h>
#include <aws/cloudfront/model/OriginAccessControlOriginTypes.h>
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
   * <p>A CloudFront origin access control configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginAccessControlConfig">AWS
   * API Reference</a></p>
   */
  class OriginAccessControlConfig
  {
  public:
    AWS_CLOUDFRONT_API OriginAccessControlConfig() = default;
    AWS_CLOUDFRONT_API OriginAccessControlConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginAccessControlConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A name to identify the origin access control. You can specify up to 64
     * characters.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    OriginAccessControlConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the origin access control.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    OriginAccessControlConfig& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing protocol of the origin access control, which determines how
     * CloudFront signs (authenticates) requests. The only valid value is
     * <code>sigv4</code>.</p>
     */
    inline OriginAccessControlSigningProtocols GetSigningProtocol() const { return m_signingProtocol; }
    inline bool SigningProtocolHasBeenSet() const { return m_signingProtocolHasBeenSet; }
    inline void SetSigningProtocol(OriginAccessControlSigningProtocols value) { m_signingProtocolHasBeenSet = true; m_signingProtocol = value; }
    inline OriginAccessControlConfig& WithSigningProtocol(OriginAccessControlSigningProtocols value) { SetSigningProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which requests CloudFront signs (adds authentication information
     * to). Specify <code>always</code> for the most common use case. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-s3.html#oac-advanced-settings">origin
     * access control advanced settings</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p> <p>This field can have one of the following values:</p> <ul> <li>
     * <p> <code>always</code> – CloudFront signs all origin requests, overwriting the
     * <code>Authorization</code> header from the viewer request if one exists.</p>
     * </li> <li> <p> <code>never</code> – CloudFront doesn't sign any origin requests.
     * This value turns off origin access control for all origins in all distributions
     * that use this origin access control.</p> </li> <li> <p> <code>no-override</code>
     * – If the viewer request doesn't contain the <code>Authorization</code> header,
     * then CloudFront signs the origin request. If the viewer request contains the
     * <code>Authorization</code> header, then CloudFront doesn't sign the origin
     * request and instead passes along the <code>Authorization</code> header from the
     * viewer request. <b>WARNING: To pass along the <code>Authorization</code> header
     * from the viewer request, you <i>must</i> add the <code>Authorization</code>
     * header to a <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html">cache
     * policy</a> for all cache behaviors that use origins associated with this origin
     * access control.</b> </p> </li> </ul>
     */
    inline OriginAccessControlSigningBehaviors GetSigningBehavior() const { return m_signingBehavior; }
    inline bool SigningBehaviorHasBeenSet() const { return m_signingBehaviorHasBeenSet; }
    inline void SetSigningBehavior(OriginAccessControlSigningBehaviors value) { m_signingBehaviorHasBeenSet = true; m_signingBehavior = value; }
    inline OriginAccessControlConfig& WithSigningBehavior(OriginAccessControlSigningBehaviors value) { SetSigningBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of origin that this origin access control is for.</p>
     */
    inline OriginAccessControlOriginTypes GetOriginAccessControlOriginType() const { return m_originAccessControlOriginType; }
    inline bool OriginAccessControlOriginTypeHasBeenSet() const { return m_originAccessControlOriginTypeHasBeenSet; }
    inline void SetOriginAccessControlOriginType(OriginAccessControlOriginTypes value) { m_originAccessControlOriginTypeHasBeenSet = true; m_originAccessControlOriginType = value; }
    inline OriginAccessControlConfig& WithOriginAccessControlOriginType(OriginAccessControlOriginTypes value) { SetOriginAccessControlOriginType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    OriginAccessControlSigningProtocols m_signingProtocol{OriginAccessControlSigningProtocols::NOT_SET};
    bool m_signingProtocolHasBeenSet = false;

    OriginAccessControlSigningBehaviors m_signingBehavior{OriginAccessControlSigningBehaviors::NOT_SET};
    bool m_signingBehaviorHasBeenSet = false;

    OriginAccessControlOriginTypes m_originAccessControlOriginType{OriginAccessControlOriginTypes::NOT_SET};
    bool m_originAccessControlOriginTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
