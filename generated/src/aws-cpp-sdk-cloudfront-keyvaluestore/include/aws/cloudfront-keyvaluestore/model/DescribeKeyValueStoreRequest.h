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
  class DescribeKeyValueStoreRequest : public CloudFrontKeyValueStoreRequest
  {
  public:
    AWS_CLOUDFRONTKEYVALUESTORE_API DescribeKeyValueStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeKeyValueStore"; }

    AWS_CLOUDFRONTKEYVALUESTORE_API Aws::String SerializePayload() const override;

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
    inline DescribeKeyValueStoreRequest& WithKvsARN(const Aws::String& value) { SetKvsARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline DescribeKeyValueStoreRequest& WithKvsARN(Aws::String&& value) { SetKvsARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline DescribeKeyValueStoreRequest& WithKvsARN(const char* value) { SetKvsARN(value); return *this;}

  private:

    Aws::String m_kvsARN;
    bool m_kvsARNHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
