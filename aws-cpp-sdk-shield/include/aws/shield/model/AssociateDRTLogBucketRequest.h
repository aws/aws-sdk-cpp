/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class AWS_SHIELD_API AssociateDRTLogBucketRequest : public ShieldRequest
  {
  public:
    AssociateDRTLogBucketRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<AssociateDRTLogBucketRequest> Clone() const
    {
      return Aws::MakeUnique<AssociateDRTLogBucketRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDRTLogBucket"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon S3 bucket that contains the logs that you want to share.</p>
     */
    inline const Aws::String& GetLogBucket() const{ return m_logBucket; }

    /**
     * <p>The Amazon S3 bucket that contains the logs that you want to share.</p>
     */
    inline bool LogBucketHasBeenSet() const { return m_logBucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that contains the logs that you want to share.</p>
     */
    inline void SetLogBucket(const Aws::String& value) { m_logBucketHasBeenSet = true; m_logBucket = value; }

    /**
     * <p>The Amazon S3 bucket that contains the logs that you want to share.</p>
     */
    inline void SetLogBucket(Aws::String&& value) { m_logBucketHasBeenSet = true; m_logBucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that contains the logs that you want to share.</p>
     */
    inline void SetLogBucket(const char* value) { m_logBucketHasBeenSet = true; m_logBucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket that contains the logs that you want to share.</p>
     */
    inline AssociateDRTLogBucketRequest& WithLogBucket(const Aws::String& value) { SetLogBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains the logs that you want to share.</p>
     */
    inline AssociateDRTLogBucketRequest& WithLogBucket(Aws::String&& value) { SetLogBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains the logs that you want to share.</p>
     */
    inline AssociateDRTLogBucketRequest& WithLogBucket(const char* value) { SetLogBucket(value); return *this;}

  private:

    Aws::String m_logBucket;
    bool m_logBucketHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
