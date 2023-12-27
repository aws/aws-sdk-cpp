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
   * <p>A key value pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/PutKeyRequest">AWS
   * API Reference</a></p>
   */
  class PutKeyRequest : public CloudFrontKeyValueStoreRequest
  {
  public:
    AWS_CLOUDFRONTKEYVALUESTORE_API PutKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutKey"; }

    AWS_CLOUDFRONTKEYVALUESTORE_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONTKEYVALUESTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_CLOUDFRONTKEYVALUESTORE_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The key to put.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key to put.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key to put.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key to put.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key to put.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key to put.</p>
     */
    inline PutKeyRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key to put.</p>
     */
    inline PutKeyRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key to put.</p>
     */
    inline PutKeyRequest& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value to put.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value to put.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value to put.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to put.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value to put.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value to put.</p>
     */
    inline PutKeyRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value to put.</p>
     */
    inline PutKeyRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value to put.</p>
     */
    inline PutKeyRequest& WithValue(const char* value) { SetValue(value); return *this;}


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
    inline PutKeyRequest& WithKvsARN(const Aws::String& value) { SetKvsARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline PutKeyRequest& WithKvsARN(Aws::String&& value) { SetKvsARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline PutKeyRequest& WithKvsARN(const char* value) { SetKvsARN(value); return *this;}


    /**
     * <p>The current version (ETag) of the Key Value Store that you are putting keys
     * into, which you can get using DescribeKeyValueStore.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are putting keys
     * into, which you can get using DescribeKeyValueStore.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are putting keys
     * into, which you can get using DescribeKeyValueStore.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are putting keys
     * into, which you can get using DescribeKeyValueStore.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are putting keys
     * into, which you can get using DescribeKeyValueStore.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are putting keys
     * into, which you can get using DescribeKeyValueStore.</p>
     */
    inline PutKeyRequest& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The current version (ETag) of the Key Value Store that you are putting keys
     * into, which you can get using DescribeKeyValueStore.</p>
     */
    inline PutKeyRequest& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The current version (ETag) of the Key Value Store that you are putting keys
     * into, which you can get using DescribeKeyValueStore.</p>
     */
    inline PutKeyRequest& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_kvsARN;
    bool m_kvsARNHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
