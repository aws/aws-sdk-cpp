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
#include <aws/cloudfront/model/CloudFrontOriginAccessIdentity.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  /**
   * The returned result of the corresponding request.
   */
  class AWS_CLOUDFRONT_API CreateCloudFrontOriginAccessIdentity2016_01_28Result
  {
  public:
    CreateCloudFrontOriginAccessIdentity2016_01_28Result();
    CreateCloudFrontOriginAccessIdentity2016_01_28Result(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateCloudFrontOriginAccessIdentity2016_01_28Result& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * The origin access identity's information.
     */
    inline const CloudFrontOriginAccessIdentity& GetCloudFrontOriginAccessIdentity() const{ return m_cloudFrontOriginAccessIdentity; }

    /**
     * The origin access identity's information.
     */
    inline void SetCloudFrontOriginAccessIdentity(const CloudFrontOriginAccessIdentity& value) { m_cloudFrontOriginAccessIdentity = value; }

    /**
     * The origin access identity's information.
     */
    inline void SetCloudFrontOriginAccessIdentity(CloudFrontOriginAccessIdentity&& value) { m_cloudFrontOriginAccessIdentity = value; }

    /**
     * The origin access identity's information.
     */
    inline CreateCloudFrontOriginAccessIdentity2016_01_28Result& WithCloudFrontOriginAccessIdentity(const CloudFrontOriginAccessIdentity& value) { SetCloudFrontOriginAccessIdentity(value); return *this;}

    /**
     * The origin access identity's information.
     */
    inline CreateCloudFrontOriginAccessIdentity2016_01_28Result& WithCloudFrontOriginAccessIdentity(CloudFrontOriginAccessIdentity&& value) { SetCloudFrontOriginAccessIdentity(value); return *this;}

    /**
     * The fully qualified URI of the new origin access identity just created. For
     * example:
     * https://cloudfront.amazonaws.com/2010-11-01/origin-access-identity/cloudfront/E74FTE3AJFJ256A.
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * The fully qualified URI of the new origin access identity just created. For
     * example:
     * https://cloudfront.amazonaws.com/2010-11-01/origin-access-identity/cloudfront/E74FTE3AJFJ256A.
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * The fully qualified URI of the new origin access identity just created. For
     * example:
     * https://cloudfront.amazonaws.com/2010-11-01/origin-access-identity/cloudfront/E74FTE3AJFJ256A.
     */
    inline void SetLocation(Aws::String&& value) { m_location = value; }

    /**
     * The fully qualified URI of the new origin access identity just created. For
     * example:
     * https://cloudfront.amazonaws.com/2010-11-01/origin-access-identity/cloudfront/E74FTE3AJFJ256A.
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * The fully qualified URI of the new origin access identity just created. For
     * example:
     * https://cloudfront.amazonaws.com/2010-11-01/origin-access-identity/cloudfront/E74FTE3AJFJ256A.
     */
    inline CreateCloudFrontOriginAccessIdentity2016_01_28Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * The fully qualified URI of the new origin access identity just created. For
     * example:
     * https://cloudfront.amazonaws.com/2010-11-01/origin-access-identity/cloudfront/E74FTE3AJFJ256A.
     */
    inline CreateCloudFrontOriginAccessIdentity2016_01_28Result& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    /**
     * The fully qualified URI of the new origin access identity just created. For
     * example:
     * https://cloudfront.amazonaws.com/2010-11-01/origin-access-identity/cloudfront/E74FTE3AJFJ256A.
     */
    inline CreateCloudFrontOriginAccessIdentity2016_01_28Result& WithLocation(const char* value) { SetLocation(value); return *this;}

    /**
     * The current version of the origin access identity created.
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * The current version of the origin access identity created.
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * The current version of the origin access identity created.
     */
    inline void SetETag(Aws::String&& value) { m_eTag = value; }

    /**
     * The current version of the origin access identity created.
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * The current version of the origin access identity created.
     */
    inline CreateCloudFrontOriginAccessIdentity2016_01_28Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * The current version of the origin access identity created.
     */
    inline CreateCloudFrontOriginAccessIdentity2016_01_28Result& WithETag(Aws::String&& value) { SetETag(value); return *this;}

    /**
     * The current version of the origin access identity created.
     */
    inline CreateCloudFrontOriginAccessIdentity2016_01_28Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:
    CloudFrontOriginAccessIdentity m_cloudFrontOriginAccessIdentity;
    Aws::String m_location;
    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws