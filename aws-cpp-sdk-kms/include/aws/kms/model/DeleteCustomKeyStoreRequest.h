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
  class DeleteCustomKeyStoreRequest : public KMSRequest
  {
  public:
    AWS_KMS_API DeleteCustomKeyStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomKeyStore"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Enter the ID of the custom key store you want to delete. To find the ID of a
     * custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const{ return m_customKeyStoreId; }

    /**
     * <p>Enter the ID of the custom key store you want to delete. To find the ID of a
     * custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }

    /**
     * <p>Enter the ID of the custom key store you want to delete. To find the ID of a
     * custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline void SetCustomKeyStoreId(const Aws::String& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = value; }

    /**
     * <p>Enter the ID of the custom key store you want to delete. To find the ID of a
     * custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline void SetCustomKeyStoreId(Aws::String&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::move(value); }

    /**
     * <p>Enter the ID of the custom key store you want to delete. To find the ID of a
     * custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline void SetCustomKeyStoreId(const char* value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId.assign(value); }

    /**
     * <p>Enter the ID of the custom key store you want to delete. To find the ID of a
     * custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline DeleteCustomKeyStoreRequest& WithCustomKeyStoreId(const Aws::String& value) { SetCustomKeyStoreId(value); return *this;}

    /**
     * <p>Enter the ID of the custom key store you want to delete. To find the ID of a
     * custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline DeleteCustomKeyStoreRequest& WithCustomKeyStoreId(Aws::String&& value) { SetCustomKeyStoreId(std::move(value)); return *this;}

    /**
     * <p>Enter the ID of the custom key store you want to delete. To find the ID of a
     * custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
     */
    inline DeleteCustomKeyStoreRequest& WithCustomKeyStoreId(const char* value) { SetCustomKeyStoreId(value); return *this;}

  private:

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
