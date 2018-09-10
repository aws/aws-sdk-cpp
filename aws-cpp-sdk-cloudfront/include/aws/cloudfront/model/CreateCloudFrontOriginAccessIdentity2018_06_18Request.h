﻿/*
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
   * <p>The request to create a new origin access identity.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateCloudFrontOriginAccessIdentityRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CreateCloudFrontOriginAccessIdentity2018_06_18Request : public CloudFrontRequest
  {
  public:
    CreateCloudFrontOriginAccessIdentity2018_06_18Request();
    
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
    inline void SetCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = value; }

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline void SetCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = std::move(value); }

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline CreateCloudFrontOriginAccessIdentity2018_06_18Request& WithCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { SetCloudFrontOriginAccessIdentityConfig(value); return *this;}

    /**
     * <p>The current configuration information for the identity.</p>
     */
    inline CreateCloudFrontOriginAccessIdentity2018_06_18Request& WithCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { SetCloudFrontOriginAccessIdentityConfig(std::move(value)); return *this;}

  private:

    CloudFrontOriginAccessIdentityConfig m_cloudFrontOriginAccessIdentityConfig;
    bool m_cloudFrontOriginAccessIdentityConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
