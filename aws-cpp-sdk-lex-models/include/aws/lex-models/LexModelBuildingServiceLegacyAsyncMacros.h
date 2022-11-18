/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateBotVersionAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::CreateBotVersion, __VA_ARGS__)
#define CreateBotVersionCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::CreateBotVersion, REQUEST)

#define CreateIntentVersionAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::CreateIntentVersion, __VA_ARGS__)
#define CreateIntentVersionCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::CreateIntentVersion, REQUEST)

#define CreateSlotTypeVersionAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::CreateSlotTypeVersion, __VA_ARGS__)
#define CreateSlotTypeVersionCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::CreateSlotTypeVersion, REQUEST)

#define DeleteBotAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::DeleteBot, __VA_ARGS__)
#define DeleteBotCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::DeleteBot, REQUEST)

#define DeleteBotAliasAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::DeleteBotAlias, __VA_ARGS__)
#define DeleteBotAliasCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::DeleteBotAlias, REQUEST)

#define DeleteBotChannelAssociationAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::DeleteBotChannelAssociation, __VA_ARGS__)
#define DeleteBotChannelAssociationCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::DeleteBotChannelAssociation, REQUEST)

#define DeleteBotVersionAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::DeleteBotVersion, __VA_ARGS__)
#define DeleteBotVersionCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::DeleteBotVersion, REQUEST)

#define DeleteIntentAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::DeleteIntent, __VA_ARGS__)
#define DeleteIntentCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::DeleteIntent, REQUEST)

#define DeleteIntentVersionAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::DeleteIntentVersion, __VA_ARGS__)
#define DeleteIntentVersionCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::DeleteIntentVersion, REQUEST)

#define DeleteSlotTypeAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::DeleteSlotType, __VA_ARGS__)
#define DeleteSlotTypeCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::DeleteSlotType, REQUEST)

#define DeleteSlotTypeVersionAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::DeleteSlotTypeVersion, __VA_ARGS__)
#define DeleteSlotTypeVersionCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::DeleteSlotTypeVersion, REQUEST)

#define DeleteUtterancesAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::DeleteUtterances, __VA_ARGS__)
#define DeleteUtterancesCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::DeleteUtterances, REQUEST)

#define GetBotAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetBot, __VA_ARGS__)
#define GetBotCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetBot, REQUEST)

#define GetBotAliasAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetBotAlias, __VA_ARGS__)
#define GetBotAliasCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetBotAlias, REQUEST)

#define GetBotAliasesAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetBotAliases, __VA_ARGS__)
#define GetBotAliasesCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetBotAliases, REQUEST)

#define GetBotChannelAssociationAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetBotChannelAssociation, __VA_ARGS__)
#define GetBotChannelAssociationCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetBotChannelAssociation, REQUEST)

#define GetBotChannelAssociationsAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetBotChannelAssociations, __VA_ARGS__)
#define GetBotChannelAssociationsCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetBotChannelAssociations, REQUEST)

#define GetBotVersionsAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetBotVersions, __VA_ARGS__)
#define GetBotVersionsCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetBotVersions, REQUEST)

#define GetBotsAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetBots, __VA_ARGS__)
#define GetBotsCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetBots, REQUEST)

#define GetBuiltinIntentAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetBuiltinIntent, __VA_ARGS__)
#define GetBuiltinIntentCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetBuiltinIntent, REQUEST)

#define GetBuiltinIntentsAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetBuiltinIntents, __VA_ARGS__)
#define GetBuiltinIntentsCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetBuiltinIntents, REQUEST)

#define GetBuiltinSlotTypesAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetBuiltinSlotTypes, __VA_ARGS__)
#define GetBuiltinSlotTypesCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetBuiltinSlotTypes, REQUEST)

#define GetExportAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetExport, __VA_ARGS__)
#define GetExportCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetExport, REQUEST)

#define GetImportAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetImport, __VA_ARGS__)
#define GetImportCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetImport, REQUEST)

#define GetIntentAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetIntent, __VA_ARGS__)
#define GetIntentCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetIntent, REQUEST)

#define GetIntentVersionsAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetIntentVersions, __VA_ARGS__)
#define GetIntentVersionsCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetIntentVersions, REQUEST)

#define GetIntentsAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetIntents, __VA_ARGS__)
#define GetIntentsCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetIntents, REQUEST)

#define GetMigrationAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetMigration, __VA_ARGS__)
#define GetMigrationCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetMigration, REQUEST)

#define GetMigrationsAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetMigrations, __VA_ARGS__)
#define GetMigrationsCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetMigrations, REQUEST)

#define GetSlotTypeAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetSlotType, __VA_ARGS__)
#define GetSlotTypeCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetSlotType, REQUEST)

#define GetSlotTypeVersionsAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetSlotTypeVersions, __VA_ARGS__)
#define GetSlotTypeVersionsCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetSlotTypeVersions, REQUEST)

#define GetSlotTypesAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetSlotTypes, __VA_ARGS__)
#define GetSlotTypesCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetSlotTypes, REQUEST)

#define GetUtterancesViewAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::GetUtterancesView, __VA_ARGS__)
#define GetUtterancesViewCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::GetUtterancesView, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::ListTagsForResource, REQUEST)

#define PutBotAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::PutBot, __VA_ARGS__)
#define PutBotCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::PutBot, REQUEST)

#define PutBotAliasAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::PutBotAlias, __VA_ARGS__)
#define PutBotAliasCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::PutBotAlias, REQUEST)

#define PutIntentAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::PutIntent, __VA_ARGS__)
#define PutIntentCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::PutIntent, REQUEST)

#define PutSlotTypeAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::PutSlotType, __VA_ARGS__)
#define PutSlotTypeCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::PutSlotType, REQUEST)

#define StartImportAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::StartImport, __VA_ARGS__)
#define StartImportCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::StartImport, REQUEST)

#define StartMigrationAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::StartMigration, __VA_ARGS__)
#define StartMigrationCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::StartMigration, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&LexModelBuildingServiceClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&LexModelBuildingServiceClient::UntagResource, REQUEST)

