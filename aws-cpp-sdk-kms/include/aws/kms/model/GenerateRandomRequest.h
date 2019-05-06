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
  class AWS_KMS_API GenerateRandomRequest : public KMSRequest
  {
  public:
    GenerateRandomRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateRandom"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The length of the byte string.</p>
     */
    inline int GetNumberOfBytes() const{ return m_numberOfBytes; }

    /**
     * <p>The length of the byte string.</p>
     */
    inline bool NumberOfBytesHasBeenSet() const { return m_numberOfBytesHasBeenSet; }

    /**
     * <p>The length of the byte string.</p>
     */
    inline void SetNumberOfBytes(int value) { m_numberOfBytesHasBeenSet = true; m_numberOfBytes = value; }

    /**
     * <p>The length of the byte string.</p>
     */
    inline GenerateRandomRequest& WithNumberOfBytes(int value) { SetNumberOfBytes(value); return *this;}


    /**
     * <p>Generates the random byte string in the AWS CloudHSM cluster that is
     * associated with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const{ return m_customKeyStoreId; }

    /**
     * <p>Generates the random byte string in the AWS CloudHSM cluster that is
     * associated with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }

    /**
     * <p>Generates the random byte string in the AWS CloudHSM cluster that is
     * associated with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline void SetCustomKeyStoreId(const Aws::String& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = value; }

    /**
     * <p>Generates the random byte string in the AWS CloudHSM cluster that is
     * associated with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline void SetCustomKeyStoreId(Aws::String&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::move(value); }

    /**
     * <p>Generates the random byte string in the AWS CloudHSM cluster that is
     * associated with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline void SetCustomKeyStoreId(const char* value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId.assign(value); }

    /**
     * <p>Generates the random byte string in the AWS CloudHSM cluster that is
     * associated with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline GenerateRandomRequest& WithCustomKeyStoreId(const Aws::String& value) { SetCustomKeyStoreId(value); return *this;}

    /**
     * <p>Generates the random byte string in the AWS CloudHSM cluster that is
     * associated with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline GenerateRandomRequest& WithCustomKeyStoreId(Aws::String&& value) { SetCustomKeyStoreId(std::move(value)); return *this;}

    /**
     * <p>Generates the random byte string in the AWS CloudHSM cluster that is
     * associated with the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To find the ID of a custom key store, use the
     * <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline GenerateRandomRequest& WithCustomKeyStoreId(const char* value) { SetCustomKeyStoreId(value); return *this;}

  private:

    int m_numberOfBytes;
    bool m_numberOfBytesHasBeenSet;

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
