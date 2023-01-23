/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetBucketsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetBucketsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBuckets"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the bucket for which to return information.</p> <p>When omitted,
     * the response includes all of your buckets in the Amazon Web Services Region
     * where the request is made.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the bucket for which to return information.</p> <p>When omitted,
     * the response includes all of your buckets in the Amazon Web Services Region
     * where the request is made.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the bucket for which to return information.</p> <p>When omitted,
     * the response includes all of your buckets in the Amazon Web Services Region
     * where the request is made.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the bucket for which to return information.</p> <p>When omitted,
     * the response includes all of your buckets in the Amazon Web Services Region
     * where the request is made.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the bucket for which to return information.</p> <p>When omitted,
     * the response includes all of your buckets in the Amazon Web Services Region
     * where the request is made.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the bucket for which to return information.</p> <p>When omitted,
     * the response includes all of your buckets in the Amazon Web Services Region
     * where the request is made.</p>
     */
    inline GetBucketsRequest& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the bucket for which to return information.</p> <p>When omitted,
     * the response includes all of your buckets in the Amazon Web Services Region
     * where the request is made.</p>
     */
    inline GetBucketsRequest& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket for which to return information.</p> <p>When omitted,
     * the response includes all of your buckets in the Amazon Web Services Region
     * where the request is made.</p>
     */
    inline GetBucketsRequest& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetBuckets</code> request. If your
     * results are paginated, the response will return a next page token that you can
     * specify as the page token in a subsequent request.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetBuckets</code> request. If your
     * results are paginated, the response will return a next page token that you can
     * specify as the page token in a subsequent request.</p>
     */
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetBuckets</code> request. If your
     * results are paginated, the response will return a next page token that you can
     * specify as the page token in a subsequent request.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetBuckets</code> request. If your
     * results are paginated, the response will return a next page token that you can
     * specify as the page token in a subsequent request.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetBuckets</code> request. If your
     * results are paginated, the response will return a next page token that you can
     * specify as the page token in a subsequent request.</p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetBuckets</code> request. If your
     * results are paginated, the response will return a next page token that you can
     * specify as the page token in a subsequent request.</p>
     */
    inline GetBucketsRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetBuckets</code> request. If your
     * results are paginated, the response will return a next page token that you can
     * specify as the page token in a subsequent request.</p>
     */
    inline GetBucketsRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetBuckets</code> request. If your
     * results are paginated, the response will return a next page token that you can
     * specify as the page token in a subsequent request.</p>
     */
    inline GetBucketsRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}


    /**
     * <p>A Boolean value that indicates whether to include Lightsail instances that
     * were given access to the bucket using the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action.</p>
     */
    inline bool GetIncludeConnectedResources() const{ return m_includeConnectedResources; }

    /**
     * <p>A Boolean value that indicates whether to include Lightsail instances that
     * were given access to the bucket using the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action.</p>
     */
    inline bool IncludeConnectedResourcesHasBeenSet() const { return m_includeConnectedResourcesHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether to include Lightsail instances that
     * were given access to the bucket using the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action.</p>
     */
    inline void SetIncludeConnectedResources(bool value) { m_includeConnectedResourcesHasBeenSet = true; m_includeConnectedResources = value; }

    /**
     * <p>A Boolean value that indicates whether to include Lightsail instances that
     * were given access to the bucket using the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_SetResourceAccessForBucket.html">SetResourceAccessForBucket</a>
     * action.</p>
     */
    inline GetBucketsRequest& WithIncludeConnectedResources(bool value) { SetIncludeConnectedResources(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;

    bool m_includeConnectedResources;
    bool m_includeConnectedResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
