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
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * The request to get an origin access identity's configuration.
   */
  class AWS_CLOUDFRONT_API GetCloudFrontOriginAccessIdentityConfig2015_04_17Request : public CloudFrontRequest
  {
  public:
    GetCloudFrontOriginAccessIdentityConfig2015_04_17Request();
    Aws::String SerializePayload() const override;


    /**
     * The identity's id.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The identity's id.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The identity's id.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The identity's id.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The identity's id.
     */
    inline GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The identity's id.
     */
    inline GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * The identity's id.
     */
    inline GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& WithId(const char* value) { SetId(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
