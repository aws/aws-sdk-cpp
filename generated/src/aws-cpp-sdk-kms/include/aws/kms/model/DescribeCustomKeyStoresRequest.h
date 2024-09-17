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
  class DescribeCustomKeyStoresRequest : public KMSRequest
  {
  public:
    AWS_KMS_API DescribeCustomKeyStoresRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCustomKeyStores"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Gets only information about the specified custom key store. Enter the key
     * store ID.</p> <p>By default, this operation gets information about all custom
     * key stores in the account and Region. To limit the output to a particular custom
     * key store, provide either the <code>CustomKeyStoreId</code> or
     * <code>CustomKeyStoreName</code> parameter, but not both.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const{ return m_customKeyStoreId; }
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }
    inline void SetCustomKeyStoreId(const Aws::String& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = value; }
    inline void SetCustomKeyStoreId(Aws::String&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::move(value); }
    inline void SetCustomKeyStoreId(const char* value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId.assign(value); }
    inline DescribeCustomKeyStoresRequest& WithCustomKeyStoreId(const Aws::String& value) { SetCustomKeyStoreId(value); return *this;}
    inline DescribeCustomKeyStoresRequest& WithCustomKeyStoreId(Aws::String&& value) { SetCustomKeyStoreId(std::move(value)); return *this;}
    inline DescribeCustomKeyStoresRequest& WithCustomKeyStoreId(const char* value) { SetCustomKeyStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets only information about the specified custom key store. Enter the
     * friendly name of the custom key store.</p> <p>By default, this operation gets
     * information about all custom key stores in the account and Region. To limit the
     * output to a particular custom key store, provide either the
     * <code>CustomKeyStoreId</code> or <code>CustomKeyStoreName</code> parameter, but
     * not both.</p>
     */
    inline const Aws::String& GetCustomKeyStoreName() const{ return m_customKeyStoreName; }
    inline bool CustomKeyStoreNameHasBeenSet() const { return m_customKeyStoreNameHasBeenSet; }
    inline void SetCustomKeyStoreName(const Aws::String& value) { m_customKeyStoreNameHasBeenSet = true; m_customKeyStoreName = value; }
    inline void SetCustomKeyStoreName(Aws::String&& value) { m_customKeyStoreNameHasBeenSet = true; m_customKeyStoreName = std::move(value); }
    inline void SetCustomKeyStoreName(const char* value) { m_customKeyStoreNameHasBeenSet = true; m_customKeyStoreName.assign(value); }
    inline DescribeCustomKeyStoresRequest& WithCustomKeyStoreName(const Aws::String& value) { SetCustomKeyStoreName(value); return *this;}
    inline DescribeCustomKeyStoresRequest& WithCustomKeyStoreName(Aws::String&& value) { SetCustomKeyStoreName(std::move(value)); return *this;}
    inline DescribeCustomKeyStoresRequest& WithCustomKeyStoreName(const char* value) { SetCustomKeyStoreName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, KMS does not return more than the specified number of
     * items, but it might return fewer.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeCustomKeyStoresRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeCustomKeyStoresRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeCustomKeyStoresRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeCustomKeyStoresRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet = false;

    Aws::String m_customKeyStoreName;
    bool m_customKeyStoreNameHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
