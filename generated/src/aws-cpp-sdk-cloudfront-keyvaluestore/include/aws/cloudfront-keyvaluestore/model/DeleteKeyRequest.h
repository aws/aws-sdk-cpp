/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFrontKeyValueStore
{
namespace Model
{

  /**
   */
  class DeleteKeyRequest : public CloudFrontKeyValueStoreRequest
  {
  public:
    AWS_CLOUDFRONTKEYVALUESTORE_API DeleteKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteKey"; }

    AWS_CLOUDFRONTKEYVALUESTORE_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONTKEYVALUESTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_CLOUDFRONTKEYVALUESTORE_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline const Aws::String& GetKvsARN() const{ return m_kvsARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline bool KvsARNHasBeenSet() const { return m_kvsARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline void SetKvsARN(const Aws::String& value) { m_kvsARNHasBeenSet = true; m_kvsARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline void SetKvsARN(Aws::String&& value) { m_kvsARNHasBeenSet = true; m_kvsARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline void SetKvsARN(const char* value) { m_kvsARNHasBeenSet = true; m_kvsARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline DeleteKeyRequest& WithKvsARN(const Aws::String& value) { SetKvsARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline DeleteKeyRequest& WithKvsARN(Aws::String&& value) { SetKvsARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline DeleteKeyRequest& WithKvsARN(const char* value) { SetKvsARN(value); return *this;}


    /**
     * <p>The key to delete.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key to delete.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key to delete.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key to delete.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key to delete.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key to delete.</p>
     */
    inline DeleteKeyRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key to delete.</p>
     */
    inline DeleteKeyRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key to delete.</p>
     */
    inline DeleteKeyRequest& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The current version (ETag) of the Key Value Store that you are deleting keys
     * from, which you can get using DescribeKeyValueStore.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are deleting keys
     * from, which you can get using DescribeKeyValueStore.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are deleting keys
     * from, which you can get using DescribeKeyValueStore.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are deleting keys
     * from, which you can get using DescribeKeyValueStore.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are deleting keys
     * from, which you can get using DescribeKeyValueStore.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are deleting keys
     * from, which you can get using DescribeKeyValueStore.</p>
     */
    inline DeleteKeyRequest& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The current version (ETag) of the Key Value Store that you are deleting keys
     * from, which you can get using DescribeKeyValueStore.</p>
     */
    inline DeleteKeyRequest& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The current version (ETag) of the Key Value Store that you are deleting keys
     * from, which you can get using DescribeKeyValueStore.</p>
     */
    inline DeleteKeyRequest& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}

  private:

    Aws::String m_kvsARN;
    bool m_kvsARNHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
