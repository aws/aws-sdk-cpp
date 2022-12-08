/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class GenerateRandomRequest : public KMSRequest
  {
  public:
    AWS_KMS_API GenerateRandomRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateRandom"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The length of the random byte string. This parameter is required.</p>
     */
    inline int GetNumberOfBytes() const{ return m_numberOfBytes; }

    /**
     * <p>The length of the random byte string. This parameter is required.</p>
     */
    inline bool NumberOfBytesHasBeenSet() const { return m_numberOfBytesHasBeenSet; }

    /**
     * <p>The length of the random byte string. This parameter is required.</p>
     */
    inline void SetNumberOfBytes(int value) { m_numberOfBytesHasBeenSet = true; m_numberOfBytes = value; }

    /**
     * <p>The length of the random byte string. This parameter is required.</p>
     */
    inline GenerateRandomRequest& WithNumberOfBytes(int value) { SetNumberOfBytes(value); return *this;}


    /**
     * <p>Generates the random byte string in the CloudHSM cluster that is associated
     * with the specified CloudHSM key store. To find the ID of a custom key store, use
     * the <a>DescribeCustomKeyStores</a> operation.</p> <p>External key store IDs are
     * not valid for this parameter. If you specify the ID of an external key store,
     * <code>GenerateRandom</code> throws an
     * <code>UnsupportedOperationException</code>.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const{ return m_customKeyStoreId; }

    /**
     * <p>Generates the random byte string in the CloudHSM cluster that is associated
     * with the specified CloudHSM key store. To find the ID of a custom key store, use
     * the <a>DescribeCustomKeyStores</a> operation.</p> <p>External key store IDs are
     * not valid for this parameter. If you specify the ID of an external key store,
     * <code>GenerateRandom</code> throws an
     * <code>UnsupportedOperationException</code>.</p>
     */
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }

    /**
     * <p>Generates the random byte string in the CloudHSM cluster that is associated
     * with the specified CloudHSM key store. To find the ID of a custom key store, use
     * the <a>DescribeCustomKeyStores</a> operation.</p> <p>External key store IDs are
     * not valid for this parameter. If you specify the ID of an external key store,
     * <code>GenerateRandom</code> throws an
     * <code>UnsupportedOperationException</code>.</p>
     */
    inline void SetCustomKeyStoreId(const Aws::String& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = value; }

    /**
     * <p>Generates the random byte string in the CloudHSM cluster that is associated
     * with the specified CloudHSM key store. To find the ID of a custom key store, use
     * the <a>DescribeCustomKeyStores</a> operation.</p> <p>External key store IDs are
     * not valid for this parameter. If you specify the ID of an external key store,
     * <code>GenerateRandom</code> throws an
     * <code>UnsupportedOperationException</code>.</p>
     */
    inline void SetCustomKeyStoreId(Aws::String&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::move(value); }

    /**
     * <p>Generates the random byte string in the CloudHSM cluster that is associated
     * with the specified CloudHSM key store. To find the ID of a custom key store, use
     * the <a>DescribeCustomKeyStores</a> operation.</p> <p>External key store IDs are
     * not valid for this parameter. If you specify the ID of an external key store,
     * <code>GenerateRandom</code> throws an
     * <code>UnsupportedOperationException</code>.</p>
     */
    inline void SetCustomKeyStoreId(const char* value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId.assign(value); }

    /**
     * <p>Generates the random byte string in the CloudHSM cluster that is associated
     * with the specified CloudHSM key store. To find the ID of a custom key store, use
     * the <a>DescribeCustomKeyStores</a> operation.</p> <p>External key store IDs are
     * not valid for this parameter. If you specify the ID of an external key store,
     * <code>GenerateRandom</code> throws an
     * <code>UnsupportedOperationException</code>.</p>
     */
    inline GenerateRandomRequest& WithCustomKeyStoreId(const Aws::String& value) { SetCustomKeyStoreId(value); return *this;}

    /**
     * <p>Generates the random byte string in the CloudHSM cluster that is associated
     * with the specified CloudHSM key store. To find the ID of a custom key store, use
     * the <a>DescribeCustomKeyStores</a> operation.</p> <p>External key store IDs are
     * not valid for this parameter. If you specify the ID of an external key store,
     * <code>GenerateRandom</code> throws an
     * <code>UnsupportedOperationException</code>.</p>
     */
    inline GenerateRandomRequest& WithCustomKeyStoreId(Aws::String&& value) { SetCustomKeyStoreId(std::move(value)); return *this;}

    /**
     * <p>Generates the random byte string in the CloudHSM cluster that is associated
     * with the specified CloudHSM key store. To find the ID of a custom key store, use
     * the <a>DescribeCustomKeyStores</a> operation.</p> <p>External key store IDs are
     * not valid for this parameter. If you specify the ID of an external key store,
     * <code>GenerateRandom</code> throws an
     * <code>UnsupportedOperationException</code>.</p>
     */
    inline GenerateRandomRequest& WithCustomKeyStoreId(const char* value) { SetCustomKeyStoreId(value); return *this;}

  private:

    int m_numberOfBytes;
    bool m_numberOfBytesHasBeenSet = false;

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
