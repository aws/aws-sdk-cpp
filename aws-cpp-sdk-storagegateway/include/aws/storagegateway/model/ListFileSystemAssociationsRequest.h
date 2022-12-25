/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class ListFileSystemAssociationsRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API ListFileSystemAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFileSystemAssociations"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline ListFileSystemAssociationsRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline ListFileSystemAssociationsRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline ListFileSystemAssociationsRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The maximum number of file system associations to return in the response. If
     * present, <code>Limit</code> must be an integer with a value greater than zero.
     * Optional.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of file system associations to return in the response. If
     * present, <code>Limit</code> must be an integer with a value greater than zero.
     * Optional.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of file system associations to return in the response. If
     * present, <code>Limit</code> must be an integer with a value greater than zero.
     * Optional.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of file system associations to return in the response. If
     * present, <code>Limit</code> must be an integer with a value greater than zero.
     * Optional.</p>
     */
    inline ListFileSystemAssociationsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>Opaque pagination token returned from a previous
     * <code>ListFileSystemAssociations</code> operation. If present,
     * <code>Marker</code> specifies where to continue the list from after a previous
     * call to <code>ListFileSystemAssociations</code>. Optional.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>ListFileSystemAssociations</code> operation. If present,
     * <code>Marker</code> specifies where to continue the list from after a previous
     * call to <code>ListFileSystemAssociations</code>. Optional.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>ListFileSystemAssociations</code> operation. If present,
     * <code>Marker</code> specifies where to continue the list from after a previous
     * call to <code>ListFileSystemAssociations</code>. Optional.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>ListFileSystemAssociations</code> operation. If present,
     * <code>Marker</code> specifies where to continue the list from after a previous
     * call to <code>ListFileSystemAssociations</code>. Optional.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>ListFileSystemAssociations</code> operation. If present,
     * <code>Marker</code> specifies where to continue the list from after a previous
     * call to <code>ListFileSystemAssociations</code>. Optional.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>ListFileSystemAssociations</code> operation. If present,
     * <code>Marker</code> specifies where to continue the list from after a previous
     * call to <code>ListFileSystemAssociations</code>. Optional.</p>
     */
    inline ListFileSystemAssociationsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>ListFileSystemAssociations</code> operation. If present,
     * <code>Marker</code> specifies where to continue the list from after a previous
     * call to <code>ListFileSystemAssociations</code>. Optional.</p>
     */
    inline ListFileSystemAssociationsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Opaque pagination token returned from a previous
     * <code>ListFileSystemAssociations</code> operation. If present,
     * <code>Marker</code> specifies where to continue the list from after a previous
     * call to <code>ListFileSystemAssociations</code>. Optional.</p>
     */
    inline ListFileSystemAssociationsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
