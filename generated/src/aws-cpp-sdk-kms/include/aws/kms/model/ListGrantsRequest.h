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
  class ListGrantsRequest : public KMSRequest
  {
  public:
    AWS_KMS_API ListGrantsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGrants"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, KMS does not return more than the specified number of
     * items, but it might return fewer.</p> <p>This value is optional. If you include
     * a value, it must be between 1 and 100, inclusive. If you do not include a value,
     * it defaults to 50.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListGrantsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListGrantsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only grants for the specified KMS key. This parameter is
     * required.</p> <p>Specify the key ID or key ARN of the KMS key. To specify a KMS
     * key in a different Amazon Web Services account, you must use the key ARN.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    ListGrantsRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only the grant with the specified grant ID. The grant ID uniquely
     * identifies the grant. </p>
     */
    inline const Aws::String& GetGrantId() const { return m_grantId; }
    inline bool GrantIdHasBeenSet() const { return m_grantIdHasBeenSet; }
    template<typename GrantIdT = Aws::String>
    void SetGrantId(GrantIdT&& value) { m_grantIdHasBeenSet = true; m_grantId = std::forward<GrantIdT>(value); }
    template<typename GrantIdT = Aws::String>
    ListGrantsRequest& WithGrantId(GrantIdT&& value) { SetGrantId(std::forward<GrantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only grants where the specified principal is the grantee principal
     * for the grant.</p>
     */
    inline const Aws::String& GetGranteePrincipal() const { return m_granteePrincipal; }
    inline bool GranteePrincipalHasBeenSet() const { return m_granteePrincipalHasBeenSet; }
    template<typename GranteePrincipalT = Aws::String>
    void SetGranteePrincipal(GranteePrincipalT&& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = std::forward<GranteePrincipalT>(value); }
    template<typename GranteePrincipalT = Aws::String>
    ListGrantsRequest& WithGranteePrincipal(GranteePrincipalT&& value) { SetGranteePrincipal(std::forward<GranteePrincipalT>(value)); return *this;}
    ///@}
  private:

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_grantId;
    bool m_grantIdHasBeenSet = false;

    Aws::String m_granteePrincipal;
    bool m_granteePrincipalHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
