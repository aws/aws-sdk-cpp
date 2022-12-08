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
    AWS_DIRECTCONNECT_API AssociateMacSecKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateMacSecKey"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p> <p>You can use <a>DescribeConnections</a> or
     * <a>DescribeLags</a> to retrieve connection ID.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p> <p>You can use <a>DescribeConnections</a> or
     * <a>DescribeLags</a> to retrieve connection ID.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p> <p>You can use <a>DescribeConnections</a> or
     * <a>DescribeLags</a> to retrieve connection ID.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p> <p>You can use <a>DescribeConnections</a> or
     * <a>DescribeLags</a> to retrieve connection ID.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p> <p>You can use <a>DescribeConnections</a> or
     * <a>DescribeLags</a> to retrieve connection ID.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p> <p>You can use <a>DescribeConnections</a> or
     * <a>DescribeLags</a> to retrieve connection ID.</p>
     */
    inline AssociateMacSecKeyRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p> <p>You can use <a>DescribeConnections</a> or
     * <a>DescribeLags</a> to retrieve connection ID.</p>
     */
    inline AssociateMacSecKeyRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p> <p>You can use <a>DescribeConnections</a> or
     * <a>DescribeLags</a> to retrieve connection ID.</p>
     */
    inline AssociateMacSecKeyRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the MAC Security (MACsec) secret key to
     * associate with the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> or <a>DescribeLags</a> to retrieve the MAC Security
     * (MACsec) secret key.</p> <p>If you use this request parameter, you do not use
     * the <code>ckn</code> and <code>cak</code> request parameters.</p>
     */
    inline const Aws::String& GetSecretARN() const{ return m_secretARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the MAC Security (MACsec) secret key to
     * associate with the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> or <a>DescribeLags</a> to retrieve the MAC Security
     * (MACsec) secret key.</p> <p>If you use this request parameter, you do not use
     * the <code>ckn</code> and <code>cak</code> request parameters.</p>
     */
    inline bool SecretARNHasBeenSet() const { return m_secretARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the MAC Security (MACsec) secret key to
     * associate with the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> or <a>DescribeLags</a> to retrieve the MAC Security
     * (MACsec) secret key.</p> <p>If you use this request parameter, you do not use
     * the <code>ckn</code> and <code>cak</code> request parameters.</p>
     */
    inline void SetSecretARN(const Aws::String& value) { m_secretARNHasBeenSet = true; m_secretARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the MAC Security (MACsec) secret key to
     * associate with the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> or <a>DescribeLags</a> to retrieve the MAC Security
     * (MACsec) secret key.</p> <p>If you use this request parameter, you do not use
     * the <code>ckn</code> and <code>cak</code> request parameters.</p>
     */
    inline void SetSecretARN(Aws::String&& value) { m_secretARNHasBeenSet = true; m_secretARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the MAC Security (MACsec) secret key to
     * associate with the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> or <a>DescribeLags</a> to retrieve the MAC Security
     * (MACsec) secret key.</p> <p>If you use this request parameter, you do not use
     * the <code>ckn</code> and <code>cak</code> request parameters.</p>
     */
    inline void SetSecretARN(const char* value) { m_secretARNHasBeenSet = true; m_secretARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the MAC Security (MACsec) secret key to
     * associate with the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> or <a>DescribeLags</a> to retrieve the MAC Security
     * (MACsec) secret key.</p> <p>If you use this request parameter, you do not use
     * the <code>ckn</code> and <code>cak</code> request parameters.</p>
     */
    inline AssociateMacSecKeyRequest& WithSecretARN(const Aws::String& value) { SetSecretARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the MAC Security (MACsec) secret key to
     * associate with the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> or <a>DescribeLags</a> to retrieve the MAC Security
     * (MACsec) secret key.</p> <p>If you use this request parameter, you do not use
     * the <code>ckn</code> and <code>cak</code> request parameters.</p>
     */
    inline AssociateMacSecKeyRequest& WithSecretARN(Aws::String&& value) { SetSecretARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the MAC Security (MACsec) secret key to
     * associate with the dedicated connection.</p> <p>You can use
     * <a>DescribeConnections</a> or <a>DescribeLags</a> to retrieve the MAC Security
     * (MACsec) secret key.</p> <p>If you use this request parameter, you do not use
     * the <code>ckn</code> and <code>cak</code> request parameters.</p>
     */
    inline AssociateMacSecKeyRequest& WithSecretARN(const char* value) { SetSecretARN(value); return *this;}


    /**
     * <p>The MAC Security (MACsec) CKN to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>cak</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline const Aws::String& GetCkn() const{ return m_ckn; }

    /**
     * <p>The MAC Security (MACsec) CKN to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>cak</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline bool CknHasBeenSet() const { return m_cknHasBeenSet; }

    /**
     * <p>The MAC Security (MACsec) CKN to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>cak</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline void SetCkn(const Aws::String& value) { m_cknHasBeenSet = true; m_ckn = value; }

    /**
     * <p>The MAC Security (MACsec) CKN to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>cak</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline void SetCkn(Aws::String&& value) { m_cknHasBeenSet = true; m_ckn = std::move(value); }

    /**
     * <p>The MAC Security (MACsec) CKN to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>cak</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline void SetCkn(const char* value) { m_cknHasBeenSet = true; m_ckn.assign(value); }

    /**
     * <p>The MAC Security (MACsec) CKN to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>cak</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline AssociateMacSecKeyRequest& WithCkn(const Aws::String& value) { SetCkn(value); return *this;}

    /**
     * <p>The MAC Security (MACsec) CKN to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>cak</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline AssociateMacSecKeyRequest& WithCkn(Aws::String&& value) { SetCkn(std::move(value)); return *this;}

    /**
     * <p>The MAC Security (MACsec) CKN to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>cak</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline AssociateMacSecKeyRequest& WithCkn(const char* value) { SetCkn(value); return *this;}


    /**
     * <p>The MAC Security (MACsec) CAK to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>ckn</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline const Aws::String& GetCak() const{ return m_cak; }

    /**
     * <p>The MAC Security (MACsec) CAK to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>ckn</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline bool CakHasBeenSet() const { return m_cakHasBeenSet; }

    /**
     * <p>The MAC Security (MACsec) CAK to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>ckn</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline void SetCak(const Aws::String& value) { m_cakHasBeenSet = true; m_cak = value; }

    /**
     * <p>The MAC Security (MACsec) CAK to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>ckn</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline void SetCak(Aws::String&& value) { m_cakHasBeenSet = true; m_cak = std::move(value); }

    /**
     * <p>The MAC Security (MACsec) CAK to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>ckn</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline void SetCak(const char* value) { m_cakHasBeenSet = true; m_cak.assign(value); }

    /**
     * <p>The MAC Security (MACsec) CAK to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>ckn</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline AssociateMacSecKeyRequest& WithCak(const Aws::String& value) { SetCak(value); return *this;}

    /**
     * <p>The MAC Security (MACsec) CAK to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>ckn</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline AssociateMacSecKeyRequest& WithCak(Aws::String&& value) { SetCak(std::move(value)); return *this;}

    /**
     * <p>The MAC Security (MACsec) CAK to associate with the dedicated connection.</p>
     * <p>You can create the CKN/CAK pair using an industry standard tool.</p> <p> The
     * valid values are 64 hexadecimal characters (0-9, A-E).</p> <p>If you use this
     * request parameter, you must use the <code>ckn</code> request parameter and not
     * use the <code>secretARN</code> request parameter.</p>
     */
    inline AssociateMacSecKeyRequest& WithCak(const char* value) { SetCak(value); return *this;}

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
