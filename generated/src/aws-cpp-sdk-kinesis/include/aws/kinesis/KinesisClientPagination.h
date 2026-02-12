/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/model/ListStreamConsumersPaginationTraits.h>
#include <aws/kinesis/model/ListStreamsPaginationTraits.h>

namespace Aws {
namespace Kinesis {

using ListStreamConsumersPaginator = Aws::Utils::Pagination::Paginator<KinesisClient, Model::ListStreamConsumersRequest,
                                                                       Pagination::ListStreamConsumersPaginationTraits<KinesisClient>>;
using ListStreamsPaginator =
    Aws::Utils::Pagination::Paginator<KinesisClient, Model::ListStreamsRequest, Pagination::ListStreamsPaginationTraits<KinesisClient>>;

}  // namespace Kinesis
}  // namespace Aws
