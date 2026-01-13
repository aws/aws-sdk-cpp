/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace LexModelBuildingService {

class LexModelBuildingServiceClient;

template <typename DerivedClient>
class LexModelBuildingServicePaginationBase {
 public:
  /**
   * Create a paginator for GetBotAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBotAliasesRequest, Pagination::GetBotAliasesPaginationTraits<DerivedClient>>
  GetBotAliasesPaginator(const Model::GetBotAliasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBotAliasesRequest,
                                             Pagination::GetBotAliasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetBotChannelAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBotChannelAssociationsRequest,
                                    Pagination::GetBotChannelAssociationsPaginationTraits<DerivedClient>>
  GetBotChannelAssociationsPaginator(const Model::GetBotChannelAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBotChannelAssociationsRequest,
                                             Pagination::GetBotChannelAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetBots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBotsRequest, Pagination::GetBotsPaginationTraits<DerivedClient>>
  GetBotsPaginator(const Model::GetBotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBotsRequest, Pagination::GetBotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetBotVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBotVersionsRequest, Pagination::GetBotVersionsPaginationTraits<DerivedClient>>
  GetBotVersionsPaginator(const Model::GetBotVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBotVersionsRequest,
                                             Pagination::GetBotVersionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for GetBuiltinIntents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBuiltinIntentsRequest,
                                    Pagination::GetBuiltinIntentsPaginationTraits<DerivedClient>>
  GetBuiltinIntentsPaginator(const Model::GetBuiltinIntentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBuiltinIntentsRequest,
                                             Pagination::GetBuiltinIntentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetBuiltinSlotTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBuiltinSlotTypesRequest,
                                    Pagination::GetBuiltinSlotTypesPaginationTraits<DerivedClient>>
  GetBuiltinSlotTypesPaginator(const Model::GetBuiltinSlotTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBuiltinSlotTypesRequest,
                                             Pagination::GetBuiltinSlotTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetIntents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIntentsRequest, Pagination::GetIntentsPaginationTraits<DerivedClient>>
  GetIntentsPaginator(const Model::GetIntentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIntentsRequest,
                                             Pagination::GetIntentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for GetIntentVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIntentVersionsRequest,
                                    Pagination::GetIntentVersionsPaginationTraits<DerivedClient>>
  GetIntentVersionsPaginator(const Model::GetIntentVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIntentVersionsRequest,
                                             Pagination::GetIntentVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetMigrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMigrationsRequest, Pagination::GetMigrationsPaginationTraits<DerivedClient>>
  GetMigrationsPaginator(const Model::GetMigrationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMigrationsRequest,
                                             Pagination::GetMigrationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetSlotTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSlotTypesRequest, Pagination::GetSlotTypesPaginationTraits<DerivedClient>>
  GetSlotTypesPaginator(const Model::GetSlotTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSlotTypesRequest,
                                             Pagination::GetSlotTypesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for GetSlotTypeVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSlotTypeVersionsRequest,
                                    Pagination::GetSlotTypeVersionsPaginationTraits<DerivedClient>>
  GetSlotTypeVersionsPaginator(const Model::GetSlotTypeVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSlotTypeVersionsRequest,
                                             Pagination::GetSlotTypeVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace LexModelBuildingService
}  // namespace Aws
