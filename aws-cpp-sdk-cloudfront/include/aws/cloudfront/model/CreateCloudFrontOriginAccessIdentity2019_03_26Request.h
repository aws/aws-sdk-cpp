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
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/CloudFrontOriginAccessIdentityConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to create a new origin access identity (OAI). An origin access
   * identity is a special CloudFront user that you can associate with Amazon S3
   * origins, so that you can secure all or just some of your Amazon S3 content. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-s3.html">
   * Restricting Access to Amazon S3 Content by Using an Origin Access Identity</a>
   * in the <i>Amazon CloudFront Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateCloudFrontOriginAccessIdentityRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CreateCloudFrontOriginAccessIdentity2019_03_26Request : public CloudFrontRequest
  {
  public:
    CreateCloudFrontOriginAccessIdentity2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCloudFrontOriginAccessIdentity"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline const CloudFrontOriginAccessIdentityConfig& GetCloudFrontOriginAccessIdentityConfig() const{ return m_cloudFrontOriginAccessIdentityConfig; }

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline bool CloudFrontOriginAccessIdentityConfigHasBeenSet() const { return m_cloudFrontOriginAccessIdentityConfigHasBeenSet; }

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline void SetCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = value; }

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline void SetCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = std::move(value); }

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline CreateCloudFrontOriginAccessIdentity2019_03_26Request& WithCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { SetCloudFrontOriginAccessIdentityConfig(value); return *this;}

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline CreateCloudFrontOriginAccessIdentity2019_03_26Request& WithCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { SetCloudFrontOriginAccessIdentityConfig(std::move(value)); return *this;}

  private:

    CloudFrontOriginAccessIdentityConfig m_cloudFrontOriginAccessIdentityConfig;
    bool m_cloudFrontOriginAccessIdentityConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
