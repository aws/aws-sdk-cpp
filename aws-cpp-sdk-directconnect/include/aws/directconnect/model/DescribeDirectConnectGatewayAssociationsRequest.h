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
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Container for the parameters to the DescribeDirectConnectGatewayAssociations
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewayAssociationsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationsRequest : public DirectConnectRequest
  {
  public:
    DescribeDirectConnectGatewayAssociationsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDirectConnectGatewayAssociations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }

    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = value; }

    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::move(value); }

    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId.assign(value); }

    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}


    /**
     * <p>The maximum number of direct connect gateway associations to return per
     * page.</p> <p>Example: 15</p> <p>Default: None</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of direct connect gateway associations to return per
     * page.</p> <p>Example: 15</p> <p>Default: None</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of direct connect gateway associations to return per
     * page.</p> <p>Example: 15</p> <p>Default: None</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token provided in the previous describe result to retrieve the next page
     * of the result.</p> <p>Default: None</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token provided in the previous describe result to retrieve the next page
     * of the result.</p> <p>Default: None</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token provided in the previous describe result to retrieve the next page
     * of the result.</p> <p>Default: None</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token provided in the previous describe result to retrieve the next page
     * of the result.</p> <p>Default: None</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token provided in the previous describe result to retrieve the next page
     * of the result.</p> <p>Default: None</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token provided in the previous describe result to retrieve the next page
     * of the result.</p> <p>Default: None</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token provided in the previous describe result to retrieve the next page
     * of the result.</p> <p>Default: None</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet;

    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
