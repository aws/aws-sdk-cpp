/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/LoaContentType.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class DescribeLoaRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API DescribeLoaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLoa"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of a connection, LAG, or interconnect.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }
    inline DescribeLoaRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline DescribeLoaRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline DescribeLoaRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you specify this parameter, the LOA-CFA lists the provider name alongside
     * your company name as the requester of the cross connect.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }
    inline DescribeLoaRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}
    inline DescribeLoaRequest& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}
    inline DescribeLoaRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline const LoaContentType& GetLoaContentType() const{ return m_loaContentType; }
    inline bool LoaContentTypeHasBeenSet() const { return m_loaContentTypeHasBeenSet; }
    inline void SetLoaContentType(const LoaContentType& value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = value; }
    inline void SetLoaContentType(LoaContentType&& value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = std::move(value); }
    inline DescribeLoaRequest& WithLoaContentType(const LoaContentType& value) { SetLoaContentType(value); return *this;}
    inline DescribeLoaRequest& WithLoaContentType(LoaContentType&& value) { SetLoaContentType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    LoaContentType m_loaContentType;
    bool m_loaContentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
