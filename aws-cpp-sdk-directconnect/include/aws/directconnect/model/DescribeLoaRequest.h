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
  class AWS_DIRECTCONNECT_API DescribeLoaRequest : public DirectConnectRequest
  {
  public:
    DescribeLoaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLoa"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_connectionIdHasBeenSet;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet;

    LoaContentType m_loaContentType;
    bool m_loaContentTypeHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
