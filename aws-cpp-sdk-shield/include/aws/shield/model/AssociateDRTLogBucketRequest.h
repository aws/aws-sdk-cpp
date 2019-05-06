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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDRTLogBucket"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon S3 bucket that contains your flow logs.</p>
     */
    inline const Aws::String& GetLogBucket() const{ return m_logBucket; }

    /**
     * <p>The Amazon S3 bucket that contains your flow logs.</p>
     */
    inline bool LogBucketHasBeenSet() const { return m_logBucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that contains your flow logs.</p>
     */
    inline void SetLogBucket(const Aws::String& value) { m_logBucketHasBeenSet = true; m_logBucket = value; }

    /**
     * <p>The Amazon S3 bucket that contains your flow logs.</p>
     */
    inline void SetLogBucket(Aws::String&& value) { m_logBucketHasBeenSet = true; m_logBucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that contains your flow logs.</p>
     */
    inline void SetLogBucket(const char* value) { m_logBucketHasBeenSet = true; m_logBucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket that contains your flow logs.</p>
     */
    inline AssociateDRTLogBucketRequest& WithLogBucket(const Aws::String& value) { SetLogBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains your flow logs.</p>
     */
    inline AssociateDRTLogBucketRequest& WithLogBucket(Aws::String&& value) { SetLogBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains your flow logs.</p>
     */
    inline AssociateDRTLogBucketRequest& WithLogBucket(const char* value) { SetLogBucket(value); return *this;}

  private:

    Aws::String m_logBucket;
    bool m_logBucketHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
