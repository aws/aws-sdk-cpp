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


    /**
     * <p>The ID of a connection, LAG, or interconnect.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of a connection, LAG, or interconnect.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of a connection, LAG, or interconnect.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of a connection, LAG, or interconnect.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of a connection, LAG, or interconnect.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of a connection, LAG, or interconnect.</p>
     */
    inline DescribeLoaRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of a connection, LAG, or interconnect.</p>
     */
    inline DescribeLoaRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of a connection, LAG, or interconnect.</p>
     */
    inline DescribeLoaRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you specify this parameter, the LOA-CFA lists the provider name alongside
     * your company name as the requester of the cross connect.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you specify this parameter, the LOA-CFA lists the provider name alongside
     * your company name as the requester of the cross connect.</p>
     */
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you specify this parameter, the LOA-CFA lists the provider name alongside
     * your company name as the requester of the cross connect.</p>
     */
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you specify this parameter, the LOA-CFA lists the provider name alongside
     * your company name as the requester of the cross connect.</p>
     */
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you specify this parameter, the LOA-CFA lists the provider name alongside
     * your company name as the requester of the cross connect.</p>
     */
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you specify this parameter, the LOA-CFA lists the provider name alongside
     * your company name as the requester of the cross connect.</p>
     */
    inline DescribeLoaRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you specify this parameter, the LOA-CFA lists the provider name alongside
     * your company name as the requester of the cross connect.</p>
     */
    inline DescribeLoaRequest& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you specify this parameter, the LOA-CFA lists the provider name alongside
     * your company name as the requester of the cross connect.</p>
     */
    inline DescribeLoaRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}


    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline const LoaContentType& GetLoaContentType() const{ return m_loaContentType; }

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline bool LoaContentTypeHasBeenSet() const { return m_loaContentTypeHasBeenSet; }

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline void SetLoaContentType(const LoaContentType& value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = value; }

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline void SetLoaContentType(LoaContentType&& value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = std::move(value); }

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline DescribeLoaRequest& WithLoaContentType(const LoaContentType& value) { SetLoaContentType(value); return *this;}

    /**
     * <p>The standard media type for the LOA-CFA document. The only supported value is
     * application/pdf.</p>
     */
    inline DescribeLoaRequest& WithLoaContentType(LoaContentType&& value) { SetLoaContentType(std::move(value)); return *this;}

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
