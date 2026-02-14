/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/globalaccelerator/GlobalAcceleratorClient.h>
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

namespace Aws {
namespace GlobalAccelerator {

using ListAcceleratorsPaginator = Aws::Utils::Pagination::Paginator<GlobalAcceleratorClient, Model::ListAcceleratorsRequest,
                                                                    Pagination::ListAcceleratorsPaginationTraits<GlobalAcceleratorClient>>;
using ListByoipCidrsPaginator = Aws::Utils::Pagination::Paginator<GlobalAcceleratorClient, Model::ListByoipCidrsRequest,
                                                                  Pagination::ListByoipCidrsPaginationTraits<GlobalAcceleratorClient>>;
using ListCrossAccountAttachmentsPaginator =
    Aws::Utils::Pagination::Paginator<GlobalAcceleratorClient, Model::ListCrossAccountAttachmentsRequest,
                                      Pagination::ListCrossAccountAttachmentsPaginationTraits<GlobalAcceleratorClient>>;
using ListCrossAccountResourcesPaginator =
    Aws::Utils::Pagination::Paginator<GlobalAcceleratorClient, Model::ListCrossAccountResourcesRequest,
                                      Pagination::ListCrossAccountResourcesPaginationTraits<GlobalAcceleratorClient>>;
using ListCustomRoutingAcceleratorsPaginator =
    Aws::Utils::Pagination::Paginator<GlobalAcceleratorClient, Model::ListCustomRoutingAcceleratorsRequest,
                                      Pagination::ListCustomRoutingAcceleratorsPaginationTraits<GlobalAcceleratorClient>>;
using ListCustomRoutingEndpointGroupsPaginator =
    Aws::Utils::Pagination::Paginator<GlobalAcceleratorClient, Model::ListCustomRoutingEndpointGroupsRequest,
                                      Pagination::ListCustomRoutingEndpointGroupsPaginationTraits<GlobalAcceleratorClient>>;
using ListCustomRoutingListenersPaginator =
    Aws::Utils::Pagination::Paginator<GlobalAcceleratorClient, Model::ListCustomRoutingListenersRequest,
                                      Pagination::ListCustomRoutingListenersPaginationTraits<GlobalAcceleratorClient>>;
using ListCustomRoutingPortMappingsPaginator =
    Aws::Utils::Pagination::Paginator<GlobalAcceleratorClient, Model::ListCustomRoutingPortMappingsRequest,
                                      Pagination::ListCustomRoutingPortMappingsPaginationTraits<GlobalAcceleratorClient>>;
using ListCustomRoutingPortMappingsByDestinationPaginator =
    Aws::Utils::Pagination::Paginator<GlobalAcceleratorClient, Model::ListCustomRoutingPortMappingsByDestinationRequest,
                                      Pagination::ListCustomRoutingPortMappingsByDestinationPaginationTraits<GlobalAcceleratorClient>>;
using ListEndpointGroupsPaginator =
    Aws::Utils::Pagination::Paginator<GlobalAcceleratorClient, Model::ListEndpointGroupsRequest,
                                      Pagination::ListEndpointGroupsPaginationTraits<GlobalAcceleratorClient>>;
using ListListenersPaginator = Aws::Utils::Pagination::Paginator<GlobalAcceleratorClient, Model::ListListenersRequest,
                                                                 Pagination::ListListenersPaginationTraits<GlobalAcceleratorClient>>;

}  // namespace GlobalAccelerator
}  // namespace Aws
