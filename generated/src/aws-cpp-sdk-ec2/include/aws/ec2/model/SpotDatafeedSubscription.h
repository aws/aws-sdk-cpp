/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SpotInstanceStateFault.h>
#include <aws/ec2/model/DatafeedSubscriptionState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the data feed for a Spot Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotDatafeedSubscription">AWS
   * API Reference</a></p>
   */
  class SpotDatafeedSubscription
  {
  public:
    AWS_EC2_API SpotDatafeedSubscription();
    AWS_EC2_API SpotDatafeedSubscription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotDatafeedSubscription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the Amazon S3 bucket where the Spot Instance data feed is
     * located.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the Amazon S3 bucket where the Spot Instance data feed is
     * located.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket where the Spot Instance data feed is
     * located.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket where the Spot Instance data feed is
     * located.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket where the Spot Instance data feed is
     * located.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket where the Spot Instance data feed is
     * located.</p>
     */
    inline SpotDatafeedSubscription& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where the Spot Instance data feed is
     * located.</p>
     */
    inline SpotDatafeedSubscription& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where the Spot Instance data feed is
     * located.</p>
     */
    inline SpotDatafeedSubscription& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline const SpotInstanceStateFault& GetFault() const{ return m_fault; }

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline bool FaultHasBeenSet() const { return m_faultHasBeenSet; }

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline void SetFault(const SpotInstanceStateFault& value) { m_faultHasBeenSet = true; m_fault = value; }

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline void SetFault(SpotInstanceStateFault&& value) { m_faultHasBeenSet = true; m_fault = std::move(value); }

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline SpotDatafeedSubscription& WithFault(const SpotInstanceStateFault& value) { SetFault(value); return *this;}

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline SpotDatafeedSubscription& WithFault(SpotInstanceStateFault&& value) { SetFault(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the account.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account ID of the account.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the account.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account ID of the account.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the account.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the account.</p>
     */
    inline SpotDatafeedSubscription& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account.</p>
     */
    inline SpotDatafeedSubscription& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account.</p>
     */
    inline SpotDatafeedSubscription& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The prefix for the data feed files.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The prefix for the data feed files.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The prefix for the data feed files.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The prefix for the data feed files.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The prefix for the data feed files.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The prefix for the data feed files.</p>
     */
    inline SpotDatafeedSubscription& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The prefix for the data feed files.</p>
     */
    inline SpotDatafeedSubscription& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix for the data feed files.</p>
     */
    inline SpotDatafeedSubscription& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>The state of the Spot Instance data feed subscription.</p>
     */
    inline const DatafeedSubscriptionState& GetState() const{ return m_state; }

    /**
     * <p>The state of the Spot Instance data feed subscription.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the Spot Instance data feed subscription.</p>
     */
    inline void SetState(const DatafeedSubscriptionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Spot Instance data feed subscription.</p>
     */
    inline void SetState(DatafeedSubscriptionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the Spot Instance data feed subscription.</p>
     */
    inline SpotDatafeedSubscription& WithState(const DatafeedSubscriptionState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the Spot Instance data feed subscription.</p>
     */
    inline SpotDatafeedSubscription& WithState(DatafeedSubscriptionState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    SpotInstanceStateFault m_fault;
    bool m_faultHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    DatafeedSubscriptionState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
