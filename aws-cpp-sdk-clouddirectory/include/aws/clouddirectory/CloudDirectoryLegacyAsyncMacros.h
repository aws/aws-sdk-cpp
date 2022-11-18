/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddFacetToObjectAsync(...)  SubmitAsync(&CloudDirectoryClient::AddFacetToObject, __VA_ARGS__)
#define AddFacetToObjectCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::AddFacetToObject, REQUEST)

#define ApplySchemaAsync(...)  SubmitAsync(&CloudDirectoryClient::ApplySchema, __VA_ARGS__)
#define ApplySchemaCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ApplySchema, REQUEST)

#define AttachObjectAsync(...)  SubmitAsync(&CloudDirectoryClient::AttachObject, __VA_ARGS__)
#define AttachObjectCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::AttachObject, REQUEST)

#define AttachPolicyAsync(...)  SubmitAsync(&CloudDirectoryClient::AttachPolicy, __VA_ARGS__)
#define AttachPolicyCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::AttachPolicy, REQUEST)

#define AttachToIndexAsync(...)  SubmitAsync(&CloudDirectoryClient::AttachToIndex, __VA_ARGS__)
#define AttachToIndexCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::AttachToIndex, REQUEST)

#define AttachTypedLinkAsync(...)  SubmitAsync(&CloudDirectoryClient::AttachTypedLink, __VA_ARGS__)
#define AttachTypedLinkCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::AttachTypedLink, REQUEST)

#define BatchReadAsync(...)  SubmitAsync(&CloudDirectoryClient::BatchRead, __VA_ARGS__)
#define BatchReadCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::BatchRead, REQUEST)

#define BatchWriteAsync(...)  SubmitAsync(&CloudDirectoryClient::BatchWrite, __VA_ARGS__)
#define BatchWriteCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::BatchWrite, REQUEST)

#define CreateDirectoryAsync(...)  SubmitAsync(&CloudDirectoryClient::CreateDirectory, __VA_ARGS__)
#define CreateDirectoryCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::CreateDirectory, REQUEST)

#define CreateFacetAsync(...)  SubmitAsync(&CloudDirectoryClient::CreateFacet, __VA_ARGS__)
#define CreateFacetCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::CreateFacet, REQUEST)

#define CreateIndexAsync(...)  SubmitAsync(&CloudDirectoryClient::CreateIndex, __VA_ARGS__)
#define CreateIndexCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::CreateIndex, REQUEST)

#define CreateObjectAsync(...)  SubmitAsync(&CloudDirectoryClient::CreateObject, __VA_ARGS__)
#define CreateObjectCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::CreateObject, REQUEST)

#define CreateSchemaAsync(...)  SubmitAsync(&CloudDirectoryClient::CreateSchema, __VA_ARGS__)
#define CreateSchemaCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::CreateSchema, REQUEST)

#define CreateTypedLinkFacetAsync(...)  SubmitAsync(&CloudDirectoryClient::CreateTypedLinkFacet, __VA_ARGS__)
#define CreateTypedLinkFacetCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::CreateTypedLinkFacet, REQUEST)

#define DeleteDirectoryAsync(...)  SubmitAsync(&CloudDirectoryClient::DeleteDirectory, __VA_ARGS__)
#define DeleteDirectoryCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::DeleteDirectory, REQUEST)

#define DeleteFacetAsync(...)  SubmitAsync(&CloudDirectoryClient::DeleteFacet, __VA_ARGS__)
#define DeleteFacetCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::DeleteFacet, REQUEST)

#define DeleteObjectAsync(...)  SubmitAsync(&CloudDirectoryClient::DeleteObject, __VA_ARGS__)
#define DeleteObjectCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::DeleteObject, REQUEST)

#define DeleteSchemaAsync(...)  SubmitAsync(&CloudDirectoryClient::DeleteSchema, __VA_ARGS__)
#define DeleteSchemaCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::DeleteSchema, REQUEST)

#define DeleteTypedLinkFacetAsync(...)  SubmitAsync(&CloudDirectoryClient::DeleteTypedLinkFacet, __VA_ARGS__)
#define DeleteTypedLinkFacetCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::DeleteTypedLinkFacet, REQUEST)

#define DetachFromIndexAsync(...)  SubmitAsync(&CloudDirectoryClient::DetachFromIndex, __VA_ARGS__)
#define DetachFromIndexCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::DetachFromIndex, REQUEST)

#define DetachObjectAsync(...)  SubmitAsync(&CloudDirectoryClient::DetachObject, __VA_ARGS__)
#define DetachObjectCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::DetachObject, REQUEST)

#define DetachPolicyAsync(...)  SubmitAsync(&CloudDirectoryClient::DetachPolicy, __VA_ARGS__)
#define DetachPolicyCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::DetachPolicy, REQUEST)

#define DetachTypedLinkAsync(...)  SubmitAsync(&CloudDirectoryClient::DetachTypedLink, __VA_ARGS__)
#define DetachTypedLinkCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::DetachTypedLink, REQUEST)

#define DisableDirectoryAsync(...)  SubmitAsync(&CloudDirectoryClient::DisableDirectory, __VA_ARGS__)
#define DisableDirectoryCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::DisableDirectory, REQUEST)

#define EnableDirectoryAsync(...)  SubmitAsync(&CloudDirectoryClient::EnableDirectory, __VA_ARGS__)
#define EnableDirectoryCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::EnableDirectory, REQUEST)

#define GetAppliedSchemaVersionAsync(...)  SubmitAsync(&CloudDirectoryClient::GetAppliedSchemaVersion, __VA_ARGS__)
#define GetAppliedSchemaVersionCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::GetAppliedSchemaVersion, REQUEST)

#define GetDirectoryAsync(...)  SubmitAsync(&CloudDirectoryClient::GetDirectory, __VA_ARGS__)
#define GetDirectoryCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::GetDirectory, REQUEST)

#define GetFacetAsync(...)  SubmitAsync(&CloudDirectoryClient::GetFacet, __VA_ARGS__)
#define GetFacetCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::GetFacet, REQUEST)

#define GetLinkAttributesAsync(...)  SubmitAsync(&CloudDirectoryClient::GetLinkAttributes, __VA_ARGS__)
#define GetLinkAttributesCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::GetLinkAttributes, REQUEST)

#define GetObjectAttributesAsync(...)  SubmitAsync(&CloudDirectoryClient::GetObjectAttributes, __VA_ARGS__)
#define GetObjectAttributesCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::GetObjectAttributes, REQUEST)

#define GetObjectInformationAsync(...)  SubmitAsync(&CloudDirectoryClient::GetObjectInformation, __VA_ARGS__)
#define GetObjectInformationCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::GetObjectInformation, REQUEST)

#define GetSchemaAsJsonAsync(...)  SubmitAsync(&CloudDirectoryClient::GetSchemaAsJson, __VA_ARGS__)
#define GetSchemaAsJsonCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::GetSchemaAsJson, REQUEST)

#define GetTypedLinkFacetInformationAsync(...)  SubmitAsync(&CloudDirectoryClient::GetTypedLinkFacetInformation, __VA_ARGS__)
#define GetTypedLinkFacetInformationCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::GetTypedLinkFacetInformation, REQUEST)

#define ListAppliedSchemaArnsAsync(...)  SubmitAsync(&CloudDirectoryClient::ListAppliedSchemaArns, __VA_ARGS__)
#define ListAppliedSchemaArnsCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListAppliedSchemaArns, REQUEST)

#define ListAttachedIndicesAsync(...)  SubmitAsync(&CloudDirectoryClient::ListAttachedIndices, __VA_ARGS__)
#define ListAttachedIndicesCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListAttachedIndices, REQUEST)

#define ListDevelopmentSchemaArnsAsync(...)  SubmitAsync(&CloudDirectoryClient::ListDevelopmentSchemaArns, __VA_ARGS__)
#define ListDevelopmentSchemaArnsCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListDevelopmentSchemaArns, REQUEST)

#define ListDirectoriesAsync(...)  SubmitAsync(&CloudDirectoryClient::ListDirectories, __VA_ARGS__)
#define ListDirectoriesCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListDirectories, REQUEST)

#define ListFacetAttributesAsync(...)  SubmitAsync(&CloudDirectoryClient::ListFacetAttributes, __VA_ARGS__)
#define ListFacetAttributesCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListFacetAttributes, REQUEST)

#define ListFacetNamesAsync(...)  SubmitAsync(&CloudDirectoryClient::ListFacetNames, __VA_ARGS__)
#define ListFacetNamesCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListFacetNames, REQUEST)

#define ListIncomingTypedLinksAsync(...)  SubmitAsync(&CloudDirectoryClient::ListIncomingTypedLinks, __VA_ARGS__)
#define ListIncomingTypedLinksCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListIncomingTypedLinks, REQUEST)

#define ListIndexAsync(...)  SubmitAsync(&CloudDirectoryClient::ListIndex, __VA_ARGS__)
#define ListIndexCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListIndex, REQUEST)

#define ListManagedSchemaArnsAsync(...)  SubmitAsync(&CloudDirectoryClient::ListManagedSchemaArns, __VA_ARGS__)
#define ListManagedSchemaArnsCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListManagedSchemaArns, REQUEST)

#define ListObjectAttributesAsync(...)  SubmitAsync(&CloudDirectoryClient::ListObjectAttributes, __VA_ARGS__)
#define ListObjectAttributesCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListObjectAttributes, REQUEST)

#define ListObjectChildrenAsync(...)  SubmitAsync(&CloudDirectoryClient::ListObjectChildren, __VA_ARGS__)
#define ListObjectChildrenCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListObjectChildren, REQUEST)

#define ListObjectParentPathsAsync(...)  SubmitAsync(&CloudDirectoryClient::ListObjectParentPaths, __VA_ARGS__)
#define ListObjectParentPathsCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListObjectParentPaths, REQUEST)

#define ListObjectParentsAsync(...)  SubmitAsync(&CloudDirectoryClient::ListObjectParents, __VA_ARGS__)
#define ListObjectParentsCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListObjectParents, REQUEST)

#define ListObjectPoliciesAsync(...)  SubmitAsync(&CloudDirectoryClient::ListObjectPolicies, __VA_ARGS__)
#define ListObjectPoliciesCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListObjectPolicies, REQUEST)

#define ListOutgoingTypedLinksAsync(...)  SubmitAsync(&CloudDirectoryClient::ListOutgoingTypedLinks, __VA_ARGS__)
#define ListOutgoingTypedLinksCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListOutgoingTypedLinks, REQUEST)

#define ListPolicyAttachmentsAsync(...)  SubmitAsync(&CloudDirectoryClient::ListPolicyAttachments, __VA_ARGS__)
#define ListPolicyAttachmentsCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListPolicyAttachments, REQUEST)

#define ListPublishedSchemaArnsAsync(...)  SubmitAsync(&CloudDirectoryClient::ListPublishedSchemaArns, __VA_ARGS__)
#define ListPublishedSchemaArnsCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListPublishedSchemaArns, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CloudDirectoryClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListTagsForResource, REQUEST)

#define ListTypedLinkFacetAttributesAsync(...)  SubmitAsync(&CloudDirectoryClient::ListTypedLinkFacetAttributes, __VA_ARGS__)
#define ListTypedLinkFacetAttributesCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListTypedLinkFacetAttributes, REQUEST)

#define ListTypedLinkFacetNamesAsync(...)  SubmitAsync(&CloudDirectoryClient::ListTypedLinkFacetNames, __VA_ARGS__)
#define ListTypedLinkFacetNamesCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::ListTypedLinkFacetNames, REQUEST)

#define LookupPolicyAsync(...)  SubmitAsync(&CloudDirectoryClient::LookupPolicy, __VA_ARGS__)
#define LookupPolicyCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::LookupPolicy, REQUEST)

#define PublishSchemaAsync(...)  SubmitAsync(&CloudDirectoryClient::PublishSchema, __VA_ARGS__)
#define PublishSchemaCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::PublishSchema, REQUEST)

#define PutSchemaFromJsonAsync(...)  SubmitAsync(&CloudDirectoryClient::PutSchemaFromJson, __VA_ARGS__)
#define PutSchemaFromJsonCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::PutSchemaFromJson, REQUEST)

#define RemoveFacetFromObjectAsync(...)  SubmitAsync(&CloudDirectoryClient::RemoveFacetFromObject, __VA_ARGS__)
#define RemoveFacetFromObjectCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::RemoveFacetFromObject, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CloudDirectoryClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CloudDirectoryClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::UntagResource, REQUEST)

#define UpdateFacetAsync(...)  SubmitAsync(&CloudDirectoryClient::UpdateFacet, __VA_ARGS__)
#define UpdateFacetCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::UpdateFacet, REQUEST)

#define UpdateLinkAttributesAsync(...)  SubmitAsync(&CloudDirectoryClient::UpdateLinkAttributes, __VA_ARGS__)
#define UpdateLinkAttributesCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::UpdateLinkAttributes, REQUEST)

#define UpdateObjectAttributesAsync(...)  SubmitAsync(&CloudDirectoryClient::UpdateObjectAttributes, __VA_ARGS__)
#define UpdateObjectAttributesCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::UpdateObjectAttributes, REQUEST)

#define UpdateSchemaAsync(...)  SubmitAsync(&CloudDirectoryClient::UpdateSchema, __VA_ARGS__)
#define UpdateSchemaCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::UpdateSchema, REQUEST)

#define UpdateTypedLinkFacetAsync(...)  SubmitAsync(&CloudDirectoryClient::UpdateTypedLinkFacet, __VA_ARGS__)
#define UpdateTypedLinkFacetCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::UpdateTypedLinkFacet, REQUEST)

#define UpgradeAppliedSchemaAsync(...)  SubmitAsync(&CloudDirectoryClient::UpgradeAppliedSchema, __VA_ARGS__)
#define UpgradeAppliedSchemaCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::UpgradeAppliedSchema, REQUEST)

#define UpgradePublishedSchemaAsync(...)  SubmitAsync(&CloudDirectoryClient::UpgradePublishedSchema, __VA_ARGS__)
#define UpgradePublishedSchemaCallable(REQUEST)  SubmitCallable(&CloudDirectoryClient::UpgradePublishedSchema, REQUEST)

