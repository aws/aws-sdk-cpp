/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * <p>This action deletes a web distribution. To delete a web distribution using
   * the CloudFront API, perform the following steps.</p> <p> <b>To delete a web
   * distribution using the CloudFront API:</b> </p> <ol> <li> <p>Disable the web
   * distribution</p> </li> <li> <p>Submit a <code>GET Distribution Config</code>
   * request to get the current configuration and the <code>Etag</code> header for
   * the distribution.</p> </li> <li> <p>Update the XML document that was returned in
   * the response to your <code>GET Distribution Config</code> request to change the
   * value of <code>Enabled</code> to <code>false</code>.</p> </li> <li> <p>Submit a
   * <code>PUT Distribution Config</code> request to update the configuration for
   * your distribution. In the request body, include the XML document that you
   * updated in Step 3. Set the value of the HTTP <code>If-Match</code> header to the
   * value of the <code>ETag</code> header that CloudFront returned when you
   * submitted the <code>GET Distribution Config</code> request in Step 2.</p> </li>
   * <li> <p>Review the response to the <code>PUT Distribution Config</code> request
   * to confirm that the distribution was successfully disabled.</p> </li> <li>
   * <p>Submit a <code>GET Distribution</code> request to confirm that your changes
   * have propagated. When propagation is complete, the value of <code>Status</code>
   * is <code>Deployed</code>.</p> </li> <li> <p>Submit a <code>DELETE
   * Distribution</code> request. Set the value of the HTTP <code>If-Match</code>
   * header to the value of the <code>ETag</code> header that CloudFront returned
   * when you submitted the <code>GET Distribution Config</code> request in Step
   * 6.</p> </li> <li> <p>Review the response to your <code>DELETE
   * Distribution</code> request to confirm that the distribution was successfully
   * deleted.</p> </li> </ol> <p>For information about deleting a distribution using
   * the CloudFront console, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
   * a Distribution</a> in the <i>Amazon CloudFront Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteDistributionRequest">AWS
   * API Reference</a></p>
   */
  class DeleteDistribution2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API DeleteDistribution2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDistribution"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The distribution ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The distribution ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The distribution ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The distribution ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The distribution ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The distribution ID.</p>
     */
    inline DeleteDistribution2020_05_31Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The distribution ID.</p>
     */
    inline DeleteDistribution2020_05_31Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The distribution ID.</p>
     */
    inline DeleteDistribution2020_05_31Request& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The value of the <code>ETag</code> header that you received when you disabled
     * the distribution. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when you disabled
     * the distribution. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when you disabled
     * the distribution. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The value of the <code>ETag</code> header that you received when you disabled
     * the distribution. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The value of the <code>ETag</code> header that you received when you disabled
     * the distribution. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The value of the <code>ETag</code> header that you received when you disabled
     * the distribution. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline DeleteDistribution2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The value of the <code>ETag</code> header that you received when you disabled
     * the distribution. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline DeleteDistribution2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>ETag</code> header that you received when you disabled
     * the distribution. For example: <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline DeleteDistribution2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
