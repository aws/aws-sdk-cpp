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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to update an origin access identity.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateCloudFrontOriginAccessIdentityRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API UpdateCloudFrontOriginAccessIdentity2019_03_26Request : public CloudFrontRequest
  {
  public:
    UpdateCloudFrontOriginAccessIdentity2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCloudFrontOriginAccessIdentity"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identity's configuration information.</p>
     */
    inline const CloudFrontOriginAccessIdentityConfig& GetCloudFrontOriginAccessIdentityConfig() const{ return m_cloudFrontOriginAccessIdentityConfig; }

    /**
     * <p>The identity's configuration information.</p>
     */
    inline bool CloudFrontOriginAccessIdentityConfigHasBeenSet() const { return m_cloudFrontOriginAccessIdentityConfigHasBeenSet; }

    /**
     * <p>The identity's configuration information.</p>
     */
    inline void SetCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = value; }

    /**
     * <p>The identity's configuration information.</p>
     */
    inline void SetCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true; m_cloudFrontOriginAccessIdentityConfig = std::move(value); }

    /**
     * <p>The identity's configuration information.</p>
     */
    inline UpdateCloudFrontOriginAccessIdentity2019_03_26Request& WithCloudFrontOriginAccessIdentityConfig(const CloudFrontOriginAccessIdentityConfig& value) { SetCloudFrontOriginAccessIdentityConfig(value); return *this;}

    /**
     * <p>The identity's configuration information.</p>
     */
    inline UpdateCloudFrontOriginAccessIdentity2019_03_26Request& WithCloudFrontOriginAccessIdentityConfig(CloudFrontOriginAccessIdentityConfig&& value) { SetCloudFrontOriginAccessIdentityConfig(std::move(value)); return *this;}


    /**
     * <p>The identity's id.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identity's id.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identity's id.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identity's id.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identity's id.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identity's id.</p>
     */
    inline UpdateCloudFrontOriginAccessIdentity2019_03_26Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identity's id.</p>
     */
    inline UpdateCloudFrontOriginAccessIdentity2019_03_26Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identity's id.</p>
     */
    inline UpdateCloudFrontOriginAccessIdentity2019_03_26Request& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the identity's configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the identity's configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the identity's configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the identity's configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the identity's configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the identity's configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateCloudFrontOriginAccessIdentity2019_03_26Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the identity's configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateCloudFrontOriginAccessIdentity2019_03_26Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the identity's configuration. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline UpdateCloudFrontOriginAccessIdentity2019_03_26Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}

  private:

    CloudFrontOriginAccessIdentityConfig m_cloudFrontOriginAccessIdentityConfig;
    bool m_cloudFrontOriginAccessIdentityConfigHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
