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
   * <p>Container for the parameters to the DescribeInterconnectLoa operation.</p>
   */
  class AWS_DIRECTCONNECT_API DescribeInterconnectLoaRequest : public DirectConnectRequest
  {
  public:
    DescribeInterconnectLoaRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetInterconnectId() const{ return m_interconnectId; }

    
    inline void SetInterconnectId(const Aws::String& value) { m_interconnectIdHasBeenSet = true; m_interconnectId = value; }

    
    inline void SetInterconnectId(Aws::String&& value) { m_interconnectIdHasBeenSet = true; m_interconnectId = value; }

    
    inline void SetInterconnectId(const char* value) { m_interconnectIdHasBeenSet = true; m_interconnectId.assign(value); }

    
    inline DescribeInterconnectLoaRequest& WithInterconnectId(const Aws::String& value) { SetInterconnectId(value); return *this;}

    
    inline DescribeInterconnectLoaRequest& WithInterconnectId(Aws::String&& value) { SetInterconnectId(value); return *this;}

    
    inline DescribeInterconnectLoaRequest& WithInterconnectId(const char* value) { SetInterconnectId(value); return *this;}

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
    inline DescribeInterconnectLoaRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you supply this parameter, the LOA-CFA lists the provider name alongside your
     * company name as the requester of the cross connect.</p> <p>Default: None</p>
     */
    inline DescribeInterconnectLoaRequest& WithProviderName(Aws::String&& value) { SetProviderName(value); return *this;}

    /**
     * <p>The name of the service provider who establishes connectivity on your behalf.
     * If you supply this parameter, the LOA-CFA lists the provider name alongside your
     * company name as the requester of the cross connect.</p> <p>Default: None</p>
     */
    inline DescribeInterconnectLoaRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}

    
    inline const LoaContentType& GetLoaContentType() const{ return m_loaContentType; }

    
    inline void SetLoaContentType(const LoaContentType& value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = value; }

    
    inline void SetLoaContentType(LoaContentType&& value) { m_loaContentTypeHasBeenSet = true; m_loaContentType = value; }

    
    inline DescribeInterconnectLoaRequest& WithLoaContentType(const LoaContentType& value) { SetLoaContentType(value); return *this;}

    
    inline DescribeInterconnectLoaRequest& WithLoaContentType(LoaContentType&& value) { SetLoaContentType(value); return *this;}

  private:
    Aws::String m_interconnectId;
    bool m_interconnectIdHasBeenSet;
    Aws::String m_providerName;
    bool m_providerNameHasBeenSet;
    LoaContentType m_loaContentType;
    bool m_loaContentTypeHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
