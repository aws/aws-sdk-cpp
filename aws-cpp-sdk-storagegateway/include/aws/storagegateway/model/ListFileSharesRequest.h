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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>ListFileShareInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListFileSharesInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API ListFileSharesRequest : public StorageGatewayRequest
  {
  public:
    ListFileSharesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFileShares"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon resource Name (ARN) of the gateway whose file shares you want to
     * list. If this field is not present, all file shares under your account are
     * listed.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The Amazon resource Name (ARN) of the gateway whose file shares you want to
     * list. If this field is not present, all file shares under your account are
     * listed.</p>
     */
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    /**
     * <p>The Amazon resource Name (ARN) of the gateway whose file shares you want to
     * list. If this field is not present, all file shares under your account are
     * listed.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The Amazon resource Name (ARN) of the gateway whose file shares you want to
     * list. If this field is not present, all file shares under your account are
     * listed.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    /**
     * <p>The Amazon resource Name (ARN) of the gateway whose file shares you want to
     * list. If this field is not present, all file shares under your account are
     * listed.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    /**
     * <p>The Amazon resource Name (ARN) of the gateway whose file shares you want to
     * list. If this field is not present, all file shares under your account are
     * listed.</p>
     */
    inline ListFileSharesRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The Amazon resource Name (ARN) of the gateway whose file shares you want to
     * list. If this field is not present, all file shares under your account are
     * listed.</p>
     */
    inline ListFileSharesRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource Name (ARN) of the gateway whose file shares you want to
     * list. If this field is not present, all file shares under your account are
     * listed.</p>
     */
    inline ListFileSharesRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The maximum number of file shares to return in the response. The value must
     * be an integer with a value greater than zero. Optional.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of file shares to return in the response. The value must
     * be an integer with a value greater than zero. Optional.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of file shares to return in the response. The value must
     * be an integer with a value greater than zero. Optional.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of file shares to return in the response. The value must
     * be an integer with a value greater than zero. Optional.</p>
     */
    inline ListFileSharesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>Opaque pagination token returned from a previous ListFileShares operation. If
     * present, <code>Marker</code> specifies where to continue the list from after a
     * previous call to ListFileShares. Optional.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Opaque pagination token returned from a previous ListFileShares operation. If
     * present, <code>Marker</code> specifies where to continue the list from after a
     * previous call to ListFileShares. Optional.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Opaque pagination token returned from a previous ListFileShares operation. If
     * present, <code>Marker</code> specifies where to continue the list from after a
     * previous call to ListFileShares. Optional.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Opaque pagination token returned from a previous ListFileShares operation. If
     * present, <code>Marker</code> specifies where to continue the list from after a
     * previous call to ListFileShares. Optional.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Opaque pagination token returned from a previous ListFileShares operation. If
     * present, <code>Marker</code> specifies where to continue the list from after a
     * previous call to ListFileShares. Optional.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Opaque pagination token returned from a previous ListFileShares operation. If
     * present, <code>Marker</code> specifies where to continue the list from after a
     * previous call to ListFileShares. Optional.</p>
     */
    inline ListFileSharesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Opaque pagination token returned from a previous ListFileShares operation. If
     * present, <code>Marker</code> specifies where to continue the list from after a
     * previous call to ListFileShares. Optional.</p>
     */
    inline ListFileSharesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Opaque pagination token returned from a previous ListFileShares operation. If
     * present, <code>Marker</code> specifies where to continue the list from after a
     * previous call to ListFileShares. Optional.</p>
     */
    inline ListFileSharesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
