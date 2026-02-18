/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/globalaccelerator/model/ListAcceleratorsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListByoipCidrsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCrossAccountAttachmentsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCrossAccountResourcesPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCustomRoutingAcceleratorsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCustomRoutingEndpointGroupsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCustomRoutingListenersPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsByDestinationPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListEndpointGroupsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListListenersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace GlobalAccelerator {

class GlobalAcceleratorClient;

template <typename DerivedClient>
class GlobalAcceleratorPaginationBase {
 public:
  /**
   * Create a paginator for ListAccelerators operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAcceleratorsRequest,
                                    Pagination::ListAcceleratorsPaginationTraits<DerivedClient>>
  ListAcceleratorsPaginator(const Model::ListAcceleratorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAcceleratorsRequest,
                                             Pagination::ListAcceleratorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListByoipCidrs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListByoipCidrsRequest, Pagination::ListByoipCidrsPaginationTraits<DerivedClient>>
  ListByoipCidrsPaginator(const Model::ListByoipCidrsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListByoipCidrsRequest,
                                             Pagination::ListByoipCidrsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListCrossAccountAttachments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCrossAccountAttachmentsRequest,
                                    Pagination::ListCrossAccountAttachmentsPaginationTraits<DerivedClient>>
  ListCrossAccountAttachmentsPaginator(const Model::ListCrossAccountAttachmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCrossAccountAttachmentsRequest,
                                             Pagination::ListCrossAccountAttachmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCrossAccountResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCrossAccountResourcesRequest,
                                    Pagination::ListCrossAccountResourcesPaginationTraits<DerivedClient>>
  ListCrossAccountResourcesPaginator(const Model::ListCrossAccountResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCrossAccountResourcesRequest,
                                             Pagination::ListCrossAccountResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCustomRoutingAccelerators operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomRoutingAcceleratorsRequest,
                                    Pagination::ListCustomRoutingAcceleratorsPaginationTraits<DerivedClient>>
  ListCustomRoutingAcceleratorsPaginator(const Model::ListCustomRoutingAcceleratorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomRoutingAcceleratorsRequest,
                                             Pagination::ListCustomRoutingAcceleratorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCustomRoutingEndpointGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomRoutingEndpointGroupsRequest,
                                    Pagination::ListCustomRoutingEndpointGroupsPaginationTraits<DerivedClient>>
  ListCustomRoutingEndpointGroupsPaginator(const Model::ListCustomRoutingEndpointGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomRoutingEndpointGroupsRequest,
                                             Pagination::ListCustomRoutingEndpointGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCustomRoutingListeners operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomRoutingListenersRequest,
                                    Pagination::ListCustomRoutingListenersPaginationTraits<DerivedClient>>
  ListCustomRoutingListenersPaginator(const Model::ListCustomRoutingListenersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomRoutingListenersRequest,
                                             Pagination::ListCustomRoutingListenersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCustomRoutingPortMappings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomRoutingPortMappingsRequest,
                                    Pagination::ListCustomRoutingPortMappingsPaginationTraits<DerivedClient>>
  ListCustomRoutingPortMappingsPaginator(const Model::ListCustomRoutingPortMappingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomRoutingPortMappingsRequest,
                                             Pagination::ListCustomRoutingPortMappingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCustomRoutingPortMappingsByDestination operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomRoutingPortMappingsByDestinationRequest,
                                    Pagination::ListCustomRoutingPortMappingsByDestinationPaginationTraits<DerivedClient>>
  ListCustomRoutingPortMappingsByDestinationPaginator(const Model::ListCustomRoutingPortMappingsByDestinationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomRoutingPortMappingsByDestinationRequest,
                                             Pagination::ListCustomRoutingPortMappingsByDestinationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEndpointGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointGroupsRequest,
                                    Pagination::ListEndpointGroupsPaginationTraits<DerivedClient>>
  ListEndpointGroupsPaginator(const Model::ListEndpointGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointGroupsRequest,
                                             Pagination::ListEndpointGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListListeners operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListListenersRequest, Pagination::ListListenersPaginationTraits<DerivedClient>>
  ListListenersPaginator(const Model::ListListenersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListListenersRequest,
                                             Pagination::ListListenersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace GlobalAccelerator
}  // namespace Aws
