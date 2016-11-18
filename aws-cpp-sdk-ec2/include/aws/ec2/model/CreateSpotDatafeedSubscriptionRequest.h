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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateSpotDatafeedSubscription.</p>
   */
  class AWS_EC2_API CreateSpotDatafeedSubscriptionRequest : public EC2Request
  {
  public:
    CreateSpotDatafeedSubscriptionRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateSpotDatafeedSubscriptionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The Amazon S3 bucket in which to store the Spot instance data feed.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket in which to store the Spot instance data feed.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket in which to store the Spot instance data feed.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket in which to store the Spot instance data feed.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket in which to store the Spot instance data feed.</p>
     */
    inline CreateSpotDatafeedSubscriptionRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket in which to store the Spot instance data feed.</p>
     */
    inline CreateSpotDatafeedSubscriptionRequest& WithBucket(Aws::String&& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket in which to store the Spot instance data feed.</p>
     */
    inline CreateSpotDatafeedSubscriptionRequest& WithBucket(const char* value) { SetBucket(value); return *this;}

    /**
     * <p>A prefix for the data feed file names.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>A prefix for the data feed file names.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>A prefix for the data feed file names.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>A prefix for the data feed file names.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>A prefix for the data feed file names.</p>
     */
    inline CreateSpotDatafeedSubscriptionRequest& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>A prefix for the data feed file names.</p>
     */
    inline CreateSpotDatafeedSubscriptionRequest& WithPrefix(Aws::String&& value) { SetPrefix(value); return *this;}

    /**
     * <p>A prefix for the data feed file names.</p>
     */
    inline CreateSpotDatafeedSubscriptionRequest& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_bucket;
    bool m_bucketHasBeenSet;
    Aws::String m_prefix;
    bool m_prefixHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
