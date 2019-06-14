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
   * <p>Origin access identity configuration. Send a <code>GET</code> request to the
   * <code>/<i>CloudFront API version</i>/CloudFront/identity ID/config</code>
   * resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CloudFrontOriginAccessIdentityConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CloudFrontOriginAccessIdentityConfig
  {
  public:
    CloudFrontOriginAccessIdentityConfig();
    CloudFrontOriginAccessIdentityConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    CloudFrontOriginAccessIdentityConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> object), a new origin access
     * identity is created.</p> <p>If the <code>CallerReference</code> is a value
     * already sent in a previous identity request, and the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. </p> <p>If the <code>CallerReference</code> is
     * a value you already sent in a previous request to create an identity, but the
     * content of the <code>CloudFrontOriginAccessIdentityConfig</code> is different
     * from the original request, CloudFront returns a
     * <code>CloudFrontOriginAccessIdentityAlreadyExists</code> error. </p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> object), a new origin access
     * identity is created.</p> <p>If the <code>CallerReference</code> is a value
     * already sent in a previous identity request, and the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. </p> <p>If the <code>CallerReference</code> is
     * a value you already sent in a previous request to create an identity, but the
     * content of the <code>CloudFrontOriginAccessIdentityConfig</code> is different
     * from the original request, CloudFront returns a
     * <code>CloudFrontOriginAccessIdentityAlreadyExists</code> error. </p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> object), a new origin access
     * identity is created.</p> <p>If the <code>CallerReference</code> is a value
     * already sent in a previous identity request, and the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. </p> <p>If the <code>CallerReference</code> is
     * a value you already sent in a previous request to create an identity, but the
     * content of the <code>CloudFrontOriginAccessIdentityConfig</code> is different
     * from the original request, CloudFront returns a
     * <code>CloudFrontOriginAccessIdentityAlreadyExists</code> error. </p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> object), a new origin access
     * identity is created.</p> <p>If the <code>CallerReference</code> is a value
     * already sent in a previous identity request, and the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. </p> <p>If the <code>CallerReference</code> is
     * a value you already sent in a previous request to create an identity, but the
     * content of the <code>CloudFrontOriginAccessIdentityConfig</code> is different
     * from the original request, CloudFront returns a
     * <code>CloudFrontOriginAccessIdentityAlreadyExists</code> error. </p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> object), a new origin access
     * identity is created.</p> <p>If the <code>CallerReference</code> is a value
     * already sent in a previous identity request, and the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. </p> <p>If the <code>CallerReference</code> is
     * a value you already sent in a previous request to create an identity, but the
     * content of the <code>CloudFrontOriginAccessIdentityConfig</code> is different
     * from the original request, CloudFront returns a
     * <code>CloudFrontOriginAccessIdentityAlreadyExists</code> error. </p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> object), a new origin access
     * identity is created.</p> <p>If the <code>CallerReference</code> is a value
     * already sent in a previous identity request, and the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. </p> <p>If the <code>CallerReference</code> is
     * a value you already sent in a previous request to create an identity, but the
     * content of the <code>CloudFrontOriginAccessIdentityConfig</code> is different
     * from the original request, CloudFront returns a
     * <code>CloudFrontOriginAccessIdentityAlreadyExists</code> error. </p>
     */
    inline CloudFrontOriginAccessIdentityConfig& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> object), a new origin access
     * identity is created.</p> <p>If the <code>CallerReference</code> is a value
     * already sent in a previous identity request, and the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. </p> <p>If the <code>CallerReference</code> is
     * a value you already sent in a previous request to create an identity, but the
     * content of the <code>CloudFrontOriginAccessIdentityConfig</code> is different
     * from the original request, CloudFront returns a
     * <code>CloudFrontOriginAccessIdentityAlreadyExists</code> error. </p>
     */
    inline CloudFrontOriginAccessIdentityConfig& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A unique value (for example, a date-time stamp) that ensures that the request
     * can't be replayed.</p> <p>If the value of <code>CallerReference</code> is new
     * (regardless of the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> object), a new origin access
     * identity is created.</p> <p>If the <code>CallerReference</code> is a value
     * already sent in a previous identity request, and the content of the
     * <code>CloudFrontOriginAccessIdentityConfig</code> is identical to the original
     * request (ignoring white space), the response includes the same information
     * returned to the original request. </p> <p>If the <code>CallerReference</code> is
     * a value you already sent in a previous request to create an identity, but the
     * content of the <code>CloudFrontOriginAccessIdentityConfig</code> is different
     * from the original request, CloudFront returns a
     * <code>CloudFrontOriginAccessIdentityAlreadyExists</code> error. </p>
     */
    inline CloudFrontOriginAccessIdentityConfig& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>Any comments you want to include about the origin access identity. </p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>Any comments you want to include about the origin access identity. </p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>Any comments you want to include about the origin access identity. </p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>Any comments you want to include about the origin access identity. </p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>Any comments you want to include about the origin access identity. </p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>Any comments you want to include about the origin access identity. </p>
     */
    inline CloudFrontOriginAccessIdentityConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>Any comments you want to include about the origin access identity. </p>
     */
    inline CloudFrontOriginAccessIdentityConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>Any comments you want to include about the origin access identity. </p>
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
