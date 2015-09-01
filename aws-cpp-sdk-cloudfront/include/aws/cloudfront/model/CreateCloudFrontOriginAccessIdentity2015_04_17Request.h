/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /*
    The request to create a new origin access identity.
  */
  class AWS_CLOUDFRONT_API CreateCloudFrontOriginAccessIdentity2015_04_17Request : public CloudFrontRequest
  {
  public:
    CreateCloudFrontOriginAccessIdentity2015_04_17Request();
    Aws::String SerializePayload() const override;


    /*
     The origin access identity's configuration information.
    */
    inline const CloudFrontOriginAccessIdentityConfig& GetCloudFrontOriginAccessIdentityConfig() const{ return m_cloudFrontOriginAccessIdentityConfig; }

    /*
     The origin access identity's configuration information.
    */
    inline void SetCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = value; }

    /*
     The origin access identity's configuration information.
    */
    inline void SetCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = value; }

    /*
     The origin access identity's configuration information.
    */
    inline CreateCloudFrontOriginAccessIdentity2015_04_17Request& WithCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { SetCloudFrontOriginAccessIdentityConfig(value); return *this;}

    /*
     The origin access identity's configuration information.
    */
    inline CreateCloudFrontOriginAccessIdentity2015_04_17Request& WithCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { SetCloudFrontOriginAccessIdentityConfig(value); return *this;}

  private:
    CloudFrontOriginAccessIdentityConfig m_cloudFrontOriginAccessIdentityConfig;
    bool m_cloudFrontOriginAccessIdentityConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
