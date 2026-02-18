/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lex-models/LexModelBuildingServiceClient.h>
#include <aws/lex-models/model/GetBotAliasesPaginationTraits.h>
#include <aws/lex-models/model/GetBotChannelAssociationsPaginationTraits.h>
#include <aws/lex-models/model/GetBotVersionsPaginationTraits.h>
#include <aws/lex-models/model/GetBotsPaginationTraits.h>
#include <aws/lex-models/model/GetBuiltinIntentsPaginationTraits.h>
#include <aws/lex-models/model/GetBuiltinSlotTypesPaginationTraits.h>
#include <aws/lex-models/model/GetIntentVersionsPaginationTraits.h>
#include <aws/lex-models/model/GetIntentsPaginationTraits.h>
#include <aws/lex-models/model/GetMigrationsPaginationTraits.h>
#include <aws/lex-models/model/GetSlotTypeVersionsPaginationTraits.h>
#include <aws/lex-models/model/GetSlotTypesPaginationTraits.h>

namespace Aws {
namespace LexModelBuildingService {

using GetBotAliasesPaginator = Aws::Utils::Pagination::Paginator<LexModelBuildingServiceClient, Model::GetBotAliasesRequest,
                                                                 Pagination::GetBotAliasesPaginationTraits<LexModelBuildingServiceClient>>;
using GetBotChannelAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelBuildingServiceClient, Model::GetBotChannelAssociationsRequest,
                                      Pagination::GetBotChannelAssociationsPaginationTraits<LexModelBuildingServiceClient>>;
using GetBotsPaginator = Aws::Utils::Pagination::Paginator<LexModelBuildingServiceClient, Model::GetBotsRequest,
                                                           Pagination::GetBotsPaginationTraits<LexModelBuildingServiceClient>>;
using GetBotVersionsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelBuildingServiceClient, Model::GetBotVersionsRequest,
                                      Pagination::GetBotVersionsPaginationTraits<LexModelBuildingServiceClient>>;
using GetBuiltinIntentsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelBuildingServiceClient, Model::GetBuiltinIntentsRequest,
                                      Pagination::GetBuiltinIntentsPaginationTraits<LexModelBuildingServiceClient>>;
using GetBuiltinSlotTypesPaginator =
    Aws::Utils::Pagination::Paginator<LexModelBuildingServiceClient, Model::GetBuiltinSlotTypesRequest,
                                      Pagination::GetBuiltinSlotTypesPaginationTraits<LexModelBuildingServiceClient>>;
using GetIntentsPaginator = Aws::Utils::Pagination::Paginator<LexModelBuildingServiceClient, Model::GetIntentsRequest,
                                                              Pagination::GetIntentsPaginationTraits<LexModelBuildingServiceClient>>;
using GetIntentVersionsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelBuildingServiceClient, Model::GetIntentVersionsRequest,
                                      Pagination::GetIntentVersionsPaginationTraits<LexModelBuildingServiceClient>>;
using GetMigrationsPaginator = Aws::Utils::Pagination::Paginator<LexModelBuildingServiceClient, Model::GetMigrationsRequest,
                                                                 Pagination::GetMigrationsPaginationTraits<LexModelBuildingServiceClient>>;
using GetSlotTypesPaginator = Aws::Utils::Pagination::Paginator<LexModelBuildingServiceClient, Model::GetSlotTypesRequest,
                                                                Pagination::GetSlotTypesPaginationTraits<LexModelBuildingServiceClient>>;
using GetSlotTypeVersionsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelBuildingServiceClient, Model::GetSlotTypeVersionsRequest,
                                      Pagination::GetSlotTypeVersionsPaginationTraits<LexModelBuildingServiceClient>>;

}  // namespace LexModelBuildingService
}  // namespace Aws
