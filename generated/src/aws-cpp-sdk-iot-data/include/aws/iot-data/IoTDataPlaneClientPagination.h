/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iot-data/IoTDataPlaneClient.h>
#include <aws/iot-data/model/ListRetainedMessagesPaginationTraits.h>

namespace Aws {
namespace IoTDataPlane {

using ListRetainedMessagesPaginator =
    Aws::Utils::Pagination::Paginator<IoTDataPlaneClient, Model::ListRetainedMessagesRequest,
                                      Pagination::ListRetainedMessagesPaginationTraits<IoTDataPlaneClient>>;

}  // namespace IoTDataPlane
}  // namespace Aws
