/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class ListCustomRoutingPortMappingsByDestinationRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsByDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCustomRoutingPortMappingsByDestination"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID for the virtual private cloud (VPC) subnet.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>The ID for the virtual private cloud (VPC) subnet.</p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>The ID for the virtual private cloud (VPC) subnet.</p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>The ID for the virtual private cloud (VPC) subnet.</p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>The ID for the virtual private cloud (VPC) subnet.</p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>The ID for the virtual private cloud (VPC) subnet.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationRequest& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>The ID for the virtual private cloud (VPC) subnet.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationRequest& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID for the virtual private cloud (VPC) subnet.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationRequest& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>The endpoint IP address in a virtual private cloud (VPC) subnet for which you
     * want to receive back port mappings.</p>
     */
    inline const Aws::String& GetDestinationAddress() const{ return m_destinationAddress; }

    /**
     * <p>The endpoint IP address in a virtual private cloud (VPC) subnet for which you
     * want to receive back port mappings.</p>
     */
    inline bool DestinationAddressHasBeenSet() const { return m_destinationAddressHasBeenSet; }

    /**
     * <p>The endpoint IP address in a virtual private cloud (VPC) subnet for which you
     * want to receive back port mappings.</p>
     */
    inline void SetDestinationAddress(const Aws::String& value) { m_destinationAddressHasBeenSet = true; m_destinationAddress = value; }

    /**
     * <p>The endpoint IP address in a virtual private cloud (VPC) subnet for which you
     * want to receive back port mappings.</p>
     */
    inline void SetDestinationAddress(Aws::String&& value) { m_destinationAddressHasBeenSet = true; m_destinationAddress = std::move(value); }

    /**
     * <p>The endpoint IP address in a virtual private cloud (VPC) subnet for which you
     * want to receive back port mappings.</p>
     */
    inline void SetDestinationAddress(const char* value) { m_destinationAddressHasBeenSet = true; m_destinationAddress.assign(value); }

    /**
     * <p>The endpoint IP address in a virtual private cloud (VPC) subnet for which you
     * want to receive back port mappings.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationRequest& WithDestinationAddress(const Aws::String& value) { SetDestinationAddress(value); return *this;}

    /**
     * <p>The endpoint IP address in a virtual private cloud (VPC) subnet for which you
     * want to receive back port mappings.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationRequest& WithDestinationAddress(Aws::String&& value) { SetDestinationAddress(std::move(value)); return *this;}

    /**
     * <p>The endpoint IP address in a virtual private cloud (VPC) subnet for which you
     * want to receive back port mappings.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationRequest& WithDestinationAddress(const char* value) { SetDestinationAddress(value); return *this;}


    /**
     * <p>The number of destination port mappings that you want to return with this
     * call. The default value is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of destination port mappings that you want to return with this
     * call. The default value is 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of destination port mappings that you want to return with this
     * call. The default value is 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of destination port mappings that you want to return with this
     * call. The default value is 10.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCustomRoutingPortMappingsByDestinationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_destinationAddress;
    bool m_destinationAddressHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
