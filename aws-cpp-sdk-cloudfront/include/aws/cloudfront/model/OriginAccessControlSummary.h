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
   * <p>A CloudFront origin access control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginAccessControlSummary">AWS
   * API Reference</a></p>
   */
  class OriginAccessControlSummary
  {
  public:
    AWS_CLOUDFRONT_API OriginAccessControlSummary();
    AWS_CLOUDFRONT_API OriginAccessControlSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginAccessControlSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline OriginAccessControlSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline OriginAccessControlSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the origin access control.</p>
     */
    inline OriginAccessControlSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A description of the origin access control.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the origin access control.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the origin access control.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the origin access control.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the origin access control.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the origin access control.</p>
     */
    inline OriginAccessControlSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the origin access control.</p>
     */
    inline OriginAccessControlSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the origin access control.</p>
     */
    inline OriginAccessControlSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique name that identifies the origin access control.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique name that identifies the origin access control.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique name that identifies the origin access control.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique name that identifies the origin access control.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique name that identifies the origin access control.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique name that identifies the origin access control.</p>
     */
    inline OriginAccessControlSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique name that identifies the origin access control.</p>
     */
    inline OriginAccessControlSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique name that identifies the origin access control.</p>
     */
    inline OriginAccessControlSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The signing protocol of the origin access control. The signing protocol
     * determines how CloudFront signs (authenticates) requests. The only valid value
     * is <code>sigv4</code>.</p>
     */
    inline const OriginAccessControlSigningProtocols& GetSigningProtocol() const{ return m_signingProtocol; }

    /**
     * <p>The signing protocol of the origin access control. The signing protocol
     * determines how CloudFront signs (authenticates) requests. The only valid value
     * is <code>sigv4</code>.</p>
     */
    inline bool SigningProtocolHasBeenSet() const { return m_signingProtocolHasBeenSet; }

    /**
     * <p>The signing protocol of the origin access control. The signing protocol
     * determines how CloudFront signs (authenticates) requests. The only valid value
     * is <code>sigv4</code>.</p>
     */
    inline void SetSigningProtocol(const OriginAccessControlSigningProtocols& value) { m_signingProtocolHasBeenSet = true; m_signingProtocol = value; }

    /**
     * <p>The signing protocol of the origin access control. The signing protocol
     * determines how CloudFront signs (authenticates) requests. The only valid value
     * is <code>sigv4</code>.</p>
     */
    inline void SetSigningProtocol(OriginAccessControlSigningProtocols&& value) { m_signingProtocolHasBeenSet = true; m_signingProtocol = std::move(value); }

    /**
     * <p>The signing protocol of the origin access control. The signing protocol
     * determines how CloudFront signs (authenticates) requests. The only valid value
     * is <code>sigv4</code>.</p>
     */
    inline OriginAccessControlSummary& WithSigningProtocol(const OriginAccessControlSigningProtocols& value) { SetSigningProtocol(value); return *this;}

    /**
     * <p>The signing protocol of the origin access control. The signing protocol
     * determines how CloudFront signs (authenticates) requests. The only valid value
     * is <code>sigv4</code>.</p>
     */
    inline OriginAccessControlSummary& WithSigningProtocol(OriginAccessControlSigningProtocols&& value) { SetSigningProtocol(std::move(value)); return *this;}


    /**
     * <p>A value that specifies which requests CloudFront signs (adds authentication
     * information to). This field can have one of the following values:</p> <ul> <li>
     * <p> <code>never</code> – CloudFront doesn't sign any origin requests.</p> </li>
     * <li> <p> <code>always</code> – CloudFront signs all origin requests, overwriting
     * the <code>Authorization</code> header from the viewer request if necessary.</p>
     * </li> <li> <p> <code>no-override</code> – If the viewer request doesn't contain
     * the <code>Authorization</code> header, CloudFront signs the origin request. If
     * the viewer request contains the <code>Authorization</code> header, CloudFront
     * doesn't sign the origin request, but instead passes along the
     * <code>Authorization</code> header that it received in the viewer request.</p>
     * </li> </ul>
     */
    inline const OriginAccessControlSigningBehaviors& GetSigningBehavior() const{ return m_signingBehavior; }

    /**
     * <p>A value that specifies which requests CloudFront signs (adds authentication
     * information to). This field can have one of the following values:</p> <ul> <li>
     * <p> <code>never</code> – CloudFront doesn't sign any origin requests.</p> </li>
     * <li> <p> <code>always</code> – CloudFront signs all origin requests, overwriting
     * the <code>Authorization</code> header from the viewer request if necessary.</p>
     * </li> <li> <p> <code>no-override</code> – If the viewer request doesn't contain
     * the <code>Authorization</code> header, CloudFront signs the origin request. If
     * the viewer request contains the <code>Authorization</code> header, CloudFront
     * doesn't sign the origin request, but instead passes along the
     * <code>Authorization</code> header that it received in the viewer request.</p>
     * </li> </ul>
     */
    inline bool SigningBehaviorHasBeenSet() const { return m_signingBehaviorHasBeenSet; }

    /**
     * <p>A value that specifies which requests CloudFront signs (adds authentication
     * information to). This field can have one of the following values:</p> <ul> <li>
     * <p> <code>never</code> – CloudFront doesn't sign any origin requests.</p> </li>
     * <li> <p> <code>always</code> – CloudFront signs all origin requests, overwriting
     * the <code>Authorization</code> header from the viewer request if necessary.</p>
     * </li> <li> <p> <code>no-override</code> – If the viewer request doesn't contain
     * the <code>Authorization</code> header, CloudFront signs the origin request. If
     * the viewer request contains the <code>Authorization</code> header, CloudFront
     * doesn't sign the origin request, but instead passes along the
     * <code>Authorization</code> header that it received in the viewer request.</p>
     * </li> </ul>
     */
    inline void SetSigningBehavior(const OriginAccessControlSigningBehaviors& value) { m_signingBehaviorHasBeenSet = true; m_signingBehavior = value; }

    /**
     * <p>A value that specifies which requests CloudFront signs (adds authentication
     * information to). This field can have one of the following values:</p> <ul> <li>
     * <p> <code>never</code> – CloudFront doesn't sign any origin requests.</p> </li>
     * <li> <p> <code>always</code> – CloudFront signs all origin requests, overwriting
     * the <code>Authorization</code> header from the viewer request if necessary.</p>
     * </li> <li> <p> <code>no-override</code> – If the viewer request doesn't contain
     * the <code>Authorization</code> header, CloudFront signs the origin request. If
     * the viewer request contains the <code>Authorization</code> header, CloudFront
     * doesn't sign the origin request, but instead passes along the
     * <code>Authorization</code> header that it received in the viewer request.</p>
     * </li> </ul>
     */
    inline void SetSigningBehavior(OriginAccessControlSigningBehaviors&& value) { m_signingBehaviorHasBeenSet = true; m_signingBehavior = std::move(value); }

    /**
     * <p>A value that specifies which requests CloudFront signs (adds authentication
     * information to). This field can have one of the following values:</p> <ul> <li>
     * <p> <code>never</code> – CloudFront doesn't sign any origin requests.</p> </li>
     * <li> <p> <code>always</code> – CloudFront signs all origin requests, overwriting
     * the <code>Authorization</code> header from the viewer request if necessary.</p>
     * </li> <li> <p> <code>no-override</code> – If the viewer request doesn't contain
     * the <code>Authorization</code> header, CloudFront signs the origin request. If
     * the viewer request contains the <code>Authorization</code> header, CloudFront
     * doesn't sign the origin request, but instead passes along the
     * <code>Authorization</code> header that it received in the viewer request.</p>
     * </li> </ul>
     */
    inline OriginAccessControlSummary& WithSigningBehavior(const OriginAccessControlSigningBehaviors& value) { SetSigningBehavior(value); return *this;}

    /**
     * <p>A value that specifies which requests CloudFront signs (adds authentication
     * information to). This field can have one of the following values:</p> <ul> <li>
     * <p> <code>never</code> – CloudFront doesn't sign any origin requests.</p> </li>
     * <li> <p> <code>always</code> – CloudFront signs all origin requests, overwriting
     * the <code>Authorization</code> header from the viewer request if necessary.</p>
     * </li> <li> <p> <code>no-override</code> – If the viewer request doesn't contain
     * the <code>Authorization</code> header, CloudFront signs the origin request. If
     * the viewer request contains the <code>Authorization</code> header, CloudFront
     * doesn't sign the origin request, but instead passes along the
     * <code>Authorization</code> header that it received in the viewer request.</p>
     * </li> </ul>
     */
    inline OriginAccessControlSummary& WithSigningBehavior(OriginAccessControlSigningBehaviors&& value) { SetSigningBehavior(std::move(value)); return *this;}


    /**
     * <p>The type of origin that this origin access control is for. The only valid
     * value is <code>s3</code>.</p>
     */
    inline const OriginAccessControlOriginTypes& GetOriginAccessControlOriginType() const{ return m_originAccessControlOriginType; }

    /**
     * <p>The type of origin that this origin access control is for. The only valid
     * value is <code>s3</code>.</p>
     */
    inline bool OriginAccessControlOriginTypeHasBeenSet() const { return m_originAccessControlOriginTypeHasBeenSet; }

    /**
     * <p>The type of origin that this origin access control is for. The only valid
     * value is <code>s3</code>.</p>
     */
    inline void SetOriginAccessControlOriginType(const OriginAccessControlOriginTypes& value) { m_originAccessControlOriginTypeHasBeenSet = true; m_originAccessControlOriginType = value; }

    /**
     * <p>The type of origin that this origin access control is for. The only valid
     * value is <code>s3</code>.</p>
     */
    inline void SetOriginAccessControlOriginType(OriginAccessControlOriginTypes&& value) { m_originAccessControlOriginTypeHasBeenSet = true; m_originAccessControlOriginType = std::move(value); }

    /**
     * <p>The type of origin that this origin access control is for. The only valid
     * value is <code>s3</code>.</p>
     */
    inline OriginAccessControlSummary& WithOriginAccessControlOriginType(const OriginAccessControlOriginTypes& value) { SetOriginAccessControlOriginType(value); return *this;}

    /**
     * <p>The type of origin that this origin access control is for. The only valid
     * value is <code>s3</code>.</p>
     */
    inline OriginAccessControlSummary& WithOriginAccessControlOriginType(OriginAccessControlOriginTypes&& value) { SetOriginAccessControlOriginType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    OriginAccessControlSigningProtocols m_signingProtocol;
    bool m_signingProtocolHasBeenSet = false;

    OriginAccessControlSigningBehaviors m_signingBehavior;
    bool m_signingBehaviorHasBeenSet = false;

    OriginAccessControlOriginTypes m_originAccessControlOriginType;
    bool m_originAccessControlOriginTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
