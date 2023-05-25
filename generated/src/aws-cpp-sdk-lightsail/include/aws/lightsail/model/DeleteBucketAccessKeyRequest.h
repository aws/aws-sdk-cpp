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
  class DeleteBucketAccessKeyRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteBucketAccessKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBucketAccessKey"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the bucket that the access key belongs to.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the bucket that the access key belongs to.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the bucket that the access key belongs to.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the bucket that the access key belongs to.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the bucket that the access key belongs to.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the bucket that the access key belongs to.</p>
     */
    inline DeleteBucketAccessKeyRequest& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the bucket that the access key belongs to.</p>
     */
    inline DeleteBucketAccessKeyRequest& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket that the access key belongs to.</p>
     */
    inline DeleteBucketAccessKeyRequest& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The ID of the access key to delete.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBucketAccessKeys.html">GetBucketAccessKeys</a>
     * action to get a list of access key IDs that you can specify.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The ID of the access key to delete.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBucketAccessKeys.html">GetBucketAccessKeys</a>
     * action to get a list of access key IDs that you can specify.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>The ID of the access key to delete.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBucketAccessKeys.html">GetBucketAccessKeys</a>
     * action to get a list of access key IDs that you can specify.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The ID of the access key to delete.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBucketAccessKeys.html">GetBucketAccessKeys</a>
     * action to get a list of access key IDs that you can specify.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The ID of the access key to delete.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBucketAccessKeys.html">GetBucketAccessKeys</a>
     * action to get a list of access key IDs that you can specify.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The ID of the access key to delete.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBucketAccessKeys.html">GetBucketAccessKeys</a>
     * action to get a list of access key IDs that you can specify.</p>
     */
    inline DeleteBucketAccessKeyRequest& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The ID of the access key to delete.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBucketAccessKeys.html">GetBucketAccessKeys</a>
     * action to get a list of access key IDs that you can specify.</p>
     */
    inline DeleteBucketAccessKeyRequest& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the access key to delete.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBucketAccessKeys.html">GetBucketAccessKeys</a>
     * action to get a list of access key IDs that you can specify.</p>
     */
    inline DeleteBucketAccessKeyRequest& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
