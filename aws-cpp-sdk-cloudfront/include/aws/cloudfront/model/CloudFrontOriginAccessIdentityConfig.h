/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * Origin access identity configuration.
   */
  class AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentityConfig
  {
  public:
    CloudFrontOriginAccessIdentityConfig();
    CloudFrontOriginAccessIdentityConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    CloudFrontOriginAccessIdentityConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the
     * CloudFrontOriginAccessIdentityConfig object), a new origin access identity is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an identity, and the content of the
     * CloudFrontOriginAccessIdentityConfig is identical to the original request
     * (ignoring white space), the response includes the same information returned to
     * the original request. If the CallerReference is a value you already sent in a
     * previous request to create an identity but the content of the
     * CloudFrontOriginAccessIdentityConfig is different from the original request,
     * CloudFront returns a CloudFrontOriginAccessIdentityAlreadyExists error.
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the
     * CloudFrontOriginAccessIdentityConfig object), a new origin access identity is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an identity, and the content of the
     * CloudFrontOriginAccessIdentityConfig is identical to the original request
     * (ignoring white space), the response includes the same information returned to
     * the original request. If the CallerReference is a value you already sent in a
     * previous request to create an identity but the content of the
     * CloudFrontOriginAccessIdentityConfig is different from the original request,
     * CloudFront returns a CloudFrontOriginAccessIdentityAlreadyExists error.
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the
     * CloudFrontOriginAccessIdentityConfig object), a new origin access identity is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an identity, and the content of the
     * CloudFrontOriginAccessIdentityConfig is identical to the original request
     * (ignoring white space), the response includes the same information returned to
     * the original request. If the CallerReference is a value you already sent in a
     * previous request to create an identity but the content of the
     * CloudFrontOriginAccessIdentityConfig is different from the original request,
     * CloudFront returns a CloudFrontOriginAccessIdentityAlreadyExists error.
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the
     * CloudFrontOriginAccessIdentityConfig object), a new origin access identity is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an identity, and the content of the
     * CloudFrontOriginAccessIdentityConfig is identical to the original request
     * (ignoring white space), the response includes the same information returned to
     * the original request. If the CallerReference is a value you already sent in a
     * previous request to create an identity but the content of the
     * CloudFrontOriginAccessIdentityConfig is different from the original request,
     * CloudFront returns a CloudFrontOriginAccessIdentityAlreadyExists error.
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the
     * CloudFrontOriginAccessIdentityConfig object), a new origin access identity is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an identity, and the content of the
     * CloudFrontOriginAccessIdentityConfig is identical to the original request
     * (ignoring white space), the response includes the same information returned to
     * the original request. If the CallerReference is a value you already sent in a
     * previous request to create an identity but the content of the
     * CloudFrontOriginAccessIdentityConfig is different from the original request,
     * CloudFront returns a CloudFrontOriginAccessIdentityAlreadyExists error.
     */
    inline CloudFrontOriginAccessIdentityConfig& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the
     * CloudFrontOriginAccessIdentityConfig object), a new origin access identity is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an identity, and the content of the
     * CloudFrontOriginAccessIdentityConfig is identical to the original request
     * (ignoring white space), the response includes the same information returned to
     * the original request. If the CallerReference is a value you already sent in a
     * previous request to create an identity but the content of the
     * CloudFrontOriginAccessIdentityConfig is different from the original request,
     * CloudFront returns a CloudFrontOriginAccessIdentityAlreadyExists error.
     */
    inline CloudFrontOriginAccessIdentityConfig& WithCallerReference(Aws::String&& value) { SetCallerReference(value); return *this;}

    /**
     * A unique number that ensures the request can't be replayed. If the
     * CallerReference is new (no matter the content of the
     * CloudFrontOriginAccessIdentityConfig object), a new origin access identity is
     * created. If the CallerReference is a value you already sent in a previous
     * request to create an identity, and the content of the
     * CloudFrontOriginAccessIdentityConfig is identical to the original request
     * (ignoring white space), the response includes the same information returned to
     * the original request. If the CallerReference is a value you already sent in a
     * previous request to create an identity but the content of the
     * CloudFrontOriginAccessIdentityConfig is different from the original request,
     * CloudFront returns a CloudFrontOriginAccessIdentityAlreadyExists error.
     */
    inline CloudFrontOriginAccessIdentityConfig& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}

    /**
     * Any comments you want to include about the origin access identity.
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * Any comments you want to include about the origin access identity.
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * Any comments you want to include about the origin access identity.
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * Any comments you want to include about the origin access identity.
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * Any comments you want to include about the origin access identity.
     */
    inline CloudFrontOriginAccessIdentityConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * Any comments you want to include about the origin access identity.
     */
    inline CloudFrontOriginAccessIdentityConfig& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * Any comments you want to include about the origin access identity.
     */
    inline CloudFrontOriginAccessIdentityConfig& WithComment(const char* value) { SetComment(value); return *this;}

  private:
    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
