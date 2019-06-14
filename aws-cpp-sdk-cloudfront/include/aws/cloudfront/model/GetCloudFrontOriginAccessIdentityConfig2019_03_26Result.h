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
#include <aws/cloudfront/model/CloudFrontOriginAccessIdentityConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>The returned result of the corresponding request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetCloudFrontOriginAccessIdentityConfigResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API GetCloudFrontOriginAccessIdentityConfig2019_03_26Result
  {
  public:
    GetCloudFrontOriginAccessIdentityConfig2019_03_26Result();
    GetCloudFrontOriginAccessIdentityConfig2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetCloudFrontOriginAccessIdentityConfig2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The origin access identity's configuration information. </p>
     */
    inline const CloudFrontOriginAccessIdentityConfig& GetCloudFrontOriginAccessIdentityConfig() const{ return m_cloudFrontOriginAccessIdentityConfig; }

    /**
     * <p>The origin access identity's configuration information. </p>
     */
    inline void SetCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { m_cloudFrontOriginAccessIdentityConfig = value; }

    /**
     * <p>The origin access identity's configuration information. </p>
     */
    inline void SetCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { m_cloudFrontOriginAccessIdentityConfig = std::move(value); }

    /**
     * <p>The origin access identity's configuration information. </p>
     */
    inline GetCloudFrontOriginAccessIdentityConfig2019_03_26Result& WithCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { SetCloudFrontOriginAccessIdentityConfig(value); return *this;}

    /**
     * <p>The origin access identity's configuration information. </p>
     */
    inline GetCloudFrontOriginAccessIdentityConfig2019_03_26Result& WithCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { SetCloudFrontOriginAccessIdentityConfig(std::move(value)); return *this;}


    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetCloudFrontOriginAccessIdentityConfig2019_03_26Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetCloudFrontOriginAccessIdentityConfig2019_03_26Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline GetCloudFrontOriginAccessIdentityConfig2019_03_26Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    CloudFrontOriginAccessIdentityConfig m_cloudFrontOriginAccessIdentityConfig;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
