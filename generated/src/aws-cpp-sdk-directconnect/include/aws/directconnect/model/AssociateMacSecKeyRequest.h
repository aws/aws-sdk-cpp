/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class AssociateMacSecKeyRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API AssociateMacSecKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateMacSecKey"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), interconnect (dxcon-xxxx),
     * or LAG (dxlag-xxxx).</p> <p>You can use <a>DescribeConnections</a>,
     * <a>DescribeInterconnects</a>, or <a>DescribeLags</a> to retrieve connection
     * ID.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    AssociateMacSecKeyRequest& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the MAC Security (MACsec) secret key to
     * associate with the connection.</p> <p>You can use <a>DescribeConnections</a> or
     * <a>DescribeLags</a> to retrieve the MAC Security (MACsec) secret key.</p> <p>If
     * you use this request parameter, you do not use the <code>ckn</code> and
     * <code>cak</code> request parameters.</p>
     */
    inline const Aws::String& GetSecretARN() const { return m_secretARN; }
    inline bool SecretARNHasBeenSet() const { return m_secretARNHasBeenSet; }
    template<typename SecretARNT = Aws::String>
    void SetSecretARN(SecretARNT&& value) { m_secretARNHasBeenSet = true; m_secretARN = std::forward<SecretARNT>(value); }
    template<typename SecretARNT = Aws::String>
    AssociateMacSecKeyRequest& WithSecretARN(SecretARNT&& value) { SetSecretARN(std::forward<SecretARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC Security (MACsec) CKN to associate with the connection.</p> <p>You
     * can create the CKN/CAK pair using an industry standard tool.</p> <p> The valid
     * values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this request
     * parameter, you must use the <code>cak</code> request parameter and not use the
     * <code>secretARN</code> request parameter.</p>
     */
    inline const Aws::String& GetCkn() const { return m_ckn; }
    inline bool CknHasBeenSet() const { return m_cknHasBeenSet; }
    template<typename CknT = Aws::String>
    void SetCkn(CknT&& value) { m_cknHasBeenSet = true; m_ckn = std::forward<CknT>(value); }
    template<typename CknT = Aws::String>
    AssociateMacSecKeyRequest& WithCkn(CknT&& value) { SetCkn(std::forward<CknT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC Security (MACsec) CAK to associate with the connection.</p> <p>You
     * can create the CKN/CAK pair using an industry standard tool.</p> <p> The valid
     * values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this request
     * parameter, you must use the <code>ckn</code> request parameter and not use the
     * <code>secretARN</code> request parameter.</p>
     */
    inline const Aws::String& GetCak() const { return m_cak; }
    inline bool CakHasBeenSet() const { return m_cakHasBeenSet; }
    template<typename CakT = Aws::String>
    void SetCak(CakT&& value) { m_cakHasBeenSet = true; m_cak = std::forward<CakT>(value); }
    template<typename CakT = Aws::String>
    AssociateMacSecKeyRequest& WithCak(CakT&& value) { SetCak(std::forward<CakT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_secretARN;
    bool m_secretARNHasBeenSet = false;

    Aws::String m_ckn;
    bool m_cknHasBeenSet = false;

    Aws::String m_cak;
    bool m_cakHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
