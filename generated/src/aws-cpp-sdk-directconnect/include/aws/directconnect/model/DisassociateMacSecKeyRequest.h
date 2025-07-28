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
  class DisassociateMacSecKeyRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API DisassociateMacSecKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateMacSecKey"; }

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
    DisassociateMacSecKeyRequest& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the MAC Security (MACsec) secret key.</p>
     * <p>You can use <a>DescribeConnections</a> to retrieve the ARN of the MAC
     * Security (MACsec) secret key.</p>
     */
    inline const Aws::String& GetSecretARN() const { return m_secretARN; }
    inline bool SecretARNHasBeenSet() const { return m_secretARNHasBeenSet; }
    template<typename SecretARNT = Aws::String>
    void SetSecretARN(SecretARNT&& value) { m_secretARNHasBeenSet = true; m_secretARN = std::forward<SecretARNT>(value); }
    template<typename SecretARNT = Aws::String>
    DisassociateMacSecKeyRequest& WithSecretARN(SecretARNT&& value) { SetSecretARN(std::forward<SecretARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_secretARN;
    bool m_secretARNHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
