/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/BatchListObjectAttributes.h>
#include <aws/clouddirectory/model/BatchListObjectChildren.h>
#include <aws/clouddirectory/model/BatchListAttachedIndices.h>
#include <aws/clouddirectory/model/BatchListObjectParentPaths.h>
#include <aws/clouddirectory/model/BatchGetObjectInformation.h>
#include <aws/clouddirectory/model/BatchGetObjectAttributes.h>
#include <aws/clouddirectory/model/BatchListObjectParents.h>
#include <aws/clouddirectory/model/BatchListObjectPolicies.h>
#include <aws/clouddirectory/model/BatchListPolicyAttachments.h>
#include <aws/clouddirectory/model/BatchLookupPolicy.h>
#include <aws/clouddirectory/model/BatchListIndex.h>
#include <aws/clouddirectory/model/BatchListOutgoingTypedLinks.h>
#include <aws/clouddirectory/model/BatchListIncomingTypedLinks.h>
#include <aws/clouddirectory/model/BatchGetLinkAttributes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents the output of a <code>BatchRead</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchReadOperation">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchReadOperation
  {
  public:
    BatchReadOperation();
    BatchReadOperation(Aws::Utils::Json::JsonView jsonValue);
    BatchReadOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lists all attributes that are associated with an object.</p>
     */
    inline const BatchListObjectAttributes& GetListObjectAttributes() const{ return m_listObjectAttributes; }

    /**
     * <p>Lists all attributes that are associated with an object.</p>
     */
    inline bool ListObjectAttributesHasBeenSet() const { return m_listObjectAttributesHasBeenSet; }

    /**
     * <p>Lists all attributes that are associated with an object.</p>
     */
    inline void SetListObjectAttributes(const BatchListObjectAttributes& value) { m_listObjectAttributesHasBeenSet = true; m_listObjectAttributes = value; }

    /**
     * <p>Lists all attributes that are associated with an object.</p>
     */
    inline void SetListObjectAttributes(BatchListObjectAttributes&& value) { m_listObjectAttributesHasBeenSet = true; m_listObjectAttributes = std::move(value); }

    /**
     * <p>Lists all attributes that are associated with an object.</p>
     */
    inline BatchReadOperation& WithListObjectAttributes(const BatchListObjectAttributes& value) { SetListObjectAttributes(value); return *this;}

    /**
     * <p>Lists all attributes that are associated with an object.</p>
     */
    inline BatchReadOperation& WithListObjectAttributes(BatchListObjectAttributes&& value) { SetListObjectAttributes(std::move(value)); return *this;}


    /**
     * <p>Returns a paginated list of child objects that are associated with a given
     * object.</p>
     */
    inline const BatchListObjectChildren& GetListObjectChildren() const{ return m_listObjectChildren; }

    /**
     * <p>Returns a paginated list of child objects that are associated with a given
     * object.</p>
     */
    inline bool ListObjectChildrenHasBeenSet() const { return m_listObjectChildrenHasBeenSet; }

    /**
     * <p>Returns a paginated list of child objects that are associated with a given
     * object.</p>
     */
    inline void SetListObjectChildren(const BatchListObjectChildren& value) { m_listObjectChildrenHasBeenSet = true; m_listObjectChildren = value; }

    /**
     * <p>Returns a paginated list of child objects that are associated with a given
     * object.</p>
     */
    inline void SetListObjectChildren(BatchListObjectChildren&& value) { m_listObjectChildrenHasBeenSet = true; m_listObjectChildren = std::move(value); }

    /**
     * <p>Returns a paginated list of child objects that are associated with a given
     * object.</p>
     */
    inline BatchReadOperation& WithListObjectChildren(const BatchListObjectChildren& value) { SetListObjectChildren(value); return *this;}

    /**
     * <p>Returns a paginated list of child objects that are associated with a given
     * object.</p>
     */
    inline BatchReadOperation& WithListObjectChildren(BatchListObjectChildren&& value) { SetListObjectChildren(std::move(value)); return *this;}


    /**
     * <p>Lists indices attached to an object.</p>
     */
    inline const BatchListAttachedIndices& GetListAttachedIndices() const{ return m_listAttachedIndices; }

    /**
     * <p>Lists indices attached to an object.</p>
     */
    inline bool ListAttachedIndicesHasBeenSet() const { return m_listAttachedIndicesHasBeenSet; }

    /**
     * <p>Lists indices attached to an object.</p>
     */
    inline void SetListAttachedIndices(const BatchListAttachedIndices& value) { m_listAttachedIndicesHasBeenSet = true; m_listAttachedIndices = value; }

    /**
     * <p>Lists indices attached to an object.</p>
     */
    inline void SetListAttachedIndices(BatchListAttachedIndices&& value) { m_listAttachedIndicesHasBeenSet = true; m_listAttachedIndices = std::move(value); }

    /**
     * <p>Lists indices attached to an object.</p>
     */
    inline BatchReadOperation& WithListAttachedIndices(const BatchListAttachedIndices& value) { SetListAttachedIndices(value); return *this;}

    /**
     * <p>Lists indices attached to an object.</p>
     */
    inline BatchReadOperation& WithListAttachedIndices(BatchListAttachedIndices&& value) { SetListAttachedIndices(std::move(value)); return *this;}


    /**
     * <p>Retrieves all available parent paths for any object type such as node, leaf
     * node, policy node, and index node objects. For more information about objects,
     * see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directorystructure.html">Directory
     * Structure</a>.</p>
     */
    inline const BatchListObjectParentPaths& GetListObjectParentPaths() const{ return m_listObjectParentPaths; }

    /**
     * <p>Retrieves all available parent paths for any object type such as node, leaf
     * node, policy node, and index node objects. For more information about objects,
     * see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directorystructure.html">Directory
     * Structure</a>.</p>
     */
    inline bool ListObjectParentPathsHasBeenSet() const { return m_listObjectParentPathsHasBeenSet; }

    /**
     * <p>Retrieves all available parent paths for any object type such as node, leaf
     * node, policy node, and index node objects. For more information about objects,
     * see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directorystructure.html">Directory
     * Structure</a>.</p>
     */
    inline void SetListObjectParentPaths(const BatchListObjectParentPaths& value) { m_listObjectParentPathsHasBeenSet = true; m_listObjectParentPaths = value; }

    /**
     * <p>Retrieves all available parent paths for any object type such as node, leaf
     * node, policy node, and index node objects. For more information about objects,
     * see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directorystructure.html">Directory
     * Structure</a>.</p>
     */
    inline void SetListObjectParentPaths(BatchListObjectParentPaths&& value) { m_listObjectParentPathsHasBeenSet = true; m_listObjectParentPaths = std::move(value); }

    /**
     * <p>Retrieves all available parent paths for any object type such as node, leaf
     * node, policy node, and index node objects. For more information about objects,
     * see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directorystructure.html">Directory
     * Structure</a>.</p>
     */
    inline BatchReadOperation& WithListObjectParentPaths(const BatchListObjectParentPaths& value) { SetListObjectParentPaths(value); return *this;}

    /**
     * <p>Retrieves all available parent paths for any object type such as node, leaf
     * node, policy node, and index node objects. For more information about objects,
     * see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directorystructure.html">Directory
     * Structure</a>.</p>
     */
    inline BatchReadOperation& WithListObjectParentPaths(BatchListObjectParentPaths&& value) { SetListObjectParentPaths(std::move(value)); return *this;}


    /**
     * <p>Retrieves metadata about an object.</p>
     */
    inline const BatchGetObjectInformation& GetGetObjectInformation() const{ return m_getObjectInformation; }

    /**
     * <p>Retrieves metadata about an object.</p>
     */
    inline bool GetObjectInformationHasBeenSet() const { return m_getObjectInformationHasBeenSet; }

    /**
     * <p>Retrieves metadata about an object.</p>
     */
    inline void SetGetObjectInformation(const BatchGetObjectInformation& value) { m_getObjectInformationHasBeenSet = true; m_getObjectInformation = value; }

    /**
     * <p>Retrieves metadata about an object.</p>
     */
    inline void SetGetObjectInformation(BatchGetObjectInformation&& value) { m_getObjectInformationHasBeenSet = true; m_getObjectInformation = std::move(value); }

    /**
     * <p>Retrieves metadata about an object.</p>
     */
    inline BatchReadOperation& WithGetObjectInformation(const BatchGetObjectInformation& value) { SetGetObjectInformation(value); return *this;}

    /**
     * <p>Retrieves metadata about an object.</p>
     */
    inline BatchReadOperation& WithGetObjectInformation(BatchGetObjectInformation&& value) { SetGetObjectInformation(std::move(value)); return *this;}


    /**
     * <p>Retrieves attributes within a facet that are associated with an object.</p>
     */
    inline const BatchGetObjectAttributes& GetGetObjectAttributes() const{ return m_getObjectAttributes; }

    /**
     * <p>Retrieves attributes within a facet that are associated with an object.</p>
     */
    inline bool GetObjectAttributesHasBeenSet() const { return m_getObjectAttributesHasBeenSet; }

    /**
     * <p>Retrieves attributes within a facet that are associated with an object.</p>
     */
    inline void SetGetObjectAttributes(const BatchGetObjectAttributes& value) { m_getObjectAttributesHasBeenSet = true; m_getObjectAttributes = value; }

    /**
     * <p>Retrieves attributes within a facet that are associated with an object.</p>
     */
    inline void SetGetObjectAttributes(BatchGetObjectAttributes&& value) { m_getObjectAttributesHasBeenSet = true; m_getObjectAttributes = std::move(value); }

    /**
     * <p>Retrieves attributes within a facet that are associated with an object.</p>
     */
    inline BatchReadOperation& WithGetObjectAttributes(const BatchGetObjectAttributes& value) { SetGetObjectAttributes(value); return *this;}

    /**
     * <p>Retrieves attributes within a facet that are associated with an object.</p>
     */
    inline BatchReadOperation& WithGetObjectAttributes(BatchGetObjectAttributes&& value) { SetGetObjectAttributes(std::move(value)); return *this;}


    
    inline const BatchListObjectParents& GetListObjectParents() const{ return m_listObjectParents; }

    
    inline bool ListObjectParentsHasBeenSet() const { return m_listObjectParentsHasBeenSet; }

    
    inline void SetListObjectParents(const BatchListObjectParents& value) { m_listObjectParentsHasBeenSet = true; m_listObjectParents = value; }

    
    inline void SetListObjectParents(BatchListObjectParents&& value) { m_listObjectParentsHasBeenSet = true; m_listObjectParents = std::move(value); }

    
    inline BatchReadOperation& WithListObjectParents(const BatchListObjectParents& value) { SetListObjectParents(value); return *this;}

    
    inline BatchReadOperation& WithListObjectParents(BatchListObjectParents&& value) { SetListObjectParents(std::move(value)); return *this;}


    /**
     * <p>Returns policies attached to an object in pagination fashion.</p>
     */
    inline const BatchListObjectPolicies& GetListObjectPolicies() const{ return m_listObjectPolicies; }

    /**
     * <p>Returns policies attached to an object in pagination fashion.</p>
     */
    inline bool ListObjectPoliciesHasBeenSet() const { return m_listObjectPoliciesHasBeenSet; }

    /**
     * <p>Returns policies attached to an object in pagination fashion.</p>
     */
    inline void SetListObjectPolicies(const BatchListObjectPolicies& value) { m_listObjectPoliciesHasBeenSet = true; m_listObjectPolicies = value; }

    /**
     * <p>Returns policies attached to an object in pagination fashion.</p>
     */
    inline void SetListObjectPolicies(BatchListObjectPolicies&& value) { m_listObjectPoliciesHasBeenSet = true; m_listObjectPolicies = std::move(value); }

    /**
     * <p>Returns policies attached to an object in pagination fashion.</p>
     */
    inline BatchReadOperation& WithListObjectPolicies(const BatchListObjectPolicies& value) { SetListObjectPolicies(value); return *this;}

    /**
     * <p>Returns policies attached to an object in pagination fashion.</p>
     */
    inline BatchReadOperation& WithListObjectPolicies(BatchListObjectPolicies&& value) { SetListObjectPolicies(std::move(value)); return *this;}


    /**
     * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
     * attached.</p>
     */
    inline const BatchListPolicyAttachments& GetListPolicyAttachments() const{ return m_listPolicyAttachments; }

    /**
     * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
     * attached.</p>
     */
    inline bool ListPolicyAttachmentsHasBeenSet() const { return m_listPolicyAttachmentsHasBeenSet; }

    /**
     * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
     * attached.</p>
     */
    inline void SetListPolicyAttachments(const BatchListPolicyAttachments& value) { m_listPolicyAttachmentsHasBeenSet = true; m_listPolicyAttachments = value; }

    /**
     * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
     * attached.</p>
     */
    inline void SetListPolicyAttachments(BatchListPolicyAttachments&& value) { m_listPolicyAttachmentsHasBeenSet = true; m_listPolicyAttachments = std::move(value); }

    /**
     * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
     * attached.</p>
     */
    inline BatchReadOperation& WithListPolicyAttachments(const BatchListPolicyAttachments& value) { SetListPolicyAttachments(value); return *this;}

    /**
     * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
     * attached.</p>
     */
    inline BatchReadOperation& WithListPolicyAttachments(BatchListPolicyAttachments&& value) { SetListPolicyAttachments(std::move(value)); return *this;}


    /**
     * <p>Lists all policies from the root of the <a>Directory</a> to the object
     * specified. If there are no policies present, an empty list is returned. If
     * policies are present, and if some objects don't have the policies attached, it
     * returns the <code>ObjectIdentifier</code> for such objects. If policies are
     * present, it returns <code>ObjectIdentifier</code>, <code>policyId</code>, and
     * <code>policyType</code>. Paths that don't lead to the root from the target
     * object are ignored. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline const BatchLookupPolicy& GetLookupPolicy() const{ return m_lookupPolicy; }

    /**
     * <p>Lists all policies from the root of the <a>Directory</a> to the object
     * specified. If there are no policies present, an empty list is returned. If
     * policies are present, and if some objects don't have the policies attached, it
     * returns the <code>ObjectIdentifier</code> for such objects. If policies are
     * present, it returns <code>ObjectIdentifier</code>, <code>policyId</code>, and
     * <code>policyType</code>. Paths that don't lead to the root from the target
     * object are ignored. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline bool LookupPolicyHasBeenSet() const { return m_lookupPolicyHasBeenSet; }

    /**
     * <p>Lists all policies from the root of the <a>Directory</a> to the object
     * specified. If there are no policies present, an empty list is returned. If
     * policies are present, and if some objects don't have the policies attached, it
     * returns the <code>ObjectIdentifier</code> for such objects. If policies are
     * present, it returns <code>ObjectIdentifier</code>, <code>policyId</code>, and
     * <code>policyType</code>. Paths that don't lead to the root from the target
     * object are ignored. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline void SetLookupPolicy(const BatchLookupPolicy& value) { m_lookupPolicyHasBeenSet = true; m_lookupPolicy = value; }

    /**
     * <p>Lists all policies from the root of the <a>Directory</a> to the object
     * specified. If there are no policies present, an empty list is returned. If
     * policies are present, and if some objects don't have the policies attached, it
     * returns the <code>ObjectIdentifier</code> for such objects. If policies are
     * present, it returns <code>ObjectIdentifier</code>, <code>policyId</code>, and
     * <code>policyType</code>. Paths that don't lead to the root from the target
     * object are ignored. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline void SetLookupPolicy(BatchLookupPolicy&& value) { m_lookupPolicyHasBeenSet = true; m_lookupPolicy = std::move(value); }

    /**
     * <p>Lists all policies from the root of the <a>Directory</a> to the object
     * specified. If there are no policies present, an empty list is returned. If
     * policies are present, and if some objects don't have the policies attached, it
     * returns the <code>ObjectIdentifier</code> for such objects. If policies are
     * present, it returns <code>ObjectIdentifier</code>, <code>policyId</code>, and
     * <code>policyType</code>. Paths that don't lead to the root from the target
     * object are ignored. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline BatchReadOperation& WithLookupPolicy(const BatchLookupPolicy& value) { SetLookupPolicy(value); return *this;}

    /**
     * <p>Lists all policies from the root of the <a>Directory</a> to the object
     * specified. If there are no policies present, an empty list is returned. If
     * policies are present, and if some objects don't have the policies attached, it
     * returns the <code>ObjectIdentifier</code> for such objects. If policies are
     * present, it returns <code>ObjectIdentifier</code>, <code>policyId</code>, and
     * <code>policyType</code>. Paths that don't lead to the root from the target
     * object are ignored. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline BatchReadOperation& WithLookupPolicy(BatchLookupPolicy&& value) { SetLookupPolicy(std::move(value)); return *this;}


    /**
     * <p>Lists objects attached to the specified index.</p>
     */
    inline const BatchListIndex& GetListIndex() const{ return m_listIndex; }

    /**
     * <p>Lists objects attached to the specified index.</p>
     */
    inline bool ListIndexHasBeenSet() const { return m_listIndexHasBeenSet; }

    /**
     * <p>Lists objects attached to the specified index.</p>
     */
    inline void SetListIndex(const BatchListIndex& value) { m_listIndexHasBeenSet = true; m_listIndex = value; }

    /**
     * <p>Lists objects attached to the specified index.</p>
     */
    inline void SetListIndex(BatchListIndex&& value) { m_listIndexHasBeenSet = true; m_listIndex = std::move(value); }

    /**
     * <p>Lists objects attached to the specified index.</p>
     */
    inline BatchReadOperation& WithListIndex(const BatchListIndex& value) { SetListIndex(value); return *this;}

    /**
     * <p>Lists objects attached to the specified index.</p>
     */
    inline BatchReadOperation& WithListIndex(BatchListIndex&& value) { SetListIndex(std::move(value)); return *this;}


    /**
     * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchListOutgoingTypedLinks& GetListOutgoingTypedLinks() const{ return m_listOutgoingTypedLinks; }

    /**
     * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline bool ListOutgoingTypedLinksHasBeenSet() const { return m_listOutgoingTypedLinksHasBeenSet; }

    /**
     * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline void SetListOutgoingTypedLinks(const BatchListOutgoingTypedLinks& value) { m_listOutgoingTypedLinksHasBeenSet = true; m_listOutgoingTypedLinks = value; }

    /**
     * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline void SetListOutgoingTypedLinks(BatchListOutgoingTypedLinks&& value) { m_listOutgoingTypedLinksHasBeenSet = true; m_listOutgoingTypedLinks = std::move(value); }

    /**
     * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline BatchReadOperation& WithListOutgoingTypedLinks(const BatchListOutgoingTypedLinks& value) { SetListOutgoingTypedLinks(value); return *this;}

    /**
     * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline BatchReadOperation& WithListOutgoingTypedLinks(BatchListOutgoingTypedLinks&& value) { SetListOutgoingTypedLinks(std::move(value)); return *this;}


    /**
     * <p>Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const BatchListIncomingTypedLinks& GetListIncomingTypedLinks() const{ return m_listIncomingTypedLinks; }

    /**
     * <p>Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline bool ListIncomingTypedLinksHasBeenSet() const { return m_listIncomingTypedLinksHasBeenSet; }

    /**
     * <p>Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline void SetListIncomingTypedLinks(const BatchListIncomingTypedLinks& value) { m_listIncomingTypedLinksHasBeenSet = true; m_listIncomingTypedLinks = value; }

    /**
     * <p>Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline void SetListIncomingTypedLinks(BatchListIncomingTypedLinks&& value) { m_listIncomingTypedLinksHasBeenSet = true; m_listIncomingTypedLinks = std::move(value); }

    /**
     * <p>Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline BatchReadOperation& WithListIncomingTypedLinks(const BatchListIncomingTypedLinks& value) { SetListIncomingTypedLinks(value); return *this;}

    /**
     * <p>Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a>
     * information for an object. It also supports filtering by typed link facet and
     * identity attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline BatchReadOperation& WithListIncomingTypedLinks(BatchListIncomingTypedLinks&& value) { SetListIncomingTypedLinks(std::move(value)); return *this;}


    /**
     * <p>Retrieves attributes that are associated with a typed link.</p>
     */
    inline const BatchGetLinkAttributes& GetGetLinkAttributes() const{ return m_getLinkAttributes; }

    /**
     * <p>Retrieves attributes that are associated with a typed link.</p>
     */
    inline bool GetLinkAttributesHasBeenSet() const { return m_getLinkAttributesHasBeenSet; }

    /**
     * <p>Retrieves attributes that are associated with a typed link.</p>
     */
    inline void SetGetLinkAttributes(const BatchGetLinkAttributes& value) { m_getLinkAttributesHasBeenSet = true; m_getLinkAttributes = value; }

    /**
     * <p>Retrieves attributes that are associated with a typed link.</p>
     */
    inline void SetGetLinkAttributes(BatchGetLinkAttributes&& value) { m_getLinkAttributesHasBeenSet = true; m_getLinkAttributes = std::move(value); }

    /**
     * <p>Retrieves attributes that are associated with a typed link.</p>
     */
    inline BatchReadOperation& WithGetLinkAttributes(const BatchGetLinkAttributes& value) { SetGetLinkAttributes(value); return *this;}

    /**
     * <p>Retrieves attributes that are associated with a typed link.</p>
     */
    inline BatchReadOperation& WithGetLinkAttributes(BatchGetLinkAttributes&& value) { SetGetLinkAttributes(std::move(value)); return *this;}

  private:

    BatchListObjectAttributes m_listObjectAttributes;
    bool m_listObjectAttributesHasBeenSet;

    BatchListObjectChildren m_listObjectChildren;
    bool m_listObjectChildrenHasBeenSet;

    BatchListAttachedIndices m_listAttachedIndices;
    bool m_listAttachedIndicesHasBeenSet;

    BatchListObjectParentPaths m_listObjectParentPaths;
    bool m_listObjectParentPathsHasBeenSet;

    BatchGetObjectInformation m_getObjectInformation;
    bool m_getObjectInformationHasBeenSet;

    BatchGetObjectAttributes m_getObjectAttributes;
    bool m_getObjectAttributesHasBeenSet;

    BatchListObjectParents m_listObjectParents;
    bool m_listObjectParentsHasBeenSet;

    BatchListObjectPolicies m_listObjectPolicies;
    bool m_listObjectPoliciesHasBeenSet;

    BatchListPolicyAttachments m_listPolicyAttachments;
    bool m_listPolicyAttachmentsHasBeenSet;

    BatchLookupPolicy m_lookupPolicy;
    bool m_lookupPolicyHasBeenSet;

    BatchListIndex m_listIndex;
    bool m_listIndexHasBeenSet;

    BatchListOutgoingTypedLinks m_listOutgoingTypedLinks;
    bool m_listOutgoingTypedLinksHasBeenSet;

    BatchListIncomingTypedLinks m_listIncomingTypedLinks;
    bool m_listIncomingTypedLinksHasBeenSet;

    BatchGetLinkAttributes m_getLinkAttributes;
    bool m_getLinkAttributesHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
