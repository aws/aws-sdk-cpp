/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Control
{
namespace Model
{

  /**
   */
  class ListAccessPointsRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API ListAccessPointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccessPoints"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The Amazon Web Services account ID for the account that owns the specified
     * access points.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID for the account that owns the specified
     * access points.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID for the account that owns the specified
     * access points.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID for the account that owns the specified
     * access points.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the account that owns the specified
     * access points.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the account that owns the specified
     * access points.</p>
     */
    inline ListAccessPointsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account that owns the specified
     * access points.</p>
     */
    inline ListAccessPointsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account that owns the specified
     * access points.</p>
     */
    inline ListAccessPointsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the bucket whose associated access points you want to list.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the Amazon Web Services SDK and CLI, you must
     * specify the ARN of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the bucket whose associated access points you want to list.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the Amazon Web Services SDK and CLI, you must
     * specify the ARN of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the bucket whose associated access points you want to list.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the Amazon Web Services SDK and CLI, you must
     * specify the ARN of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the bucket whose associated access points you want to list.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the Amazon Web Services SDK and CLI, you must
     * specify the ARN of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the bucket whose associated access points you want to list.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the Amazon Web Services SDK and CLI, you must
     * specify the ARN of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the bucket whose associated access points you want to list.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the Amazon Web Services SDK and CLI, you must
     * specify the ARN of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline ListAccessPointsRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the bucket whose associated access points you want to list.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the Amazon Web Services SDK and CLI, you must
     * specify the ARN of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline ListAccessPointsRequest& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket whose associated access points you want to list.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the Amazon Web Services SDK and CLI, you must
     * specify the ARN of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline ListAccessPointsRequest& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>A continuation token. If a previous call to <code>ListAccessPoints</code>
     * returned a continuation token in the <code>NextToken</code> field, then
     * providing that value here causes Amazon S3 to retrieve the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token. If a previous call to <code>ListAccessPoints</code>
     * returned a continuation token in the <code>NextToken</code> field, then
     * providing that value here causes Amazon S3 to retrieve the next page of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token. If a previous call to <code>ListAccessPoints</code>
     * returned a continuation token in the <code>NextToken</code> field, then
     * providing that value here causes Amazon S3 to retrieve the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token. If a previous call to <code>ListAccessPoints</code>
     * returned a continuation token in the <code>NextToken</code> field, then
     * providing that value here causes Amazon S3 to retrieve the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token. If a previous call to <code>ListAccessPoints</code>
     * returned a continuation token in the <code>NextToken</code> field, then
     * providing that value here causes Amazon S3 to retrieve the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token. If a previous call to <code>ListAccessPoints</code>
     * returned a continuation token in the <code>NextToken</code> field, then
     * providing that value here causes Amazon S3 to retrieve the next page of
     * results.</p>
     */
    inline ListAccessPointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token. If a previous call to <code>ListAccessPoints</code>
     * returned a continuation token in the <code>NextToken</code> field, then
     * providing that value here causes Amazon S3 to retrieve the next page of
     * results.</p>
     */
    inline ListAccessPointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token. If a previous call to <code>ListAccessPoints</code>
     * returned a continuation token in the <code>NextToken</code> field, then
     * providing that value here causes Amazon S3 to retrieve the next page of
     * results.</p>
     */
    inline ListAccessPointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of access points that you want to include in the list. If
     * the specified bucket has more than this number of access points, then the
     * response will include a continuation token in the <code>NextToken</code> field
     * that you can use to retrieve the next page of access points.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of access points that you want to include in the list. If
     * the specified bucket has more than this number of access points, then the
     * response will include a continuation token in the <code>NextToken</code> field
     * that you can use to retrieve the next page of access points.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of access points that you want to include in the list. If
     * the specified bucket has more than this number of access points, then the
     * response will include a continuation token in the <code>NextToken</code> field
     * that you can use to retrieve the next page of access points.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of access points that you want to include in the list. If
     * the specified bucket has more than this number of access points, then the
     * response will include a continuation token in the <code>NextToken</code> field
     * that you can use to retrieve the next page of access points.</p>
     */
    inline ListAccessPointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
