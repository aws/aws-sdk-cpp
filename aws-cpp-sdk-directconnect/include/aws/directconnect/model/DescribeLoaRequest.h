/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Container for the parameters to the DescribeLoa operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeLoaRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DescribeLoaRequest : public DirectConnectRequest
  {
  public:
    DescribeLoaRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of a connection, LAG, or interconnect for which to get the LOA-CFA
     * information.</p> <p>Example: dxcon-abc123 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of a connection, LAG, or interconnect for which to get the LOA-CFA
     * information.</p> <p>Example: dxcon-abc123 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of a connection, LAG, or interconnect for which to get the LOA-CFA
     * information.</p> <p>Example: dxcon-abc123 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of a connection, LAG, or interconnect for which to get the LOA-CFA
     * information.</p> <p>Example: dxcon-abc123 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of a connection, LAG, or interconnect for which to get the LOA-CFA
     * information.</p> <p>Example: dxcon-abc123 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline DescribeLoaRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of a connection, LAG, or interconnect for which to get the LOA-CFA
     * information.</p> <p>Example: dxcon-abc123 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline DescribeLoaRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of a connection, LAG, or interconnect for which to get the LOA-CFA
     * information.</p> <p>Example: dxcon-abc123 or dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline DescribeLoaRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you supply this parameter, the LOA-CFA lists the provider name alongside your
     * company name as the requester of the cross connect.</p> <p>Default: None</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you supply this parameter, the LOA-CFA lists the provider name alongside your
     * company name as the requester of the cross connect.</p> <p>Default: None</p>
     */
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you supply this parameter, the LOA-CFA lists the provider name alongside your
     * company name as the requester of the cross connect.</p> <p>Default: None</p>
     */
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you supply this parameter, the LOA-CFA lists the provider name alongside your
     * company name as the requester of the cross connect.</p> <p>Default: None</p>
     */
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you supply this parameter, the LOA-CFA lists the provider name alongside your
     * company name as the requester of the cross connect.</p> <p>Default: None</p>
     */
    inline DescribeLoaRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you supply this parameter, the LOA-CFA lists the provider name alongside your
     * company name as the requester of the cross connect.</p> <p>Default: None</p>
     */
    inline DescribeLoaRequest& WithProviderName(Aws::String&& value) { SetProviderName(value); return *this;}

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you supply this parameter, the LOA-CFA lists the provider name alongside your
     * company name as the requester of the cross connect.</p> <p>Default: None</p>
     */
    inline DescribeLoaRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}

    /**
     * <p>A standard media type indicating the content type of the LOA-CFA document.
     * Currently, the only supported value is "application/pdf".</p> <p>Default:
     * application/pdf</p>
     */
    inline const LoaContentType& GetLoaContentType() const{ return m_loaContentType; }

    /**
     * <p>A standard media type indicating the content type of the LOA-CFA document.
     * Currently, the only supported value is "application/pdf".</p> <p>Default:
     * application/pdf</p>
     */
    inline void SetLoaContentType(const LoaContentType& value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = value; }

    /**
     * <p>A standard media type indicating the content type of the LOA-CFA document.
     * Currently, the only supported value is "application/pdf".</p> <p>Default:
     * application/pdf</p>
     */
    inline void SetLoaContentType(LoaContentType&& value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = value; }

    /**
     * <p>A standard media type indicating the content type of the LOA-CFA document.
     * Currently, the only supported value is "application/pdf".</p> <p>Default:
     * application/pdf</p>
     */
    inline DescribeLoaRequest& WithLoaContentType(const LoaContentType& value) { SetLoaContentType(value); return *this;}

    /**
     * <p>A standard media type indicating the content type of the LOA-CFA document.
     * Currently, the only supported value is "application/pdf".</p> <p>Default:
     * application/pdf</p>
     */
    inline DescribeLoaRequest& WithLoaContentType(LoaContentType&& value) { SetLoaContentType(value); return *this;}

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
